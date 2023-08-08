// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpcore_tb.h for the primary calling header

#include "verilated.h"

#include "Vpcore_tb__Syms.h"
#include "Vpcore_tb___024root.h"

VL_ATTR_COLD void Vpcore_tb___024root___stl_sequent__TOP__0(Vpcore_tb___024root* vlSelf);

VL_ATTR_COLD void Vpcore_tb___024root___eval_stl(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vpcore_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpcore_tb___024root___dump_triggers__act(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or negedge reset)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge pcore_tb.dut.clint_module.timer_clk_ff or negedge reset)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge clk or posedge reset)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(edge pcore_tb.dut.spi_top_module.spi_controller_module.spi_clk or negedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpcore_tb___024root___dump_triggers__nba(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or negedge reset)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge pcore_tb.dut.clint_module.timer_clk_ff or negedge reset)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge clk or posedge reset)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(edge pcore_tb.dut.spi_top_module.spi_controller_module.spi_clk or negedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpcore_tb___024root___ctor_var_reset(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->pcore_tb__DOT__irq_ext = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__irq_soft = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__uart_rx = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__spi_mosi = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__spi_miso = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->pcore_tb__DOT__firmware);
    VL_RAND_RESET_W(1024, vlSelf->pcore_tb__DOT__max_cycles);
    VL_RAND_RESET_W(1024, vlSelf->pcore_tb__DOT__main_time);
    VL_RAND_RESET_W(1024, vlSelf->pcore_tb__DOT__signature_file);
    vlSelf->pcore_tb__DOT__write_sig = 0;
    vlSelf->pcore_tb__DOT__dut__DOT__debug_port_i = VL_RAND_RESET_Q(38);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_rxd_i = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT____Vcellinp__plic_top_module__irq_src_i = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(101, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next = VL_RAND_RESET_Q(38);
    VL_RAND_RESET_W(197, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next = VL_RAND_RESET_I(21);
    VL_RAND_RESET_W(96, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next);
    VL_RAND_RESET_W(67, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if);
    VL_RAND_RESET_W(65, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext);
    VL_RAND_RESET_W(113, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(101, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_next = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__mul2wrb_next = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(101, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(197, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff = VL_RAND_RESET_Q(38);
    VL_RAND_RESET_W(96, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff = VL_RAND_RESET_I(21);
    VL_RAND_RESET_W(113, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(101, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr2wrb_data_pipe_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__mul2wrb_pipe_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_flush_i = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_stall_i = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_ff = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__incr = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_misaligned = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgExtracted_h46a986c8__0 = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__br_taken_i = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__pc_misalign = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__pc_out = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__stall_pc = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__next_comp16 = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__upper_16 = VL_RAND_RESET_I(16);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__conc_32_misallign = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__is_missaligned = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__next_misaligned = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_Li = VL_RAND_RESET_I(12);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_jump = VL_RAND_RESET_I(20);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst = VL_RAND_RESET_I(16);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_imm_branch = VL_RAND_RESET_I(12);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__inst_r_type = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__inst_r_comp_type = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__inst_nop = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__load_opcode = VL_RAND_RESET_I(7);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__store_opcode = VL_RAND_RESET_I(7);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__R_type_opcode = VL_RAND_RESET_I(7);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__I_type_opcode = VL_RAND_RESET_I(7);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__Jal_opcode = VL_RAND_RESET_I(7);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__B_type_opcode = VL_RAND_RESET_I(7);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__Jalr_opcode = VL_RAND_RESET_I(7);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__LUI_opcode = VL_RAND_RESET_I(7);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__AUIPC_opcode = VL_RAND_RESET_I(7);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__instr_opcode = VL_RAND_RESET_I(5);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h68dbea3a__0 = 0;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h8bdb6079__0 = 0;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h46266a8e__0 = 0;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl = VL_RAND_RESET_Q(38);
    VL_RAND_RESET_W(197, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl = VL_RAND_RESET_I(9);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_overflow = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h2edbfac7__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(101, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(68, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(96, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl = VL_RAND_RESET_I(7);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword = VL_RAND_RESET_I(16);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__ld_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__st_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dcache_flush_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_exc_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_code = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_code = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_exc_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe_stall_flush = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scause_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scause_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sip_mask = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sstatus_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sie_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sip_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__trap_priv_mode = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_delegated_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr = VL_RAND_RESET_Q(37);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_new_pc = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_irq_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__timer_irq_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq0_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq1_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_accept_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ms_mode_ecall_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_pc_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sret_pc_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__i_pf_exc_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__lsu_pf_exc_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sret_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sfence_vma_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__en_vaddr = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_inc = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_inc = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_inc = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_inc = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ebreak = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ecall = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__satp_mode = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_vaddr_iflush_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__icache_flush_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_low_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_low_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_high_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_high_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__seip_irq_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__stip_irq_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ssip_irq_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb2id_fb = VL_RAND_RESET_Q(38);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_csr_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__mul_stall_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__mul_stall_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_stall_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop = VL_RAND_RESET_I(9);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgExtracted_h50a45c3b__0 = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0 = 0;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h41bfb133__0 = 0;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h140467bf__0 = 0;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_hb3ea78f5__0 = 0;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_next = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_sign_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_sign_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_sign_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_sign_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_result_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult = VL_RAND_RESET_Q(64);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult_ss = VL_RAND_RESET_Q(64);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult_su = VL_RAND_RESET_Q(64);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult_su_int = VL_RAND_RESET_Q(64);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__div = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__rem = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT____VdfgExtracted_hcd8ed81d__0 = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__busy_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__done_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__opr2_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_ff = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_next = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__rem_ff = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT____Vconcswap_1_h0df038ea__0 = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT____Vconcswap_1_h046977cd__0 = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_data_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_addr_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_result = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_reserve_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu = VL_RAND_RESET_Q(37);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if = VL_RAND_RESET_Q(36);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ld_page_fault = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__st_page_fault = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__i_page_fault = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT____VdfgTmp_h1ec82566__0 = 0;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu = VL_RAND_RESET_Q(34);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(216, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff);
    VL_RAND_RESET_W(216, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____Vlvbound_hc317f493__0 = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____Vlvbound_hfd82cb66__0 = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____Vlvbound_hd8a42b58__0 = VL_RAND_RESET_I(10);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____Vlvbound_hd92c8ecc__0 = VL_RAND_RESET_I(10);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____Vlvbound_hfc4f707f__0 = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu = VL_RAND_RESET_Q(34);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(864, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff);
    VL_RAND_RESET_W(864, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT____Vlvbound_hfff67bcb__0 = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT____Vlvbound_h1f4435cb__0 = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT____Vlvbound_he1fe55da__0 = VL_RAND_RESET_I(10);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT____Vlvbound_he24a8595__0 = VL_RAND_RESET_I(10);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT____Vlvbound_h1e84952c__0 = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu = VL_RAND_RESET_Q(36);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_valid_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__itlb_update = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__dtlb_update = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__itlb_miss = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__dtlb_miss = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__gmap_bit_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__gmap_bit_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_next = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_ff = VL_RAND_RESET_Q(34);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_next = VL_RAND_RESET_Q(34);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_hf175b14a__0 = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_hb35f4e03__0 = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_h1d20b23b__0 = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_h1148e73c__0 = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_h9d036853__0 = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgTmp_hd5ca5221__0 = 0;
    VL_RAND_RESET_W(70, vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri);
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dmem_sel = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_sel = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__clint_sel = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__plic_sel = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__bmem_sel = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_ns_sel = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__spi_sel = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_rd_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_wr_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_r_data = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_valid_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_valid_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__rx_empty = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rx_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rx_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_tx_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_tx_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_txctrl_ff = VL_RAND_RESET_I(20);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_txctrl_next = VL_RAND_RESET_I(20);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rxctrl_ff = VL_RAND_RESET_I(20);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rxctrl_next = VL_RAND_RESET_I(20);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_int_mask_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_int_mask_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_reg_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__baud_reg_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__txctrl_reg_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__rxctrl_reg_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__int_mask_reg_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_ff = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_next = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__shifter_ff = VL_RAND_RESET_I(9);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__shifter_next = VL_RAND_RESET_I(9);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__tx_pin = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_ff = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_ff = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_next = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_mid_point = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__rx_pin_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__frame_err_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__frame_err_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_rd_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_wr_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_valid_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_valid_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_rx_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_rx_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_tx_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_tx_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_baud_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_baud_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lctrl_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lctrl_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_ie_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_ie_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_scratch_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_scratch_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__fifoctrl_reg_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_reg_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__ie_reg_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__lctrl_reg_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__scratch_reg_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_r_data = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_ff = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_next = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__shifter_ff = VL_RAND_RESET_I(9);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__shifter_next = VL_RAND_RESET_I(9);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__tx_pin = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_ff = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_ff = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_next = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_mid_point = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__rx_pin_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__frame_err_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__frame_err_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_data = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__w_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff = VL_RAND_RESET_Q(64);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_next = VL_RAND_RESET_Q(64);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff = VL_RAND_RESET_Q(64);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_next = VL_RAND_RESET_Q(64);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_lo_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_hi_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_lo_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_hi_wr_flag = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_overflow_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_select_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2csr = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_prescaler_ff = VL_RAND_RESET_I(7);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_prescaler_next = VL_RAND_RESET_I(7);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_pending = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_active = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_src_ff = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff = VL_RAND_RESET_I(6);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next = VL_RAND_RESET_I(6);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff = VL_RAND_RESET_I(6);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next = VL_RAND_RESET_I(6);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_next = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h88a7fad0__0 = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h88a7fad0__1 = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h99f01eb0__0 = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h99f01eb0__1 = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__prio_th = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_ff = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__prio_th = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_next = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_ff = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache2mem = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(129, vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mmu = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2dbus = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(70, vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2lsummu = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(129, vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache);
    VL_RAND_RESET_W(162, vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_ff = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_ff = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(162, vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT____Vcellinp__wb_dcache_top_module__dmem_sel_i = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_ff = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_next = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_ff = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_next = VL_RAND_RESET_Q(33);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_i_sel = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_d_sel = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 406; ++__Vi0) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_module__DOT__bmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__cache_hit = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__cache_rw = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2mem_req_o = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2if_ack_o = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellinp__icache_controller_module__if2icache_req_kill_i = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_ff = 0;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_next = 0;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_miss = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT____VdfgTmp_h920914d9__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_RAND_RESET_W(150, vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache[__Vi0]);
    }
    VL_RAND_RESET_W(150, vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf);
    VL_RAND_RESET_W(150, vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache2if_data_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__cache_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_next = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_next = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_ff = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2lsummu_ack = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_hit = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_miss = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_wr = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wrb_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wr = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_line_wr = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_line_clean = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[__Vi0] = VL_RAND_RESET_I(26);
    }
    VL_ZERO_RESET_W(128, vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_line_write);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read = VL_RAND_RESET_I(26);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_read = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__dcache2lsummu_data_ff = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(129, vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache);
    for (int __Vi0 = 0; __Vi0 < 33554432; ++__Vi0) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_default = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_id = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_busy = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_mosi_fst_transmit = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_mosi_en = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_miso_en = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_read = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_write = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_data = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_data = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_read = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_write = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__c2t_delay = VL_RAND_RESET_I(9);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__t2c_delay = VL_RAND_RESET_I(9);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_intercs = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_interfr = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt = VL_RAND_RESET_I(5);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt = VL_RAND_RESET_I(12);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__max_data_count = VL_RAND_RESET_I(5);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_slave_sel = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_shift_data = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count = VL_RAND_RESET_I(4);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__reg_tx_data = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_full = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rd_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_wr_req = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_r_data = VL_RAND_RESET_I(32);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_next = VL_RAND_RESET_I(12);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff = VL_RAND_RESET_I(12);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_cs_id_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_cs_default_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_cs_mode_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_next = VL_RAND_RESET_I(16);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff = VL_RAND_RESET_I(16);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_next = VL_RAND_RESET_I(16);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff = VL_RAND_RESET_I(16);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_data_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_data_next = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_data_ff = VL_RAND_RESET_I(8);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_next = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_next = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff = VL_RAND_RESET_I(3);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_next = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff = VL_RAND_RESET_I(2);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_sdiv = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ckmode = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csid = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csdef = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csmode = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del0 = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del1 = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_fmt = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txdata = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txmark = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_rxmark = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ie = VL_RAND_RESET_I(1);
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff = VL_RAND_RESET_Q(33);
    vlSelf->__VdfgTmp_h2981c0ee__0 = 0;
    vlSelf->__VdfgTmp_h0db32e6d__0 = 0;
    vlSelf->__Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_ff__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
