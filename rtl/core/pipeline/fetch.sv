// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: The fetch unit responsible for PC generation.
//
// Author: Muhammad Tahir, UET Lahore
// Date: 11.8.2022


`ifndef VERILATOR
`include "../../defines/mmu_defs.svh"
`include "../../defines/cache_defs.svh"
`include "../../defines/c_ext_defs.svh" //edit
`else
`include "mmu_defs.svh"
`include "cache_defs.svh"
`include "c_ext_defs.svh" //edit
`endif

module fetch (

    input   logic                                   rst_n,           // reset
    input   logic                                   clk,             // clock


////////////////////////////////
////
   // IF <---> Prefetch interface
    output type_if2pref_ctrl_s                      if2pref_o,
    input wire type_pref2if_ctrl_s                  pref2if_ctrl_i,
    input wire type_pref2if_data_s                  pref2if_data_i,


   // IF <---> ICACHE MEM interface
    output type_if2icache_s                         if2icache_o,     // Instruction cache memory request
    input wire type_icache2if_s                     icache2if_i,     // Instruction cache memory response

   // IF <---> MMU interface
    output type_if2mmu_s                            if2mmu_o,        // Instruction memory request
    input wire type_mmu2if_s                        mmu2if_i,        // Instruction memory response

    // IF <---> ID interface
    output type_if2id_data_s                        if2id_data_o,
    output type_if2id_ctrl_s                        if2id_ctrl_o, 

    // EXE <---> Fetch feedback interface
    input wire type_exe2if_fb_s                     exe2if_fb_i,

    // CSR <---> Fetch feedback interface
    input wire type_csr2if_fb_s                     csr2if_fb_i,
    
    // Forward <---> Fetch interface
    input wire type_fwd2if_s                        fwd2if_i,
    output logic                                    if2fwd_stall_o,

    // IF <---> C Extension
    input wire type_cext2if_s                       cext2if_i,
    output type_if2cext_s                           if2cext_o
); 


// Local siganls       
type_icache2if_s                     icache2if;
type_if2mmu_s                        if2mmu;
type_mmu2if_s                        mmu2if;

type_if2id_data_s                    if2id_data;
type_if2id_ctrl_s                    if2id_ctrl;

type_exe2if_fb_s                     exe2if_fb;
type_csr2if_fb_s                     csr2if_fb;

type_fwd2if_s                        fwd2if;

// Exception related signals
type_exc_code_e                      exc_code_next, exc_code_ff;
logic                                exc_req_next, exc_req_ff;

// Imem address generation
logic [`XLEN-1:0]                    pc_ff;              // Current value of program counter (PC)
logic [`XLEN-1:0]                    pc_next;            // Updated value of PC
logic       [2:0]                    incr;
logic                                if_stall;
logic                                pc_misaligned;


assign icache2if = icache2if_i;
assign mmu2if    = mmu2if_i;

assign exe2if_fb = exe2if_fb_i;
assign csr2if_fb = csr2if_fb_i;
assign fwd2if    = fwd2if_i;

assign if2cext_o.icache_valid = icache2if.ack;
assign pc_misaligned = 0;

// Stall signal for IF stage
assign if_stall = fwd2if.if_stall | (~icache2if.ack) | cext2if_i.stall;

// PC update state machine
always_ff @(posedge clk) begin
    if (~rst_n) begin
        pc_ff <= `PC_RESET;
    end else begin
        pc_ff <= pc_next;
    end
end

always_comb begin

    case (cext2if_i.is_comp)
        1'b0:       incr = 32'd4;
        1'b1:       incr = 32'd2;
        default:    incr = 32'd4;
    endcase
    if2cext_o.pc_ff = pc_ff;
    pc_next = (cext2if_i.pc_aligned + incr);

    case (1'b1)
        fwd2if.csr_new_pc_req : begin
            pc_next = csr2if_fb.pc_new;
        end
        fwd2if.wfi_req        : begin
            pc_next = csr2if_fb.pc_new;  
        end
        fwd2if.exe_new_pc_req : begin
            pc_next = exe2if_fb.pc_new;  
        end
        if_stall              : begin  
            pc_next = pc_ff;
        end
        default               : begin       end
    endcase
end

// Instruction fetch related exceptions including address misaligned, instruction page fault 
// as well as instruction access fault
always_ff @(negedge rst_n, posedge clk) begin
    if (~rst_n) begin
        exc_req_ff  <= '0; 
        exc_code_ff <= EXC_CODE_NO_EXCEPTION;
    end else begin
        exc_req_ff  <= exc_req_next;
        exc_code_ff <= exc_code_next;
    end
end

always_comb begin
exc_req_next   = exc_req_ff;
exc_code_next  = exc_code_ff;
   
    if (fwd2if.csr_new_pc_req | fwd2if.exe_new_pc_req | fwd2if.wfi_req | (~fwd2if.if_stall & exc_req_ff)) begin    
        exc_req_next  = 1'b0;
        exc_code_next = EXC_CODE_NO_EXCEPTION;
    end else if (pc_misaligned) begin
        exc_req_next  = 1'b1;
        exc_code_next = EXC_CODE_INSTR_MISALIGN; 
    end else if (mmu2if.i_page_fault & ~exc_req_ff) begin
        exc_req_next   = 1'b1;
        exc_code_next  = EXC_CODE_INST_PAGE_FAULT; 
    end 

    // TODO : Deal with instruction access fault as well (EXC_CODE_INSTR_ACCESS_FAULT) for that 
    // purpose need a separate signal from MMU
end

assign if2icache_o.req_kill     = fwd2if.csr_new_pc_req | fwd2if.exe_new_pc_req;
assign if2icache_o.icache_flush = csr2if_fb.icache_flush;   

// Update the outputs to C-extension module
assign if2cext_o.instr_un       = pref2if_ctrl_i.ack ? pref2if.instr : `INSTR_NOP;
assign if2id_data.instr         = cext2if_i.instr;


assign if2id_data.pc            = pc_ff;
assign if2id_data.pc_next       = pc_next;
assign if2id_data.instr_flushed = 1'b0;

assign if2id_data.exc_code      = exc_code_next;
assign if2id_ctrl.exc_req       = exc_req_next;

// Generate stall request to forward_stall module
assign if2fwd_stall_o           = if2mmu.i_req & ~pref2if.ack;

assign if2id_data_o             = if2id_data;
assign if2id_ctrl_o             = if2id_ctrl;

assign if2mmu_o                 = if2mmu;

endmodule : fetch


