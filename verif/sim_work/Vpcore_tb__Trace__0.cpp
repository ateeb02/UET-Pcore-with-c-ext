// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpcore_tb__Syms.h"


void Vpcore_tb___024root__trace_chg_sub_0(Vpcore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpcore_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vpcore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpcore_tb___024root*>(voidSelf);
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpcore_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vpcore_tb___024root__trace_chg_sub_0(Vpcore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_hc08fe011__0;
    VlWide<4>/*127:0*/ __Vtemp_h8cbeb7a5__0;
    VlWide<4>/*127:0*/ __Vtemp_h5628815a__0;
    VlWide<4>/*127:0*/ __Vtemp_h8cbeb7a5__1;
    VlWide<4>/*127:0*/ __Vtemp_h5628815a__1;
    VlWide<4>/*127:0*/ __Vtemp_h167b8e08__0;
    VlWide<4>/*127:0*/ __Vtemp_h3b9f4904__0;
    VlWide<4>/*127:0*/ __Vtemp_h2d981510__0;
    VlWide<4>/*127:0*/ __Vtemp_hfa4d1436__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->pcore_tb__DOT__irq_ext));
        bufp->chgBit(oldp+1,(vlSelf->pcore_tb__DOT__irq_soft));
        bufp->chgBit(oldp+2,(vlSelf->pcore_tb__DOT__uart_rx));
        bufp->chgBit(oldp+3,(vlSelf->pcore_tb__DOT__spi_miso));
        bufp->chgWData(oldp+4,(vlSelf->pcore_tb__DOT__firmware),1024);
        bufp->chgWData(oldp+36,(vlSelf->pcore_tb__DOT__max_cycles),1024);
        bufp->chgIData(oldp+68,(vlSelf->pcore_tb__DOT__write_sig),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+69,(vlSelf->pcore_tb__DOT__main_time),1024);
        bufp->chgIData(oldp+101,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+102,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff))));
        bufp->chgIData(oldp+103,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+104,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff))));
        bufp->chgIData(oldp+105,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+106,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff))));
        bufp->chgIData(oldp+107,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+108,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff))));
        bufp->chgIData(oldp+109,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+110,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff))));
        bufp->chgBit(oldp+111,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sfence_vma_req));
        bufp->chgIData(oldp+112,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
        bufp->chgIData(oldp+113,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                  >> 0xcU)),20);
        bufp->chgSData(oldp+114,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                            >> 0xcU))),10);
        bufp->chgSData(oldp+115,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                  >> 0x16U)),10);
        bufp->chgCData(oldp+116,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                          >> 0x16U))),4);
        bufp->chgIData(oldp+117,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+118,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+119,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff),32);
        bufp->chgCData(oldp+120,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                           >> 0xcU))),5);
        bufp->chgCData(oldp+121,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                >> 6U)))),3);
        bufp->chgCData(oldp+122,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                >> 0x1bU)))),3);
        bufp->chgCData(oldp+123,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                >> 0x19U)))),2);
        bufp->chgCData(oldp+124,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                  >> 0x10U)))),4);
        bufp->chgBit(oldp+125,((1U & ((0U != (3U & (IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                            >> 0x14U))))
                                       ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                          >> 2U) : (IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                            >> 4U))))));
        bufp->chgBit(oldp+126,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                              >> 3U)))));
        bufp->chgBit(oldp+127,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                              >> 2U)))));
        bufp->chgBit(oldp+128,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff))));
        bufp->chgIData(oldp+129,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[1U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+130,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                  >> 0x1eU)))),4);
        bufp->chgSData(oldp+131,((0xfffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] 
                                             << 7U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                               >> 0x19U)))),12);
        bufp->chgIData(oldp+132,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+133,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+134,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+135,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U])));
        bufp->chgCData(oldp+136,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                        >> 7U))),2);
        bufp->chgCData(oldp+137,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                        >> 4U))),3);
        bufp->chgBit(oldp+138,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                      >> 3U))));
        bufp->chgBit(oldp+139,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                      >> 2U))));
        bufp->chgBit(oldp+140,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                      >> 1U))));
        bufp->chgBit(oldp+141,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl))));
        bufp->chgIData(oldp+142,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
        bufp->chgBit(oldp+143,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))));
        bufp->chgIData(oldp+144,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb2id_fb 
                                          >> 6U))),32);
        bufp->chgCData(oldp+145,((0x1fU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb2id_fb 
                                                   >> 1U)))),5);
        bufp->chgBit(oldp+146,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb2id_fb))));
        bufp->chgIData(oldp+147,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data),32);
        bufp->chgCData(oldp+148,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+149,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                           >> 0x19U))),5);
        bufp->chgBit(oldp+150,((IData)((0ULL != (0x1004ULL 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff)))));
        bufp->chgBit(oldp+151,((IData)((0ULL != (0x6000804ULL 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff)))));
        bufp->chgCData(oldp+152,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U])),5);
        bufp->chgBit(oldp+153,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))));
        bufp->chgBit(oldp+154,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 2U))));
        bufp->chgBit(oldp+155,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_stall_ff));
        bufp->chgIData(oldp+156,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+157,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+158,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+159,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+160,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U])));
        bufp->chgBit(oldp+161,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff));
        bufp->chgIData(oldp+162,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[6U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[5U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+163,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[5U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+164,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+165,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+166,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+167,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+168,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+169,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U])));
        bufp->chgCData(oldp+170,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                  >> 0x22U)))),4);
        bufp->chgCData(oldp+171,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                  >> 0x1eU)))),4);
        bufp->chgCData(oldp+172,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                >> 0x1bU)))),3);
        bufp->chgCData(oldp+173,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                >> 0x19U)))),2);
        bufp->chgCData(oldp+174,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                >> 0x16U)))),3);
        bufp->chgCData(oldp+175,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                >> 0x14U)))),2);
        bufp->chgCData(oldp+176,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                  >> 0x10U)))),4);
        bufp->chgCData(oldp+177,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                >> 0xdU)))),3);
        bufp->chgBit(oldp+178,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+179,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+180,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+181,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                              >> 9U)))));
        bufp->chgCData(oldp+182,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                >> 6U)))),3);
        bufp->chgBit(oldp+183,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                              >> 5U)))));
        bufp->chgBit(oldp+184,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                              >> 4U)))));
        bufp->chgBit(oldp+185,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                              >> 3U)))));
        bufp->chgBit(oldp+186,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                              >> 2U)))));
        bufp->chgBit(oldp+187,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                              >> 1U)))));
        bufp->chgBit(oldp+188,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff))));
        bufp->chgIData(oldp+189,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
        bufp->chgIData(oldp+190,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
        bufp->chgIData(oldp+191,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
        bufp->chgSData(oldp+192,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                            >> 5U))),12);
        bufp->chgIData(oldp+193,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+194,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+195,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+196,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                          >> 1U))),4);
        bufp->chgBit(oldp+197,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U])));
        bufp->chgCData(oldp+198,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                        >> 7U))),2);
        bufp->chgCData(oldp+199,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                        >> 4U))),3);
        bufp->chgBit(oldp+200,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 3U))));
        bufp->chgBit(oldp+201,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 2U))));
        bufp->chgBit(oldp+202,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                      >> 1U))));
        bufp->chgBit(oldp+203,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))));
        bufp->chgIData(oldp+204,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[2U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+205,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[2U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[1U] 
                                                >> 5U))),32);
        bufp->chgIData(oldp+206,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[1U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+207,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U])),5);
        bufp->chgCData(oldp+208,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff) 
                                        >> 1U))),3);
        bufp->chgBit(oldp+209,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))));
        bufp->chgIData(oldp+210,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr2wrb_data_pipe_ff),32);
        bufp->chgIData(oldp+211,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__mul2wrb_pipe_ff),32);
        bufp->chgIData(oldp+212,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff),32);
        bufp->chgIData(oldp+213,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
        bufp->chgBit(oldp+214,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b));
        bufp->chgBit(oldp+215,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b));
        bufp->chgBit(oldp+216,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__pc_misalign));
        bufp->chgBit(oldp+217,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__stall_pc));
        bufp->chgSData(oldp+218,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__upper_16),16);
        bufp->chgBit(oldp+219,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__next_misaligned));
        bufp->chgCData(oldp+220,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state),2);
        bufp->chgBit(oldp+221,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req));
        bufp->chgBit(oldp+222,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe_stall_flush));
        bufp->chgBit(oldp+223,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_wr_flag));
        bufp->chgBit(oldp+224,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_wr_flag));
        bufp->chgBit(oldp+225,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_wr_flag));
        bufp->chgBit(oldp+226,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_wr_flag));
        bufp->chgBit(oldp+227,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_wr_flag));
        bufp->chgBit(oldp+228,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_wr_flag));
        bufp->chgBit(oldp+229,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_wr_flag));
        bufp->chgBit(oldp+230,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_wr_flag));
        bufp->chgBit(oldp+231,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_wr_flag));
        bufp->chgBit(oldp+232,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_wr_flag));
        bufp->chgBit(oldp+233,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_wr_flag));
        bufp->chgBit(oldp+234,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag));
        bufp->chgBit(oldp+235,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_wr_flag));
        bufp->chgBit(oldp+236,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_wr_flag));
        bufp->chgBit(oldp+237,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag));
        bufp->chgBit(oldp+238,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_wr_flag));
        bufp->chgBit(oldp+239,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sstatus_wr_flag));
        bufp->chgBit(oldp+240,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_wr_flag));
        bufp->chgBit(oldp+241,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sie_wr_flag));
        bufp->chgBit(oldp+242,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_wr_flag));
        bufp->chgBit(oldp+243,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_wr_flag));
        bufp->chgBit(oldp+244,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_wr_flag));
        bufp->chgBit(oldp+245,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sip_wr_flag));
        bufp->chgBit(oldp+246,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_wr_flag));
        bufp->chgBit(oldp+247,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_wr_flag));
        bufp->chgBit(oldp+248,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__i_pf_exc_req));
        bufp->chgBit(oldp+249,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sret_req));
        bufp->chgBit(oldp+250,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_req));
        bufp->chgBit(oldp+251,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sfence_vma_req));
        bufp->chgBit(oldp+252,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_req));
        bufp->chgBit(oldp+253,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))));
        bufp->chgCData(oldp+254,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+255,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 0x19U))),5);
        bufp->chgIData(oldp+256,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                   << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 5U))),32);
        bufp->chgCData(oldp+257,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 0x11U))),3);
        bufp->chgCData(oldp+258,((0x7fU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                            << 2U) 
                                           | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                              >> 0x1eU)))),7);
        bufp->chgCData(oldp+259,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 7U))),5);
        bufp->chgBit(oldp+260,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))));
        bufp->chgCData(oldp+261,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U])),5);
        bufp->chgBit(oldp+262,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+263,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x19U)))));
        bufp->chgBit(oldp+264,(((0U != (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U])) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))));
        bufp->chgCData(oldp+265,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                  >> 0x22U)))),4);
        bufp->chgCData(oldp+266,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                >> 0x16U)))),3);
        bufp->chgBit(oldp+267,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                              >> 1U)))));
        bufp->chgCData(oldp+268,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+269,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                           >> 0x19U))),5);
        bufp->chgCData(oldp+270,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                           >> 0xcU))),5);
        bufp->chgBit(oldp+271,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+272,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                                >> 0x19U)))));
        bufp->chgBit(oldp+273,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_ff));
        bufp->chgBit(oldp+274,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_stall_ff));
        bufp->chgIData(oldp+275,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff),32);
        bufp->chgIData(oldp+276,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__rem_ff)),32);
        bufp->chgBit(oldp+277,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__done_ff));
        bufp->chgBit(oldp+278,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__busy_ff));
        bufp->chgIData(oldp+279,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__opr2_ff),32);
        bufp->chgIData(oldp+280,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_next),32);
        bufp->chgQData(oldp+281,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_ff),33);
        bufp->chgQData(oldp+283,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_next),33);
        bufp->chgQData(oldp+285,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__rem_ff),33);
        bufp->chgCData(oldp+287,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__counter),5);
        bufp->chgIData(oldp+288,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache2if_data_ff),32);
        bufp->chgBit(oldp+289,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2if_ack_o));
        bufp->chgIData(oldp+290,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2lsummu 
                                          >> 1U))),32);
        bufp->chgBit(oldp+291,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2lsummu))));
        __Vtemp_hc08fe011__0[0U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[1U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U] 
                                                  >> 1U));
        __Vtemp_hc08fe011__0[1U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[2U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[1U] 
                                                  >> 1U));
        __Vtemp_hc08fe011__0[2U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[3U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[2U] 
                                                  >> 1U));
        __Vtemp_hc08fe011__0[3U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[4U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[3U] 
                                                  >> 1U));
        bufp->chgWData(oldp+292,(__Vtemp_hc08fe011__0),128);
        bufp->chgBit(oldp+296,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U])));
        bufp->chgBit(oldp+297,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2if_ack_o));
        bufp->chgIData(oldp+298,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_ff),32);
        bufp->chgIData(oldp+299,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+300,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_ff),4);
        bufp->chgBit(oldp+301,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2lsummu_ack));
        bufp->chgCData(oldp+302,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff),3);
        bufp->chgIData(oldp+303,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__dcache2lsummu_data_ff),32);
        bufp->chgWData(oldp+304,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[0]),128);
        bufp->chgWData(oldp+308,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[1]),128);
        bufp->chgWData(oldp+312,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[2]),128);
        bufp->chgWData(oldp+316,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[3]),128);
        bufp->chgWData(oldp+320,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[4]),128);
        bufp->chgWData(oldp+324,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[5]),128);
        bufp->chgWData(oldp+328,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[6]),128);
        bufp->chgWData(oldp+332,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[7]),128);
        bufp->chgWData(oldp+336,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[8]),128);
        bufp->chgWData(oldp+340,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[9]),128);
        bufp->chgWData(oldp+344,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[10]),128);
        bufp->chgWData(oldp+348,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[11]),128);
        bufp->chgWData(oldp+352,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[12]),128);
        bufp->chgWData(oldp+356,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[13]),128);
        bufp->chgWData(oldp+360,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[14]),128);
        bufp->chgWData(oldp+364,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[15]),128);
        bufp->chgIData(oldp+368,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [0U] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+369,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [0U] >> 1U))));
        bufp->chgBit(oldp+370,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [0U])));
        bufp->chgIData(oldp+371,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [1U] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+372,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+373,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [1U])));
        bufp->chgIData(oldp+374,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [2U] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+375,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+376,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [2U])));
        bufp->chgIData(oldp+377,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [3U] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+378,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+379,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [3U])));
        bufp->chgIData(oldp+380,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [4U] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+381,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+382,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [4U])));
        bufp->chgIData(oldp+383,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [5U] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+384,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+385,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [5U])));
        bufp->chgIData(oldp+386,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [6U] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+387,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+388,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [6U])));
        bufp->chgIData(oldp+389,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [7U] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+390,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+391,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [7U])));
        bufp->chgIData(oldp+392,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [8U] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+393,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+394,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [8U])));
        bufp->chgIData(oldp+395,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [9U] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+396,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+397,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [9U])));
        bufp->chgIData(oldp+398,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [0xaU] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+399,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+400,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [0xaU])));
        bufp->chgIData(oldp+401,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [0xbU] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+402,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+403,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [0xbU])));
        bufp->chgIData(oldp+404,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [0xcU] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+405,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+406,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [0xcU])));
        bufp->chgIData(oldp+407,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [0xdU] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+408,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+409,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [0xdU])));
        bufp->chgIData(oldp+410,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [0xeU] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+411,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+412,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [0xeU])));
        bufp->chgIData(oldp+413,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                               [0xfU] 
                                               >> 2U))),24);
        bufp->chgBit(oldp+414,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                      [0xfU] >> 1U))));
        bufp->chgBit(oldp+415,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                [0xfU])));
        bufp->chgIData(oldp+416,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+417,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                 >> 9U)))
                                   ? (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                               >> 0x14U))
                                   : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data)),32);
        bufp->chgBit(oldp+418,((1U & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                               >> 3U)) 
                                      | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                  >> 2U)) 
                                         & ((1U & (IData)(
                                                          (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                           >> 0x18U)))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                            >> 0x17U)))
                                                 ? 
                                                ((~ (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x16U))) 
                                                 & (IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                            >> 0x20U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x16U)))
                                                  ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h2edbfac7__0)
                                                  : 
                                                 (~ (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                             >> 0x20U)))))
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                            >> 0x17U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x16U)))
                                                  ? 
                                                 (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h2edbfac7__0))
                                                  : 
                                                 (0U 
                                                  != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output)))
                                                 : 
                                                ((IData)(
                                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                          >> 0x16U)) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))))))))))));
        bufp->chgBit(oldp+419,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                                | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_stall_ff))));
        bufp->chgCData(oldp+420,(((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))
                                   ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__is_missaligned)
                                       ? 1U : 0U) : 
                                  ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))
                                    ? ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U])
                                        ? 2U : 1U) : 
                                   ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))
                                     ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__next_misaligned)
                                         ? 1U : 0U)
                                     : 0U)))),2);
        bufp->chgBit(oldp+421,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__i_pf_exc_req))));
        bufp->chgBit(oldp+422,((1U & ((1U & (IData)(
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                     >> 0x18U)))
                                       ? ((1U & (IData)(
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                         >> 0x17U)))
                                           ? ((~ (IData)(
                                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                          >> 0x16U))) 
                                              & (IData)(
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                         >> 0x20U)))
                                           : ((1U & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x16U)))
                                               ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h2edbfac7__0)
                                               : (~ (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                             >> 0x20U)))))
                                       : ((1U & (IData)(
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                         >> 0x17U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x16U)))
                                               ? (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h2edbfac7__0))
                                               : (0U 
                                                  != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output)))
                                           : ((IData)(
                                                      (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                       >> 0x16U)) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))))))))));
        bufp->chgBit(oldp+423,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                                      | ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if)) 
                                         | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__stall_pc))))));
        bufp->chgIData(oldp+424,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT____VdfgExtracted_hcd8ed81d__0) 
                                   | (6U == (0xfU & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x1eU)))))
                                   ? ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))
                                       : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)
                                   : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
        bufp->chgIData(oldp+425,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT____VdfgExtracted_hcd8ed81d__0)
                                   ? ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                       >> 0x1fU) ? 
                                      ((IData)(1U) 
                                       + (~ vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                       : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                                   : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+426,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__tx_pin));
        bufp->chgBit(oldp+427,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_slave_sel))));
        bufp->chgBit(oldp+428,(vlSelf->pcore_tb__DOT__spi_mosi));
        bufp->chgIData(oldp+429,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                          >> 5U))),32);
        bufp->chgCData(oldp+430,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                                >> 3U)))),2);
        bufp->chgBit(oldp+431,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                              >> 2U)))));
        bufp->chgBit(oldp+432,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                              >> 1U)))));
        bufp->chgBit(oldp+433,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr))));
        bufp->chgBit(oldp+434,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__tx_pin));
        bufp->chgBit(oldp+435,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_int_mask_ff) 
                                       & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_ff)))));
        bufp->chgBit(oldp+436,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_ie_ff) 
                                       & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_ff)))));
        bufp->chgBit(oldp+437,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)) 
                                       >> 1U) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff))))));
        bufp->chgBit(oldp+438,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_overflow_ff));
        bufp->chgBit(oldp+439,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff));
        bufp->chgBit(oldp+440,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff));
        bufp->chgIData(oldp+441,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+442,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_ff))));
        bufp->chgQData(oldp+443,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff),64);
        bufp->chgBit(oldp+445,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_ff));
        bufp->chgBit(oldp+446,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_next));
        bufp->chgCData(oldp+447,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_prescaler_ff),7);
        bufp->chgCData(oldp+448,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_prescaler_next),7);
        bufp->chgIData(oldp+449,((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff)),22);
        bufp->chgBit(oldp+450,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__en_vaddr));
        bufp->chgBit(oldp+451,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x13U))));
        bufp->chgBit(oldp+452,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+453,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+454,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+455,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
                                              >> 0x20U)))));
        bufp->chgIData(oldp+456,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu)),32);
        bufp->chgIData(oldp+457,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                  >> 0xaU)),22);
        bufp->chgCData(oldp+458,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                        >> 8U))),2);
        bufp->chgBit(oldp+459,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                      >> 7U))));
        bufp->chgBit(oldp+460,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                      >> 6U))));
        bufp->chgBit(oldp+461,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                      >> 5U))));
        bufp->chgBit(oldp+462,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                      >> 4U))));
        bufp->chgBit(oldp+463,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                      >> 3U))));
        bufp->chgBit(oldp+464,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                      >> 2U))));
        bufp->chgBit(oldp+465,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                      >> 1U))));
        bufp->chgBit(oldp+466,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0)));
        bufp->chgIData(oldp+467,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff 
                                  >> 0xcU)),20);
        bufp->chgBit(oldp+468,((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff)))));
        bufp->chgBit(oldp+469,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__itlb_update));
        bufp->chgBit(oldp+470,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__i_page_fault));
        bufp->chgSData(oldp+471,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                            >> 0xcU))),10);
        bufp->chgSData(oldp+472,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                            >> 2U))),10);
        bufp->chgBit(oldp+473,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+474,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U])));
        bufp->chgIData(oldp+475,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                  >> 0xaU)),22);
        bufp->chgCData(oldp+476,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                        >> 8U))),2);
        bufp->chgBit(oldp+477,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+478,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+479,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+480,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+481,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+482,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+483,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+484,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U])));
        bufp->chgSData(oldp+485,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                            >> 2U))),10);
        bufp->chgSData(oldp+486,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                             << 8U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[2U] 
                                               >> 0x18U)))),10);
        bufp->chgBit(oldp+487,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[2U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+488,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[2U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+489,((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[2U])),22);
        bufp->chgCData(oldp+490,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                  >> 0x1eU)),2);
        bufp->chgBit(oldp+491,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+492,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+493,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+494,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+495,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+496,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+497,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+498,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x16U))));
        bufp->chgSData(oldp+499,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                             << 8U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[4U] 
                                               >> 0x18U)))),10);
        bufp->chgSData(oldp+500,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[4U] 
                                            >> 0xeU))),10);
        bufp->chgBit(oldp+501,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[4U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+502,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[4U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+503,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[4U] 
                                                << 0xaU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                                  >> 0x16U)))),22);
        bufp->chgCData(oldp+504,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                        >> 0x14U))),2);
        bufp->chgBit(oldp+505,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+506,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+507,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+508,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+509,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+510,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+511,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+512,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0xcU))));
        bufp->chgSData(oldp+513,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                            >> 0xeU))),10);
        bufp->chgSData(oldp+514,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                            >> 4U))),10);
        bufp->chgBit(oldp+515,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                      >> 3U))));
        bufp->chgBit(oldp+516,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                      >> 2U))));
        bufp->chgIData(oldp+517,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                                << 0x14U) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                                  >> 0xcU)))),22);
        bufp->chgCData(oldp+518,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                        >> 0xaU))),2);
        bufp->chgBit(oldp+519,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                      >> 9U))));
        bufp->chgBit(oldp+520,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                      >> 8U))));
        bufp->chgBit(oldp+521,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                      >> 7U))));
        bufp->chgBit(oldp+522,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                      >> 6U))));
        bufp->chgBit(oldp+523,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                      >> 5U))));
        bufp->chgBit(oldp+524,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                      >> 4U))));
        bufp->chgBit(oldp+525,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                      >> 3U))));
        bufp->chgBit(oldp+526,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                      >> 2U))));
        bufp->chgSData(oldp+527,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                            >> 4U))),10);
        bufp->chgSData(oldp+528,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                             << 6U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[7U] 
                                               >> 0x1aU)))),10);
        bufp->chgBit(oldp+529,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[7U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+530,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[7U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+531,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[7U] 
                                               >> 2U))),22);
        bufp->chgCData(oldp+532,((3U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[7U])),2);
        bufp->chgBit(oldp+533,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+534,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+535,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+536,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+537,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+538,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+539,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+540,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                      >> 0x18U))));
        bufp->chgSData(oldp+541,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                             << 6U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[9U] 
                                               >> 0x1aU)))),10);
        bufp->chgSData(oldp+542,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[9U] 
                                            >> 0x10U))),10);
        bufp->chgBit(oldp+543,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[9U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+544,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[9U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+545,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[9U] 
                                                << 8U) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                                  >> 0x18U)))),22);
        bufp->chgCData(oldp+546,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                        >> 0x16U))),2);
        bufp->chgBit(oldp+547,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+548,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+549,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+550,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+551,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+552,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+553,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+554,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                      >> 0xeU))));
        bufp->chgSData(oldp+555,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+556,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                            >> 6U))),10);
        bufp->chgBit(oldp+557,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                      >> 5U))));
        bufp->chgBit(oldp+558,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                      >> 4U))));
        bufp->chgIData(oldp+559,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                                << 0x12U) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                                  >> 0xeU)))),22);
        bufp->chgCData(oldp+560,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                        >> 0xcU))),2);
        bufp->chgBit(oldp+561,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+562,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+563,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                      >> 9U))));
        bufp->chgBit(oldp+564,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                      >> 8U))));
        bufp->chgBit(oldp+565,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                      >> 7U))));
        bufp->chgBit(oldp+566,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                      >> 6U))));
        bufp->chgBit(oldp+567,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                      >> 5U))));
        bufp->chgBit(oldp+568,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                      >> 4U))));
        bufp->chgSData(oldp+569,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                            >> 6U))),10);
        bufp->chgSData(oldp+570,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                             << 4U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU] 
                                               >> 0x1cU)))),10);
        bufp->chgBit(oldp+571,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+572,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+573,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU] 
                                               >> 4U))),22);
        bufp->chgCData(oldp+574,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU] 
                                        >> 2U))),2);
        bufp->chgBit(oldp+575,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU] 
                                      >> 1U))));
        bufp->chgBit(oldp+576,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU])));
        bufp->chgBit(oldp+577,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+578,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+579,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+580,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+581,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+582,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                      >> 0x1aU))));
        bufp->chgSData(oldp+583,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                             << 4U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xeU] 
                                               >> 0x1cU)))),10);
        bufp->chgSData(oldp+584,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xeU] 
                                            >> 0x12U))),10);
        bufp->chgBit(oldp+585,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xeU] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+586,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xeU] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+587,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xeU] 
                                                << 6U) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                                  >> 0x1aU)))),22);
        bufp->chgCData(oldp+588,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                        >> 0x18U))),2);
        bufp->chgBit(oldp+589,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+590,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+591,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+592,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+593,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+594,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+595,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+596,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                      >> 0x10U))));
        bufp->chgSData(oldp+597,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                            >> 0x12U))),10);
        bufp->chgSData(oldp+598,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                            >> 8U))),10);
        bufp->chgBit(oldp+599,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                      >> 7U))));
        bufp->chgBit(oldp+600,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                      >> 6U))));
        bufp->chgIData(oldp+601,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                                << 0x10U) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                                  >> 0x10U)))),22);
        bufp->chgCData(oldp+602,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                        >> 0xeU))),2);
        bufp->chgBit(oldp+603,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+604,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+605,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+606,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+607,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                      >> 9U))));
        bufp->chgBit(oldp+608,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                      >> 8U))));
        bufp->chgBit(oldp+609,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                      >> 7U))));
        bufp->chgBit(oldp+610,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                      >> 6U))));
        bufp->chgSData(oldp+611,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                            >> 8U))),10);
        bufp->chgSData(oldp+612,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                             << 2U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                               >> 0x1eU)))),10);
        bufp->chgBit(oldp+613,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+614,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+615,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                               >> 6U))),22);
        bufp->chgCData(oldp+616,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                        >> 4U))),2);
        bufp->chgBit(oldp+617,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                      >> 3U))));
        bufp->chgBit(oldp+618,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                      >> 2U))));
        bufp->chgBit(oldp+619,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                      >> 1U))));
        bufp->chgBit(oldp+620,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U])));
        bufp->chgBit(oldp+621,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+622,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+623,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+624,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                      >> 0x1cU))));
        bufp->chgSData(oldp+625,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                             << 2U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x13U] 
                                               >> 0x1eU)))),10);
        bufp->chgSData(oldp+626,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x13U] 
                                            >> 0x14U))),10);
        bufp->chgBit(oldp+627,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x13U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+628,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x13U] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+629,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x13U] 
                                                << 4U) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                                  >> 0x1cU)))),22);
        bufp->chgCData(oldp+630,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                        >> 0x1aU))),2);
        bufp->chgBit(oldp+631,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+632,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+633,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+634,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+635,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+636,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+637,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+638,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                      >> 0x12U))));
        bufp->chgSData(oldp+639,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
                                            >> 0x14U))),10);
        bufp->chgSData(oldp+640,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
                                            >> 0xaU))),10);
        bufp->chgBit(oldp+641,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
                                      >> 9U))));
        bufp->chgBit(oldp+642,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
                                      >> 8U))));
        bufp->chgIData(oldp+643,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
                                                << 0xeU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                                  >> 0x12U)))),22);
        bufp->chgCData(oldp+644,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                        >> 0x10U))),2);
        bufp->chgBit(oldp+645,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+646,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+647,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+648,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+649,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+650,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+651,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                      >> 9U))));
        bufp->chgBit(oldp+652,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                      >> 8U))));
        bufp->chgSData(oldp+653,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                            >> 0xaU))),10);
        bufp->chgSData(oldp+654,((0x3ffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U])),10);
        bufp->chgBit(oldp+655,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+656,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+657,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                               >> 8U))),22);
        bufp->chgCData(oldp+658,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                        >> 6U))),2);
        bufp->chgBit(oldp+659,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                      >> 5U))));
        bufp->chgBit(oldp+660,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                      >> 4U))));
        bufp->chgBit(oldp+661,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                      >> 3U))));
        bufp->chgBit(oldp+662,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                      >> 2U))));
        bufp->chgBit(oldp+663,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                      >> 1U))));
        bufp->chgBit(oldp+664,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U])));
        bufp->chgBit(oldp+665,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+666,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
                                      >> 0x1eU))));
        bufp->chgSData(oldp+667,((0x3ffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U])),10);
        bufp->chgSData(oldp+668,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x18U] 
                                  >> 0x16U)),10);
        bufp->chgBit(oldp+669,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x18U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+670,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x18U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+671,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x18U] 
                                                << 2U) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                                  >> 0x1eU)))),22);
        bufp->chgCData(oldp+672,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                        >> 0x1cU))),2);
        bufp->chgBit(oldp+673,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+674,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+675,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+676,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+677,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+678,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+679,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+680,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                      >> 0x14U))));
        bufp->chgSData(oldp+681,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x1aU] 
                                  >> 0x16U)),10);
        bufp->chgSData(oldp+682,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x1aU] 
                                            >> 0xcU))),10);
        bufp->chgBit(oldp+683,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x1aU] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+684,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x1aU] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+685,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x1aU] 
                                                << 0xcU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                                  >> 0x14U)))),22);
        bufp->chgCData(oldp+686,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                        >> 0x12U))),2);
        bufp->chgBit(oldp+687,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+688,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+689,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+690,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+691,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+692,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+693,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+694,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                      >> 0xaU))));
        bufp->chgSData(oldp+695,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                            >> 0xcU))),10);
        bufp->chgSData(oldp+696,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                            >> 2U))),10);
        bufp->chgBit(oldp+697,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                      >> 1U))));
        bufp->chgBit(oldp+698,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U])));
        bufp->chgIData(oldp+699,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                  >> 0xaU)),22);
        bufp->chgCData(oldp+700,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                        >> 8U))),2);
        bufp->chgBit(oldp+701,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+702,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+703,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+704,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+705,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+706,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+707,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+708,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U])));
        bufp->chgSData(oldp+709,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                            >> 2U))),10);
        bufp->chgSData(oldp+710,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                             << 8U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[2U] 
                                               >> 0x18U)))),10);
        bufp->chgBit(oldp+711,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[2U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+712,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[2U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+713,((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[2U])),22);
        bufp->chgCData(oldp+714,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                  >> 0x1eU)),2);
        bufp->chgBit(oldp+715,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+716,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+717,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+718,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+719,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+720,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+721,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+722,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                      >> 0x16U))));
        bufp->chgSData(oldp+723,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                             << 8U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[4U] 
                                               >> 0x18U)))),10);
        bufp->chgSData(oldp+724,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[4U] 
                                            >> 0xeU))),10);
        bufp->chgBit(oldp+725,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[4U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+726,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[4U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+727,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[4U] 
                                                << 0xaU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                                  >> 0x16U)))),22);
        bufp->chgCData(oldp+728,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                        >> 0x14U))),2);
        bufp->chgBit(oldp+729,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+730,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+731,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+732,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+733,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+734,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+735,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+736,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                      >> 0xcU))));
        bufp->chgSData(oldp+737,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[6U] 
                                            >> 0xeU))),10);
        bufp->chgSData(oldp+738,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[6U] 
                                            >> 4U))),10);
        bufp->chgBit(oldp+739,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[6U] 
                                      >> 3U))));
        bufp->chgBit(oldp+740,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[6U] 
                                      >> 2U))));
        bufp->chgIData(oldp+741,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[6U] 
                                                << 0x14U) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                                  >> 0xcU)))),22);
        bufp->chgCData(oldp+742,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                        >> 0xaU))),2);
        bufp->chgBit(oldp+743,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                      >> 9U))));
        bufp->chgBit(oldp+744,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                      >> 8U))));
        bufp->chgBit(oldp+745,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                      >> 7U))));
        bufp->chgBit(oldp+746,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                      >> 6U))));
        bufp->chgBit(oldp+747,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                      >> 5U))));
        bufp->chgBit(oldp+748,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                      >> 4U))));
        bufp->chgBit(oldp+749,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                      >> 3U))));
        bufp->chgBit(oldp+750,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                      >> 2U))));
        bufp->chgCData(oldp+751,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff),3);
        bufp->chgBit(oldp+752,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff));
        bufp->chgBit(oldp+753,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_next));
        bufp->chgIData(oldp+754,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                  >> 0xaU)),22);
        bufp->chgCData(oldp+755,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                        >> 8U))),2);
        bufp->chgBit(oldp+756,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                      >> 7U))));
        bufp->chgBit(oldp+757,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                      >> 6U))));
        bufp->chgBit(oldp+758,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                      >> 5U))));
        bufp->chgBit(oldp+759,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                      >> 4U))));
        bufp->chgBit(oldp+760,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+761,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+762,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+763,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff)));
        bufp->chgIData(oldp+764,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff),32);
        bufp->chgBit(oldp+765,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_valid_ff));
        bufp->chgBit(oldp+766,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_ff));
        bufp->chgBit(oldp+767,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__gmap_bit_ff));
        bufp->chgBit(oldp+768,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__gmap_bit_next));
        bufp->chgIData(oldp+769,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff),32);
        bufp->chgQData(oldp+770,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_ff),34);
        bufp->chgBit(oldp+772,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_ff));
        bufp->chgBit(oldp+773,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
        bufp->chgCData(oldp+774,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
        bufp->chgBit(oldp+775,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff))));
        bufp->chgBit(oldp+776,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_ff));
        bufp->chgIData(oldp+777,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_addr_ff),32);
        bufp->chgBit(oldp+778,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
        bufp->chgBit(oldp+779,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_reserve_ff));
        bufp->chgBit(oldp+780,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_ff));
        bufp->chgCData(oldp+781,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state),3);
        bufp->chgBit(oldp+782,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_exc_req));
        bufp->chgIData(oldp+783,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_ff),32);
        bufp->chgIData(oldp+784,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff),32);
        bufp->chgIData(oldp+785,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff),32);
        bufp->chgIData(oldp+786,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff),32);
        bufp->chgIData(oldp+787,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff),32);
        bufp->chgIData(oldp+788,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_ff),32);
        bufp->chgIData(oldp+789,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                  >> 4U)),28);
        bufp->chgBit(oldp+790,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+791,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+792,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+793,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff)));
        bufp->chgBit(oldp+794,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                >> 0x1fU)));
        bufp->chgCData(oldp+795,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                           >> 0x17U))),8);
        bufp->chgBit(oldp+796,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x16U))));
        bufp->chgBit(oldp+797,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x15U))));
        bufp->chgBit(oldp+798,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x14U))));
        bufp->chgBit(oldp+799,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x13U))));
        bufp->chgBit(oldp+800,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x12U))));
        bufp->chgBit(oldp+801,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 0x11U))));
        bufp->chgCData(oldp+802,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0xfU))),2);
        bufp->chgCData(oldp+803,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0xdU))),2);
        bufp->chgCData(oldp+804,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0xbU))),2);
        bufp->chgCData(oldp+805,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 9U))),2);
        bufp->chgBit(oldp+806,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 8U))));
        bufp->chgBit(oldp+807,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 7U))));
        bufp->chgBit(oldp+808,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 6U))));
        bufp->chgBit(oldp+809,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 5U))));
        bufp->chgBit(oldp+810,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 4U))));
        bufp->chgBit(oldp+811,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+812,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+813,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+814,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff)));
        bufp->chgIData(oldp+815,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_ff),32);
        bufp->chgIData(oldp+816,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_ff),32);
        bufp->chgSData(oldp+817,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                  >> 0x11U)),15);
        bufp->chgBit(oldp+818,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0x10U))));
        bufp->chgCData(oldp+819,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+820,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0xbU))));
        bufp->chgBit(oldp+821,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 0xaU))));
        bufp->chgBit(oldp+822,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 9U))));
        bufp->chgBit(oldp+823,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 8U))));
        bufp->chgBit(oldp+824,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 7U))));
        bufp->chgBit(oldp+825,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 6U))));
        bufp->chgBit(oldp+826,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 5U))));
        bufp->chgBit(oldp+827,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 4U))));
        bufp->chgBit(oldp+828,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+829,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+830,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+831,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff)));
        bufp->chgIData(oldp+832,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff 
                                  >> 2U)),30);
        bufp->chgCData(oldp+833,((3U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff)),2);
        bufp->chgIData(oldp+834,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff),32);
        bufp->chgIData(oldp+835,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff),32);
        bufp->chgIData(oldp+836,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_ff),32);
        bufp->chgIData(oldp+837,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff),32);
        bufp->chgSData(oldp+838,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                  >> 0x11U)),15);
        bufp->chgBit(oldp+839,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0x10U))));
        bufp->chgCData(oldp+840,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+841,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0xbU))));
        bufp->chgBit(oldp+842,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 0xaU))));
        bufp->chgBit(oldp+843,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 9U))));
        bufp->chgBit(oldp+844,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 8U))));
        bufp->chgBit(oldp+845,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 7U))));
        bufp->chgBit(oldp+846,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 6U))));
        bufp->chgBit(oldp+847,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 5U))));
        bufp->chgBit(oldp+848,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 4U))));
        bufp->chgBit(oldp+849,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 3U))));
        bufp->chgBit(oldp+850,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 2U))));
        bufp->chgBit(oldp+851,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                      >> 1U))));
        bufp->chgBit(oldp+852,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff)));
        bufp->chgIData(oldp+853,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_ff 
                                  >> 2U)),30);
        bufp->chgCData(oldp+854,((3U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_ff)),2);
        bufp->chgIData(oldp+855,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_ff),32);
        bufp->chgIData(oldp+856,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_ff),32);
        bufp->chgIData(oldp+857,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scause_ff),32);
        bufp->chgIData(oldp+858,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_ff),32);
        bufp->chgBit(oldp+859,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff 
                                >> 0x1fU)));
        bufp->chgSData(oldp+860,((0x1ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff 
                                            >> 0x16U))),9);
        bufp->chgIData(oldp+861,((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff)),22);
        bufp->chgIData(oldp+862,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_ff),32);
        bufp->chgCData(oldp+863,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
        bufp->chgBit(oldp+864,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_irq_req));
        bufp->chgBit(oldp+865,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__timer_irq_ff));
        bufp->chgBit(oldp+866,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq0_ff));
        bufp->chgBit(oldp+867,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq1_ff));
        bufp->chgBit(oldp+868,((((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)) 
                                 & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                    >> 3U)) | (3U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)))));
        bufp->chgBit(oldp+869,((((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)) 
                                 & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                    >> 1U)) | (0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)))));
        bufp->chgBit(oldp+870,((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff))));
        bufp->chgBit(oldp+871,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_ff));
        bufp->chgBit(oldp+872,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__en_vaddr));
        bufp->chgIData(oldp+873,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_low_ff),32);
        bufp->chgIData(oldp+874,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_high_ff),32);
        bufp->chgBit(oldp+875,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__seip_irq_req));
        bufp->chgBit(oldp+876,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__stip_irq_req));
        bufp->chgBit(oldp+877,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ssip_irq_req));
        bufp->chgCData(oldp+878,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_ff),4);
        bufp->chgBit(oldp+879,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff));
        bufp->chgBit(oldp+880,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__mul_stall_ff));
        bufp->chgBit(oldp+881,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__mul_stall_next));
        bufp->chgCData(oldp+882,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff),4);
        bufp->chgIData(oldp+883,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_ff),32);
        bufp->chgIData(oldp+884,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_ff),32);
        bufp->chgBit(oldp+885,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_sign_ff));
        bufp->chgBit(oldp+886,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_sign_ff));
        bufp->chgBit(oldp+887,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff))));
        bufp->chgBit(oldp+888,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_ff));
        bufp->chgQData(oldp+889,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult),64);
        bufp->chgQData(oldp+891,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult_ss),64);
        bufp->chgIData(oldp+893,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_ff 
                                          >> 1U))),32);
        bufp->chgBit(oldp+894,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_ff))));
        bufp->chgCData(oldp+895,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_ff),2);
        bufp->chgCData(oldp+896,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_ff),2);
        bufp->chgCData(oldp+897,(vlSelf->pcore_tb__DOT__dut__DOT____Vcellinp__plic_top_module__irq_src_i),2);
        bufp->chgCData(oldp+898,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff) 
                                   << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff))),2);
        bufp->chgCData(oldp+899,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff),2);
        bufp->chgCData(oldp+900,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff))),3);
        bufp->chgCData(oldp+901,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+902,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff))),3);
        bufp->chgCData(oldp+903,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+904,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff))),2);
        bufp->chgCData(oldp+905,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+906,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i))),2);
        bufp->chgCData(oldp+907,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+908,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
        bufp->chgCData(oldp+909,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__prio_th),3);
        bufp->chgBit(oldp+910,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_next));
        bufp->chgCData(oldp+911,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
        bufp->chgCData(oldp+912,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
        bufp->chgCData(oldp+913,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__prio_th),3);
        bufp->chgBit(oldp+914,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_next));
        bufp->chgCData(oldp+915,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
        bufp->chgCData(oldp+916,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff),2);
        bufp->chgCData(oldp+917,(vlSelf->pcore_tb__DOT__dut__DOT____Vcellinp__plic_top_module__irq_src_i),2);
        bufp->chgCData(oldp+918,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_src_ff),2);
        bufp->chgCData(oldp+919,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_default),2);
        bufp->chgCData(oldp+920,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_id),2);
        bufp->chgCData(oldp+921,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode),2);
        bufp->chgCData(oldp+922,((0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff))),8);
        bufp->chgCData(oldp+923,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff) 
                                           >> 8U))),8);
        bufp->chgCData(oldp+924,((0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff))),8);
        bufp->chgCData(oldp+925,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff) 
                                           >> 8U))),8);
        bufp->chgBit(oldp+926,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count))));
        bufp->chgBit(oldp+927,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count))));
        bufp->chgBit(oldp+928,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count))));
        bufp->chgCData(oldp+929,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_data),8);
        bufp->chgCData(oldp+930,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_data),8);
        bufp->chgBit(oldp+931,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_write));
        bufp->chgBit(oldp+932,(((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count)) 
                                > (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff))));
        bufp->chgBit(oldp+933,(((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count)) 
                                < (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff))));
        bufp->chgCData(oldp+934,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff),3);
        bufp->chgCData(oldp+935,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff),3);
        bufp->chgSData(oldp+936,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__c2t_delay),9);
        bufp->chgSData(oldp+937,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__t2c_delay),9);
        bufp->chgCData(oldp+938,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_intercs),8);
        bufp->chgCData(oldp+939,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_interfr),8);
        bufp->chgCData(oldp+940,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up),2);
        bufp->chgCData(oldp+941,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_slave_sel),2);
        bufp->chgCData(oldp+942,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_shift_data),8);
        bufp->chgCData(oldp+943,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data),8);
        bufp->chgCData(oldp+944,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count),4);
        bufp->chgCData(oldp+945,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count),4);
        bufp->chgCData(oldp+946,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__reg_tx_data),8);
        bufp->chgBit(oldp+947,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count))));
        bufp->chgCData(oldp+948,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[0]),8);
        bufp->chgCData(oldp+949,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[1]),8);
        bufp->chgCData(oldp+950,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[2]),8);
        bufp->chgCData(oldp+951,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[3]),8);
        bufp->chgCData(oldp+952,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[4]),8);
        bufp->chgCData(oldp+953,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[5]),8);
        bufp->chgCData(oldp+954,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[6]),8);
        bufp->chgCData(oldp+955,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[7]),8);
        bufp->chgCData(oldp+956,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr),3);
        bufp->chgCData(oldp+957,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr),3);
        bufp->chgIData(oldp+958,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+959,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[0]),8);
        bufp->chgCData(oldp+960,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[1]),8);
        bufp->chgCData(oldp+961,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[2]),8);
        bufp->chgCData(oldp+962,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[3]),8);
        bufp->chgCData(oldp+963,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[4]),8);
        bufp->chgCData(oldp+964,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[5]),8);
        bufp->chgCData(oldp+965,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[6]),8);
        bufp->chgCData(oldp+966,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[7]),8);
        bufp->chgCData(oldp+967,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr),3);
        bufp->chgCData(oldp+968,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr),3);
        bufp->chgIData(oldp+969,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__unnamedblk1__DOT__i),32);
        bufp->chgSData(oldp+970,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff),16);
        bufp->chgSData(oldp+971,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff),16);
        bufp->chgCData(oldp+972,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff),2);
        bufp->chgCData(oldp+973,(((((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count)) 
                                    > (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)) 
                                   << 1U) | ((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count)) 
                                             < (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)))),2);
        bufp->chgCData(oldp+974,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff),2);
        bufp->chgBit(oldp+975,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_valid_ff));
        bufp->chgBit(oldp+976,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_ff))));
        bufp->chgBit(oldp+977,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_ff));
        bufp->chgBit(oldp+978,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__frame_err_ff));
        bufp->chgCData(oldp+979,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_ff),8);
        bufp->chgCData(oldp+980,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_tx_ff),8);
        bufp->chgCData(oldp+981,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rx_ff),8);
        bufp->chgCData(oldp+982,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_ff)
                                   ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_ff)
                                   : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rx_ff))),8);
        bufp->chgCData(oldp+983,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_ff),8);
        bufp->chgIData(oldp+984,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_txctrl_ff),20);
        bufp->chgIData(oldp+985,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rxctrl_ff),20);
        bufp->chgCData(oldp+986,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_ff),8);
        bufp->chgCData(oldp+987,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_int_mask_ff),8);
        bufp->chgCData(oldp+988,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_ff),4);
        bufp->chgCData(oldp+989,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_next),4);
        bufp->chgBit(oldp+990,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_ff))));
        bufp->chgBit(oldp+991,((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_ff))));
        bufp->chgBit(oldp+992,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_mid_point));
        bufp->chgCData(oldp+993,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_ff),8);
        bufp->chgCData(oldp+994,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_next),8);
        bufp->chgCData(oldp+995,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_ff),8);
        bufp->chgCData(oldp+996,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_next),8);
        bufp->chgCData(oldp+997,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff),2);
        bufp->chgCData(oldp+998,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_ff),8);
        bufp->chgCData(oldp+999,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_next),8);
        bufp->chgCData(oldp+1000,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_ff),4);
        bufp->chgCData(oldp+1001,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_next),4);
        bufp->chgSData(oldp+1002,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__shifter_ff),9);
        bufp->chgSData(oldp+1003,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__shifter_next),9);
        bufp->chgBit(oldp+1004,((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_ff))));
        bufp->chgBit(oldp+1005,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_ff))));
        bufp->chgCData(oldp+1006,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_ff),2);
        bufp->chgCData(oldp+1007,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_next),2);
        bufp->chgBit(oldp+1008,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_valid_ff));
        bufp->chgBit(oldp+1009,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_ff))));
        bufp->chgBit(oldp+1010,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_ff));
        bufp->chgBit(oldp+1011,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__frame_err_ff));
        bufp->chgCData(oldp+1012,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_ff),8);
        bufp->chgCData(oldp+1013,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_tx_ff),8);
        bufp->chgCData(oldp+1014,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_rx_ff),8);
        bufp->chgCData(oldp+1015,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_ff)
                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_ff)
                                    : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_rx_ff))),8);
        bufp->chgCData(oldp+1016,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_baud_ff),8);
        bufp->chgCData(oldp+1017,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lctrl_ff),8);
        bufp->chgCData(oldp+1018,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_ie_ff),8);
        bufp->chgCData(oldp+1019,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_ff),8);
        bufp->chgCData(oldp+1020,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_next),8);
        bufp->chgCData(oldp+1021,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_scratch_ff),8);
        bufp->chgCData(oldp+1022,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_ff),4);
        bufp->chgCData(oldp+1023,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_next),4);
        bufp->chgBit(oldp+1024,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_ff))));
        bufp->chgBit(oldp+1025,((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_ff))));
        bufp->chgBit(oldp+1026,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_mid_point));
        bufp->chgCData(oldp+1027,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_ff),8);
        bufp->chgCData(oldp+1028,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_next),8);
        bufp->chgCData(oldp+1029,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_ff),8);
        bufp->chgCData(oldp+1030,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_next),8);
        bufp->chgCData(oldp+1031,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff),2);
        bufp->chgCData(oldp+1032,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_ff),8);
        bufp->chgCData(oldp+1033,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_next),8);
        bufp->chgCData(oldp+1034,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_ff),4);
        bufp->chgCData(oldp+1035,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_next),4);
        bufp->chgSData(oldp+1036,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__shifter_ff),9);
        bufp->chgSData(oldp+1037,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__shifter_next),9);
        bufp->chgBit(oldp+1038,((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_ff))));
        bufp->chgBit(oldp+1039,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_ff))));
        bufp->chgCData(oldp+1040,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_ff),2);
        bufp->chgCData(oldp+1041,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_next),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+1042,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req)
                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code)
                                    : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req)
                                        ? (0x80000000U 
                                           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code))
                                        : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scause_ff))),32);
        bufp->chgBit(oldp+1043,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_stall_i)
                                        ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_sign_ff)
                                        : (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                           >> 0x1fU)))));
        bufp->chgBit(oldp+1044,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_stall_i)
                                        ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_sign_ff)
                                        : (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                           >> 0x1fU)))));
        bufp->chgBit(oldp+1045,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff) 
                                          >> 3U) & 
                                         (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_ff) 
                                             | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_next)))))));
        bufp->chgCData(oldp+1046,((3U & ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x19U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 7U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff)))),2);
        bufp->chgCData(oldp+1047,((3U & ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x19U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 7U))
                                          : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                             >> 2U)))),2);
        bufp->chgCData(oldp+1048,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csid)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_id)))),2);
        bufp->chgCData(oldp+1049,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csdef)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_default)))),2);
        bufp->chgCData(oldp+1050,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csmode)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode)))),2);
        bufp->chgSData(oldp+1051,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del0)
                                    ? (1U | ((0xff00U 
                                              & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 >> 0xeU)) 
                                             | (0xfeU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                   >> 6U))))
                                    : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff))),16);
        bufp->chgSData(oldp+1052,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del1)
                                    ? ((0xff00U & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                   >> 0xeU)) 
                                       | (0xffU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                   >> 6U)))
                                    : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff))),16);
        bufp->chgCData(oldp+1053,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txdata)
                                             ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 << 0x1aU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                   >> 6U))
                                             : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_data)))),8);
        bufp->chgCData(oldp+1054,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txmark)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)))),3);
        bufp->chgCData(oldp+1055,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_rxmark)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)))),3);
        bufp->chgCData(oldp+1056,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ie)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)))),2);
        bufp->chgCData(oldp+1057,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_reg_wr_flag)
                                             ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 << 0x1aU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                   >> 6U))
                                             : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_tx_ff)))),8);
        bufp->chgCData(oldp+1058,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__baud_reg_wr_flag)
                                             ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 << 0x1aU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                   >> 6U))
                                             : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_ff)))),8);
        bufp->chgIData(oldp+1059,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__txctrl_reg_wr_flag)
                                    ? (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                  >> 6U))
                                    : vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_txctrl_ff)),20);
        bufp->chgIData(oldp+1060,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__rxctrl_reg_wr_flag)
                                    ? (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                  >> 6U))
                                    : vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rxctrl_ff)),20);
        bufp->chgCData(oldp+1061,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__int_mask_reg_wr_flag)
                                             ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 << 0x1aU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                   >> 6U))
                                             : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_int_mask_ff)))),8);
        bufp->chgCData(oldp+1062,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_reg_wr_flag)
                                             ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 << 0x1aU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                   >> 6U))
                                             : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_tx_ff)))),8);
        bufp->chgCData(oldp+1063,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__lctrl_reg_wr_flag)
                                             ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 << 0x1aU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                   >> 6U))
                                             : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lctrl_ff)))),8);
        bufp->chgCData(oldp+1064,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__ie_reg_wr_flag)
                                             ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 << 0x1aU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                   >> 6U))
                                             : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_ie_ff)))),8);
        bufp->chgCData(oldp+1065,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__scratch_reg_wr_flag)
                                             ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 << 0x1aU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                   >> 6U))
                                             : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_scratch_ff)))),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+1066,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                           >> 2U))),32);
        bufp->chgBit(oldp+1067,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                               >> 1U)))));
        bufp->chgQData(oldp+1068,((0x3ffffffffULL & 
                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                    >> 2U))),34);
        bufp->chgBit(oldp+1070,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                               >> 1U)))));
        bufp->chgBit(oldp+1071,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if))));
        bufp->chgBit(oldp+1072,((1U == (0xfffffU & (IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                            >> 0xeU))))));
        bufp->chgBit(oldp+1073,((1U != (0xfffffU & (IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                            >> 0xeU))))));
        bufp->chgBit(oldp+1074,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                               >> 1U)))));
        bufp->chgIData(oldp+1075,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                  >> 5U)))
                                    ? ((1U & (IData)(
                                                     (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                      >> 4U)))
                                        ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[3U]
                                        : vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[2U])
                                    : ((1U & (IData)(
                                                     (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                      >> 4U)))
                                        ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[1U]
                                        : vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[0U]))),32);
        bufp->chgIData(oldp+1076,((0x1fffffU & (IData)(
                                                       (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                        >> 0xdU)))),21);
        bufp->chgCData(oldp+1077,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                 >> 4U)))),2);
        bufp->chgCData(oldp+1078,((0x7fU & (IData)(
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                    >> 6U)))),7);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+1079,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__conc_32_misallign),32);
        bufp->chgIData(oldp+1080,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0]),32);
        bufp->chgIData(oldp+1081,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[1]),32);
        bufp->chgIData(oldp+1082,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[2]),32);
        bufp->chgIData(oldp+1083,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[3]),32);
        bufp->chgIData(oldp+1084,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[4]),32);
        bufp->chgIData(oldp+1085,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[5]),32);
        bufp->chgIData(oldp+1086,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[6]),32);
        bufp->chgIData(oldp+1087,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[7]),32);
        bufp->chgIData(oldp+1088,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[8]),32);
        bufp->chgIData(oldp+1089,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[9]),32);
        bufp->chgIData(oldp+1090,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[10]),32);
        bufp->chgIData(oldp+1091,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[11]),32);
        bufp->chgIData(oldp+1092,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[12]),32);
        bufp->chgIData(oldp+1093,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[13]),32);
        bufp->chgIData(oldp+1094,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[14]),32);
        bufp->chgIData(oldp+1095,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[15]),32);
        bufp->chgIData(oldp+1096,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[16]),32);
        bufp->chgIData(oldp+1097,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[17]),32);
        bufp->chgIData(oldp+1098,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[18]),32);
        bufp->chgIData(oldp+1099,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[19]),32);
        bufp->chgIData(oldp+1100,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[20]),32);
        bufp->chgIData(oldp+1101,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[21]),32);
        bufp->chgIData(oldp+1102,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[22]),32);
        bufp->chgIData(oldp+1103,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[23]),32);
        bufp->chgIData(oldp+1104,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[24]),32);
        bufp->chgIData(oldp+1105,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[25]),32);
        bufp->chgIData(oldp+1106,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[26]),32);
        bufp->chgIData(oldp+1107,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[27]),32);
        bufp->chgIData(oldp+1108,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[28]),32);
        bufp->chgIData(oldp+1109,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[29]),32);
        bufp->chgIData(oldp+1110,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[30]),32);
        bufp->chgIData(oldp+1111,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[31]),32);
        bufp->chgBit(oldp+1112,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__rx_pin_ff));
        bufp->chgBit(oldp+1113,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__rx_pin_ff));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+1114,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2csr 
                                           >> 1U))),32);
        bufp->chgBit(oldp+1115,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2csr))));
        bufp->chgQData(oldp+1116,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+1118,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dcache_flush_req));
        bufp->chgBit(oldp+1119,((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                >> 4U)))));
        bufp->chgCData(oldp+1120,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+1121,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                         >> 8U))),2);
        bufp->chgCData(oldp+1122,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                            >> 0x10U))),5);
        bufp->chgBit(oldp+1123,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 3U))));
        bufp->chgCData(oldp+1124,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                            >> 0x10U))),5);
        bufp->chgCData(oldp+1125,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                         >> 0xdU))),3);
        bufp->chgCData(oldp+1126,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+1127,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                         >> 8U))),2);
        bufp->chgCData(oldp+1128,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                           >> 4U))),4);
        bufp->chgBit(oldp+1129,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 3U))));
        bufp->chgBit(oldp+1130,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 2U))));
        bufp->chgBit(oldp+1131,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 1U))));
        bufp->chgBit(oldp+1132,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)));
        bufp->chgCData(oldp+1133,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                           >> 4U))),4);
        bufp->chgBit(oldp+1134,((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                >> 4U)))));
        bufp->chgBit(oldp+1135,((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                >> 4U)))));
        bufp->chgIData(oldp+1136,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_result),32);
        bufp->chgBit(oldp+1137,((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                >> 4U)))));
        bufp->chgBit(oldp+1138,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1139,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 8U))));
        bufp->chgBit(oldp+1140,((IData)((0U != (0x500U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)))));
        bufp->chgBit(oldp+1141,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard));
        bufp->chgBit(oldp+1142,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+1143,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellinp__icache_controller_module__if2icache_req_kill_i));
        bufp->chgBit(oldp+1144,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__icache_flush_req));
        bufp->chgIData(oldp+1145,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if 
                                           >> 1U))),32);
        bufp->chgBit(oldp+1146,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if))));
        bufp->chgIData(oldp+1147,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mmu 
                                           >> 1U))),32);
        bufp->chgBit(oldp+1148,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mmu))));
        bufp->chgIData(oldp+1149,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                    << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                 >> 4U))),32);
        bufp->chgIData(oldp+1150,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                    << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                 >> 4U))),32);
        bufp->chgCData(oldp+1151,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                         >> 2U))),2);
        bufp->chgBit(oldp+1152,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1153,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U])));
        bufp->chgIData(oldp+1154,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                           >> 1U))),32);
        bufp->chgBit(oldp+1155,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu))));
        bufp->chgIData(oldp+1156,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                    << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                 >> 6U))),32);
        bufp->chgIData(oldp+1157,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 >> 6U))),32);
        bufp->chgCData(oldp+1158,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                           >> 2U))),4);
        bufp->chgBit(oldp+1159,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1160,((1U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])));
        bufp->chgBit(oldp+1161,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dmem_sel));
        bufp->chgBit(oldp+1162,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_sel));
        bufp->chgBit(oldp+1163,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__clint_sel));
        bufp->chgBit(oldp+1164,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__plic_sel));
        bufp->chgBit(oldp+1165,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__bmem_sel));
        bufp->chgBit(oldp+1166,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_ns_sel));
        bufp->chgBit(oldp+1167,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__spi_sel));
        bufp->chgIData(oldp+1168,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2dbus 
                                           >> 1U))),32);
        bufp->chgBit(oldp+1169,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2dbus))));
        bufp->chgIData(oldp+1170,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 >> 6U))),32);
        bufp->chgSData(oldp+1171,((0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 6U))),16);
        bufp->chgBit(oldp+1172,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_req));
        bufp->chgBit(oldp+1173,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__w_req));
        bufp->chgQData(oldp+1174,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_next),64);
        bufp->chgBit(oldp+1176,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_lo_wr_flag));
        bufp->chgBit(oldp+1177,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_hi_wr_flag));
        bufp->chgBit(oldp+1178,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_lo_wr_flag));
        bufp->chgBit(oldp+1179,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_hi_wr_flag));
        bufp->chgBit(oldp+1180,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
        bufp->chgBit(oldp+1181,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT____VdfgTmp_h1ec82566__0));
        bufp->chgBit(oldp+1182,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__st_req));
        bufp->chgQData(oldp+1183,((0x3ffffffffULL & 
                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                                    >> 3U))),34);
        bufp->chgBit(oldp+1185,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                                               >> 2U)))));
        bufp->chgBit(oldp+1186,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                                               >> 1U)))));
        bufp->chgBit(oldp+1187,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu))));
        bufp->chgBit(oldp+1188,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgTmp_hd5ca5221__0));
        bufp->chgBit(oldp+1189,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                               >> 1U)))));
        bufp->chgIData(oldp+1190,((0x3fffffU & (IData)(
                                                       (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                                        >> 0xcU)))),22);
        bufp->chgCData(oldp+1191,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                                 >> 0xaU)))),2);
        bufp->chgBit(oldp+1192,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                               >> 9U)))));
        bufp->chgBit(oldp+1193,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                               >> 8U)))));
        bufp->chgBit(oldp+1194,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                               >> 7U)))));
        bufp->chgBit(oldp+1195,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                               >> 6U)))));
        bufp->chgBit(oldp+1196,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                               >> 5U)))));
        bufp->chgBit(oldp+1197,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                               >> 4U)))));
        bufp->chgBit(oldp+1198,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                               >> 3U)))));
        bufp->chgBit(oldp+1199,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                               >> 2U)))));
        bufp->chgBit(oldp+1200,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                               >> 1U)))));
        bufp->chgBit(oldp+1201,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu))));
        bufp->chgBit(oldp+1202,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ld_page_fault));
        bufp->chgBit(oldp+1203,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__st_page_fault));
        bufp->chgBit(oldp+1204,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__dtlb_update));
        bufp->chgCData(oldp+1205,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index),4);
        bufp->chgSData(oldp+1206,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                             >> 0xcU))),10);
        bufp->chgSData(oldp+1207,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                             >> 2U))),10);
        bufp->chgBit(oldp+1208,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1209,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U])));
        bufp->chgIData(oldp+1210,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                   >> 0xaU)),22);
        bufp->chgCData(oldp+1211,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                         >> 8U))),2);
        bufp->chgBit(oldp+1212,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1213,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1214,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1215,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1216,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                       >> 3U))));
        bufp->chgBit(oldp+1217,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1218,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1219,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U])));
        bufp->chgSData(oldp+1220,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                             >> 2U))),10);
        bufp->chgSData(oldp+1221,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                              << 8U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[2U] 
                                                >> 0x18U)))),10);
        bufp->chgBit(oldp+1222,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[2U] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1223,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[2U] 
                                       >> 0x16U))));
        bufp->chgIData(oldp+1224,((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[2U])),22);
        bufp->chgCData(oldp+1225,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                   >> 0x1eU)),2);
        bufp->chgBit(oldp+1226,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1227,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1228,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1229,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1230,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1231,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1232,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1233,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x16U))));
        bufp->chgSData(oldp+1234,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                              << 8U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[4U] 
                                                >> 0x18U)))),10);
        bufp->chgSData(oldp+1235,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[4U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+1236,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[4U] 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1237,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[4U] 
                                       >> 0xcU))));
        bufp->chgIData(oldp+1238,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                                   >> 0x16U)))),22);
        bufp->chgCData(oldp+1239,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                         >> 0x14U))),2);
        bufp->chgBit(oldp+1240,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1241,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1242,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1243,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1244,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1245,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1246,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1247,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                       >> 0xcU))));
        bufp->chgSData(oldp+1248,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                             >> 0xeU))),10);
        bufp->chgSData(oldp+1249,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                             >> 4U))),10);
        bufp->chgBit(oldp+1250,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                       >> 3U))));
        bufp->chgBit(oldp+1251,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                       >> 2U))));
        bufp->chgIData(oldp+1252,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                                 << 0x14U) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                                   >> 0xcU)))),22);
        bufp->chgCData(oldp+1253,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                         >> 0xaU))),2);
        bufp->chgBit(oldp+1254,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                       >> 9U))));
        bufp->chgBit(oldp+1255,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1256,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1257,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1258,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1259,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1260,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                       >> 3U))));
        bufp->chgBit(oldp+1261,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                       >> 2U))));
        bufp->chgSData(oldp+1262,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                             >> 4U))),10);
        bufp->chgSData(oldp+1263,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                              << 6U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[7U] 
                                                >> 0x1aU)))),10);
        bufp->chgBit(oldp+1264,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[7U] 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1265,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[7U] 
                                       >> 0x18U))));
        bufp->chgIData(oldp+1266,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[7U] 
                                                >> 2U))),22);
        bufp->chgCData(oldp+1267,((3U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[7U])),2);
        bufp->chgBit(oldp+1268,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1269,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1270,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1271,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1272,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1273,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1274,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1275,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                       >> 0x18U))));
        bufp->chgSData(oldp+1276,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                              << 6U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[9U] 
                                                >> 0x1aU)))),10);
        bufp->chgSData(oldp+1277,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[9U] 
                                             >> 0x10U))),10);
        bufp->chgBit(oldp+1278,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[9U] 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1279,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[9U] 
                                       >> 0xeU))));
        bufp->chgIData(oldp+1280,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[9U] 
                                                 << 8U) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                                   >> 0x18U)))),22);
        bufp->chgCData(oldp+1281,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                         >> 0x16U))),2);
        bufp->chgBit(oldp+1282,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1283,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1284,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1285,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1286,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1287,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1288,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1289,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                       >> 0xeU))));
        bufp->chgSData(oldp+1290,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                             >> 0x10U))),10);
        bufp->chgSData(oldp+1291,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                             >> 6U))),10);
        bufp->chgBit(oldp+1292,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                       >> 5U))));
        bufp->chgBit(oldp+1293,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                       >> 4U))));
        bufp->chgIData(oldp+1294,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                                 << 0x12U) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                                   >> 0xeU)))),22);
        bufp->chgCData(oldp+1295,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                         >> 0xcU))),2);
        bufp->chgBit(oldp+1296,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1297,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1298,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                       >> 9U))));
        bufp->chgBit(oldp+1299,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                       >> 8U))));
        bufp->chgBit(oldp+1300,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                       >> 7U))));
        bufp->chgBit(oldp+1301,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                       >> 6U))));
        bufp->chgBit(oldp+1302,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                       >> 5U))));
        bufp->chgBit(oldp+1303,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                       >> 4U))));
        bufp->chgSData(oldp+1304,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                             >> 6U))),10);
        bufp->chgSData(oldp+1305,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                              << 4U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU] 
                                                >> 0x1cU)))),10);
        bufp->chgBit(oldp+1306,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU] 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1307,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU] 
                                       >> 0x1aU))));
        bufp->chgIData(oldp+1308,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU] 
                                                >> 4U))),22);
        bufp->chgCData(oldp+1309,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU] 
                                         >> 2U))),2);
        bufp->chgBit(oldp+1310,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU] 
                                       >> 1U))));
        bufp->chgBit(oldp+1311,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU])));
        bufp->chgBit(oldp+1312,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1313,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1314,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1315,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1316,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1317,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                       >> 0x1aU))));
        bufp->chgSData(oldp+1318,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                              << 4U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xeU] 
                                                >> 0x1cU)))),10);
        bufp->chgSData(oldp+1319,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xeU] 
                                             >> 0x12U))),10);
        bufp->chgBit(oldp+1320,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xeU] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1321,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xeU] 
                                       >> 0x10U))));
        bufp->chgIData(oldp+1322,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xeU] 
                                                 << 6U) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                                   >> 0x1aU)))),22);
        bufp->chgCData(oldp+1323,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                         >> 0x18U))),2);
        bufp->chgBit(oldp+1324,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1325,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1326,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1327,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1328,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1329,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1330,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1331,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                       >> 0x10U))));
        bufp->chgSData(oldp+1332,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                             >> 0x12U))),10);
        bufp->chgSData(oldp+1333,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                             >> 8U))),10);
        bufp->chgBit(oldp+1334,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1335,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                       >> 6U))));
        bufp->chgIData(oldp+1336,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                                 << 0x10U) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                                   >> 0x10U)))),22);
        bufp->chgCData(oldp+1337,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                         >> 0xeU))),2);
        bufp->chgBit(oldp+1338,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1339,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1340,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1341,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1342,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                       >> 9U))));
        bufp->chgBit(oldp+1343,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                       >> 8U))));
        bufp->chgBit(oldp+1344,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                       >> 7U))));
        bufp->chgBit(oldp+1345,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                       >> 6U))));
        bufp->chgSData(oldp+1346,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                             >> 8U))),10);
        bufp->chgSData(oldp+1347,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                              << 2U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                                >> 0x1eU)))),10);
        bufp->chgBit(oldp+1348,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1349,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                       >> 0x1cU))));
        bufp->chgIData(oldp+1350,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                                >> 6U))),22);
        bufp->chgCData(oldp+1351,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                         >> 4U))),2);
        bufp->chgBit(oldp+1352,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                       >> 3U))));
        bufp->chgBit(oldp+1353,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1354,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1355,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U])));
        bufp->chgBit(oldp+1356,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1357,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1358,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1359,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                       >> 0x1cU))));
        bufp->chgSData(oldp+1360,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                              << 2U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x13U] 
                                                >> 0x1eU)))),10);
        bufp->chgSData(oldp+1361,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x13U] 
                                             >> 0x14U))),10);
        bufp->chgBit(oldp+1362,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x13U] 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1363,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x13U] 
                                       >> 0x12U))));
        bufp->chgIData(oldp+1364,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x13U] 
                                                 << 4U) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                                   >> 0x1cU)))),22);
        bufp->chgCData(oldp+1365,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                         >> 0x1aU))),2);
        bufp->chgBit(oldp+1366,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1367,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1368,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1369,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1370,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1371,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1372,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1373,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                       >> 0x12U))));
        bufp->chgSData(oldp+1374,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
                                             >> 0x14U))),10);
        bufp->chgSData(oldp+1375,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
                                             >> 0xaU))),10);
        bufp->chgBit(oldp+1376,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
                                       >> 9U))));
        bufp->chgBit(oldp+1377,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
                                       >> 8U))));
        bufp->chgIData(oldp+1378,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
                                                 << 0xeU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                                   >> 0x12U)))),22);
        bufp->chgCData(oldp+1379,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                         >> 0x10U))),2);
        bufp->chgBit(oldp+1380,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1381,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1382,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1383,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1384,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1385,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1386,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                       >> 9U))));
        bufp->chgBit(oldp+1387,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                       >> 8U))));
        bufp->chgSData(oldp+1388,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                             >> 0xaU))),10);
        bufp->chgSData(oldp+1389,((0x3ffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U])),10);
        bufp->chgBit(oldp+1390,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1391,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                       >> 0x1eU))));
        bufp->chgIData(oldp+1392,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                                >> 8U))),22);
        bufp->chgCData(oldp+1393,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                         >> 6U))),2);
        bufp->chgBit(oldp+1394,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1395,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1396,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                       >> 3U))));
        bufp->chgBit(oldp+1397,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1398,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1399,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U])));
        bufp->chgBit(oldp+1400,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1401,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
                                       >> 0x1eU))));
        bufp->chgSData(oldp+1402,((0x3ffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U])),10);
        bufp->chgSData(oldp+1403,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x18U] 
                                   >> 0x16U)),10);
        bufp->chgBit(oldp+1404,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x18U] 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1405,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x18U] 
                                       >> 0x14U))));
        bufp->chgIData(oldp+1406,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x18U] 
                                                 << 2U) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                                   >> 0x1eU)))),22);
        bufp->chgCData(oldp+1407,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                         >> 0x1cU))),2);
        bufp->chgBit(oldp+1408,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1409,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1410,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1411,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1412,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1413,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1414,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1415,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                       >> 0x14U))));
        bufp->chgSData(oldp+1416,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x1aU] 
                                   >> 0x16U)),10);
        bufp->chgSData(oldp+1417,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x1aU] 
                                             >> 0xcU))),10);
        bufp->chgBit(oldp+1418,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x1aU] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1419,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x1aU] 
                                       >> 0xaU))));
        bufp->chgIData(oldp+1420,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x1aU] 
                                                 << 0xcU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                                   >> 0x14U)))),22);
        bufp->chgCData(oldp+1421,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                         >> 0x12U))),2);
        bufp->chgBit(oldp+1422,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1423,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1424,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1425,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1426,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1427,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1428,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1429,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                       >> 0xaU))));
        bufp->chgCData(oldp+1430,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index),2);
        bufp->chgSData(oldp+1431,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                             >> 0xcU))),10);
        bufp->chgSData(oldp+1432,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                             >> 2U))),10);
        bufp->chgBit(oldp+1433,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1434,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U])));
        bufp->chgIData(oldp+1435,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                   >> 0xaU)),22);
        bufp->chgCData(oldp+1436,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                         >> 8U))),2);
        bufp->chgBit(oldp+1437,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1438,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1439,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1440,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1441,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                       >> 3U))));
        bufp->chgBit(oldp+1442,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1443,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1444,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U])));
        bufp->chgSData(oldp+1445,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                             >> 2U))),10);
        bufp->chgSData(oldp+1446,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                              << 8U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[2U] 
                                                >> 0x18U)))),10);
        bufp->chgBit(oldp+1447,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[2U] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1448,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[2U] 
                                       >> 0x16U))));
        bufp->chgIData(oldp+1449,((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[2U])),22);
        bufp->chgCData(oldp+1450,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                   >> 0x1eU)),2);
        bufp->chgBit(oldp+1451,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1452,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1453,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1454,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1455,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1456,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1457,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1458,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                       >> 0x16U))));
        bufp->chgSData(oldp+1459,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                              << 8U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[4U] 
                                                >> 0x18U)))),10);
        bufp->chgSData(oldp+1460,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[4U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+1461,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[4U] 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1462,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[4U] 
                                       >> 0xcU))));
        bufp->chgIData(oldp+1463,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                                   >> 0x16U)))),22);
        bufp->chgCData(oldp+1464,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                         >> 0x14U))),2);
        bufp->chgBit(oldp+1465,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1466,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1467,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1468,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1469,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1470,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1471,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1472,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                       >> 0xcU))));
        bufp->chgSData(oldp+1473,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[6U] 
                                             >> 0xeU))),10);
        bufp->chgSData(oldp+1474,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[6U] 
                                             >> 4U))),10);
        bufp->chgBit(oldp+1475,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[6U] 
                                       >> 3U))));
        bufp->chgBit(oldp+1476,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[6U] 
                                       >> 2U))));
        bufp->chgIData(oldp+1477,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[6U] 
                                                 << 0x14U) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                                   >> 0xcU)))),22);
        bufp->chgCData(oldp+1478,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                         >> 0xaU))),2);
        bufp->chgBit(oldp+1479,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                       >> 9U))));
        bufp->chgBit(oldp+1480,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1481,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1482,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1483,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1484,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1485,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                       >> 3U))));
        bufp->chgBit(oldp+1486,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1487,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__dtlb_miss));
        bufp->chgCData(oldp+1488,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                            >> 0x10U))),5);
        bufp->chgCData(oldp+1489,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                         >> 0xdU))),3);
        bufp->chgCData(oldp+1490,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                         >> 0xaU))),3);
        bufp->chgCData(oldp+1491,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                         >> 8U))),2);
        bufp->chgCData(oldp+1492,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                           >> 4U))),4);
        bufp->chgBit(oldp+1493,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                       >> 3U))));
        bufp->chgBit(oldp+1494,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                       >> 2U))));
        bufp->chgBit(oldp+1495,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                       >> 1U))));
        bufp->chgBit(oldp+1496,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next)));
        bufp->chgIData(oldp+1497,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result),32);
        bufp->chgIData(oldp+1498,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data),32);
        bufp->chgIData(oldp+1499,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[2U]),32);
        bufp->chgIData(oldp+1500,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[1U]),32);
        bufp->chgIData(oldp+1501,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[0U]),32);
        bufp->chgIData(oldp+1502,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[2U] 
                                    << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                                                 >> 1U))),32);
        bufp->chgIData(oldp+1503,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                                    << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U] 
                                                 >> 1U))),32);
        bufp->chgBit(oldp+1504,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U])));
        bufp->chgIData(oldp+1505,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1),32);
        bufp->chgIData(oldp+1506,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2),32);
        bufp->chgSData(oldp+1507,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                             >> 5U))),12);
        bufp->chgIData(oldp+1508,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1509,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1510,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                                 >> 5U))),32);
        bufp->chgCData(oldp+1511,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                           >> 1U))),4);
        bufp->chgBit(oldp+1512,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U])));
        bufp->chgCData(oldp+1513,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                         >> 7U))),2);
        bufp->chgCData(oldp+1514,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                         >> 4U))),3);
        bufp->chgBit(oldp+1515,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                       >> 3U))));
        bufp->chgBit(oldp+1516,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                       >> 2U))));
        bufp->chgBit(oldp+1517,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                       >> 1U))));
        bufp->chgBit(oldp+1518,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next))));
        bufp->chgBit(oldp+1519,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                                               >> 1U)))));
        bufp->chgBit(oldp+1520,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu))));
        bufp->chgBit(oldp+1521,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu))));
        bufp->chgIData(oldp+1522,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data),32);
        bufp->chgBit(oldp+1523,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
        bufp->chgBit(oldp+1524,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
        bufp->chgBit(oldp+1525,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
        bufp->chgIData(oldp+1526,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[2U]),32);
        bufp->chgIData(oldp+1527,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[1U]),32);
        bufp->chgIData(oldp+1528,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[0U]),32);
        bufp->chgCData(oldp+1529,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                           >> 3U))),4);
        bufp->chgBit(oldp+1530,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                       >> 2U))));
        bufp->chgBit(oldp+1531,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                       >> 1U))));
        bufp->chgBit(oldp+1532,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl))));
        bufp->chgIData(oldp+1533,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
        bufp->chgIData(oldp+1534,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_result_next),32);
        bufp->chgIData(oldp+1535,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[3U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[2U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1536,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[2U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[1U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1537,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[1U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[0U] 
                                                 >> 5U))),32);
        bufp->chgCData(oldp+1538,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[0U])),5);
        bufp->chgCData(oldp+1539,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_next) 
                                         >> 1U))),3);
        bufp->chgBit(oldp+1540,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_next))));
        bufp->chgIData(oldp+1541,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__mul2wrb_next),32);
        bufp->chgIData(oldp+1542,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgExtracted_h46a986c8__0),32);
        bufp->chgIData(oldp+1543,((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result)),32);
        bufp->chgBit(oldp+1544,((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if)))));
        bufp->chgBit(oldp+1545,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgExtracted_h50a45c3b__0));
        bufp->chgBit(oldp+1546,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0));
        bufp->chgBit(oldp+1547,(vlSelf->__VdfgTmp_h2981c0ee__0));
        bufp->chgBit(oldp+1548,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h41bfb133__0));
        bufp->chgBit(oldp+1549,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                       >> 3U))));
        bufp->chgBit(oldp+1550,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                       >> 2U))));
        bufp->chgBit(oldp+1551,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                       >> 1U))));
        bufp->chgBit(oldp+1552,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe))));
        bufp->chgBit(oldp+1553,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                       >> 3U))));
        bufp->chgBit(oldp+1554,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                       >> 2U))));
        bufp->chgBit(oldp+1555,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                       >> 1U))));
        bufp->chgBit(oldp+1556,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if))));
        bufp->chgBit(oldp+1557,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
        bufp->chgBit(oldp+1558,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                       >> 8U))));
        bufp->chgBit(oldp+1559,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                       >> 7U))));
        bufp->chgBit(oldp+1560,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                       >> 6U))));
        bufp->chgBit(oldp+1561,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                       >> 5U))));
        bufp->chgBit(oldp+1562,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                       >> 4U))));
        bufp->chgBit(oldp+1563,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                       >> 3U))));
        bufp->chgBit(oldp+1564,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                       >> 2U))));
        bufp->chgBit(oldp+1565,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                       >> 1U))));
        bufp->chgBit(oldp+1566,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))));
        bufp->chgBit(oldp+1567,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
        bufp->chgBit(oldp+1568,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
        bufp->chgBit(oldp+1569,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
        bufp->chgBit(oldp+1570,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass));
        bufp->chgBit(oldp+1571,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save));
        bufp->chgBit(oldp+1572,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_next));
        bufp->chgCData(oldp+1573,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next),3);
        bufp->chgBit(oldp+1574,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1575,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U])));
        bufp->chgIData(oldp+1576,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[2U] 
                                    << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                                                 >> 1U))),32);
        bufp->chgIData(oldp+1577,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                                    << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U] 
                                                 >> 1U))),32);
        bufp->chgIData(oldp+1578,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__pc_out),32);
        bufp->chgBit(oldp+1579,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__is_missaligned));
        bufp->chgIData(oldp+1580,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
        bufp->chgIData(oldp+1581,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata),32);
        bufp->chgBit(oldp+1582,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req));
        bufp->chgBit(oldp+1583,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_exc_req));
        bufp->chgBit(oldp+1584,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req));
        bufp->chgCData(oldp+1585,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code),4);
        bufp->chgIData(oldp+1586,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next),32);
        bufp->chgIData(oldp+1587,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_next),32);
        bufp->chgIData(oldp+1588,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_next),32);
        bufp->chgIData(oldp+1589,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_next),32);
        bufp->chgIData(oldp+1590,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_next),32);
        bufp->chgIData(oldp+1591,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_next),32);
        bufp->chgIData(oldp+1592,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                   >> 4U)),28);
        bufp->chgBit(oldp+1593,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                       >> 3U))));
        bufp->chgBit(oldp+1594,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                       >> 2U))));
        bufp->chgBit(oldp+1595,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                       >> 1U))));
        bufp->chgBit(oldp+1596,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next)));
        bufp->chgBit(oldp+1597,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                 >> 0x1fU)));
        bufp->chgCData(oldp+1598,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                            >> 0x17U))),8);
        bufp->chgBit(oldp+1599,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1600,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1601,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1602,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1603,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1604,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 0x11U))));
        bufp->chgCData(oldp+1605,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                         >> 0xfU))),2);
        bufp->chgCData(oldp+1606,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                         >> 0xdU))),2);
        bufp->chgCData(oldp+1607,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                         >> 0xbU))),2);
        bufp->chgCData(oldp+1608,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                         >> 9U))),2);
        bufp->chgBit(oldp+1609,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 8U))));
        bufp->chgBit(oldp+1610,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 7U))));
        bufp->chgBit(oldp+1611,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 6U))));
        bufp->chgBit(oldp+1612,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 5U))));
        bufp->chgBit(oldp+1613,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 4U))));
        bufp->chgBit(oldp+1614,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 3U))));
        bufp->chgBit(oldp+1615,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 2U))));
        bufp->chgBit(oldp+1616,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                       >> 1U))));
        bufp->chgBit(oldp+1617,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next)));
        bufp->chgIData(oldp+1618,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_next),32);
        bufp->chgIData(oldp+1619,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_next),32);
        bufp->chgSData(oldp+1620,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                   >> 0x11U)),15);
        bufp->chgBit(oldp+1621,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 0x10U))));
        bufp->chgCData(oldp+1622,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                           >> 0xcU))),4);
        bufp->chgBit(oldp+1623,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1624,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1625,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 9U))));
        bufp->chgBit(oldp+1626,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 8U))));
        bufp->chgBit(oldp+1627,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 7U))));
        bufp->chgBit(oldp+1628,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 6U))));
        bufp->chgBit(oldp+1629,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 5U))));
        bufp->chgBit(oldp+1630,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 4U))));
        bufp->chgBit(oldp+1631,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 3U))));
        bufp->chgBit(oldp+1632,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 2U))));
        bufp->chgBit(oldp+1633,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                       >> 1U))));
        bufp->chgBit(oldp+1634,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next)));
        bufp->chgIData(oldp+1635,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next 
                                   >> 2U)),30);
        bufp->chgCData(oldp+1636,((3U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next)),2);
        bufp->chgIData(oldp+1637,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next),32);
        bufp->chgIData(oldp+1638,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next),32);
        bufp->chgSData(oldp+1639,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                   >> 0x11U)),15);
        bufp->chgBit(oldp+1640,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 0x10U))));
        bufp->chgCData(oldp+1641,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                           >> 0xcU))),4);
        bufp->chgBit(oldp+1642,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1643,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1644,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 9U))));
        bufp->chgBit(oldp+1645,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 8U))));
        bufp->chgBit(oldp+1646,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 7U))));
        bufp->chgBit(oldp+1647,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 6U))));
        bufp->chgBit(oldp+1648,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 5U))));
        bufp->chgBit(oldp+1649,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 4U))));
        bufp->chgBit(oldp+1650,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 3U))));
        bufp->chgBit(oldp+1651,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 2U))));
        bufp->chgBit(oldp+1652,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                       >> 1U))));
        bufp->chgBit(oldp+1653,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next)));
        bufp->chgIData(oldp+1654,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_next 
                                   >> 2U)),30);
        bufp->chgCData(oldp+1655,((3U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_next)),2);
        bufp->chgBit(oldp+1656,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_next 
                                 >> 0x1fU)));
        bufp->chgSData(oldp+1657,((0x1ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_next 
                                             >> 0x16U))),9);
        bufp->chgIData(oldp+1658,((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_next)),22);
        bufp->chgIData(oldp+1659,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_next),32);
        bufp->chgIData(oldp+1660,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sip_mask),32);
        bufp->chgCData(oldp+1661,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_next),2);
        bufp->chgCData(oldp+1662,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__trap_priv_mode),2);
        bufp->chgBit(oldp+1663,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_delegated_req));
        bufp->chgBit(oldp+1664,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req));
        bufp->chgCData(oldp+1665,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code),4);
        bufp->chgIData(oldp+1666,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc),32);
        bufp->chgIData(oldp+1667,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_new_pc),32);
        bufp->chgBit(oldp+1668,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req) 
                                 | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req) 
                                    | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req)))));
        bufp->chgBit(oldp+1669,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req));
        bufp->chgBit(oldp+1670,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req));
        bufp->chgBit(oldp+1671,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req));
        bufp->chgBit(oldp+1672,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req));
        bufp->chgBit(oldp+1673,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_accept_flag));
        bufp->chgBit(oldp+1674,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req));
        bufp->chgBit(oldp+1675,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
        bufp->chgBit(oldp+1676,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req));
        bufp->chgBit(oldp+1677,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__lsu_pf_exc_req))));
        bufp->chgBit(oldp+1678,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_exc_req))));
        bufp->chgBit(oldp+1679,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                 & (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code)))));
        bufp->chgBit(oldp+1680,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req));
        bufp->chgBit(oldp+1681,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req));
        bufp->chgBit(oldp+1682,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_pc_req));
        bufp->chgBit(oldp+1683,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code))));
        bufp->chgBit(oldp+1684,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sret_pc_req));
        bufp->chgBit(oldp+1685,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu))));
        bufp->chgBit(oldp+1686,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                                               >> 1U)))));
        bufp->chgBit(oldp+1687,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__lsu_pf_exc_req));
        bufp->chgBit(oldp+1688,((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code))));
        bufp->chgBit(oldp+1689,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next));
        bufp->chgBit(oldp+1690,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_inc));
        bufp->chgBit(oldp+1691,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_inc));
        bufp->chgBit(oldp+1692,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_inc));
        bufp->chgBit(oldp+1693,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_inc));
        bufp->chgBit(oldp+1694,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ebreak));
        bufp->chgBit(oldp+1695,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ecall));
        bufp->chgBit(oldp+1696,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__satp_mode));
        bufp->chgBit(oldp+1697,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_vaddr_iflush_req));
        bufp->chgBit(oldp+1698,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__icache_flush_req));
        bufp->chgIData(oldp+1699,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data),32);
        bufp->chgIData(oldp+1700,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output),32);
        bufp->chgIData(oldp+1701,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2),32);
        bufp->chgQData(oldp+1702,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output),33);
        bufp->chgBit(oldp+1704,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))));
        bufp->chgBit(oldp+1705,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1706,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_overflow));
        bufp->chgCData(oldp+1707,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),5);
        bufp->chgBit(oldp+1708,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard));
        bufp->chgBit(oldp+1709,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_csr_req));
        bufp->chgBit(oldp+1710,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall));
        bufp->chgBit(oldp+1711,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_stall_i));
        bufp->chgBit(oldp+1712,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
        bufp->chgBit(oldp+1713,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next));
        bufp->chgBit(oldp+1714,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush));
        bufp->chgBit(oldp+1715,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req));
        bufp->chgIData(oldp+1716,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word),32);
        bufp->chgSData(oldp+1717,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword),16);
        bufp->chgCData(oldp+1718,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte),8);
        bufp->chgBit(oldp+1719,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__ld_req));
        bufp->chgBit(oldp+1720,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__st_req));
        bufp->chgBit(oldp+1721,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgExtracted_h50a45c3b__0));
        bufp->chgBit(oldp+1722,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_flush_i));
        bufp->chgIData(oldp+1723,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_next),32);
        bufp->chgIData(oldp+1724,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_next),32);
        bufp->chgBit(oldp+1725,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_next));
        bufp->chgIData(oldp+1726,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_result_next),32);
        bufp->chgQData(oldp+1727,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult_su_int),64);
        bufp->chgIData(oldp+1729,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                    << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                 >> 4U))),32);
        bufp->chgBit(oldp+1730,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1731,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U])));
        bufp->chgBit(oldp+1732,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req));
        bufp->chgBit(oldp+1733,((8U == (0xfU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U]))));
        bufp->chgBit(oldp+1734,((0x90U == (0xffU & 
                                           ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                             << 4U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x1cU))))));
        bufp->chgBit(oldp+1735,((2U == (0xffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                                  << 4U) 
                                                 | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                    >> 0x1cU))))));
        bufp->chgBit(oldp+1736,((0x94U == (0xffU & 
                                           ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                             << 4U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x1cU))))));
        bufp->chgBit(oldp+1737,((1U == (0xfffffU & 
                                        ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                          << 0x10U) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                            >> 0x10U))))));
        bufp->chgBit(oldp+1738,((0x98U == (0xffU & 
                                           ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                             << 4U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x1cU))))));
        bufp->chgBit(oldp+1739,((0x9cU == (0xffU & 
                                           ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                             << 4U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                               >> 0x1cU))))));
        __Vtemp_h8cbeb7a5__0[0U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[1U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[0U] 
                                                  >> 1U));
        __Vtemp_h8cbeb7a5__0[1U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[2U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[1U] 
                                                  >> 1U));
        __Vtemp_h8cbeb7a5__0[2U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[3U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[2U] 
                                                  >> 1U));
        __Vtemp_h8cbeb7a5__0[3U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[4U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[3U] 
                                                  >> 1U));
        bufp->chgWData(oldp+1740,(__Vtemp_h8cbeb7a5__0),128);
        bufp->chgBit(oldp+1744,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[0U])));
        __Vtemp_h5628815a__0[0U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[1U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U] 
                                                  >> 1U));
        __Vtemp_h5628815a__0[1U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[2U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[1U] 
                                                  >> 1U));
        __Vtemp_h5628815a__0[2U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[3U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[2U] 
                                                  >> 1U));
        __Vtemp_h5628815a__0[3U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[4U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[3U] 
                                                  >> 1U));
        bufp->chgWData(oldp+1745,(__Vtemp_h5628815a__0),128);
        bufp->chgBit(oldp+1749,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U])));
        bufp->chgIData(oldp+1750,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                    << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                 >> 6U))),32);
        bufp->chgBit(oldp+1751,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_d_sel));
        bufp->chgBit(oldp+1752,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellinp__icache_controller_module__if2icache_req_kill_i));
        bufp->chgBit(oldp+1753,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[0U])));
        __Vtemp_h8cbeb7a5__1[0U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[1U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[0U] 
                                                  >> 1U));
        __Vtemp_h8cbeb7a5__1[1U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[2U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[1U] 
                                                  >> 1U));
        __Vtemp_h8cbeb7a5__1[2U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[3U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[2U] 
                                                  >> 1U));
        __Vtemp_h8cbeb7a5__1[3U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[4U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[3U] 
                                                  >> 1U));
        bufp->chgWData(oldp+1754,(__Vtemp_h8cbeb7a5__1),128);
        bufp->chgBit(oldp+1758,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_line_wr));
        bufp->chgBit(oldp+1759,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_line_clean));
        bufp->chgBit(oldp+1760,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U])));
        __Vtemp_h5628815a__1[0U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[1U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U] 
                                                  >> 1U));
        __Vtemp_h5628815a__1[1U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[2U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[1U] 
                                                  >> 1U));
        __Vtemp_h5628815a__1[2U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[3U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[2U] 
                                                  >> 1U));
        __Vtemp_h5628815a__1[3U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[4U] 
                                     << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[3U] 
                                                  >> 1U));
        bufp->chgWData(oldp+1761,(__Vtemp_h5628815a__1),128);
        bufp->chgCData(oldp+1765,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1766,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1767,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway))),2);
        bufp->chgCData(oldp+1768,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                         >> 2U))),2);
        bufp->chgCData(oldp+1769,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_next),2);
        bufp->chgCData(oldp+1770,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_next),2);
        bufp->chgCData(oldp+1771,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_pending),2);
        bufp->chgCData(oldp+1772,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_active),2);
        bufp->chgCData(oldp+1773,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim),2);
        bufp->chgCData(oldp+1774,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete),2);
        bufp->chgCData(oldp+1775,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx))),2);
        bufp->chgCData(oldp+1776,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx) 
                                         >> 2U))),2);
        bufp->chgCData(oldp+1777,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req),2);
        bufp->chgCData(oldp+1778,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req),2);
        bufp->chgIData(oldp+1779,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U))),24);
        bufp->chgBit(oldp+1780,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req));
        bufp->chgBit(oldp+1781,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req));
        bufp->chgIData(oldp+1782,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data),32);
        bufp->chgCData(oldp+1783,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag),2);
        bufp->chgCData(oldp+1784,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag),2);
        bufp->chgCData(oldp+1785,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag),2);
        bufp->chgCData(oldp+1786,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next))),3);
        bufp->chgCData(oldp+1787,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next) 
                                         >> 3U))),3);
        bufp->chgCData(oldp+1788,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next))),3);
        bufp->chgCData(oldp+1789,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next) 
                                         >> 3U))),3);
        bufp->chgBit(oldp+1790,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_read));
        bufp->chgCData(oldp+1791,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U))),8);
        bufp->chgBit(oldp+1792,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rd_req));
        bufp->chgBit(oldp+1793,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_wr_req));
        bufp->chgBit(oldp+1794,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_sdiv));
        bufp->chgBit(oldp+1795,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ckmode));
        bufp->chgBit(oldp+1796,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csid));
        bufp->chgBit(oldp+1797,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csdef));
        bufp->chgBit(oldp+1798,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csmode));
        bufp->chgBit(oldp+1799,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del0));
        bufp->chgBit(oldp+1800,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del1));
        bufp->chgBit(oldp+1801,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_fmt));
        bufp->chgBit(oldp+1802,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txdata));
        bufp->chgBit(oldp+1803,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txmark));
        bufp->chgBit(oldp+1804,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_rxmark));
        bufp->chgBit(oldp+1805,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ie));
        bufp->chgCData(oldp+1806,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 8U))),6);
        bufp->chgBit(oldp+1807,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_rd_req));
        bufp->chgBit(oldp+1808,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_wr_req));
        bufp->chgIData(oldp+1809,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_r_data),32);
        bufp->chgIData(oldp+1810,((0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              >> 6U))),32);
        bufp->chgBit(oldp+1811,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_valid_next));
        bufp->chgBit(oldp+1812,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__rx_empty));
        bufp->chgCData(oldp+1813,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_next),8);
        bufp->chgBit(oldp+1814,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_reg_wr_flag));
        bufp->chgBit(oldp+1815,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__baud_reg_wr_flag));
        bufp->chgBit(oldp+1816,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__txctrl_reg_wr_flag));
        bufp->chgBit(oldp+1817,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__rxctrl_reg_wr_flag));
        bufp->chgBit(oldp+1818,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__int_mask_reg_wr_flag));
        bufp->chgCData(oldp+1819,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                         >> 8U))),6);
        bufp->chgBit(oldp+1820,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_rd_req));
        bufp->chgBit(oldp+1821,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_wr_req));
        bufp->chgBit(oldp+1822,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_valid_next));
        bufp->chgBit(oldp+1823,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__fifoctrl_reg_wr_flag));
        bufp->chgBit(oldp+1824,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_reg_wr_flag));
        bufp->chgBit(oldp+1825,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__ie_reg_wr_flag));
        bufp->chgBit(oldp+1826,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__lctrl_reg_wr_flag));
        bufp->chgBit(oldp+1827,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__scratch_reg_wr_flag));
        bufp->chgCData(oldp+1828,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_r_data),8);
        bufp->chgIData(oldp+1829,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                            >> 6U))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+1830,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk));
        bufp->chgSData(oldp+1831,((0xfffU & ((IData)(1U) 
                                             + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))),12);
        bufp->chgBit(oldp+1832,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff))));
        bufp->chgBit(oldp+1833,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff) 
                                       >> 1U))));
        bufp->chgCData(oldp+1834,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                           >> 4U))),4);
        bufp->chgBit(oldp+1835,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_busy));
        bufp->chgBit(oldp+1836,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_read));
        bufp->chgBit(oldp+1837,((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                          >> 3U)))));
        bufp->chgBit(oldp+1838,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                       >> 2U))));
        bufp->chgCData(oldp+1839,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff),3);
        bufp->chgCData(oldp+1840,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__max_data_count),5);
        bufp->chgSData(oldp+1841,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff),12);
        bufp->chgCData(oldp+1842,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff),2);
        bufp->chgCData(oldp+1843,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+1844,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_next)),32);
        bufp->chgBit(oldp+1845,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_next));
        bufp->chgIData(oldp+1846,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next),32);
        bufp->chgBit(oldp+1847,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                               >> 1U)))));
        bufp->chgIData(oldp+1848,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                   >> 0xcU)),20);
        bufp->chgIData(oldp+1849,((0x3fffffU & (IData)(
                                                       (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                                        >> 0xcU)))),22);
        bufp->chgCData(oldp+1850,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                                 >> 0xaU)))),2);
        bufp->chgBit(oldp+1851,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                               >> 9U)))));
        bufp->chgBit(oldp+1852,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                               >> 8U)))));
        bufp->chgBit(oldp+1853,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                               >> 7U)))));
        bufp->chgBit(oldp+1854,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                               >> 6U)))));
        bufp->chgBit(oldp+1855,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                               >> 5U)))));
        bufp->chgBit(oldp+1856,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                               >> 4U)))));
        bufp->chgBit(oldp+1857,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                               >> 3U)))));
        bufp->chgBit(oldp+1858,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                               >> 2U)))));
        bufp->chgBit(oldp+1859,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                               >> 1U)))));
        bufp->chgBit(oldp+1860,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu))));
        bufp->chgSData(oldp+1861,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                             >> 0xcU))),10);
        bufp->chgSData(oldp+1862,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                   >> 0x16U)),10);
        bufp->chgCData(oldp+1863,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                         >> 0x16U))),2);
        bufp->chgCData(oldp+1864,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next),3);
        bufp->chgBit(oldp+1865,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__itlb_miss));
        bufp->chgBit(oldp+1866,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_next));
        bufp->chgIData(oldp+1867,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_next),32);
        bufp->chgQData(oldp+1868,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_next),34);
        bufp->chgBit(oldp+1870,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_next));
        bufp->chgIData(oldp+1871,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out),32);
        bufp->chgCData(oldp+1872,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next),4);
        bufp->chgIData(oldp+1873,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[3U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1874,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1875,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                                 >> 5U))),32);
        bufp->chgCData(oldp+1876,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                           >> 1U))),4);
        bufp->chgBit(oldp+1877,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U])));
        bufp->chgBit(oldp+1878,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
        bufp->chgBit(oldp+1879,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next));
        bufp->chgCData(oldp+1880,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                                   >> 0x22U)))),4);
        bufp->chgCData(oldp+1881,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                                   >> 0x1eU)))),4);
        bufp->chgCData(oldp+1882,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                                 >> 0x1bU)))),3);
        bufp->chgCData(oldp+1883,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                                 >> 0x19U)))),2);
        bufp->chgCData(oldp+1884,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                                 >> 0x16U)))),3);
        bufp->chgCData(oldp+1885,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                                 >> 0x14U)))),2);
        bufp->chgCData(oldp+1886,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                                   >> 0x10U)))),4);
        bufp->chgCData(oldp+1887,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                                 >> 0xdU)))),3);
        bufp->chgBit(oldp+1888,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1889,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1890,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1891,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                               >> 9U)))));
        bufp->chgCData(oldp+1892,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                                 >> 6U)))),3);
        bufp->chgBit(oldp+1893,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                               >> 5U)))));
        bufp->chgBit(oldp+1894,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                               >> 4U)))));
        bufp->chgBit(oldp+1895,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                               >> 3U)))));
        bufp->chgBit(oldp+1896,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                               >> 2U)))));
        bufp->chgBit(oldp+1897,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                               >> 1U)))));
        bufp->chgBit(oldp+1898,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl))));
        bufp->chgCData(oldp+1899,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                                   >> 0x22U)))),4);
        bufp->chgCData(oldp+1900,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                                   >> 0x1eU)))),4);
        bufp->chgCData(oldp+1901,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                                 >> 0x1bU)))),3);
        bufp->chgCData(oldp+1902,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                                 >> 0x19U)))),2);
        bufp->chgCData(oldp+1903,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                                 >> 0x16U)))),3);
        bufp->chgCData(oldp+1904,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                                 >> 0x14U)))),2);
        bufp->chgCData(oldp+1905,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                                   >> 0x10U)))),4);
        bufp->chgCData(oldp+1906,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                                 >> 0xdU)))),3);
        bufp->chgBit(oldp+1907,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1908,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1909,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1910,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                               >> 9U)))));
        bufp->chgCData(oldp+1911,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                                 >> 6U)))),3);
        bufp->chgBit(oldp+1912,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                               >> 5U)))));
        bufp->chgBit(oldp+1913,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                               >> 4U)))));
        bufp->chgBit(oldp+1914,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                               >> 3U)))));
        bufp->chgBit(oldp+1915,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                               >> 2U)))));
        bufp->chgBit(oldp+1916,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                               >> 1U)))));
        bufp->chgBit(oldp+1917,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next))));
        bufp->chgIData(oldp+1918,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1919,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1920,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1921,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1922,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1923,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                                 >> 5U))),32);
        bufp->chgCData(oldp+1924,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                           >> 1U))),4);
        bufp->chgBit(oldp+1925,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U])));
        bufp->chgIData(oldp+1926,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[6U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[5U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1927,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[5U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[4U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1928,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[4U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[3U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1929,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[3U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[2U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1930,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[2U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[1U] 
                                                 >> 5U))),32);
        bufp->chgIData(oldp+1931,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[1U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[0U] 
                                                 >> 5U))),32);
        bufp->chgCData(oldp+1932,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[0U] 
                                           >> 1U))),4);
        bufp->chgBit(oldp+1933,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[0U])));
        bufp->chgIData(oldp+1934,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[2U] 
                                    << 0x1dU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[1U] 
                                                 >> 3U))),32);
        bufp->chgIData(oldp+1935,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[1U] 
                                    << 0x1dU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[0U] 
                                                 >> 3U))),32);
        bufp->chgBit(oldp+1936,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[0U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1937,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[0U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1938,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[0U])));
        bufp->chgIData(oldp+1939,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__instruction),32);
        bufp->chgBit(oldp+1940,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__next_comp16));
        bufp->chgBit(oldp+1941,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))));
        bufp->chgCData(oldp+1942,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))),2);
        bufp->chgSData(oldp+1943,((0xfffU & ((0xc0U 
                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                 << 4U)) 
                                             | ((0x20U 
                                                 & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                    >> 7U)) 
                                                | (0x1cU 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      >> 2U)))))),12);
        bufp->chgSData(oldp+1944,((0xfffU & ((0xc0U 
                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                 >> 1U)) 
                                             | (0x3cU 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   >> 7U))))),12);
        bufp->chgSData(oldp+1945,((0xfffU & ((IData)(vlSelf->__VdfgTmp_h0db32e6d__0) 
                                             << 2U))),12);
        bufp->chgSData(oldp+1946,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_Li),12);
        bufp->chgCData(oldp+1947,((0x1fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                            >> 2U))),5);
        bufp->chgCData(oldp+1948,((0x1fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                            >> 7U))),5);
        bufp->chgIData(oldp+1949,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_jump),20);
        bufp->chgIData(oldp+1950,(((0xc0000U & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                               >> 0xcU)))) 
                                                << 0x12U)) 
                                   | ((0x20000U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 5U)) 
                                      | (0x1f000U & 
                                         ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                          << 0xaU))))),20);
        bufp->chgIData(oldp+1951,(((0xffc00U & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                               >> 0xcU)))) 
                                                << 0xaU)) 
                                   | ((0x200U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                 >> 3U)) 
                                      | ((0x180U & 
                                          ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                           << 4U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                << 1U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 3U)) 
                                               | (0x10U 
                                                  & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                     >> 2U)))))))),20);
        bufp->chgCData(oldp+1952,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                         >> 0xdU))),3);
        bufp->chgCData(oldp+1953,((8U | (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                               >> 7U)))),5);
        bufp->chgCData(oldp+1954,((8U | (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                               >> 2U)))),5);
        bufp->chgSData(oldp+1955,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst),16);
        bufp->chgBit(oldp+1956,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))));
        bufp->chgCData(oldp+1957,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                            >> 5U))),8);
        bufp->chgSData(oldp+1958,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_imm_branch),12);
        bufp->chgSData(oldp+1959,((0xfffU & ((0xf00U 
                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                 << 1U)) 
                                             | ((0xc0U 
                                                 & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                    >> 5U)) 
                                                | ((0x20U 
                                                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)) 
                                                   | (0x10U 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                         >> 2U))))))),12);
        bufp->chgIData(oldp+1960,((0x40403U | ((0xfff00000U 
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
                                                           << 5U))))))),32);
        bufp->chgIData(oldp+1961,((0x842023U | ((0xfe000000U 
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
                                                            << 9U))))))),32);
        bufp->chgIData(oldp+1962,((0x10003U | ((0xfff00000U 
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
                                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+1963,((0x12023U | ((0xfe000000U 
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
                                                           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))))),32);
        bufp->chgIData(oldp+1964,((0xefU | ((0x80000000U 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                << 0x13U)) 
                                            | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h68dbea3a__0) 
                                                << 0x15U) 
                                               | ((0x100000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      << 0xcU)) 
                                                  | (0xff000U 
                                                     & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_jump 
                                                        << 1U))))))),32);
        bufp->chgIData(oldp+1965,((0x6fU | ((0x80000000U 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                << 0x13U)) 
                                            | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h68dbea3a__0) 
                                                << 0x15U) 
                                               | ((0x100000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      << 0xcU)) 
                                                  | (0xff000U 
                                                     & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_jump 
                                                        << 1U))))))),32);
        bufp->chgIData(oldp+1966,((0xe7U | (0xf8000U 
                                            & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                               << 8U)))),32);
        bufp->chgIData(oldp+1967,((0x67U | (0xf8000U 
                                            & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                               << 8U)))),32);
        bufp->chgIData(oldp+1968,((0x41000U | ((0x80000000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 0x13U)) 
                                               | ((0x7e000000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_imm_branch) 
                                                      << 0x15U)) 
                                                  | ((0x38000U 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                         << 8U)) 
                                                     | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h8bdb6079__0)))))),32);
        bufp->chgIData(oldp+1969,((0x40000U | ((0x80000000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 0x13U)) 
                                               | ((0x7e000000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_imm_branch) 
                                                      << 0x15U)) 
                                                  | ((0x38000U 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                         << 8U)) 
                                                     | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h8bdb6079__0)))))),32);
        bufp->chgIData(oldp+1970,((0x13U | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_Li) 
                                             << 0x14U) 
                                            | (0xf80U 
                                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))))),32);
        bufp->chgIData(oldp+1971,((0x37U | ((((- (IData)(
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
                                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))))),32);
        bufp->chgIData(oldp+1972,((0x13U | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_Li) 
                                             << 0x14U) 
                                            | ((0xf8000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 8U)) 
                                               | ((0x7000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      >> 1U)) 
                                                  | (0xf80U 
                                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))))))),32);
        bufp->chgIData(oldp+1973,((0x137U | (((- (IData)(
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
                                                               << 0xaU))))))))),32);
        bufp->chgIData(oldp+1974,((0x10413U | ((0xfff00000U 
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
                                                        << 5U)))))),32);
        bufp->chgIData(oldp+1975,((0x1013U | ((0x1f00000U 
                                               & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                  << 0x12U)) 
                                              | ((0xf8000U 
                                                  & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                     << 8U)) 
                                                 | (0xf80U 
                                                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+1976,(((0x1f00000U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                  << 0x12U)) 
                                   | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h46266a8e__0)),32);
        bufp->chgIData(oldp+1977,((0x40000000U | ((0x1f00000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      << 0x12U)) 
                                                  | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h46266a8e__0))),32);
        bufp->chgIData(oldp+1978,((0x33U | ((0x1f00000U 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                << 0x12U)) 
                                            | ((0xf8000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 8U)) 
                                               | (0xf80U 
                                                  & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+1979,((0x47413U | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_Li) 
                                                << 0x14U) 
                                               | ((0x38000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      << 8U)) 
                                                  | (0x380U 
                                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+1980,((0x33U | ((0x1f00000U 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                << 0x12U)) 
                                            | (0xf80U 
                                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))))),32);
        bufp->chgIData(oldp+1981,((0x847433U | ((0x700000U 
                                                 & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                    << 0x12U)) 
                                                | ((0x38000U 
                                                    & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                       << 8U)) 
                                                   | (0x380U 
                                                      & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+1982,((0x846433U | ((0x700000U 
                                                 & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                    << 0x12U)) 
                                                | ((0x38000U 
                                                    & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                       << 8U)) 
                                                   | (0x380U 
                                                      & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+1983,((0x844433U | ((0x700000U 
                                                 & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                    << 0x12U)) 
                                                | ((0x38000U 
                                                    & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                       << 8U)) 
                                                   | (0x380U 
                                                      & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+1984,((0x40840433U | ((0x700000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      << 0x12U)) 
                                                  | ((0x38000U 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                         << 8U)) 
                                                     | (0x380U 
                                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgBit(oldp+1985,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr));
        bufp->chgCData(oldp+1986,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next),4);
        bufp->chgBit(oldp+1987,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
        bufp->chgCData(oldp+1988,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__incr),3);
        bufp->chgBit(oldp+1989,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_misaligned));
        bufp->chgIData(oldp+1990,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache2mem 
                                           >> 1U))),32);
        bufp->chgBit(oldp+1991,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache2mem))));
        bufp->chgIData(oldp+1992,(((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                                    << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                                 >> 6U))),32);
        bufp->chgIData(oldp+1993,(((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                    << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                                                 >> 6U))),32);
        bufp->chgCData(oldp+1994,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                                           >> 2U))),4);
        bufp->chgBit(oldp+1995,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1996,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U])));
        bufp->chgIData(oldp+1997,(((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[5U] 
                                    << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[4U] 
                                                 >> 2U))),32);
        __Vtemp_h167b8e08__0[0U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[1U] 
                                     << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[0U] 
                                                  >> 2U));
        __Vtemp_h167b8e08__0[1U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[2U] 
                                     << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[1U] 
                                                  >> 2U));
        __Vtemp_h167b8e08__0[2U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[3U] 
                                     << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[2U] 
                                                  >> 2U));
        __Vtemp_h167b8e08__0[3U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[4U] 
                                     << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[3U] 
                                                  >> 2U));
        bufp->chgWData(oldp+1998,(__Vtemp_h167b8e08__0),128);
        bufp->chgBit(oldp+2002,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[0U] 
                                       >> 1U))));
        bufp->chgBit(oldp+2003,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[0U])));
        bufp->chgCData(oldp+2004,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_next),2);
        bufp->chgCData(oldp+2005,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_next),2);
        bufp->chgIData(oldp+2006,(((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[5U] 
                                    << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                                 >> 2U))),32);
        __Vtemp_h3b9f4904__0[0U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[1U] 
                                     << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U] 
                                                  >> 2U));
        __Vtemp_h3b9f4904__0[1U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[2U] 
                                     << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[1U] 
                                                  >> 2U));
        __Vtemp_h3b9f4904__0[2U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[3U] 
                                     << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[2U] 
                                                  >> 2U));
        __Vtemp_h3b9f4904__0[3U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                     << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[3U] 
                                                  >> 2U));
        bufp->chgWData(oldp+2007,(__Vtemp_h3b9f4904__0),128);
        bufp->chgBit(oldp+2011,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U] 
                                       >> 1U))));
        bufp->chgBit(oldp+2012,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U])));
        bufp->chgIData(oldp+2013,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_next 
                                           >> 1U))),32);
        bufp->chgBit(oldp+2014,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_next))));
        bufp->chgIData(oldp+2015,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_next 
                                           >> 1U))),32);
        bufp->chgBit(oldp+2016,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_next))));
        bufp->chgIData(oldp+2017,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_rdata),32);
        bufp->chgBit(oldp+2018,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_i_sel));
        bufp->chgBit(oldp+2019,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__cache_hit));
        bufp->chgBit(oldp+2020,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__cache_rw));
        bufp->chgBit(oldp+2021,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2mem_req_o));
        bufp->chgIData(oldp+2022,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_next),32);
        bufp->chgBit(oldp+2023,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT____VdfgTmp_h920914d9__0) 
                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__cache_hit))));
        bufp->chgBit(oldp+2024,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_miss));
        bufp->chgIData(oldp+2025,((0x1fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[4U] 
                                                >> 1U))),21);
        bufp->chgBit(oldp+2026,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[4U])));
        __Vtemp_h2d981510__0[0U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[0U];
        __Vtemp_h2d981510__0[1U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[1U];
        __Vtemp_h2d981510__0[2U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[2U];
        __Vtemp_h2d981510__0[3U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[3U];
        bufp->chgWData(oldp+2027,(__Vtemp_h2d981510__0),128);
        bufp->chgIData(oldp+2031,((0x1fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[4U] 
                                                >> 1U))),21);
        bufp->chgBit(oldp+2032,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[4U])));
        __Vtemp_hfa4d1436__0[0U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[0U];
        __Vtemp_hfa4d1436__0[1U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[1U];
        __Vtemp_hfa4d1436__0[2U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[2U];
        __Vtemp_hfa4d1436__0[3U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[3U];
        bufp->chgWData(oldp+2033,(__Vtemp_hfa4d1436__0),128);
        bufp->chgIData(oldp+2037,((0x3ffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                                 >> 4U))),28);
        bufp->chgBit(oldp+2038,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U])));
        bufp->chgBit(oldp+2039,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U] 
                                       >> 1U))));
        bufp->chgBit(oldp+2040,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT____Vcellinp__wb_dcache_top_module__dmem_sel_i));
        bufp->chgBit(oldp+2041,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__cache_hit));
        bufp->chgBit(oldp+2042,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read)));
        bufp->chgBit(oldp+2043,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wr));
        bufp->chgBit(oldp+2044,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wrb_req));
        bufp->chgBit(oldp+2045,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U])));
        bufp->chgBit(oldp+2046,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                                       >> 1U))));
        bufp->chgBit(oldp+2047,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_req));
        bufp->chgBit(oldp+2048,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_wr));
        bufp->chgCData(oldp+2049,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_next),3);
        bufp->chgCData(oldp+2050,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_next),4);
        bufp->chgBit(oldp+2051,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_hit));
        bufp->chgBit(oldp+2052,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_miss));
        bufp->chgIData(oldp+2053,(((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                                    << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                                 >> 6U))),32);
        bufp->chgIData(oldp+2054,(((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                    << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                                                 >> 6U))),32);
        bufp->chgCData(oldp+2055,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                                           >> 2U))),4);
        bufp->chgWData(oldp+2056,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o),128);
        bufp->chgIData(oldp+2060,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wrb_req)
                                    ? ((0xffffff00U 
                                        & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read 
                                           << 6U)) 
                                       | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index) 
                                          << 4U)) : 
                                   ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                                     << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                                  >> 6U)))),32);
        bufp->chgWData(oldp+2061,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_line_write),128);
        bufp->chgIData(oldp+2065,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read 
                                                >> 2U))),24);
        bufp->chgBit(oldp+2066,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read 
                                       >> 1U))));
        bufp->chgBit(oldp+2067,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read)));
        bufp->chgIData(oldp+2068,((0xffffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                                                 << 0x12U) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                                   >> 0xeU)))),24);
        bufp->chgIData(oldp+2069,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_read),32);
        bufp->chgIData(oldp+2070,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write),32);
        bufp->chgIData(oldp+2071,((0xffffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                                                 << 0x12U) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                                   >> 0xeU)))),24);
        bufp->chgCData(oldp+2072,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                         >> 8U))),2);
        bufp->chgCData(oldp+2073,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgCData(oldp+2074,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_next),8);
        bufp->chgBit(oldp+2075,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_next));
        bufp->chgBit(oldp+2076,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__frame_err_next));
        bufp->chgCData(oldp+2077,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_next),2);
        bufp->chgCData(oldp+2078,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_next),8);
        bufp->chgBit(oldp+2079,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_next));
        bufp->chgBit(oldp+2080,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__frame_err_next));
        bufp->chgCData(oldp+2081,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_next),2);
    }
    bufp->chgBit(oldp+2082,(vlSelf->clk));
    bufp->chgBit(oldp+2083,(vlSelf->reset));
    bufp->chgBit(oldp+2084,(((0x8e000000U == ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                               << 0x1aU) 
                                              | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                 >> 6U))) 
                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wr))));
    bufp->chgBit(oldp+2085,(((0x8f000000U == ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                               << 0x1aU) 
                                              | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                 >> 6U))) 
                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wr))));
    bufp->chgIData(oldp+2086,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_data),32);
    bufp->chgQData(oldp+2087,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_next),64);
    bufp->chgBit(oldp+2089,((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff 
                             >= vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff)));
    bufp->chgBit(oldp+2090,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_select_ff));
    bufp->chgIData(oldp+2091,(((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                               >> 4U)))
                                ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_ff)
                                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff)),32);
    bufp->chgCData(oldp+2092,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl) 
                                     >> 1U))),3);
    bufp->chgBit(oldp+2093,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->chgIData(oldp+2094,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                             >> 5U))),32);
    bufp->chgIData(oldp+2095,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                             >> 5U))),32);
    bufp->chgIData(oldp+2096,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
                                             >> 5U))),32);
    bufp->chgCData(oldp+2097,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->chgBit(oldp+2098,((1U & ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                   >> 4U)))
                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done)
                                    : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu)))));
    bufp->chgIData(oldp+2099,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag)
                                ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff)),32);
    bufp->chgIData(oldp+2100,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_exc_req))
                                ? ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                                 >> 5U))
                                : (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__lsu_pf_exc_req))
                                    ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]
                                    : (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__i_pf_exc_req))
                                        ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next
                                        : ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ms_mode_ecall_req) 
                                             | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                                & (3U 
                                                   == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code)))) 
                                            | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req))
                                            ? 0U : 
                                           ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag)
                                             ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                             : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff)))))),32);
    bufp->chgIData(oldp+2101,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_wr_flag)
                                ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_ff)),32);
    bufp->chgIData(oldp+2102,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req)
                                ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next
                                : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req)
                                    ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next
                                    : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_wr_flag)
                                        ? (0xfffffffcU 
                                           & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata)
                                        : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_ff)))),32);
    bufp->chgIData(oldp+2103,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__lsu_pf_exc_req))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]
                                : (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req) 
                                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__i_pf_exc_req))
                                    ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next
                                    : ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req) 
                                         & ((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code)) 
                                            | (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code)))) 
                                        | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req))
                                        ? 0U : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_wr_flag)
                                                 ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                                 : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_ff))))),32);
    bufp->chgIData(oldp+2104,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_low_next),32);
    bufp->chgIData(oldp+2105,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_high_next),32);
    bufp->chgIData(oldp+2106,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x14U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                               [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                          >> 0x14U))]
                                : 0U)),32);
    bufp->chgIData(oldp+2107,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                >> 0x19U)))
                                ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                               [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                          >> 0x19U))]
                                : 0U)),32);
    bufp->chgBit(oldp+2108,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard) 
                             & ((IData)((0ULL != (0x1004ULL 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff))) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_csr_req)))));
    bufp->chgBit(oldp+2109,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard) 
                             & ((IData)((0ULL != (0x6000804ULL 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff))) 
                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_csr_req)))));
    bufp->chgBit(oldp+2110,((1U & ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                   >> 4U)))
                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done)
                                    : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu)))));
    bufp->chgCData(oldp+2111,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_stall_i)
                                        ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff)
                                        : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                   >> 0x1eU))))),4);
    bufp->chgIData(oldp+2112,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_d_sel)
                                ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                    << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                 >> 6U))
                                : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_i_sel)
                                    ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                               >> 2U))
                                    : 0U))),32);
    bufp->chgBit(oldp+2113,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_i_sel) 
                             | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_d_sel))));
    bufp->chgIData(oldp+2114,((0x1ffU & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_d_sel)
                                           ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                               << 0x1aU) 
                                              | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                 >> 6U))
                                           : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_i_sel)
                                               ? (IData)(
                                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                          >> 2U))
                                               : 0U)) 
                                         >> 2U))),32);
    bufp->chgBit(oldp+2115,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_write));
    bufp->chgSData(oldp+2116,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt),12);
    bufp->chgCData(oldp+2117,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next),3);
    bufp->chgCData(oldp+2118,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt),5);
    bufp->chgIData(oldp+2119,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_r_data),32);
    bufp->chgSData(oldp+2120,((0xfffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_sdiv)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))),12);
    bufp->chgCData(oldp+2121,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ckmode)
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                          << 0x1aU) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                            >> 6U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)))),2);
    bufp->chgCData(oldp+2122,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_fmt)
                                ? ((0xf0U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 0x12U)) 
                                   | (0xcU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              >> 6U)))
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff))),8);
}

void Vpcore_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_cleanup\n"); );
    // Init
    Vpcore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpcore_tb___024root*>(voidSelf);
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
