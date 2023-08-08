// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpcore_tb.h for the primary calling header

#include "verilated.h"

#include "Vpcore_tb__Syms.h"
#include "Vpcore_tb___024root.h"

VL_INLINE_OPT void Vpcore_tb___024root___nba_sequent__TOP__8(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk 
        = vlSelf->__Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk;
    if (vlSelf->reset) {
        if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_busy)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff 
                = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_next;
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff 
                = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_next;
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff 
                = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_next;
        }
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next;
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff = 3U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff = 0x80U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_busy 
        = (1U & (~ ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff)) 
                    | (4U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff)))));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_read 
        = ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff)) 
           | ((4U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff)) 
              & (0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_interfr))));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__max_data_count 
        = (0x1fU & ((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                             >> 4U)) - (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff))));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__1(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mem_top_module__DOT____VdfgExtracted_h8781ff22__0;
    pcore_tb__DOT__dut__DOT__mem_top_module__DOT____VdfgExtracted_h8781ff22__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT____VdfgTmp_h95add624__0;
    pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT____VdfgTmp_h95add624__0 = 0;
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl = 0x400ULL;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
        = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
           | (0xffffffe0U & (((- (IData)((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                >> 4U)))) 
                              << 0x10U) | (0xffe0U 
                                           & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                               << 0xcU) 
                                              | (0xfe0U 
                                                 & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                    >> 0x14U)))))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
        = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]) 
           | (0x1fU & ((- (IData)((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                         >> 4U)))) 
                       >> 0x10U)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
        = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U]) 
           | (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U]));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
        = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U]) 
           | (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U]));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
        = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U]) 
           | ((IData)((((QData)((IData)(((0U != (0x1fU 
                                                 & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                    >> 0x14U)))
                                          ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                         [(0x1fU & 
                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                            >> 0x14U))]
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(((0U != (0x1fU 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                     >> 0x19U)))
                                           ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                          [(0x1fU & 
                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 0x19U))]
                                           : 0U))))) 
              << 5U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
        = (((IData)((((QData)((IData)(((0U != (0x1fU 
                                               & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                  >> 0x14U)))
                                        ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                       [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                  >> 0x14U))]
                                        : 0U))) << 0x20U) 
                     | (QData)((IData)(((0U != (0x1fU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                   >> 0x19U)))
                                         ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                        [(0x1fU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                   >> 0x19U))]
                                         : 0U))))) 
            >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                    ((0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                          >> 0x14U)))
                                                      ? 
                                                     vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                                     [
                                                     (0x1fU 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                         >> 0x14U))]
                                                      : 0U))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x1fU 
                                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                                      >> 0x19U)))
                                                                  ? 
                                                                 vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                                                 [
                                                                 (0x1fU 
                                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                                     >> 0x19U))]
                                                                  : 0U)))) 
                                  >> 0x20U)) << 5U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
        = ((IData)(((((QData)((IData)(((0U != (0x1fU 
                                               & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                  >> 0x14U)))
                                        ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                       [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                  >> 0x14U))]
                                        : 0U))) << 0x20U) 
                     | (QData)((IData)(((0U != (0x1fU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                   >> 0x19U)))
                                         ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                        [(0x1fU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                   >> 0x19U))]
                                         : 0U)))) >> 0x20U)) 
           >> 0x1bU);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
        = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]) 
           | (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U]));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
        = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U]) 
           | (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U]));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
        = (0x1cU | ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                    | (1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U])));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 0U;
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
            = (0x20ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
            = ((0xffffffe1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
               | (0x1eU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U]));
    } else if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
        if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((0x80000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                        if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                = (0x100ULL | (0x3ffffffe3fULL 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                = (0x300000ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                = (0x200ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                = (0x100ULL | (0x3ffffffe3fULL 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                = (0x200000ULL | (0x3fffcfffffULL 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                = (0x200ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                        }
                    } else if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x100ULL | (0x3ffffffe3fULL 
                                           & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x100000ULL | (0x3fffcfffffULL 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x200ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    }
                } else if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x1000ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x100ULL | (0x3ffffffe3fULL 
                                           & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x300000ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x3ffffffdffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x1000ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x100ULL | (0x3ffffffe3fULL 
                                           & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x200000ULL | (0x3fffcfffffULL 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x3ffffffdffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                    }
                } else if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = (0x1000ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = (0x100ULL | (0x3ffffffe3fULL 
                                       & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = (0x100000ULL | (0x3fffcfffffULL 
                                          & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = (0x3ffffffdffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                } else if ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((8U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                    if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                    >> 0x1fU)) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                = (0x6000ULL | (0x3fffff1fffULL 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                        }
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    }
                } else if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                    if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                >> 0x1fU)) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x2000ULL | (0x3fffff1fffULL 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                    } else if ((2U == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x19U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x4000ULL | (0x3fffff1fffULL 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                    } else if ((5U == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x19U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x8000ULL | (0x3fffff1fffULL 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    }
                } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                            >> 0x1fU)) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((0x40000000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                } else if ((0U == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                            >> 0x19U)))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = (0x20ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                        = (0x16U | (0xffffffe1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]));
                    if ((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                            = (0x16U | (0xffffffe1U 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]));
                    } else if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                            = (0x12U | (0xffffffe1U 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]));
                    } else if ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                            = (0x10U | (0xffffffe1U 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]));
                    }
                } else if ((1U == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                            >> 0x19U)))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = (0x20ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                        = (6U | (0xffffffe1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]));
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                }
            } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = (0x80ULL | (0x3ffffffe3fULL 
                                      & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                        = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                           | (0xffffffe0U & (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                             >> 4U)))) 
                                              << 0x19U) 
                                             | ((0x1fe0000U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U]) 
                                                | ((0x10000U 
                                                    & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                       >> 9U)) 
                                                   | (0xffc0U 
                                                      & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                          << 0xcU) 
                                                         | (0xfc0U 
                                                            & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                               >> 0x14U)))))))));
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                        = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]) 
                           | (0x1fU & ((- (IData)((1U 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                      >> 4U)))) 
                                       >> 7U)));
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = (0x3fffffe7ffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = (0x400000000ULL | (0x3ffffffffULL 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = (0x18ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                }
            } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x80ULL | (0x3ffffffe3fULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x1000ULL | (0x3fffffe7ffULL 
                                    & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x400000000ULL | (0x3ffffffffULL 
                                         & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x18ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x400ULL | (0x3fffffe3ffULL 
                                   & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                    = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                       | (0xffffffe0U & (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                         >> 4U)))) 
                                          << 0x11U) 
                                         | ((0x10000U 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                << 4U)) 
                                            | ((0xfc00U 
                                                & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                    << 0xcU) 
                                                   | (0xc00U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                         >> 0x14U)))) 
                                               | (0x3c0U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                     >> 7U)))))));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                    = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]) 
                       | (0x1fU & ((- (IData)((1U & 
                                               (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                >> 4U)))) 
                                   >> 0xfU)));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x400000000ULL | (0x3ffffffffULL 
                                         & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (4ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                if ((0x80000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = ((0x3ffe3fffffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl) 
                           | ((QData)((IData)(((0x40000U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                ? (
                                                   (0x20000U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                    ? 4U
                                                    : 6U)
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                    ? 3U
                                                    : 5U)))) 
                              << 0x16U));
                } else if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = (0x3ffffffffbULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = ((0x3ffe3fffffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl) 
                           | ((QData)((IData)(((0x20000U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                ? 2U
                                                : 1U))) 
                              << 0x16U));
                }
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
        }
    } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
        if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
            } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x40ULL | (0x3ffffffe3fULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                    = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                       | (0xfffe0000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U]));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                    = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]) 
                       | (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U]));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x3ffffff7ffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x3000000000ULL | (0x3ffffffffULL 
                                          & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x10ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x40ULL | (0x3ffffffe3fULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x1c00ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x10ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                if ((0U == (0x7fU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                      << 2U) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x1eU))))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = ((0x3ffffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl) 
                           | ((QData)((IData)(((0x80000U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                ? (
                                                   (0x40000U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                    ? 
                                                   ((0x20000U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                     ? 3U
                                                     : 4U)
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                     ? 9U
                                                     : 5U))
                                                : (
                                                   (0x40000U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                    ? 
                                                   ((0x20000U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                     ? 7U
                                                     : 6U)
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                     ? 8U
                                                     : 1U))))) 
                              << 0x22U));
                } else if ((0x20U == (0x7fU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                << 2U) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                  >> 0x1eU))))) {
                    if ((0U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                      >> 0x11U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x800000000ULL | (0x3ffffffffULL 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                    } else if ((5U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 0x11U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x2800000000ULL | (0x3ffffffffULL 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    }
                } else if ((1U == (0x7fU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                             << 2U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                               >> 0x1eU))))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = (0x140ULL | (0x3ffffffe3fULL 
                                       & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = ((0x3c3fffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl) 
                           | ((QData)((IData)(((0x80000U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                ? (
                                                   (0x40000U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                    ? 
                                                   ((0x20000U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                     ? 0xbU
                                                     : 0xaU)
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                     ? 9U
                                                     : 8U))
                                                : (
                                                   (0x40000U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                    ? 
                                                   ((0x20000U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                     ? 7U
                                                     : 6U)
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                     ? 5U
                                                     : 4U))))) 
                              << 0x1eU));
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                }
            }
        } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0xc0ULL | (0x3ffffffe3fULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x1800ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x2e000000ULL | (0x3fc1ffffffULL 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x2c00000000ULL | (0x3ffffffffULL 
                                          & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x10ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                if ((2U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                  >> 0x11U)))) {
                    if ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((8U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                                } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                                } else {
                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                        = (0xb0000ULL 
                                           | (0x3ffff0ffffULL 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                                }
                            } else if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                    = (0xa0000ULL | 
                                       (0x3ffff0ffffULL 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                            }
                        } else if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                    = (0x90000ULL | 
                                       (0x3ffff0ffffULL 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                            }
                        } else if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                = (0x80000ULL | (0x3ffff0ffffULL 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                        }
                    } else if ((8U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            } else {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                    = (0x60000ULL | 
                                       (0x3ffff0ffffULL 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                            }
                        } else if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                = (0x70000ULL | (0x3ffff0ffffULL 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                        }
                    } else if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                = (0x50000ULL | (0x3ffff0ffffULL 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                        }
                    } else if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                        if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                = (0x20000ULL | (0x3ffff0ffffULL 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                = (0x10000ULL | (0x3ffff0ffffULL 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                            if ((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                 >> 0x19U)))) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                            }
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                = (0x3ff9ffffffULL 
                                   & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
                        }
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = ((0x3ffff0ffffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl) 
                               | ((QData)((IData)((
                                                   (1U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U])
                                                    ? 3U
                                                    : 4U))) 
                                  << 0x10U));
                    }
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
            }
        } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                = (0x1000ULL | (0x3fffffe7ffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                   | (0xffffffe0U & (((- (IData)((1U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                     >> 4U)))) 
                                      << 0x10U) | (
                                                   (0xfc00U 
                                                    & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                        << 0xcU) 
                                                       | (0xc00U 
                                                          & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                             >> 0x14U)))) 
                                                   | (0x3e0U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                         >> 7U))))));
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]) 
                   | (0x1fU & ((- (IData)((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                 >> 4U)))) 
                               >> 0x10U)));
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                = (0x400000000ULL | (0x3ffffffffULL 
                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
            if ((0U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                              >> 0x11U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x2000000ULL | (0x3ff9ffffffULL 
                                       & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
            } else if ((1U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                     >> 0x11U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x4000000ULL | (0x3ff9ffffffULL 
                                       & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
            } else if ((2U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                     >> 0x11U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x6000000ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
            }
        }
    } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
        if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
        } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                = (0x40ULL | (0x3ffffffe3fULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                   | (0xfffe0000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U]));
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]) 
                   | (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U]));
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                = (0x3fffffe7ffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                = (0x400000000ULL | (0x3ffffffffULL 
                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                = (0x10ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                = (0x40ULL | (0x3ffffffe3fULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                = (0x1000ULL | (0x3fffffe3ffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                = (0x10ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
            if ((0x80000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = ((0x3ffffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl) 
                           | ((QData)((IData)(((0x20000U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                                ? 3U
                                                : 4U))) 
                              << 0x22U));
                } else if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                    if ((0U == (0x7fU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                          << 2U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                          >> 0x1eU))))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                            = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                               | (0x3e0U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                            >> 0x14U)));
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                            = (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]);
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x2400000000ULL | (0x3ffffffffULL 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                    } else if ((0x20U == (0x7fU & (
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                                    << 2U) 
                                                   | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                      >> 0x1eU))))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                            = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                               | (0x3e0U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                            >> 0x14U)));
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                            = (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]);
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                            = (0x2800000000ULL | (0x3ffffffffULL 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
                    }
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                        = (0x1400000000ULL | (0x3ffffffffULL 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
                }
            } else if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = ((0x3ffffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl) 
                       | ((QData)((IData)(((0x20000U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                            ? 7U : 6U))) 
                          << 0x22U));
            } else if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                    = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]) 
                       | (0x3e0U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                    >> 0x14U)));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                    = (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U]);
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x2000000000ULL | (0x3ffffffffULL 
                                          & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x400000000ULL | (0x3ffffffffULL 
                                         & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
            }
        }
    } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
        if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            if ((0U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                              >> 0x11U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (1ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
            } else if ((1U == (7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                     >> 0x11U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (2ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
        }
    } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
            = (0xc0ULL | (0x3ffffffe3fULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
            = (0x1000ULL | (0x3fffffe7ffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
            = (0x400000000ULL | (0x3ffffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
            = (0x10ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
        if ((0x80000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = ((0x3fc7ffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl) 
                       | ((QData)((IData)(((0x20000U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                            ? 4U : 2U))) 
                          << 0x1bU));
            }
        } else if ((0x40000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
            if ((0x20000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr = 1U;
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                    = (0x28000000ULL | (0x3fc7ffffffULL 
                                        & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                = ((0x3fc7ffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl) 
                   | ((QData)((IData)(((0x20000U & 
                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U])
                                        ? 3U : 1U))) 
                      << 0x1bU));
        }
    }
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
            = (0x1fffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
            = (4U | (0xffffffe1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U]));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
            = (0x20ULL | (0x3ffffffe00ULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__instruction 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[2U] 
            << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                         >> 1U));
    if ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__instruction 
            = ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[2U] 
                << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                             >> 1U));
    } else if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__instruction = 0x13U;
    } else if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__instruction 
            = ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__conc_32_misallign 
                << 0x10U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__upper_16));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[0U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[1U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[2U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[3U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[4U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[5U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[6U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U];
    if ((0x40U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next = 0ULL;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[0U] 
            = (1U | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[0U]);
    } else if ((0x20U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[0U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[1U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[3U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[4U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[5U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[5U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[6U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[6U];
        if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[5U] 
                = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[5U]) 
                   | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb2id_fb 
                               >> 6U)) << 5U));
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[6U] 
                = ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb2id_fb 
                            >> 6U)) >> 0x1bU);
        }
        if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[4U] 
                = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[4U]) 
                   | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb2id_fb 
                               >> 6U)) << 5U));
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[5U] 
                = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[5U]) 
                   | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb2id_fb 
                               >> 6U)) >> 0x1bU));
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst 
        = (0xffffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__pc_misalign)
                       ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__instruction
                       : ((4U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U])
                           ? (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__instruction 
                              >> 0x10U) : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__instruction)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_imm_branch 
        = ((0xe00U & ((- (IData)((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                        >> 0xcU)))) 
                      << 9U)) | ((0x100U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                            >> 4U)) 
                                 | ((0xc0U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                              << 1U)) 
                                    | ((0x20U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                 << 3U)) 
                                       | ((0x18U & 
                                           ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                            >> 7U)) 
                                          | (6U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   >> 2U)))))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_Li 
        = ((0xfc0U & ((- (IData)((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                        >> 0xcU)))) 
                      << 6U)) | ((0x20U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                           >> 7U)) 
                                 | (0x1fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                             >> 2U))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h8bdb6079__0 
        = (0x63U | ((0x800U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                               << 1U)) | ((0x600U & 
                                           ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                            << 6U)) 
                                          | (0x80U 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                >> 5U)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h46266a8e__0 
        = (0x45413U | ((0x38000U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                    << 8U)) | (0x380U 
                                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))));
    vlSelf->__VdfgTmp_h0db32e6d__0 = ((0x10U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                >> 1U)) 
                                      | ((0xeU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                  >> 9U)) 
                                         | (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                  >> 6U))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h68dbea3a__0 
        = ((0x300U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                      >> 1U)) | ((0x80U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                           << 1U)) 
                                 | ((0x40U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                              >> 1U)) 
                                    | ((0x20U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                 << 3U)) 
                                       | ((0x10U & 
                                           ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                            >> 7U)) 
                                          | (0xeU & 
                                             ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                              >> 2U)))))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__next_comp16 
        = ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)) 
           & (IData)((3U != (3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_jump 
        = ((0xff000U & ((- (IData)((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                          >> 0xcU)))) 
                        << 0xcU)) | ((0x800U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                >> 1U)) 
                                     | ((0x400U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 2U)) 
                                        | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h68dbea3a__0))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_misaligned 
        = (1U & ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__next_comp16)) 
                 & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff 
                     >> 1U) | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff)));
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__next_comp16) {
        if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))) {
            if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out 
                    = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__instruction;
            } else if ((0x8000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))) {
                if ((0x4000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out 
                        = ((0x2000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                            ? 0x13U : (0x12023U | (
                                                   (0xfe000000U 
                                                    & ((0xc000000U 
                                                        & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                           << 0x13U)) 
                                                       | (0x2000000U 
                                                          & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                             << 0xdU)))) 
                                                   | ((0x1f00000U 
                                                       & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                          << 0x12U)) 
                                                      | (0xf80U 
                                                         & ((0x2000U 
                                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                                << 6U)) 
                                                            | (0x1e00U 
                                                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))))))));
                } else if ((0x2000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out = 0x13U;
                } else if ((0x1000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))) {
                    if ((0x1000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out 
                            = ((IData)((0U == (0xffcU 
                                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))))
                                ? 0x100073U : ((IData)(
                                                       ((0U 
                                                         == 
                                                         (0x7cU 
                                                          & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))) 
                                                        & (0U 
                                                           != 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                               >> 7U)))))
                                                ? (0xe7U 
                                                   | (0xf8000U 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                         << 8U)))
                                                : (0x33U 
                                                   | ((0x1f00000U 
                                                       & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                          << 0x12U)) 
                                                      | ((0xf8000U 
                                                          & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                             << 8U)) 
                                                         | (0xf80U 
                                                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))));
                    }
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out 
                        = ((IData)(((0U == (0x7cU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))) 
                                    & (0U != (0x1fU 
                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                 >> 7U)))))
                            ? (0x67U | (0xf8000U & 
                                        ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                         << 8U))) : 
                           (0x33U | ((0x1f00000U & 
                                      ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                       << 0x12U)) | 
                                     (0xf80U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))));
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out 
                    = ((0x4000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                        ? ((0x2000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                            ? 0x13U : (0x10003U | (
                                                   (0xfff00000U 
                                                    & ((0xc000000U 
                                                        & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                           << 0x18U)) 
                                                       | ((0x2000000U 
                                                           & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                              << 0xdU)) 
                                                          | (0x1c00000U 
                                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                                << 0x12U))))) 
                                                   | ((0x7000U 
                                                       & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                          >> 1U)) 
                                                      | (0xf80U 
                                                         & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))))))
                        : ((0x2000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                            ? 0x13U : (0x1013U | ((0x1f00000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      << 0x12U)) 
                                                  | ((0xf8000U 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                         << 8U)) 
                                                     | (0xf80U 
                                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))));
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out 
                = ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                    ? ((0x8000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                        ? ((0x4000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                            ? ((0x2000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                                ? (0x41000U | ((0x80000000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 0x13U)) 
                                               | ((0x7e000000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_imm_branch) 
                                                      << 0x15U)) 
                                                  | ((0x38000U 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                         << 8U)) 
                                                     | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h8bdb6079__0)))))
                                : (0x40000U | ((0x80000000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 0x13U)) 
                                               | ((0x7e000000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_imm_branch) 
                                                      << 0x15U)) 
                                                  | ((0x38000U 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                         << 8U)) 
                                                     | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h8bdb6079__0))))))
                            : ((0x2000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                                ? (0x6fU | ((0x80000000U 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                << 0x13U)) 
                                            | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h68dbea3a__0) 
                                                << 0x15U) 
                                               | ((0x100000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      << 0xcU)) 
                                                  | (0xff000U 
                                                     & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_jump 
                                                        << 1U))))))
                                : ((0x800U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                                    ? ((0x400U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                                        ? ((0x40U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                                            ? ((0x20U 
                                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                                                ? (0x847433U 
                                                   | ((0x700000U 
                                                       & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))
                                                : (0x846433U 
                                                   | ((0x700000U 
                                                       & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))))))
                                            : ((0x20U 
                                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                                                ? (0x844433U 
                                                   | ((0x700000U 
                                                       & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))
                                                : (0x40840433U 
                                                   | ((0x700000U 
                                                       & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))))
                                        : (0x47413U 
                                           | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_Li) 
                                               << 0x14U) 
                                              | ((0x38000U 
                                                  & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                     << 8U)) 
                                                 | (0x380U 
                                                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))))))
                                    : ((0x400U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                                        ? (0x40000000U 
                                           | ((0x1f00000U 
                                               & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                  << 0x12U)) 
                                              | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h46266a8e__0))
                                        : ((0x1f00000U 
                                            & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                               << 0x12U)) 
                                           | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h46266a8e__0)))))
                        : ((0x4000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                            ? ((0x2000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                                ? ((IData)(((0x100U 
                                             == (0xf80U 
                                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))) 
                                            & (0U != 
                                               (0x1fU 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   >> 7U)))))
                                    ? (0x137U | (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                                 >> 0xcU)))) 
                                                  << 0x16U) 
                                                 | ((0x200000U 
                                                     & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                        << 9U)) 
                                                    | ((0x180000U 
                                                        & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                           << 0x10U)) 
                                                       | ((0x40000U 
                                                           & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                              << 0xdU)) 
                                                          | ((0x20000U 
                                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                                 << 0xfU)) 
                                                             | (0x10000U 
                                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                                   << 0xaU))))))))
                                    : (0x37U | ((((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                                 >> 0xcU)))) 
                                                  << 0x1eU) 
                                                 | ((0x20000000U 
                                                     & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                        << 0x11U)) 
                                                    | (0x1f000000U 
                                                       & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                          << 0x16U)))) 
                                                | (0xf80U 
                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))
                                : (0x13U | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_Li) 
                                             << 0x14U) 
                                            | (0xf80U 
                                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))
                            : ((0x2000U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))
                                ? (0xefU | ((0x80000000U 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                << 0x13U)) 
                                            | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h68dbea3a__0) 
                                                << 0x15U) 
                                               | ((0x100000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      << 0xcU)) 
                                                  | (0xff000U 
                                                     & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_jump 
                                                        << 1U))))))
                                : ((0U == (0x1fU & 
                                           ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                            >> 7U)))
                                    ? 0x13U : (0x13U 
                                               | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_Li) 
                                                   << 0x14U) 
                                                  | ((0xf8000U 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                         << 8U)) 
                                                     | ((0x7000U 
                                                         & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                            >> 1U)) 
                                                        | (0xf80U 
                                                           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))))))))))
                    : ((0U == (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                     >> 0xdU))) ? (0x10413U 
                                                   | ((0xfff00000U 
                                                       & ((0xf0000000U 
                                                           & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                              << 0x15U)) 
                                                          | ((0xc000000U 
                                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                                 << 0xfU)) 
                                                             | ((0x2000000U 
                                                                 & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                                    << 0x14U)) 
                                                                | (0x1000000U 
                                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                                      << 0x12U)))))) 
                                                      | ((0x7000U 
                                                          & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                             >> 1U)) 
                                                         | (0x380U 
                                                            & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                               << 5U)))))
                        : ((2U == (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                         >> 0xdU)))
                            ? (0x40403U | ((0xfff00000U 
                                            & ((IData)(vlSelf->__VdfgTmp_h0db32e6d__0) 
                                               << 0x16U)) 
                                           | ((0x38000U 
                                               & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                  << 8U)) 
                                              | ((0x7000U 
                                                  & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                     >> 1U)) 
                                                 | (0x380U 
                                                    & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                       << 5U))))))
                            : ((6U == (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                             >> 0xdU)))
                                ? (0x842023U | ((0xfe000000U 
                                                 & ((IData)(vlSelf->__VdfgTmp_h0db32e6d__0) 
                                                    << 0x16U)) 
                                                | ((0x700000U 
                                                    & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                       << 0x12U)) 
                                                   | ((0x38000U 
                                                       & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                          << 8U)) 
                                                      | (0xf80U 
                                                         & ((IData)(vlSelf->__VdfgTmp_h0db32e6d__0) 
                                                            << 9U))))))
                                : 0x13U))));
        }
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__instruction;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[0U] 
        = (((IData)((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out)) 
                      << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__pc_out)))) 
            << 3U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__stall_pc) 
                       << 2U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__next_comp16) 
                                  << 1U) | (1U & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))))))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[1U] 
        = (((IData)((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out)) 
                      << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__pc_out)))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__pc_out))) 
                                  >> 0x20U)) << 3U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[2U] 
        = ((IData)(((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out)) 
                      << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__pc_out))) 
                    >> 0x20U)) >> 0x1dU);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__incr 
        = ((2U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[0U])
            ? ((2U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[0U])
                ? 2U : 4U) : 4U);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
        = (((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[1U] 
             << 0x1dU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[0U] 
                          >> 3U)) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__incr));
    if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgExtracted_h46a986c8__0;
    } else if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgExtracted_h46a986c8__0;
    } else if ((8U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
            = (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result);
    } else if ((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                      | ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if)) 
                         | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__stall_pc))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu = 0ULL;
    if (((((0xd7U >= ((IData)(0x2cU) + (0xffU & ((IData)(0x36U) 
                                                 * 
                                                 (3U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                     >> 0x16U))))))
            ? (0x3ffU & (((0U == (0x1fU & ((IData)(0x2cU) 
                                           + (0xffU 
                                              & ((IData)(0x36U) 
                                                 * 
                                                 (3U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                     >> 0x16U)))))))
                           ? 0U : (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[
                                   (((IData)(0x35U) 
                                     + (0xffU & ((IData)(0x36U) 
                                                 * 
                                                 (3U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                     >> 0x16U))))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x2cU) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x36U) 
                                                          * 
                                                          (3U 
                                                           & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                              >> 0x16U))))))))) 
                         | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[
                            (((IData)(0x2cU) + (0xffU 
                                                & ((IData)(0x36U) 
                                                   * 
                                                   (3U 
                                                    & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                       >> 0x16U))))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x2cU) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x36U) 
                                                      * 
                                                      (3U 
                                                       & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                          >> 0x16U)))))))))
            : 0U) == (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                      >> 0x16U)) & ((0xd7U >= ((IData)(0x21U) 
                                               + (0xffU 
                                                  & ((IData)(0x36U) 
                                                     * 
                                                     (3U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                         >> 0x16U)))))) 
                                    & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[
                                       (((IData)(0x21U) 
                                         + (0xffU & 
                                            ((IData)(0x36U) 
                                             * (3U 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                   >> 0x16U))))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x21U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x36U) 
                                                     * 
                                                     (3U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                         >> 0x16U)))))))))) {
        if (((((0xd7U >= ((IData)(0x22U) + (0xffU & 
                                            ((IData)(0x36U) 
                                             * (3U 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                   >> 0x16U))))))
                ? (0x3ffU & (((0U == (0x1fU & ((IData)(0x22U) 
                                               + (0xffU 
                                                  & ((IData)(0x36U) 
                                                     * 
                                                     (3U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                         >> 0x16U)))))))
                               ? 0U : (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[
                                       (((IData)(0x2bU) 
                                         + (0xffU & 
                                            ((IData)(0x36U) 
                                             * (3U 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                   >> 0x16U))))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x22U) 
                                            + (0xffU 
                                               & ((IData)(0x36U) 
                                                  * 
                                                  (3U 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                      >> 0x16U))))))))) 
                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[
                                (((IData)(0x22U) + 
                                  (0xffU & ((IData)(0x36U) 
                                            * (3U & 
                                               (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                >> 0x16U))))) 
                                 >> 5U)] >> (0x1fU 
                                             & ((IData)(0x22U) 
                                                + (0xffU 
                                                   & ((IData)(0x36U) 
                                                      * 
                                                      (3U 
                                                       & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                          >> 0x16U)))))))))
                : 0U) == (0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                    >> 0xcU))) | ((0xd7U 
                                                   >= 
                                                   ((IData)(0x20U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x36U) 
                                                        * 
                                                        (3U 
                                                         & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                            >> 0x16U)))))) 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[
                                                     (((IData)(0x20U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x36U) 
                                                           * 
                                                           (3U 
                                                            & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                               >> 0x16U))))) 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x36U) 
                                                             * 
                                                             (3U 
                                                              & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                                 >> 0x16U)))))))))) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                = ((3ULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu) 
                   | ((QData)((IData)(((0xd7U >= (0xffU 
                                                  & ((IData)(0x36U) 
                                                     * 
                                                     (3U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                         >> 0x16U)))))
                                        ? (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x36U) 
                                                 * 
                                                 (3U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                     >> 0x16U)))))
                                             ? 0U : 
                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[
                                             (((IData)(0x1fU) 
                                               + (0xffU 
                                                  & ((IData)(0x36U) 
                                                     * 
                                                     (3U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                         >> 0x16U))))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x36U) 
                                                     * 
                                                     (3U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                         >> 0x16U))))))) 
                                           | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[
                                              (7U & 
                                               (((IData)(0x36U) 
                                                 * 
                                                 (3U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                     >> 0x16U))) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x36U) 
                                                     * 
                                                     (3U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                         >> 0x16U))))))
                                        : 0U))) << 2U));
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                = (2ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu);
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                = ((0x3fffffffeULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu) 
                   | (IData)((IData)(((0xd7U >= ((IData)(0x20U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x36U) 
                                                     * 
                                                     (3U 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                         >> 0x16U)))))) 
                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[
                                         (((IData)(0x20U) 
                                           + (0xffU 
                                              & ((IData)(0x36U) 
                                                 * 
                                                 (3U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                     >> 0x16U))))) 
                                          >> 5U)] >> 
                                         (0x1fU & ((IData)(0x20U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x36U) 
                                                       * 
                                                       (3U 
                                                        & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                           >> 0x16U)))))))))));
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
        = ((1ULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if) 
           | (2ULL | ((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next)) 
                      << 2U)));
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__en_vaddr) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
            = ((1ULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if) 
               | (((QData)((IData)((0x3fffffU & (IData)(
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                                         >> 0xcU))))) 
                   << 0xeU) | ((QData)((IData)(((0x1ffeU 
                                                 & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                                              >> 1U)))))) 
                               << 1U)));
        if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu))) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                = ((0xfff003fffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if) 
                   | ((QData)((IData)((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                                 >> 0xcU)))) 
                      << 0xeU));
        }
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__itlb_miss 
            = (1U & (~ ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                 >> 1U)) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgTmp_hd5ca5221__0))));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__itlb_miss = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[0U] 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[1U] 
            << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[0U] 
                         >> 1U));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[1U] 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[2U] 
            << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[1U] 
                         >> 1U));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[2U] 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[3U] 
            << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[2U] 
                         >> 1U));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[3U] 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[4U] 
            << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[3U] 
                         >> 1U));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[4U] 
        = (1U | (0x3ffffeU & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                       >> 0xdU)) << 1U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__cache_rw = 0U;
    if ((0U != vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_ff)) {
        if ((2U == vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_ff)) {
            if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[0U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__cache_rw = 1U;
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_ff;
    if ((1U & ((IData)((0U != (0xeU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if)))) 
               | ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if)) 
                  & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next = 0xeU;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_misaligned) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next = 1U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next = 0U;
    } else if ((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if) 
                      & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next = 1U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next = 0xcU;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_i_sel 
        = (IData)((0x4002ULL == (0x3ffffc002ULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if)));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT____VdfgTmp_h920914d9__0 
        = ((1U != (0xfffffU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                       >> 0xeU)))) 
           & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                      >> 1U)));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[0U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache
        [(0x7fU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                           >> 6U)))][0U];
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[1U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache
        [(0x7fU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                           >> 6U)))][1U];
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[2U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache
        [(0x7fU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                           >> 6U)))][2U];
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[3U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache
        [(0x7fU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                           >> 6U)))][3U];
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[4U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache
        [(0x7fU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                           >> 6U)))][4U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff;
    if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next = 0U;
    } else if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff))) {
        if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff))) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next = 2U;
        } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_valid_ff) {
            if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_hf175b14a__0) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next = 4U;
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next = 0U;
                if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_hb35f4e03__0) {
                    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_ff) {
                        if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_h1d20b23b__0) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next = 4U;
                        }
                    } else {
                        if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_h1148e73c__0)))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next = 4U;
                        }
                        if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_h9d036853__0) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next = 4U;
                        }
                    }
                    if (((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff)) 
                         & (0U != (0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                             >> 0xaU))))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next = 4U;
                    }
                } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff) {
                    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next = 4U;
                    }
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next = 3U;
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff))) {
        if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_valid_ff) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next = 0U;
        }
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__itlb_miss) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next = 2U;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__dtlb_miss) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next = 2U;
    }
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_ff;
    if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_next = 0U;
                if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__itlb_miss) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_next = 1U;
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_next 
                        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next;
                } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__dtlb_miss) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_next 
                        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U];
                }
            }
        }
        if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff))) {
            if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_next 
                    = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_ff;
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_next = 1U;
            } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_valid_ff) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_next = 0U;
                if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_hf175b14a__0)))) {
                    if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_hb35f4e03__0)))) {
                        if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff)))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_next 
                                = ((QData)((IData)(
                                                   ((0xfffffc00U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff) 
                                                    | (0x3ffU 
                                                       & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff 
                                                          >> 0xcU))))) 
                                   << 2U);
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_next = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_next = 0U;
            if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__itlb_miss) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_next 
                    = ((QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff 
                                         << 0xaU) | 
                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                         >> 0x16U)))) 
                       << 2U);
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_next = 1U;
            } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__dtlb_miss) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_next 
                    = ((QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff 
                                         << 0xaU) | 
                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                         >> 0x16U)))) 
                       << 2U);
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_next = 1U;
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
            << 5U) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next) 
                      << 1U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
            >> 0x1bU) | ((IData)((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff)))) 
                         << 5U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
        = (((IData)((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out)) 
                      << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff)))) 
            >> 0x1bU) | ((IData)(((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff))) 
                                  >> 0x20U)) << 5U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[3U] 
        = ((IData)(((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out)) 
                      << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff))) 
                    >> 0x20U)) >> 0x1bU);
    if ((0x100U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
            = (0x260U | (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[2U]));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[3U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
            = (0x1dU | (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U]));
    } else if ((0x80U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[3U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U];
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_rdata 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_i_sel) 
            | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_d_sel))
            ? ((0x195U >= (0x1ffU & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_d_sel)
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                           << 0x1aU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 6U))
                                       : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_i_sel)
                                           ? (IData)(
                                                     (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                      >> 2U))
                                           : 0U)) >> 2U)))
                ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_module__DOT__bmem
               [(0x1ffU & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_d_sel)
                             ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                 << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 6U))
                             : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_i_sel)
                                 ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                            >> 2U))
                                 : 0U)) >> 2U))] : 0U)
            : 0U);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__cache_hit 
        = (((0x1fffffU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                  >> 0xdU))) == (0x1fffffU 
                                                 & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[4U] 
                                                    >> 1U))) 
           & ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__icache_flush_req)) 
              & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[4U]));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT____Vcellinp__wb_dcache_top_module__dmem_sel_i 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_next) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dmem_sel));
    pcore_tb__DOT__dut__DOT__mem_top_module__DOT____VdfgExtracted_h8781ff22__0 
        = ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dmem_sel)) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_next));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_next = 0ULL;
    if (((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_d_sel)) 
         & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_i_sel))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_next 
            = (1ULL | ((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_rdata)) 
                       << 1U));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_next = 0ULL;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_d_sel) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_ff)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_next 
            = (1ULL | ((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_rdata)) 
                       << 1U));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_miss 
        = ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__cache_hit)) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT____VdfgTmp_h920914d9__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] = 0U;
    if ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_ff))) {
        if (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dmem_sel) {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_next = 1U;
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
        } else if (pcore_tb__DOT__dut__DOT__mem_top_module__DOT____VdfgExtracted_h8781ff22__0) {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_next = 2U;
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] = 1U;
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_next) 
                   << 6U);
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_next) 
                   >> 0x1aU);
        }
    } else if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_next 
            = ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2lsummu))
                ? 0U : 1U);
        if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2lsummu)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U];
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U];
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U];
        }
    } else if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_next 
            = ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2lsummu))
                ? 0U : 2U);
        if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2lsummu)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] = 1U;
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_next) 
                   << 6U);
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_next) 
                   >> 0x1aU);
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_ff;
    if ((0U == vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_ff)) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2mem_req_o = 0U;
        if (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_miss) {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_next = 2U;
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2mem_req_o = 1U;
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_next = 0U;
        }
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2mem_req_o = 0U;
        if ((2U == vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_ff)) {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_next 
                = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[0U])
                    ? 0U : 2U);
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2mem_req_o 
                = (1U & (~ vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[0U]));
        }
    }
    if (((1U == (0xfffffU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                     >> 0xeU)))) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellinp__icache_controller_module__if2icache_req_kill_i))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__cache_rw = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_next = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2mem_req_o = 0U;
    }
    pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT____VdfgTmp_h95add624__0 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT____Vcellinp__wb_dcache_top_module__dmem_sel_i) 
           & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U]);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index 
        = (0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dcache_flush_req)
                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_ff)
                    : ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                        << 0x16U) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                     >> 0xaU))));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache2mem 
        = (((QData)((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                             >> 2U))) << 1U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2mem_req_o)));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[0U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram
        [vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index][0U];
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[1U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram
        [vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index][1U];
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[2U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram
        [vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index][2U];
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[3U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram
        [vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index][3U];
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
        [vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index];
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__cache_hit 
        = (((0xffffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                           << 0x12U) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                        >> 0xeU))) 
            == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read 
                             >> 2U))) & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read 
                                         >> 1U));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_read 
        = ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U])
            ? ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U])
                ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[3U]
                : vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[2U])
            : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U])
                ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[1U]
                : vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[0U]));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_read;
    if ((4U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U])) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write 
            = ((0xffffff00U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write) 
               | (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                           >> 6U)));
    }
    if ((8U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U])) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write 
            = ((0xffff00ffU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write) 
               | (0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                             >> 6U)));
    }
    if ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U])) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write 
            = ((0xff00ffffU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write) 
               | (0xff0000U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                               >> 6U)));
    }
    if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U])) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write 
            = ((0xffffffU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write) 
               | (0xff000000U & ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                  << 0x1aU) | (0x3000000U 
                                               & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                                                  >> 6U)))));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_miss 
        = ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__cache_hit)) 
           & (IData)(pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT____VdfgTmp_h95add624__0));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_hit 
        = ((IData)(pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT____VdfgTmp_h95add624__0) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__cache_hit));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_line_write[0U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[0U];
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_line_write[1U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[1U];
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_line_write[2U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[2U];
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_line_write[3U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[3U];
    if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U])) {
        if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U])) {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_line_write[3U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write;
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_line_write[2U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write;
        }
    } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U])) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_line_write[1U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write;
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_line_write[0U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wr = 0U;
    if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff)))) {
                if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dcache_flush_req)))) {
                    if (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_hit) {
                        if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wr = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff;
    if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff))) {
        if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_next = 0U;
        } else if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff))) {
            if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read)) {
                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_next = 4U;
            } else if ((0xfU == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_ff))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_next = 6U;
            }
        } else if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U])) {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_next = 3U;
            if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dcache_flush_req) {
                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_next = 5U;
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_next = 4U;
        }
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_wr = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wrb_req = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_req = 0U;
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff))) {
                if ((1U & (~ vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_next 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_ff)));
                    if ((0xfU == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_ff))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_next = 0U;
                    }
                }
                if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read)) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_wr = 1U;
                    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wrb_req = 1U;
                    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_req = 1U;
                }
            } else {
                if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U])) {
                    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dcache_flush_req) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_next 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_ff)));
                    }
                }
                if ((1U & (~ vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U]))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_wr = 1U;
                    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wrb_req = 1U;
                    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_req = 1U;
                }
            }
        }
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_wr = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wrb_req = 0U;
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff)))) {
                if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dcache_flush_req)))) {
                    if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_hit)))) {
                        if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_miss)))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_next = 0U;
                        }
                        if (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_miss) {
                            if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read)) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_wr = 1U;
                                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wrb_req = 1U;
                            }
                        }
                    }
                }
            }
        }
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_req = 0U;
        if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff))) {
            if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_next 
                    = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U])
                        ? 0U : 3U);
                if ((1U & (~ vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U]))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_req = 1U;
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_next = 0U;
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_next 
                = ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff))
                    ? 0U : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dcache_flush_req)
                             ? 5U : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_hit)
                                      ? ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U])
                                          ? 2U : 1U)
                                      : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_miss)
                                          ? ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read)
                                              ? 4U : 3U)
                                          : 0U))));
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff)))) {
                if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dcache_flush_req)))) {
                    if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_hit)))) {
                        if (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_miss) {
                            if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read)) {
                                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_req = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT____Vcellinp__wb_dcache_top_module__dmem_sel_i)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wr = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_next = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_next = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_req = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[0U] 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[0U] 
            << 2U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_req) 
                       << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_wr)));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[1U] 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[0U] 
            >> 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[1U] 
                         << 2U));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[2U] 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[1U] 
            >> 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[2U] 
                         << 2U));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[3U] 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[2U] 
            >> 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[3U] 
                         << 2U));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[4U] 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o[3U] 
            >> 0x1eU) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wrb_req)
                           ? ((0xffffff00U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read 
                                              << 6U)) 
                              | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index) 
                                 << 4U)) : ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                                             << 0x1aU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                               >> 6U))) 
                         << 2U));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[5U] 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wrb_req)
             ? ((0xffffff00U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read 
                                << 6U)) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index) 
                                           << 4U)) : 
            ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
              << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                           >> 6U))) >> 0x1eU);
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[1U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[2U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[3U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[5U] = 0U;
    if ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_ff))) {
        if ((2U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[0U])) {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_next = 1U;
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U] 
                = (2U | ((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[0U]) 
                         | (1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[0U])));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[1U] 
                = ((3U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[1U]) 
                   | (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[1U]));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[2U] 
                = ((3U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[2U]) 
                   | (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[2U]));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[3U] 
                = ((3U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[3U]) 
                   | (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[3U]));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                = ((3U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[4U]) 
                   | (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[4U]));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[5U] 
                = (3U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[5U]);
        } else if ((1U & ((~ (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[0U] 
                              >> 1U)) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache2mem)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_next = 2U;
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U] = 2U;
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[1U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[2U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[3U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                = ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache2mem 
                            >> 1U)) << 2U);
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[5U] 
                = ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache2mem 
                            >> 1U)) >> 0x1eU);
        }
    } else if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_next 
            = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U])
                ? 0U : 1U);
        if ((1U & (~ vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U]))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U] 
                = (2U | ((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[0U]) 
                         | (1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[0U])));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[1U] 
                = ((3U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[1U]) 
                   | (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[1U]));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[2U] 
                = ((3U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[2U]) 
                   | (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[2U]));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[3U] 
                = ((3U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[3U]) 
                   | (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[3U]));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                = ((3U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[4U]) 
                   | (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[4U]));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[5U] 
                = (3U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[5U]);
        }
    } else if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_next 
            = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U])
                ? 0U : 2U);
        if ((1U & (~ vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U]))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U] = 2U;
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[1U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[2U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[3U] = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                = ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache2mem 
                            >> 1U)) << 2U);
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[5U] 
                = ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache2mem 
                            >> 1U)) >> 0x1eU);
        }
    }
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__2(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__frame_err_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__frame_err_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff;
    if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff))) {
        if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff))) {
            if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_ff))) {
                if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__rx_pin_ff)))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__frame_err_next = 1U;
                }
                if (vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__rx_pin_ff) {
                    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_next = 1U;
                }
                vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_next = 0U;
            }
        } else if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_ff))) {
            if ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_ff))) {
                vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_next = 3U;
            }
        }
        if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff)))) {
            if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_ff))) {
                if ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_ff))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_next 
                        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__rx_pin_ff) 
                            << 7U) | (0x7fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_ff) 
                                               >> 1U)));
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__frame_err_next = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_next = 0U;
        }
        if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff))) {
            if (vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_mid_point) {
                vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_next = 2U;
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_next = 0U;
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__rx_pin_ff)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_next = 1U;
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__frame_err_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__frame_err_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff;
    if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff))) {
        if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff))) {
            if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_ff))) {
                if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__rx_pin_ff)))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__frame_err_next = 1U;
                }
                if (vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__rx_pin_ff) {
                    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_next = 1U;
                }
                vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_next = 0U;
            }
        } else if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_ff))) {
            if ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_ff))) {
                vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_next = 3U;
            }
        }
        if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff)))) {
            if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_ff))) {
                if ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_ff))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_next 
                        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__rx_pin_ff) 
                            << 7U) | (0x7fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_ff) 
                                               >> 1U)));
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__frame_err_next = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_next = 0U;
        }
        if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff))) {
            if (vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_mid_point) {
                vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_next = 2U;
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_next = 0U;
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__rx_pin_ff)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_next = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__3(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_high_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_high_ff;
    if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2csr)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_high_next 
            = (IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2csr 
                       >> 1U));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_low_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_low_ff;
    if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2csr))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_low_next 
            = (IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2csr 
                       >> 1U));
    }
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__4(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_data = 0U;
    if (vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_data 
            = ((0xbff8U == (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                       >> 6U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff)
                : ((0xbffcU == (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U)))
                    ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff 
                               >> 0x20U)) : ((0x4000U 
                                              == (0xffffU 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                     >> 6U)))
                                              ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff)
                                              : ((0x4004U 
                                                  == 
                                                  (0xffffU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                      >> 6U)))
                                                  ? (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff 
                                                             >> 0x20U))
                                                  : 0U))));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_lo_wr_flag)
            ? ((0xffffffff00000000ULL & vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_next) 
               | (IData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U)))))
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_hi_wr_flag)
                ? ((0xffffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_next) 
                   | ((QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        << 0x1aU) | 
                                       (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                        >> 6U)))) << 0x20U))
                : (1ULL + vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff)));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__5(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_next 
        = (0xfffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_sdiv)
                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                          << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                       >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_fmt)
            ? ((0xf0U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                         >> 0x12U)) | (0xcU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                               >> 6U)))
            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
    if (vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rd_req) {
        if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
        } else if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
            if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_r_data 
                        = ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                            ? 0U : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                     ? ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                  ? 0U
                                                  : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)))
                                     : ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                  ? 0U
                                                  : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)))));
                } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
                } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
                } else if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_r_data = 0U;
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_r_data 
                    = ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                        ? ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                            ? 0U : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                     ? ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                  ? 0U
                                                  : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)))
                                     : ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                  ? 0U
                                                  : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)))))
                        : ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                            ? ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                ? ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                    ? 0U : ((0x40U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                             ? 0U : 
                                            (((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count)) 
                                              << 0x1fU) 
                                             | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_data))))
                                : ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                    ? 0U : ((0x40U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                             ? 0U : 
                                            ((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count)) 
                                             << 0x1eU))))
                            : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                ? 0U : ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                  ? 0U
                                                  : 
                                                 ((0xf0000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                                      << 0xcU)) 
                                                  | (0xfU 
                                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff))))))));
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_r_data 
                = ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                    ? ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                        ? 0U : ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                 ? ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                     ? ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                  ? 0U
                                                  : 
                                                 ((0xff0000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff)))))
                                     : ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                         ? 0U : ((0x40U 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                  ? 0U
                                                  : 
                                                 ((0xff0000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff))))))
                                 : 0U)) : ((0x400U 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                            ? ((0x200U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                ? (
                                                   (0x100U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                    ? 0U
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                      ? 0U
                                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode))))
                                                : (
                                                   (0x100U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                    ? 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                      ? 0U
                                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_default)))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                      ? 0U
                                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_id)))))
                                            : ((0x200U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                ? 0U
                                                : (
                                                   (0x100U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                    ? 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                      ? 0U
                                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                     ? 0U
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                      ? 0U
                                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))))));
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ckmode)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__6(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_write = 0U;
    if ((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff))) {
        if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff))) {
            if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff))) {
                if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt) 
                      == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__max_data_count)) 
                     & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk) 
                        == (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff) 
                                  >> 1U))))) {
                    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt) 
                         == (0xfffU & ((IData)(1U) 
                                       + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff))))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_write = 1U;
                    }
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_write = 0U;
            }
        } else if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt) 
                    == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__max_data_count))) {
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_write = 1U;
        }
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_write = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next = 0U;
    if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next 
            = ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff))
                ? 0U : ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff))
                         ? (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__t2c_delay) 
                             == (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff) 
                                          >> 8U))) ? 0U
                             : 5U) : (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_interfr) 
                                       == (0xffU & 
                                           ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff) 
                                            >> 8U)))
                                       ? 3U : 4U)));
    } else if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff))) {
        if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff))) {
            if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff))) {
                if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff))) {
                    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt) 
                          == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__max_data_count)) 
                         & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk) 
                            == (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff) 
                                      >> 1U))))) {
                        if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt) 
                             == (0xfffU & ((IData)(1U) 
                                           + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff))))) {
                            if (((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode)) 
                                 | ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode)) 
                                    & (0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count))))) {
                                vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next = 5U;
                            } else if (((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count)) 
                                        & ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode)) 
                                           | (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode))))) {
                                vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next = 4U;
                            }
                        }
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next = 3U;
                    }
                }
            } else if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt) 
                        == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__max_data_count))) {
                if (((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode)) 
                     | ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode)) 
                        & (0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count))))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next = 5U;
                } else if (((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count)) 
                            & ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode)) 
                               | (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode))))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next = 4U;
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next = 3U;
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next 
                = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__c2t_delay) 
                    == (0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff)))
                    ? 3U : 2U);
        }
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next 
            = ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff))
                ? 2U : ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_intercs) 
                          == (0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff))) 
                         & (0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count)))
                         ? 1U : 0U));
    }
}

void Vpcore_tb___024root___nba_sequent__TOP__0(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_sequent__TOP__1(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_sequent__TOP__2(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_sequent__TOP__3(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_sequent__TOP__4(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_sequent__TOP__5(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_sequent__TOP__6(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_sequent__TOP__7(Vpcore_tb___024root* vlSelf);
void Vpcore_tb___024root___nba_comb__TOP__0(Vpcore_tb___024root* vlSelf);

void Vpcore_tb___024root___eval_nba(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0xaULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0xbULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x32ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vpcore_tb___024root___nba_comb__TOP__6(vlSelf);
    }
}

void Vpcore_tb___024root___eval_triggers__act(Vpcore_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpcore_tb___024root___dump_triggers__act(Vpcore_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vpcore_tb___024root___eval_act(Vpcore_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpcore_tb___024root___dump_triggers__nba(Vpcore_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vpcore_tb___024root___eval(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vpcore_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vpcore_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../bench/pcore_tb.sv", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vpcore_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vpcore_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../bench/pcore_tb.sv", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vpcore_tb___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vpcore_tb___024root___eval_debug_assertions(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
