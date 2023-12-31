// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  Prefetch stage; an instruction fetch fifo to enable misaligned access.
//
// Author: Ateeb Tahir, DDRC, UET Lahore
// Date: 25.8.2023


`ifndef VERILATOR
`include "../../defines/pcore_interface_defs.svh"
`include "../../defines/mmu_defs.svh"
`include "../../defines/cache_defs.svh"
`else
`include "pcore_interface_defs.svh"
`include "mmu_defs.svh"
`include "cache_defs.svh"
`endif


module prefetch (

    input   logic                                   clk,
    input   logic                                   rst_n,

    input   wire    type_if2pref_s                  if2pref_i,
    output          type_pref2if_ctrl_s             pref2if_ctrl_o,
    output          type_pref2if_data_s             pref2if_data_o,

    input   wire    type_icache2if_s                icache2pref_i,
    output          type_if2icache_s                pref2icache_o,

    output          type_if2icache_s                pref2icache_o,     // Instruction cache memory request
    input   wire    type_icache2if_s                icache2pref_i,     // Instruction cache memory response

    output          type_if2mmu_s                   pref2mmu_o,        // Instruction memory request
    input   wire    type_mmu2if_s                   mmu2pref_i         // Instruction memory response

);


logic   [31:0]  fifo_fetch      [2]; //fifo direction from 0 to 1
logic   [31:0]  data_out;
logic   [31:0]  data_in;
logic   [31:0]  pc_fifofetch;

logic    [2:0]  pc_incr;

logic           pc_misalign;
logic           stall;
logic           fifo_halt;


assign pref2if_data_o.instr = data_out;
assign data_in   = icache2pref_i.ack ? icache2pref_i.instr : `INSTR_NOP;

//Icache-Prefetch Logic to update output signals for new instruction.
assign pref2mmu_o.i_vaddr = pc_fifofetch;
assign pref2mmu_o.i_req   = `IMEM_INST_REQ; 

assign pref2icache_o.addr = mmu2pref_i.i_paddr[`XLEN-1:0]; // pc_next; 
assign pref2icache_o.req  = mmu2pref_i.i_hit;              // `IMEM_INST_REQ;

assign pc_misalign  = pc_ff[1];
assign pc_fifofetch = if2pref_i.pc_ff + pc_incr;
assign stall        = pref2if_ctrl_o.fifo_empty[1];


always_comb begin
    case (`INSTR_NOP)
        fifo_fetch[1]:  pref2if_ctrl_o.fifo_empty[1] = 1'b1;
        fifo_fetch[0]:  pref2if_ctrl_o.fifo_empty[0] = 1'b1;
        default:        pref2if_ctrl_o.fifo_empty    = 2'b00;
    endcase
    if (rst_n || if2pref_i.clear) begin
        pc_incr = 32'd0;

    end
    else begin 
    
    if (& pref2if_ctrl_o.fifo_empty) begin 
        //TODO handling of the empty fifo and related signals.
        pc_incr = pc_misalign ? (~(32'd2 +32'b1)) : 32'd0;
    end

    else if (if2pref_i.instr_req && ~(stall)) begin
        if (pc_misalign) begin
            pc_incr = 32'd6;
           
        end else begin
            pc_incr = 32'd4;
            
        end
    end

    end
end



// Prefetch FIFO Logic
always_ff @ (posedge clk, negedge rst_n) begin

    //PC realignment for the icache access
    pc_fifofetch = if2pref_i.pc_ff + incr;

    if (rst_n || if2pref_i.clear) begin
        fifo_fetch[1] <= `INSTR_NOP;
        fifo_fetch[0] <= `INSTR_NOP;
        pref2if_ctrl_o.ack = 1'b0;
        

    end else if (if2pref_i.instr_req && ~(stall)) begin
        if (pc_misalign) begin
            
            data_out <= {fifo_fetch[0][15:0], fifo_fetch[1][31:16]}
            fifo_fetch[1] <= fifo_fetch[0];
            fifo_fetch[0] <= data_in;
            pref2if_ctrl_o.ack = 1'b1;

        end else begin
          
            data_out <= fifo_fetch[1];
            fifo_fetch[1] <= fifo_fetch[0];
            fifo_fetch[0] <= data_in;
            pref2if_ctrl_o.ack = 1'b1;
        end
    end
    pref2if_ctrl_o.ack = 1'b0;
end


endmodule : prefetch