// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpcore_tb.h for the primary calling header

#include "verilated.h"

#include "Vpcore_tb__Syms.h"
#include "Vpcore_tb___024root.h"

void Vpcore_tb___024root___eval_act(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___eval_act\n"); );
}

extern const VlWide<32>/*1023:0*/ Vpcore_tb__ConstPool__CONST_h2ae7f32a_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vpcore_tb__ConstPool__TABLE_h847647f0_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vpcore_tb__ConstPool__TABLE_hc6d97f25_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vpcore_tb__ConstPool__TABLE_h237df0e2_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vpcore_tb__ConstPool__TABLE_h7a356dd0_0;

VL_INLINE_OPT void Vpcore_tb___024root___nba_sequent__TOP__0(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<32>/*1023:0*/ __Vdly__pcore_tb__DOT__main_time;
    VL_ZERO_W(1024, __Vdly__pcore_tb__DOT__main_time);
    SData/*15:0*/ __Vdly__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__upper_16;
    __Vdly__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__upper_16 = 0;
    QData/*32:0*/ __Vdly__pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff;
    __Vdly__pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff = 0;
    QData/*32:0*/ __Vdly__pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff;
    __Vdly__pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff = 0;
    QData/*32:0*/ __Vdly__pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff;
    __Vdly__pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff = 0;
    QData/*32:0*/ __Vdly__pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff;
    __Vdly__pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff = 0;
    CData/*6:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0 = 0;
    IData/*31:0*/ __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0;
    __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0 = 0;
    IData/*20:0*/ __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0;
    __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v1;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v1 = 0;
    IData/*31:0*/ __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v1;
    __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v1 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v1;
    VL_ZERO_W(128, __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v1);
    CData/*6:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2 = 0;
    IData/*31:0*/ __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2;
    __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2 = 0;
    CData/*0:0*/ __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2;
    __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2 = 0;
    CData/*3:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v0;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v0 = 0;
    IData/*31:0*/ __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v0;
    __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v0;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v1;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v1 = 0;
    IData/*31:0*/ __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v1;
    __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v1 = 0;
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v1;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2 = 0;
    IData/*31:0*/ __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2;
    __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2 = 0;
    IData/*23:0*/ __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2;
    __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2 = 0;
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2 = 0;
    CData/*3:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v3;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v3 = 0;
    IData/*31:0*/ __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v3;
    __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v3 = 0;
    CData/*3:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v4;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v4 = 0;
    IData/*31:0*/ __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v4;
    __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v4 = 0;
    CData/*3:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0;
    VL_ZERO_W(128, __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0);
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1;
    VL_ZERO_W(128, __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1);
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1 = 0;
    IData/*24:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v0;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v0;
    __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v0;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v0 = 0;
    IData/*24:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v1;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v1 = 0;
    IData/*31:0*/ __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v1;
    __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v1 = 0;
    IData/*24:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v2;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v2 = 0;
    IData/*31:0*/ __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v2;
    __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v2 = 0;
    IData/*24:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v3;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v3 = 0;
    IData/*31:0*/ __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v3;
    __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v3 = 0;
    QData/*32:0*/ __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff = 0;
    VlWide<32>/*1023:0*/ __Vtemp_hd49e9616__0;
    VlWide<3>/*95:0*/ __Vtemp_hfdcd8dec__0;
    VlWide<3>/*95:0*/ __Vtemp_h3cee7c11__0;
    VlWide<3>/*95:0*/ __Vtemp_hfdcd8dec__1;
    VlWide<3>/*95:0*/ __Vtemp_hbe96532b__0;
    // Body
    __Vdly__pcore_tb__DOT__main_time[0U] = vlSelf->pcore_tb__DOT__main_time[0U];
    __Vdly__pcore_tb__DOT__main_time[1U] = vlSelf->pcore_tb__DOT__main_time[1U];
    __Vdly__pcore_tb__DOT__main_time[2U] = vlSelf->pcore_tb__DOT__main_time[2U];
    __Vdly__pcore_tb__DOT__main_time[3U] = vlSelf->pcore_tb__DOT__main_time[3U];
    __Vdly__pcore_tb__DOT__main_time[4U] = vlSelf->pcore_tb__DOT__main_time[4U];
    __Vdly__pcore_tb__DOT__main_time[5U] = vlSelf->pcore_tb__DOT__main_time[5U];
    __Vdly__pcore_tb__DOT__main_time[6U] = vlSelf->pcore_tb__DOT__main_time[6U];
    __Vdly__pcore_tb__DOT__main_time[7U] = vlSelf->pcore_tb__DOT__main_time[7U];
    __Vdly__pcore_tb__DOT__main_time[8U] = vlSelf->pcore_tb__DOT__main_time[8U];
    __Vdly__pcore_tb__DOT__main_time[9U] = vlSelf->pcore_tb__DOT__main_time[9U];
    __Vdly__pcore_tb__DOT__main_time[0xaU] = vlSelf->pcore_tb__DOT__main_time[0xaU];
    __Vdly__pcore_tb__DOT__main_time[0xbU] = vlSelf->pcore_tb__DOT__main_time[0xbU];
    __Vdly__pcore_tb__DOT__main_time[0xcU] = vlSelf->pcore_tb__DOT__main_time[0xcU];
    __Vdly__pcore_tb__DOT__main_time[0xdU] = vlSelf->pcore_tb__DOT__main_time[0xdU];
    __Vdly__pcore_tb__DOT__main_time[0xeU] = vlSelf->pcore_tb__DOT__main_time[0xeU];
    __Vdly__pcore_tb__DOT__main_time[0xfU] = vlSelf->pcore_tb__DOT__main_time[0xfU];
    __Vdly__pcore_tb__DOT__main_time[0x10U] = vlSelf->pcore_tb__DOT__main_time[0x10U];
    __Vdly__pcore_tb__DOT__main_time[0x11U] = vlSelf->pcore_tb__DOT__main_time[0x11U];
    __Vdly__pcore_tb__DOT__main_time[0x12U] = vlSelf->pcore_tb__DOT__main_time[0x12U];
    __Vdly__pcore_tb__DOT__main_time[0x13U] = vlSelf->pcore_tb__DOT__main_time[0x13U];
    __Vdly__pcore_tb__DOT__main_time[0x14U] = vlSelf->pcore_tb__DOT__main_time[0x14U];
    __Vdly__pcore_tb__DOT__main_time[0x15U] = vlSelf->pcore_tb__DOT__main_time[0x15U];
    __Vdly__pcore_tb__DOT__main_time[0x16U] = vlSelf->pcore_tb__DOT__main_time[0x16U];
    __Vdly__pcore_tb__DOT__main_time[0x17U] = vlSelf->pcore_tb__DOT__main_time[0x17U];
    __Vdly__pcore_tb__DOT__main_time[0x18U] = vlSelf->pcore_tb__DOT__main_time[0x18U];
    __Vdly__pcore_tb__DOT__main_time[0x19U] = vlSelf->pcore_tb__DOT__main_time[0x19U];
    __Vdly__pcore_tb__DOT__main_time[0x1aU] = vlSelf->pcore_tb__DOT__main_time[0x1aU];
    __Vdly__pcore_tb__DOT__main_time[0x1bU] = vlSelf->pcore_tb__DOT__main_time[0x1bU];
    __Vdly__pcore_tb__DOT__main_time[0x1cU] = vlSelf->pcore_tb__DOT__main_time[0x1cU];
    __Vdly__pcore_tb__DOT__main_time[0x1dU] = vlSelf->pcore_tb__DOT__main_time[0x1dU];
    __Vdly__pcore_tb__DOT__main_time[0x1eU] = vlSelf->pcore_tb__DOT__main_time[0x1eU];
    __Vdly__pcore_tb__DOT__main_time[0x1fU] = vlSelf->pcore_tb__DOT__main_time[0x1fU];
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v0 = 0U;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0 = 0U;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1 = 0U;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v0 = 0U;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v1 = 0U;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2 = 0U;
    if (VL_UNLIKELY((((0x8e000000U == ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                        << 0x1aU) | 
                                       (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U))) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wr)) 
                     & (0U != vlSelf->pcore_tb__DOT__write_sig)))) {
        VL_FWRITEF(vlSelf->pcore_tb__DOT__write_sig,"%x\n",
                   32,((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                        << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                     >> 6U)));
    } else if (VL_UNLIKELY(((0x8f000000U == ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U))) 
                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wr)))) {
        VL_WRITEF("Test Complete\n");
        VL_FCLOSE_I(vlSelf->pcore_tb__DOT__write_sig); VL_FINISH_MT("../bench/pcore_tb.sv", 99, "");
    }
    __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0 = 0U;
    __Vdly__pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff 
        = vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff;
    __Vdly__pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff;
    __Vdly__pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff;
    __Vdly__pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff 
        = vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
        = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff;
    __Vdly__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__upper_16 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__upper_16;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[0U] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [0U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[0U] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [0U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[1U] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [1U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[1U] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [1U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[2U] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [2U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[2U] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [2U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[3U] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [3U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[3U] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [3U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[4U] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [4U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[4U] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [4U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[5U] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [5U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[5U] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [5U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[6U] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [6U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[6U] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [6U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[7U] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [7U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[7U] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [7U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[8U] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [8U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[8U] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [8U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[9U] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [9U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[9U] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [9U]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[0xaU] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [0xaU]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[0xaU] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [0xaU]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[0xbU] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [0xbU]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[0xbU] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [0xbU]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[0xcU] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [0xcU]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[0xcU] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [0xcU]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[0xdU] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [0xdU]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[0xdU] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [0xdU]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[0xeU] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [0xeU]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[0xeU] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [0xeU]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[0xfU] 
            = (0x3fffffdU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [0xfU]);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[0xfU] 
            = (0x3fffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [0xfU]);
    }
    if ((1U & ((~ (IData)(vlSelf->reset)) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__icache_flush_req)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__unnamedblk1__DOT__i)) {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache[(0x7fU 
                                                                                & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__unnamedblk1__DOT__i)][4U] 
                = (1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache
                   [(0x7fU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__unnamedblk1__DOT__i)][4U]);
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache[(0x7fU 
                                                                                & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__unnamedblk1__DOT__i)][4U] 
                = (0x3ffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache
                   [(0x7fU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__unnamedblk1__DOT__i)][4U]);
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__unnamedblk1__DOT__i);
        }
    }
    if (VL_LIKELY(VL_LT_W(32, vlSelf->pcore_tb__DOT__main_time, vlSelf->pcore_tb__DOT__max_cycles))) {
        VL_ADD_W(32, __Vtemp_hd49e9616__0, Vpcore_tb__ConstPool__CONST_h2ae7f32a_0, vlSelf->pcore_tb__DOT__main_time);
        __Vdly__pcore_tb__DOT__main_time[0U] = __Vtemp_hd49e9616__0[0U];
        __Vdly__pcore_tb__DOT__main_time[1U] = __Vtemp_hd49e9616__0[1U];
        __Vdly__pcore_tb__DOT__main_time[2U] = __Vtemp_hd49e9616__0[2U];
        __Vdly__pcore_tb__DOT__main_time[3U] = __Vtemp_hd49e9616__0[3U];
        __Vdly__pcore_tb__DOT__main_time[4U] = __Vtemp_hd49e9616__0[4U];
        __Vdly__pcore_tb__DOT__main_time[5U] = __Vtemp_hd49e9616__0[5U];
        __Vdly__pcore_tb__DOT__main_time[6U] = __Vtemp_hd49e9616__0[6U];
        __Vdly__pcore_tb__DOT__main_time[7U] = __Vtemp_hd49e9616__0[7U];
        __Vdly__pcore_tb__DOT__main_time[8U] = __Vtemp_hd49e9616__0[8U];
        __Vdly__pcore_tb__DOT__main_time[9U] = __Vtemp_hd49e9616__0[9U];
        __Vdly__pcore_tb__DOT__main_time[0xaU] = __Vtemp_hd49e9616__0[0xaU];
        __Vdly__pcore_tb__DOT__main_time[0xbU] = __Vtemp_hd49e9616__0[0xbU];
        __Vdly__pcore_tb__DOT__main_time[0xcU] = __Vtemp_hd49e9616__0[0xcU];
        __Vdly__pcore_tb__DOT__main_time[0xdU] = __Vtemp_hd49e9616__0[0xdU];
        __Vdly__pcore_tb__DOT__main_time[0xeU] = __Vtemp_hd49e9616__0[0xeU];
        __Vdly__pcore_tb__DOT__main_time[0xfU] = __Vtemp_hd49e9616__0[0xfU];
        __Vdly__pcore_tb__DOT__main_time[0x10U] = __Vtemp_hd49e9616__0[0x10U];
        __Vdly__pcore_tb__DOT__main_time[0x11U] = __Vtemp_hd49e9616__0[0x11U];
        __Vdly__pcore_tb__DOT__main_time[0x12U] = __Vtemp_hd49e9616__0[0x12U];
        __Vdly__pcore_tb__DOT__main_time[0x13U] = __Vtemp_hd49e9616__0[0x13U];
        __Vdly__pcore_tb__DOT__main_time[0x14U] = __Vtemp_hd49e9616__0[0x14U];
        __Vdly__pcore_tb__DOT__main_time[0x15U] = __Vtemp_hd49e9616__0[0x15U];
        __Vdly__pcore_tb__DOT__main_time[0x16U] = __Vtemp_hd49e9616__0[0x16U];
        __Vdly__pcore_tb__DOT__main_time[0x17U] = __Vtemp_hd49e9616__0[0x17U];
        __Vdly__pcore_tb__DOT__main_time[0x18U] = __Vtemp_hd49e9616__0[0x18U];
        __Vdly__pcore_tb__DOT__main_time[0x19U] = __Vtemp_hd49e9616__0[0x19U];
        __Vdly__pcore_tb__DOT__main_time[0x1aU] = __Vtemp_hd49e9616__0[0x1aU];
        __Vdly__pcore_tb__DOT__main_time[0x1bU] = __Vtemp_hd49e9616__0[0x1bU];
        __Vdly__pcore_tb__DOT__main_time[0x1cU] = __Vtemp_hd49e9616__0[0x1cU];
        __Vdly__pcore_tb__DOT__main_time[0x1dU] = __Vtemp_hd49e9616__0[0x1dU];
        __Vdly__pcore_tb__DOT__main_time[0x1eU] = __Vtemp_hd49e9616__0[0x1eU];
        __Vdly__pcore_tb__DOT__main_time[0x1fU] = __Vtemp_hd49e9616__0[0x1fU];
    } else {
        VL_WRITEF("Timeout: Exiting after %0# cycles\n\n",
                  1024,vlSelf->pcore_tb__DOT__main_time.data());
        VL_FINISH_MT("../bench/pcore_tb.sv", 51, "");
    }
    if ((1U & ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U] 
                >> 1U) & (~ vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U])))) {
        if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U])) {
            __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v0 
                = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[1U] 
                    << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U] 
                                 >> 2U));
            __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v0 = 1U;
            __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v0 
                = (0x1fffffcU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                 >> 4U));
            __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v1 
                = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[2U] 
                    << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[1U] 
                                 >> 2U));
            __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v1 
                = (1U | (0x1fffffcU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                       >> 4U)));
            __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v2 
                = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[3U] 
                    << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[2U] 
                                 >> 2U));
            __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v2 
                = (2U | (0x1fffffcU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                       >> 4U)));
            __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v3 
                = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                    << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[3U] 
                                 >> 2U));
            __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v3 
                = (3U | (0x1fffffcU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                       >> 4U)));
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U] 
                = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U]) 
                   | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory
                      [(0x1fffffcU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                      >> 4U))] << 1U));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[1U] 
                = ((0xfffffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[1U]) 
                   | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory
                      [(0x1fffffcU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                      >> 4U))] >> 0x1fU));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[1U] 
                = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[1U]) 
                   | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory
                      [(1U | (0x1fffffcU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                            >> 4U)))] 
                      << 1U));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[2U] 
                = ((0xfffffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[2U]) 
                   | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory
                      [(1U | (0x1fffffcU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                            >> 4U)))] 
                      >> 0x1fU));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[2U] 
                = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[2U]) 
                   | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory
                      [(2U | (0x1fffffcU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                            >> 4U)))] 
                      << 1U));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[3U] 
                = ((0xfffffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[3U]) 
                   | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory
                      [(2U | (0x1fffffcU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                            >> 4U)))] 
                      >> 0x1fU));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[3U] 
                = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[3U]) 
                   | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory
                      [(3U | (0x1fffffcU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                            >> 4U)))] 
                      << 1U));
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[4U] 
                = (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory
                   [(3U | (0x1fffffcU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                         >> 4U)))] 
                   >> 0x1fU);
        }
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U] 
            = (1U | vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U]);
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[2U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[3U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[4U] = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->reset)) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__icache_flush_req))))) {
        if (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__cache_rw) {
            __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0 
                = (0x1fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[4U] 
                                >> 1U));
            __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0 = 1U;
            __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0 = 0x81U;
            __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0 
                = (0x7fU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                    >> 6U)));
            __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v1[0U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[0U];
            __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v1[1U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[1U];
            __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v1[2U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[2U];
            __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v1[3U] 
                = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[3U];
            __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v1 = 0U;
            __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v1 
                = (0x7fU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                    >> 6U)));
            __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2 
                = (1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[4U]);
            __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2 = 0x80U;
            __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2 
                = (0x7fU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                    >> 6U)));
        }
    }
    __Vdly__pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff = 0ULL;
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_req) 
          | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__w_req)) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff)))) {
        __Vdly__pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff 
            = (1ULL | __Vdly__pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff);
        if (vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_req) {
            __Vdly__pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff 
                = ((1ULL & __Vdly__pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff) 
                   | ((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_data)) 
                      << 1U));
        }
    }
    __Vdly__pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff = 0ULL;
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_wr_req) 
          | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_rd_req)) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff)))) {
        __Vdly__pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff 
            = (1ULL | __Vdly__pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff);
        if (vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_rd_req) {
            __Vdly__pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff 
                = ((1ULL & __Vdly__pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff) 
                   | ((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_r_data)) 
                      << 1U));
        }
    }
    __Vdly__pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff = 0ULL;
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_wr_req) 
          | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_rd_req)) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff)))) {
        __Vdly__pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff 
            = (1ULL | __Vdly__pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff);
        if (vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_rd_req) {
            __Vdly__pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff 
                = ((1ULL & __Vdly__pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff) 
                   | ((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_r_data)) 
                      << 1U));
        }
    }
    __Vdly__pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff = 0ULL;
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req) 
          | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req)) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff)))) {
        __Vdly__pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff 
            = (1ULL | __Vdly__pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff);
        if (vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req) {
            __Vdly__pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff 
                = ((1ULL & __Vdly__pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff) 
                   | ((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data)) 
                      << 1U));
        }
    }
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff = 0ULL;
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_wr_req) 
          | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rd_req)) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff)))) {
        __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
            = (1ULL | __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff);
        if (vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rd_req) {
            __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
                = ((1ULL & __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff) 
                   | ((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_r_data)) 
                      << 1U));
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_stall_ff 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_stall_i));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_ff 
        = ((~ ((~ (IData)(vlSelf->reset)) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush))) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__done_ff = 0U;
    if (vlSelf->reset) {
        if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_line_clean)))) {
            if (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wr) {
                __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0[0U] 
                    = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_line_write[0U];
                __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0[1U] 
                    = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_line_write[1U];
                __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0[2U] 
                    = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_line_write[2U];
                __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0[3U] 
                    = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_line_write[3U];
                __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0 = 1U;
                __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0 
                    = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index;
            } else if (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_line_wr) {
                __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1[0U] 
                    = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[1U] 
                        << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U] 
                                     >> 1U));
                __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1[1U] 
                    = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[2U] 
                        << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[1U] 
                                     >> 1U));
                __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1[2U] 
                    = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[3U] 
                        << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[2U] 
                                     >> 1U));
                __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1[3U] 
                    = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[4U] 
                        << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[3U] 
                                     >> 1U));
                __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1 = 1U;
                __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1 
                    = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index;
            }
        }
        if (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_line_clean) {
            __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v0 = 1U;
            __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v0 = 0U;
            __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v0 
                = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index;
        } else if (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wr) {
            __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v1 = 1U;
            __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v1 = 0U;
            __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v1 
                = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index;
        } else if (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_line_wr) {
            __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2 
                = (0xffffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                                 << 0x12U) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                              >> 0xeU)));
            __Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2 = 1U;
            __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2 = 2U;
            __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2 
                = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index;
            __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v3 = 1U;
            __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v3 
                = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index;
            __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v4 = 0U;
            __Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v4 
                = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index;
        }
        __Vdly__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__upper_16 = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff 
            = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req) 
                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl))
                ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[0U]
                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[2U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[3U];
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_next;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__dcache2lsummu_data_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_read;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__mul2wrb_pipe_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__mul2wrb_next;
        if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__busy_ff) {
            if ((0x1fU == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__counter))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__busy_ff = 0U;
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__done_ff = 1U;
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff 
                    = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_next;
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__rem_ff 
                    = (QData)((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_next 
                                       >> 1U)));
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__counter 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__counter)));
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_ff 
                    = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_next;
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff 
                    = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_next;
            }
        } else if ((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff) 
                             >> 3U) & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_ff) 
                                          | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_next)))))) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__counter = 0U;
            if ((0U == vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_ff)) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__busy_ff = 0U;
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__done_ff = 1U;
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff = 0xffffffffU;
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__rem_ff 
                    = (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_ff));
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__busy_ff = 1U;
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__opr2_ff 
                    = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_ff;
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_ff 
                    = ((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_ff)) 
                       >> 0x1fU);
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff 
                    = ((IData)((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_ff))) 
                       << 1U);
            }
        }
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache2if_data_ff 
            = ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                              >> 5U))) ? ((1U & (IData)(
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                         >> 4U)))
                                           ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[3U]
                                           : vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[2U])
                : ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                  >> 4U))) ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[1U]
                    : vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[0U]));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr2wrb_data_pipe_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[1U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[2U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[3U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[4U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[5U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[5U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[6U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[6U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[2U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[1U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[2U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[3U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[3U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2if_ack_o 
            = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT____VdfgTmp_h920914d9__0) 
               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__cache_hit));
    } else {
        if ((1U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))) {
            if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__is_missaligned) 
                 & (0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state)))) {
                __Vdly__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__upper_16 
                    = (0xffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[2U] 
                                   << 0xfU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                                               >> 0x11U)));
            } else if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__next_misaligned) 
                        & (2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state)))) {
                __Vdly__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__upper_16 
                    = (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__conc_32_misallign 
                       >> 0x10U);
            }
        } else {
            __Vdly__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__upper_16 
                = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__upper_16;
        }
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] = 0x1cU;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] = 0x260U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff = 0x80000000U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__dcache2lsummu_data_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff = 0ULL;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__mul2wrb_pipe_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__busy_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__done_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__rem_ff = 0ULL;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache2if_data_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr2wrb_data_pipe_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[5U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[6U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[2U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[3U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__next_state;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2if_ack_o = 0U;
    }
    vlSelf->pcore_tb__DOT__main_time[0U] = __Vdly__pcore_tb__DOT__main_time[0U];
    vlSelf->pcore_tb__DOT__main_time[1U] = __Vdly__pcore_tb__DOT__main_time[1U];
    vlSelf->pcore_tb__DOT__main_time[2U] = __Vdly__pcore_tb__DOT__main_time[2U];
    vlSelf->pcore_tb__DOT__main_time[3U] = __Vdly__pcore_tb__DOT__main_time[3U];
    vlSelf->pcore_tb__DOT__main_time[4U] = __Vdly__pcore_tb__DOT__main_time[4U];
    vlSelf->pcore_tb__DOT__main_time[5U] = __Vdly__pcore_tb__DOT__main_time[5U];
    vlSelf->pcore_tb__DOT__main_time[6U] = __Vdly__pcore_tb__DOT__main_time[6U];
    vlSelf->pcore_tb__DOT__main_time[7U] = __Vdly__pcore_tb__DOT__main_time[7U];
    vlSelf->pcore_tb__DOT__main_time[8U] = __Vdly__pcore_tb__DOT__main_time[8U];
    vlSelf->pcore_tb__DOT__main_time[9U] = __Vdly__pcore_tb__DOT__main_time[9U];
    vlSelf->pcore_tb__DOT__main_time[0xaU] = __Vdly__pcore_tb__DOT__main_time[0xaU];
    vlSelf->pcore_tb__DOT__main_time[0xbU] = __Vdly__pcore_tb__DOT__main_time[0xbU];
    vlSelf->pcore_tb__DOT__main_time[0xcU] = __Vdly__pcore_tb__DOT__main_time[0xcU];
    vlSelf->pcore_tb__DOT__main_time[0xdU] = __Vdly__pcore_tb__DOT__main_time[0xdU];
    vlSelf->pcore_tb__DOT__main_time[0xeU] = __Vdly__pcore_tb__DOT__main_time[0xeU];
    vlSelf->pcore_tb__DOT__main_time[0xfU] = __Vdly__pcore_tb__DOT__main_time[0xfU];
    vlSelf->pcore_tb__DOT__main_time[0x10U] = __Vdly__pcore_tb__DOT__main_time[0x10U];
    vlSelf->pcore_tb__DOT__main_time[0x11U] = __Vdly__pcore_tb__DOT__main_time[0x11U];
    vlSelf->pcore_tb__DOT__main_time[0x12U] = __Vdly__pcore_tb__DOT__main_time[0x12U];
    vlSelf->pcore_tb__DOT__main_time[0x13U] = __Vdly__pcore_tb__DOT__main_time[0x13U];
    vlSelf->pcore_tb__DOT__main_time[0x14U] = __Vdly__pcore_tb__DOT__main_time[0x14U];
    vlSelf->pcore_tb__DOT__main_time[0x15U] = __Vdly__pcore_tb__DOT__main_time[0x15U];
    vlSelf->pcore_tb__DOT__main_time[0x16U] = __Vdly__pcore_tb__DOT__main_time[0x16U];
    vlSelf->pcore_tb__DOT__main_time[0x17U] = __Vdly__pcore_tb__DOT__main_time[0x17U];
    vlSelf->pcore_tb__DOT__main_time[0x18U] = __Vdly__pcore_tb__DOT__main_time[0x18U];
    vlSelf->pcore_tb__DOT__main_time[0x19U] = __Vdly__pcore_tb__DOT__main_time[0x19U];
    vlSelf->pcore_tb__DOT__main_time[0x1aU] = __Vdly__pcore_tb__DOT__main_time[0x1aU];
    vlSelf->pcore_tb__DOT__main_time[0x1bU] = __Vdly__pcore_tb__DOT__main_time[0x1bU];
    vlSelf->pcore_tb__DOT__main_time[0x1cU] = __Vdly__pcore_tb__DOT__main_time[0x1cU];
    vlSelf->pcore_tb__DOT__main_time[0x1dU] = __Vdly__pcore_tb__DOT__main_time[0x1dU];
    vlSelf->pcore_tb__DOT__main_time[0x1eU] = __Vdly__pcore_tb__DOT__main_time[0x1eU];
    vlSelf->pcore_tb__DOT__main_time[0x1fU] = __Vdly__pcore_tb__DOT__main_time[0x1fU];
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v0) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v0] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v0;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v1] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v1;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v2] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v2;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v3] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__dualport_memory__v3;
    }
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0][0U] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0][1U] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0][2U] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0[2U];
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0][3U] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v0[3U];
    }
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1][0U] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1][1U] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1][2U] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1[2U];
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1][3U] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram__v1[3U];
    }
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v0) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v0] 
            = ((~ ((IData)(1U) << __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v0)) 
               & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v0]);
    }
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v1) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v1] 
            = (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v1] 
               | (0x3ffffffU & ((IData)(1U) << __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v1)));
    }
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2] 
            = (((~ ((IData)(0xffffffU) << __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2)) 
                & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                [__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2]) 
               | (0x3ffffffU & (__Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2 
                                << __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v2)));
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v3] 
            = (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v3] 
               | (0x3ffffffU & ((IData)(1U) << __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v3)));
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v4] 
            = ((~ ((IData)(1U) << __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v4)) 
               & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
               [__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram__v4]);
    }
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0) {
        VL_ASSIGNSEL_WI(150,21,__Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0, 
                        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache
                        [__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0], __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v0);
        VL_ASSIGNSEL_WW(150,128,__Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v1, 
                        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache
                        [__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v1], __Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v1);
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2][(__Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x1fU & __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2))) 
                & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache
                [__Vdlyvdim0__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2][
                (__Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2 
                 >> 5U)]) | ((IData)(__Vdlyvval__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2) 
                             << (0x1fU & __Vdlyvlsb__pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache__v2)));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff 
        = __Vdly__pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff 
        = __Vdly__pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff 
        = __Vdly__pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff 
        = __Vdly__pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
        = __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__upper_16 
        = __Vdly__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__upper_16;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__next_misaligned 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__is_missaligned));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2lsummu_ack = 0U;
    if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff))) {
        if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2lsummu_ack = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff))) {
        if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2lsummu_ack = 1U;
        }
    } else if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2lsummu_ack = 1U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT____VdfgExtracted_hcd8ed81d__0 
        = ((8U == (0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                   >> 0x1eU)))) | (0xaU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                               >> 0x1eU)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl 
        = ((0x1feU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl)) 
           | (1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                            >> 1U))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl 
        = ((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl)) 
           | ((0x180U & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                  >> 0x14U)) << 7U)) 
              | ((0x70U & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                    >> 0xdU)) << 4U)) 
                 | (8U & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                   >> 5U)) << 3U)))));
    if ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_ff 
         >= (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__opr2_ff)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_next 
            = (0x1ffffffffULL & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_ff 
                                 - (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__opr2_ff))));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT____Vconcswap_1_h0df038ea__0 
            = (((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_next)) 
                << 1U) | (QData)((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff 
                                          >> 0x1fU))));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT____Vconcswap_1_h0df038ea__0;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT____Vconcswap_1_h046977cd__0 
            = (1U | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff 
                     << 1U));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT____Vconcswap_1_h046977cd__0;
    } else {
        __Vtemp_hfdcd8dec__0[0U] = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff;
        __Vtemp_hfdcd8dec__0[1U] = (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_ff);
        __Vtemp_hfdcd8dec__0[2U] = (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_ff 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h3cee7c11__0, __Vtemp_hfdcd8dec__0, 1U);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_next 
            = (0x1ffffffffULL & (((QData)((IData)((1U 
                                                   & __Vtemp_h3cee7c11__0[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_h3cee7c11__0[1U]))));
        __Vtemp_hfdcd8dec__1[0U] = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff;
        __Vtemp_hfdcd8dec__1[1U] = (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_ff);
        __Vtemp_hfdcd8dec__1[2U] = (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_ff 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hbe96532b__0, __Vtemp_hfdcd8dec__1, 1U);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_next 
            = __Vtemp_hbe96532b__0[0U];
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl 
        = ((0x1f9U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl)) 
           | (((1U == (3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                     >> 0x14U)))) ? 
               (1U | ((IData)((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                               >> 0xcU)))) 
                      << 1U)) : (((2U == (3U & (IData)(
                                                       (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                        >> 0x14U)))) 
                                  | (3U == (3U & (IData)(
                                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                          >> 0x14U)))))
                                  ? (2U | (0U != (0x1fU 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                                     >> 0x14U))))
                                  : 0U)) << 1U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe_stall_flush 
        = (1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                 | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_stall_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sie_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sstatus_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__i_pf_exc_req 
        = (IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                    >> 3U) & (0x18U == (0x1eU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U]))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_wr_flag = 0U;
    __Vtableidx1 = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sret_req 
        = Vpcore_tb__ConstPool__TABLE_h847647f0_0[__Vtableidx1];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_req 
        = Vpcore_tb__ConstPool__TABLE_hc6d97f25_0[__Vtableidx1];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_req 
        = Vpcore_tb__ConstPool__TABLE_h237df0e2_0[__Vtableidx1];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sfence_vma_req 
        = Vpcore_tb__ConstPool__TABLE_h7a356dd0_0[__Vtableidx1];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sip_wr_flag = 0U;
    if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))) {
        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                      >> 0x10U)))) {
            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                          >> 0xfU)))) {
                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                              >> 0xeU)))) {
                    if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                      >> 0xcU)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 0xbU)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 8U)))) {
                                            if ((0x80U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_wr_flag = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sie_wr_flag = 1U;
                                                    }
                                                }
                                                if (
                                                    (0x40U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_wr_flag = 1U;
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sstatus_wr_flag = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_wr_flag = 1U;
                                                    }
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_wr_flag = 1U;
                                                    }
                                                }
                                                if (
                                                    (0x40U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_wr_flag = 1U;
                                                    }
                                                }
                                            }
                                            if ((0x80U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sip_wr_flag = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 0xbU)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_wr_flag = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x4000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                      >> 0xcU)))) {
                            if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag = 1U;
                                                    }
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_wr_flag = 1U;
                                                    }
                                                }
                                                if (
                                                    (0x40U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_wr_flag = 1U;
                                                    }
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag = 1U;
                                                    }
                                                }
                                            }
                                            if ((0x80U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_wr_flag = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 0xbU)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 8U)))) {
                                            if ((0x80U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_wr_flag = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_wr_flag = 1U;
                                                    }
                                                }
                                                if (
                                                    (0x40U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_wr_flag = 1U;
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                     >> 7U)))) {
                                                if (
                                                    (0x40U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_wr_flag = 1U;
                                                    }
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_wr_flag = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_wr_flag = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_wr_flag = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x10000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                          >> 0xfU)))) {
                if ((0x4000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 0xbU)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                     >> 7U)))) {
                                                if (
                                                    (0x40U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_wr_flag = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_wr_flag = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                      >> 0xcU)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 0xbU)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_wr_flag = 1U;
                                                    }
                                                }
                                                if (
                                                    (0x40U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_wr_flag = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x8000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                if ((0x4000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        } else if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                            } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                                } else if ((0x20U & 
                                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                                }
                            } else {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                            }
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        }
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    }
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                }
            } else if ((0x4000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        } else if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                             >> 6U)))) {
                            if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                            }
                        }
                    } else if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    } else if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                         >> 6U)))) {
                        if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        }
                    }
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
            }
        } else if ((0x8000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
        } else if ((0x4000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
            if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                            } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                            }
                        } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        } else if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        } else if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        }
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    }
                } else if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        } else if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        }
                    }
                } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    } else if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    } else if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    }
                } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                        }
                    }
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
            }
        } else if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
            if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                } else if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                } else if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                }
            } else if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    } else if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    }
                } else if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                  >> 5U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    }
                }
            } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
            } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
            } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
            } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
                    }
                }
            } else if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
            } else if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req = 1U;
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
        = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U]) 
           | ((IData)((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U])))) 
              << 5U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
        = (((IData)((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U])))) 
            >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]))) 
                                  >> 0x20U)) << 5U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[3U] 
        = ((IData)(((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]))) 
                    >> 0x20U)) >> 0x1bU);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b 
        = VL_LTS_III(32, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff, 
                     vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b 
        = (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff 
           < vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data 
        = ((8U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))
            ? ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))
                ? 0U : ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))
                         ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__mul2wrb_pipe_ff
                         : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr2wrb_data_pipe_ff))
            : ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))
                ? ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))
                    ? ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[1U] 
                        << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U] 
                                     >> 5U)) : ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[2U] 
                                                 << 0x1bU) 
                                                | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[1U] 
                                                   >> 5U)))
                : ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))
                    ? ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[3U] 
                        << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[2U] 
                                     >> 5U)) : 0U)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h140467bf__0 
        = (((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                      >> 0x14U)) == (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U])) 
           & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff) 
              & (0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                 >> 0x14U)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_hb3ea78f5__0 
        = (((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                      >> 0x19U)) == (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U])) 
           & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff) 
              & (0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                 >> 0x19U)))));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2lsummu 
        = (((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__dcache2lsummu_data_ff)) 
            << 1U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2lsummu_ack)));
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sfence_vma_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__unnamedblk1__DOT__i = 4U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__unnamedblk1__DOT__i = 0x10U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb2id_fb 
        = (((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data)) 
            << 6U) | (QData)((IData)(((0x3eU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U] 
                                                << 1U)) 
                                      | (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__stall_pc = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__pc_misalign = 0U;
    if ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__stall_pc = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__pc_misalign = 0U;
    } else if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__stall_pc = 1U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__pc_misalign = 1U;
    } else if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__stall_pc = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__pc_misalign = 1U;
    }
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_sequent__TOP__1(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_select_ff 
        = ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_select_ff)));
}

extern const VlWide<27>/*863:0*/ Vpcore_tb__ConstPool__CONST_h5c45ccc9_0;

VL_INLINE_OPT void Vpcore_tb___024root___nba_sequent__TOP__2(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*1:0*/ __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up = 0;
    CData/*7:0*/ __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data = 0;
    CData/*3:0*/ __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count = 0;
    CData/*2:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v0;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v0 = 0;
    CData/*7:0*/ __Vdlyvval__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v0;
    __Vdlyvval__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v0;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v0 = 0;
    CData/*2:0*/ __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr = 0;
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v1;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v1 = 0;
    CData/*2:0*/ __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr = 0;
    CData/*3:0*/ __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count = 0;
    CData/*2:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v0;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v0 = 0;
    CData/*7:0*/ __Vdlyvval__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v0;
    __Vdlyvval__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v0;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v0 = 0;
    CData/*2:0*/ __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr = 0;
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v1;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v1 = 0;
    CData/*2:0*/ __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr = 0;
    // Body
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr 
        = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count 
        = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr 
        = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr 
        = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v0 = 0U;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v1 = 0U;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count 
        = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr 
        = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v0 = 0U;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v1 = 0U;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up 
        = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up;
    vlSelf->__Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk 
        = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data 
        = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__unnamedblk1__DOT__i = 8U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__unnamedblk1__DOT__i = 8U;
    }
    if ((1U & ((~ (IData)(vlSelf->reset)) | (3U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff))))) {
        vlSelf->__Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk 
            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff) 
                     >> 1U));
    } else if (((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff)) 
                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt) 
                   == (0xfffU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))))) {
        vlSelf->__Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk 
            = (1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk)));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_ff 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_next));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_valid_ff 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_valid_next));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_valid_ff 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_valid_next));
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_next));
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_next));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__frame_err_ff 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__frame_err_next));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__frame_err_ff 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__frame_err_next));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_ff 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_next));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_ff 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_next));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_sign_ff 
        = ((~ ((~ (IData)(vlSelf->reset)) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_flush_i))) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_sign_next));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_sign_ff 
        = ((~ ((~ (IData)(vlSelf->reset)) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_flush_i))) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_sign_next));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_ff 
        = ((~ ((~ (IData)(vlSelf->reset)) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                             >> 1U))) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_next));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__gmap_bit_ff 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__gmap_bit_next));
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_overflow_ff 
        = ((IData)(vlSelf->reset) & (vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff 
                                     >= vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_slave_sel 
        = ((1U & ((~ (IData)(vlSelf->reset)) | (0U 
                                                == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff))))
            ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_default)
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_default) 
               ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_id)));
    if (vlSelf->reset) {
        if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_write) 
             & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_full)))) {
            __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count)));
        }
        if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_read) 
             & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_empty)))) {
            __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count 
                = (0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count) 
                           - (IData)(1U)));
        }
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                      >> 3U)))) {
            if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_write) 
                 & (8U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count)))) {
                __Vdlyvval__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v0 
                    = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_shift_data;
                __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v0 = 1U;
                __Vdlyvdim0__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v0 
                    = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr;
                __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr)));
            }
            if ((7U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr))) {
                __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr = 0U;
            }
            if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_write) 
                 & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_full)))) {
                __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count)));
            }
            if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_read) 
                 & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_empty)))) {
                __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count 
                    = (0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count) 
                               - (IData)(1U)));
            }
            if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_read) 
                 & (0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_data 
                    = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer
                    [vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr];
                __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr)));
            }
            if ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr))) {
                __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr = 0U;
            }
        }
        if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_write) 
             & (8U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count)))) {
            __Vdlyvval__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v0 
                = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_data;
            __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v0 = 1U;
            __Vdlyvdim0__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v0 
                = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr;
            __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr)));
        }
        if ((7U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr))) {
            __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr = 0U;
        }
        if (((5U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff)) 
             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__t2c_delay) 
                < (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff) 
                            >> 8U))))) {
            if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up))) {
                vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__t2c_delay 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__t2c_delay)));
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__t2c_delay = 0U;
        }
        if (((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff)) 
             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__c2t_delay) 
                < (0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff))))) {
            if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up))) {
                vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__c2t_delay 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__c2t_delay)));
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__c2t_delay = 0U;
        }
        if (((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff)) 
             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_intercs) 
                < (0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff))))) {
            if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up))) {
                vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_intercs 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_intercs)));
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_intercs = 0U;
        }
        if (((4U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff)) 
             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_interfr) 
                < (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff) 
                            >> 8U))))) {
            if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up))) {
                vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_interfr 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_interfr)));
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_interfr = 0U;
        }
        if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt) 
             == (0xfffU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff))))) {
            __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up 
                = (3U & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up)));
        } else if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff) 
                     != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next)) 
                    | (2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up)))) {
            __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up = 0U;
        }
        if (((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt) 
               == (0xfffU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))) 
              & ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)) 
                 == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk))) 
             & (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_shift_data 
                = ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff))
                    ? (((IData)(vlSelf->pcore_tb__DOT__spi_miso) 
                        << 7U) | (0x7fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_shift_data) 
                                           >> 1U)))
                    : ((0xfeU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_shift_data) 
                                 << 1U)) | (IData)(vlSelf->pcore_tb__DOT__spi_miso)));
        }
        vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_prescaler_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_prescaler_next;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_src_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT____Vcellinp__plic_top_module__irq_src_i;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__shifter_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__shifter_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__shifter_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__shifter_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_tx_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_tx_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_tx_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_tx_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lctrl_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lctrl_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_scratch_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_scratch_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_rx_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_rx_next;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rxctrl_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rxctrl_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_txctrl_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_txctrl_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rx_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rx_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_next;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_next;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_next;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_ie_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_ie_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_int_mask_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_int_mask_next;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_next;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_next;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode 
            = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_cs_mode_next;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_baud_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_baud_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_next;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_next;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_next;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff 
            = ((((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count)) 
                 > (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)) 
                << 1U) | ((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count)) 
                          < (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)));
        if (((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff)) 
             & (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next)))) {
            if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff))) {
                vlSelf->pcore_tb__DOT__spi_mosi = (1U 
                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__reg_tx_data));
                __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data 
                    = (0x7fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__reg_tx_data) 
                                >> 1U));
            } else {
                vlSelf->pcore_tb__DOT__spi_mosi = (1U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__reg_tx_data) 
                                                      >> 7U));
                __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data 
                    = (0xfeU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__reg_tx_data) 
                                << 1U));
            }
        } else if ((((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff)) 
                     & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt) 
                        == (0xfffU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff))))) 
                    & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff) 
                       ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk)))) {
            if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff))) {
                vlSelf->pcore_tb__DOT__spi_mosi = (1U 
                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data));
                __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data 
                    = (0x7fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data) 
                                >> 1U));
            } else {
                vlSelf->pcore_tb__DOT__spi_mosi = (1U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data) 
                                                      >> 7U));
                __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data 
                    = (0xfeU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data) 
                                << 1U));
            }
        }
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[2U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[4U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[4U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[6U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[6U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
            = (IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mmu 
                       >> 1U));
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_next;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_next;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_high_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_high_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_low_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_low_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scause_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scause_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[2U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[4U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[4U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[7U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[7U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[9U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[9U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xeU] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xeU];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x13U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x13U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x18U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x18U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x1aU] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x1aU];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_data 
            = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_data_next;
        if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_busy)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff 
                = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_next;
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff 
                = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_next;
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff 
                = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_next;
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff 
                = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_next;
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_default 
                = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_cs_default_next;
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_id 
                = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_cs_id_next;
        }
        vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_next;
        if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_read) 
             & (0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__reg_tx_data 
                = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer
                [vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr];
            __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr)));
        }
        if ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr))) {
            __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr = 0U;
        }
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_valid_ff 
            = (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mmu));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next;
    } else {
        __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count = 0U;
        __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr = 0U;
        __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v1 = 1U;
        __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count = 0U;
        __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr = 0U;
        __Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v1 = 1U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__t2c_delay = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__c2t_delay = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_intercs = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_interfr = 0U;
        __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_shift_data = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_prescaler_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_src_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__shifter_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__shifter_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_tx_ff = 0x4aU;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_tx_ff = 0x4aU;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lctrl_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_scratch_ff = 8U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_rx_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rxctrl_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_txctrl_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rx_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_ff = 0xeU;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_ie_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_int_mask_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_baud_ff = 8U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_ff = 0x10U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_ff = 0U;
        __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_data = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff = 0U;
        vlSelf->pcore_tb__DOT__spi_mosi = 0U;
        __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_ff = 0ULL;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[2U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[4U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[6U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_ff = 0ULL;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_ff = 0x26ULL;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_high_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_low_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scause_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[2U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[2U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[3U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[4U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[4U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[5U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[6U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[7U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[7U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[8U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[9U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[9U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0xaU];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0xbU];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0xcU];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0xdU];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xeU] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0xeU];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0xfU];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0x10U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0x11U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0x12U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x13U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0x13U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0x14U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0x15U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0x16U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0x17U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x18U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0x18U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0x19U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x1aU] 
            = Vpcore_tb__ConstPool__CONST_h5c45ccc9_0[0x1aU];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff = 3U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_data = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff = 0x101U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff = 1U;
        vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff = 0ULL;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_default = 3U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_id = 0U;
        __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__reg_tx_data = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_valid_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_ff = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__mul_stall_ff 
        = ((~ ((~ (IData)(vlSelf->reset)) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush))) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__mul_stall_next));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__timer_irq_ff 
        = ((IData)(vlSelf->reset) & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                              >> 2U)) 
                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_accept_flag)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq1_ff 
        = ((IData)(vlSelf->reset) & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                              >> 4U)) 
                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_accept_flag)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq0_ff 
        = ((IData)(vlSelf->reset) & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                              >> 3U)) 
                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_accept_flag)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_ff 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_next));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state 
        = ((1U & ((~ (IData)(vlSelf->reset)) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                                >> 1U)))
            ? 0U : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next));
    if ((1U & ((~ (IData)(vlSelf->reset)) | (IData)(
                                                    ((0x20U 
                                                      == 
                                                      (0xf0U 
                                                       & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) 
                                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done)))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_reserve_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_addr_ff = 0U;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_reserve_ff = 1U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_addr_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[2U];
    }
    if ((1U & ((~ (IData)(vlSelf->reset)) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_flush_i)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_ff = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff = 0U;
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_next;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_next;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_ff 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_next));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr 
        = __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr 
        = __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up 
        = __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr 
        = __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr;
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v0) {
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v0] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v0;
    }
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer__v1) {
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[2U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[3U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[4U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[5U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[6U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[7U] = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count 
        = __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data 
        = __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_write 
        = ((IData)(vlSelf->reset) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txdata));
    if ((0x50U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_prescaler_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_prescaler_next = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_next 
            = (1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_ff)));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_prescaler_next 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_prescaler_ff)));
        vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_next 
            = (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_ff));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_rx_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_ff)
            ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_ff)
            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_rx_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rx_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_ff)
            ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_ff)
            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rx_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__tx_pin = 1U;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_ff;
    if ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_next 
            = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_valid_ff) 
                & (0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_ff)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_next = 2U;
    } else if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_ff))) {
        if ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_ff))) {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_next = 0U;
        }
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_next = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__shifter_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__shifter_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__tx_pin = 1U;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__shifter_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__shifter_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_ff;
    if ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_next 
            = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_valid_ff) 
                & (0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_ff)))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_next = 2U;
    } else if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_ff))) {
        if ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_ff))) {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_next = 0U;
        }
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_next = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__frame_err_ff)
            ? (0xf7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_next))
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_ff)
                ? (1U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_next))
                : ((0x9fU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_next)) 
                   | (0x60U & ((- (IData)((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_ff)))) 
                               << 5U)))));
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_ff) 
            << 2U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_ff));
    vlSelf->pcore_tb__DOT__dut__DOT____Vcellinp__plic_top_module__irq_src_i 
        = (((IData)((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_ie_ff) 
                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_ff)))) 
            << 1U) | (0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_int_mask_ff) 
                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_ff))));
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__prio_th 
        = (7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_next = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_next = 0U;
    if (((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff) 
           >> 1U) & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                     >> 1U)) & ((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                                       >> 3U)) > (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__prio_th)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__prio_th 
            = (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                     >> 3U));
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_next = 2U;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_next = 1U;
    }
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff) 
          & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff)) 
         & ((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff)) 
            > (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__prio_th)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__prio_th 
            = (7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff));
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_next = 1U;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_next = 1U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__prio_th 
        = (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff) 
                 >> 3U));
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_next = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_next = 0U;
    if (((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff) 
           >> 1U) & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                     >> 3U)) & ((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                                       >> 3U)) > (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__prio_th)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__prio_th 
            = (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                     >> 3U));
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_next = 2U;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_next = 1U;
    }
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff) 
          & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
             >> 2U)) & ((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff)) 
                        > (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__prio_th)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__prio_th 
            = (7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff));
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_next = 1U;
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_next = 1U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_baud_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_baud_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_baud_ff;
    if ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_ff))) {
        if ((1U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_ff))) {
            if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_ff))) {
                vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__tx_pin 
                    = (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__shifter_ff));
                vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_next 
                    = (0xffU & ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_ff))
                                 ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_baud_ff)
                                 : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_ff) 
                                    - (IData)(1U))));
            }
        }
        if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_ff))) {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_next = 0xbU;
            vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__shifter_next 
                = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_tx_ff) 
                   << 1U);
        } else if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_ff))) {
            if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_ff))) {
                vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_next 
                    = (0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_ff) 
                               - (IData)(1U)));
                vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__shifter_next 
                    = (0x100U | (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__shifter_ff) 
                                          >> 1U)));
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_mid_point 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_ff) 
           == (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_baud_ff) 
                        >> 1U)));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_ff;
    if ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_ff))) {
        if ((1U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_ff))) {
            if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_ff))) {
                vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__tx_pin 
                    = (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__shifter_ff));
                vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_next 
                    = (0xffU & ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_ff))
                                 ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_ff)
                                 : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_ff) 
                                    - (IData)(1U))));
            }
        }
        if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_ff))) {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__shifter_next 
                = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_tx_ff) 
                   << 1U);
            vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_next = 0xbU;
        } else if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_ff))) {
            if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_ff))) {
                vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__shifter_next 
                    = (0x100U | (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__shifter_ff) 
                                          >> 1U)));
                vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_next 
                    = (0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_ff) 
                               - (IData)(1U)));
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_mid_point 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_ff) 
           == (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_ff) 
                        >> 1U)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
        = (QData)((IData)(((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff) 
                             << 4U) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff) 
                                       << 3U)) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_overflow_ff) 
                                                   << 2U) 
                                                  | ((IData)(vlSelf->pcore_tb__DOT__irq_soft) 
                                                     << 1U)))));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_empty 
        = (0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_full 
        = (8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
        = (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
           | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__gmap_bit_ff) 
              << 5U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_h1d20b23b__0 
        = (1U & (~ (IData)((0x48U == (0x48U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_hf175b14a__0 
        = (1U & ((~ vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff) 
                 | (IData)((4U == (6U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_hb35f4e03__0 
        = (IData)((0U != (0xaU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_h1148e73c__0 
        = (1U & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                  >> 6U) & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                             >> 1U) | ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                        >> 3U) & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                                  >> 0x13U)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__seip_irq_req 
        = (1U & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                  & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff) 
                 >> 9U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ssip_irq_req 
        = (1U & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                  & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff) 
                 >> 1U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__stip_irq_req 
        = (1U & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                  & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff) 
                 >> 5U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_exc_req = 0U;
    if (((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)) 
         & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
            >> 0x14U))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_exc_req = 1U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__en_vaddr 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff 
            >> 0x1fU) & (3U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
        = ((0xf00000000ULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu) 
           | (IData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__gmap_bit_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__gmap_bit_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
        = (0xcffffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu);
    if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff))) {
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff) 
                      >> 1U)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
                = ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff))
                    ? (0x100000000ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu)
                    : (0x200000000ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu));
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
        = ((0x3ffffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu) 
           | ((QData)((IData)((((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff)) 
                                << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_ff)))) 
              << 0x22U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done = 0U;
    if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done = 1U;
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult 
        = ((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_ff)) 
           * (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult_ss 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_ff), 
                      VL_EXTENDS_QI(64,32, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__mul_stall_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__mul_stall_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_ff) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__mul_stall_next = 0U;
    } else if ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__mul_stall_next = 1U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_ff;
    if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff))) {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_next 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_ff)));
            if (vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_mid_point) {
                vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_next = 0U;
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_next = 0U;
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_baud_ff;
    if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff))) {
        if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff)))) {
            if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_ff))) {
                if ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_ff))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_next 
                        = (0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_ff) 
                                   - (IData)(1U)));
                }
            }
        }
        if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff))) {
            if ((1U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_ff))) {
                vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_next 
                    = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_ff) 
                                - (IData)(1U)));
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_next 
                = (0xffU & ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_ff))
                             ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_baud_ff)
                             : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_ff) 
                                - (IData)(1U))));
        }
    } else if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff))) {
        if (vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_mid_point) {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_next = 8U;
            vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_next 
                = vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_baud_ff;
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_ff;
    if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff))) {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_next 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_ff)));
            if (vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_mid_point) {
                vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_next = 0U;
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_next = 0U;
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_ff;
    if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff))) {
        if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff)))) {
            if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_ff))) {
                if ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_ff))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_next 
                        = (0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_ff) 
                                   - (IData)(1U)));
                }
            }
        }
        if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff))) {
            if ((1U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_ff))) {
                vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_next 
                    = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_ff) 
                                - (IData)(1U)));
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_next 
                = (0xffU & ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_ff))
                             ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_ff)
                             : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_ff) 
                                - (IData)(1U))));
        }
    } else if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff))) {
        if (vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_mid_point) {
            vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_next = 8U;
            vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_next 
                = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_ff;
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr 
        = __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr;
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v0) {
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v0] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v0;
    }
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer__v1) {
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[2U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[3U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[4U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[5U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[6U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[7U] = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count 
        = __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__itlb_update = 0U;
    if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff)))) {
                if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_valid_ff) {
                    if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff)) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__gmap_bit_next = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_hf175b14a__0)))) {
                        if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_hb35f4e03__0) {
                            if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_ff) {
                                if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_h1d20b23b__0)))) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__itlb_update = 1U;
                                }
                            }
                            if (((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff)) 
                                 & (0U != (0x3ffU & 
                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                            >> 0xaU))))) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__itlb_update = 0U;
                            }
                        }
                    }
                }
            }
            if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_next = 1U;
            } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_valid_ff) {
                if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_hf175b14a__0)))) {
                    if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_hb35f4e03__0)))) {
                        if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff) {
                            if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_next = 1U;
                            }
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_next = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__gmap_bit_next = 0U;
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_next = 0U;
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_irq_req 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__seip_irq_req) 
           | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__stip_irq_req) 
              | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ssip_irq_req)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__i_page_fault = 0U;
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
                       >> 0x21U)))) {
        if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
                           >> 0x22U)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__i_page_fault = 1U;
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_empty 
        = (0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_full 
        = (8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
        = ((0xffffffffeULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if) 
           | (IData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__i_page_fault)));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_sequent__TOP__3(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_sequent__TOP__3\n"); );
    // Init
    SData/*11:0*/ __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt = 0;
    // Body
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt 
        = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt;
    if (vlSelf->reset) {
        if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt) 
             < (0xfffU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff))))) {
            __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt 
                = (0xfffU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt)));
        } else if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff) 
                     != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next)) 
                    | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt) 
                       == (0xfffU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))))) {
            __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt = 0U;
        }
    } else {
        __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt 
        = __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt;
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_sequent__TOP__4(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_sequent__TOP__4\n"); );
    // Init
    CData/*4:0*/ __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt;
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt = 0;
    // Body
    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt 
        = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt;
    if (vlSelf->reset) {
        if ((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)))) {
                if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk) 
                      == (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff) 
                                >> 1U))) & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt) 
                                            <= (0xfU 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                                   >> 4U))))) {
                    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt)));
                }
            }
            if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff))) {
                if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk) 
                      != (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff) 
                                >> 1U))) & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt) 
                                            <= (0xfU 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                                   >> 4U))))) {
                    __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt)));
                }
            }
        } else {
            __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt = 0U;
        }
    } else {
        __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt 
        = __Vdly__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt;
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_sequent__TOP__5(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0 = 0;
    IData/*31:0*/ __Vdlyvval__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0;
    __Vdlyvval__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0 = 0;
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v1;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v33;
    __Vdlyvdim0__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v33 = 0;
    IData/*31:0*/ __Vdlyvval__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v33;
    __Vdlyvval__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v33 = 0;
    CData/*0:0*/ __Vdlyvset__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v33;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v33 = 0;
    // Body
    __Vdlyvset__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0 = 0U;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v1 = 0U;
    __Vdlyvset__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v33 = 0U;
    if (vlSelf->reset) {
        if (((0U != (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U])) 
             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))) {
            __Vdlyvval__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0 
                = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data;
            __Vdlyvset__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0 = 1U;
            __Vdlyvdim0__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0 
                = (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U]);
        }
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__conc_32_misallign = 0U;
    } else {
        __Vdlyvset__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v1 = 1U;
        if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__conc_32_misallign 
                = ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[2U] 
                    << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                                 >> 1U));
        } else if ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__conc_32_misallign = 0U;
        }
    }
    if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__debug_port_i))) {
        __Vdlyvval__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v33 
            = (IData)((vlSelf->pcore_tb__DOT__dut__DOT__debug_port_i 
                       >> 6U));
        __Vdlyvset__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v33 = 1U;
        __Vdlyvdim0__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v33 
            = (0x1fU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__debug_port_i 
                                >> 1U)));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__rx_pin_ff 
        = (1U & ((~ (IData)(vlSelf->reset)) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_rxd_i)));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__rx_pin_ff 
        = (1U & ((~ (IData)(vlSelf->reset)) | (IData)(vlSelf->pcore_tb__DOT__uart_rx)));
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v0;
    }
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v1) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[2U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[3U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[4U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[5U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[6U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[7U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[8U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[9U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0xaU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0xbU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0xcU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0xdU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0xeU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0xfU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x10U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x11U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x12U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x13U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x14U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x15U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x16U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x17U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x18U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x19U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x1aU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x1bU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x1cU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x1dU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x1eU] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0x1fU] = 0U;
    }
    if (__Vdlyvset__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v33) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[__Vdlyvdim0__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v33] 
            = __Vdlyvval__pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file__v33;
    }
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_sequent__TOP__6(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff 
        = ((IData)(vlSelf->reset) ? vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_next
            : 0ULL);
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2csr 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_select_ff)
            ? (1ULL | ((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff)) 
                       << 1U)) : ((QData)((IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff 
                                                   >> 0x20U))) 
                                  << 1U));
}

VL_INLINE_OPT void Vpcore_tb___024root___nba_sequent__TOP__7(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
        = ((IData)(vlSelf->reset) ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next
            : 0U);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl 
        = ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl)) 
           | (0xeU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                      >> 0xcU)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
        = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U]) 
           | (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                       >> 0x10U)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard 
        = (((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                      >> 0x14U)) == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                              >> 0x10U))) 
           & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
               >> 3U) & (0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                         >> 0x14U)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard 
        = (((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                      >> 0x19U)) == (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                              >> 0x10U))) 
           & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
               >> 3U) & (0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                         >> 0x19U)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dcache_flush_req 
        = (1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                 | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_result 
        = ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
            ? ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]
                : ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                    ? ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b)
                            ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]
                            : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff)
                        : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b)
                            ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff
                            : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]))
                    : ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b)
                            ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]
                            : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff)
                        : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b)
                            ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff
                            : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]))))
            : ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                ? ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                    ? ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff 
                           | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U])
                        : (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff 
                           & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]))
                    : ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff 
                           ^ vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U])
                        : (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff 
                           + vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U])))
                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]));
}

extern const VlUnpacked<CData/*3:0*/, 64> Vpcore_tb__ConstPool__TABLE_h354860ac_0;

VL_INLINE_OPT void Vpcore_tb___024root___nba_comb__TOP__0(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h50c85e97__0;
    pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h50c85e97__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_he0ec7886__0;
    pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_he0ec7886__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT____VdfgExtracted_h2af83cb0__0;
    pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT____VdfgExtracted_h2af83cb0__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h39b4dcc6__0;
    pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h39b4dcc6__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hac15c8da__0;
    pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hac15c8da__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hb164bcbf__0;
    pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hb164bcbf__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h45a1e74b__0;
    pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h45a1e74b__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h7e08302d__0;
    pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h7e08302d__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__uart_module__DOT____VdfgTmp_ha680e920__0;
    pcore_tb__DOT__dut__DOT__uart_module__DOT____VdfgTmp_ha680e920__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__uart_ns_module__DOT____VdfgTmp_h1ea301df__0;
    pcore_tb__DOT__dut__DOT__uart_ns_module__DOT____VdfgTmp_h1ea301df__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__clint_module__DOT____VdfgTmp_h7b251b97__0;
    pcore_tb__DOT__dut__DOT__clint_module__DOT____VdfgTmp_h7b251b97__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____VdfgTmp_hf58aaa35__0;
    pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____VdfgTmp_hf58aaa35__0 = 0;
    CData/*0:0*/ pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0;
    pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0 = 0;
    CData/*0:0*/ __VdfgTmp_h3843d958__0;
    __VdfgTmp_h3843d958__0 = 0;
    CData/*0:0*/ __VdfgTmp_h43ca03c9__0;
    __VdfgTmp_h43ca03c9__0 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[0U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[1U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[2U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[3U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[4U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[1U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[2U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[3U] = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[4U] = 0U;
    if ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_ff))) {
        if ((1U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_ff))) {
            if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_ff))) {
                if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[0U] 
                        = (1U | (0xfffffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U]));
                    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[1U] 
                        = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[1U]) 
                           | (0xfffffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[1U]));
                    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[2U] 
                        = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[2U]) 
                           | (0xfffffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[2U]));
                    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[3U] 
                        = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[3U]) 
                           | (0xfffffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[3U]));
                    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[4U] 
                        = (1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[4U]);
                }
            }
        }
        if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_ff))) {
            if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U] 
                    = (1U | (0xfffffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[1U] 
                    = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[1U]) 
                       | (0xfffffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[1U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[2U] 
                    = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[2U]) 
                       | (0xfffffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[2U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[3U] 
                    = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[3U]) 
                       | (0xfffffffeU & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[3U]));
                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[4U] 
                    = (1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[4U]);
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mmu = 0ULL;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2dbus = 0ULL;
    if ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_ff))) {
        if ((1U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_ff))) {
            if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_ff))) {
                if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2lsummu))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mmu 
                        = (1ULL | ((QData)((IData)(
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2lsummu 
                                                    >> 1U))) 
                                   << 1U));
                }
            }
        }
        if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_ff))) {
            if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2lsummu))) {
                vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2dbus 
                    = (1ULL | ((QData)((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2lsummu 
                                                >> 1U))) 
                               << 1U));
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if 
        = ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_ff))
            ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_ff
            : (((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache2if_data_ff)) 
                << 1U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2if_ack_o))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata = 0U;
    if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))) {
        if ((0x10000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
            if ((0x8000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                if ((0x4000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                    = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                             >> 2U));
                            } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                        = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                                 >> 2U));
                                } else if ((0x20U & 
                                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                        = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                                 >> 2U));
                                }
                            } else if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                 >> 6U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 5U)))) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                        = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                                 >> 2U));
                                }
                            }
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        }
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                      >> 0xcU)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 0xbU)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 0xaU)))) {
                                    if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 8U)))) {
                                            if ((0x80U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata = 0U;
                                                    }
                                                }
                                            } else if (
                                                       (0x40U 
                                                        & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                    = 
                                                    ((0x20U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                      ? 0U
                                                      : 3U);
                                            } else if (
                                                       (0x20U 
                                                        & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata = 0x702U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    }
                } else {
                    if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                    = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                             >> 2U));
                            }
                        }
                    } else if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        }
                    }
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 0xbU)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                     >> 7U)))) {
                                                if (
                                                    (0x40U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                             >> 5U)))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff;
                                                    }
                                                } else {
                                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                        = 
                                                        ((0x20U 
                                                          & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                          ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_high_ff
                                                          : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                             >> 0xbU)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 7U)))) {
                                            if ((0x40U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 5U)))) {
                                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff;
                                                }
                                            } else {
                                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                    = 
                                                    ((0x20U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                      ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_low_ff
                                                      : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x4000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                             >> 6U)))) {
                            if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                    = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                             >> 2U));
                            }
                        }
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 7U)))) {
                                            if ((0x40U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                    = 
                                                    ((0x20U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                      ? 0U
                                                      : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff);
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                            >> 5U)))) {
                                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                    = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                             >> 6U)))) {
                            if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                    = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                             >> 2U));
                            }
                        }
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 7U)))) {
                                            if ((0x40U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                    = 
                                                    ((0x20U 
                                                      & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                      ? 0U
                                                      : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff);
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                            >> 5U)))) {
                                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                    = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                        = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                 >> 2U));
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                    = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                             >> 2U));
            }
        } else {
            if ((0x8000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                    = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                             >> 2U));
            } else if ((0x4000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                        = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                                 >> 2U));
                                } else if ((0x80U & 
                                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                        = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                                 >> 2U));
                                }
                            } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                    = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                             >> 2U));
                            } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                    = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                             >> 2U));
                            } else if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                    = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                             >> 2U));
                            } else if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                    = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                             >> 2U));
                            }
                        } else {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        }
                    } else if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                    = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                             >> 2U));
                            } else if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                    = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                             >> 2U));
                            }
                        }
                    } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        }
                    } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                    = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                             >> 2U));
                            }
                        }
                    }
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                        = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                 >> 2U));
                }
            } else if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if (((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)) 
                                & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x14U))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req = 1U;
                    }
                } else if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 2U));
                    } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        } else if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        }
                    }
                } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                        = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                 >> 2U));
                } else if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                        = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                 >> 2U));
                } else if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                        = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                 >> 2U));
                } else if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                                = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                         >> 2U));
                        }
                    }
                } else if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                        = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                 >> 2U));
                } else if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                        = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                 >> 2U));
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req 
                    = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                             >> 2U));
            }
            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                          >> 0xfU)))) {
                if ((0x4000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 0xbU)))) {
                                if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                    if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                     >> 7U)))) {
                                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata = 0U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 5U)))) {
                                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 8U)))) {
                                        if ((0x80U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 5U)))) {
                                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff;
                                                }
                                            }
                                        } else {
                                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                = (
                                                   (0x40U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                    ? 
                                                   ((0x20U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                     ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff
                                                     : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_ff)
                                                    : 
                                                   ((0x20U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                     ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff
                                                     : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff));
                                        }
                                    }
                                }
                            }
                        } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 9U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 8U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 7U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                     >> 5U)))) {
                                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                    = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                             >> 9U)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 8U)))) {
                                if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                    if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 5U)))) {
                                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_ff;
                                        }
                                    } else {
                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                            = ((0x20U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff
                                                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff);
                                    }
                                } else {
                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                        = ((0x40U & 
                                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                            ? ((0x20U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_ff
                                                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_ff)
                                            : ((0x20U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                ? 0x40141101U
                                                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff));
                                }
                            }
                        }
                    }
                } else if ((0x2000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                    if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 0xaU)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((1U 
                                                              == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)) 
                                                             & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                                                >> 0x14U))))) {
                                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                      >> 0xaU)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 9U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                              >> 8U)))) {
                                    if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                     >> 5U)))) {
                                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                    = 
                                                    (0x222U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff);
                                            }
                                        }
                                    } else {
                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                            = ((0x40U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                    ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_ff
                                                    : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scause_ff)
                                                : (
                                                   (0x20U 
                                                    & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                    ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_ff
                                                    : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_ff));
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                         >> 0xaU)))) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                          >> 8U)))) {
                                if ((0x80U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                    if ((0x40U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                    >> 5U)))) {
                                            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                                = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_ff;
                                        }
                                    } else {
                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                            = ((0x20U 
                                                & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U])
                                                ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_ff
                                                : (0x222U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff));
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                   >> 6U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                                  >> 5U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata 
                                            = (0x800de762U 
                                               & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult_su_int 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_sign_ff)
            ? (1ULL + (~ vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult))
            : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult);
    if ((8U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_next 
            = (1U & ((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff) 
                         >> 2U)) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__done_ff)));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_result_next 
            = ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff))
                ? 0U : ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff))
                         ? ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff))
                             ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__rem_ff)
                             : ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_sign_ff))
                                 ? ((IData)(1U) + (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__rem_ff)))
                                 : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__rem_ff)))
                         : ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff))
                             ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff
                             : ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_sign_ff) 
                                  ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_sign_ff)) 
                                 & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff 
                                       >> 0x1fU))) ? 
                                ((IData)(1U) + (~ vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff))
                                 : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff))));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_next 
            = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff) 
                     >> 2U));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_result_next 
            = ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff))
                ? ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff))
                    ? ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff))
                        ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult 
                                   >> 0x20U)) : (IData)(
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult_su_int 
                                                         >> 0x20U)))
                    : ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff))
                        ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult_ss 
                                   >> 0x20U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult_ss)))
                : 0U);
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[2U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[2U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[4U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[4U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[6U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[6U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index 
        = (3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff 
                 >> 0x16U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass 
        = (IData)((((0x20U == (0xf0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) 
                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_reserve_ff)) 
                   & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_addr_ff 
                      == vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U])));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_line_wr = 0U;
    if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff))) {
            if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff))) {
                if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_line_wr = 1U;
                }
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_line_clean = 0U;
    if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff))) {
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff)))) {
                if ((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U])) {
                    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dcache_flush_req) {
                        vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_line_clean = 1U;
                    }
                }
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U] 
        = ((0xfffffffeU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U]) 
           | (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
        = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U]) 
           | (((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if))
                ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if 
                           >> 1U)) : 0x13U) << 1U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[2U] 
        = (((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if))
             ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if 
                        >> 1U)) : 0x13U) >> 0x1fU);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_exc_req 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req) 
           | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_exc_req) 
              | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata 
        = ((1U == (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                         >> 7U))) ? ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                      << 0x1bU) | (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                                   >> 5U))
            : ((2U == (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                             >> 7U))) ? (((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                             >> 5U)) 
                                         | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata)
                : ((3U == (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                 >> 7U))) ? ((~ ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                                  << 0x1bU) 
                                                 | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                                    >> 5U))) 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata)
                    : 0U)));
    if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req = 0U;
    } else if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req = 0U;
    } else if ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                               >> 4U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl 
        = ((0xeU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl)) 
           | (1U & ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                    >> 4U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req)
                     : (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                        >> 3U))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_ff;
    if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req = 0U;
    } else if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req = 1U;
    } else if ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                               >> 4U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req = 1U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__ld_req 
        = ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                           >> 4U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req)
            : (0U != (7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                            >> 0xaU))));
    if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req 
            = (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state));
    } else if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req = 0U;
    } else if ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                               >> 4U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__st_req 
        = ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                           >> 4U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req)
            : (0U != (3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                            >> 8U))));
    if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
            if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data 
                    = ((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                       >> 4U))) ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]
                        : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_result);
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
        = ((0xfU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U]) 
           | (((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                               >> 4U))) ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data
                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]) 
              << 4U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
        = ((0xfffffff0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U]) 
           | (((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                               >> 4U))) ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data
                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]) 
              >> 0x1cU));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__is_missaligned 
        = (IData)(((0x60000U == (0x60000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U])) 
                   & (3U != (3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                                   >> 1U)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__pc_out 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
            << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U] 
                         >> 1U));
    if ((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__pc_out 
            = ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U] 
                             >> 1U));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__next_state 
            = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__is_missaligned)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__pc_out 
            = ((IData)(2U) + ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                               << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U] 
                                            >> 1U)));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__next_state 
            = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U])
                ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__pc_out 
            = ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U] 
                             >> 1U));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__next_state 
            = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__next_misaligned)
                ? 1U : 0U);
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__next_state = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next 
            = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata)
                ? (0xffffffc1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata)
                : (0xfffffffdU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_next 
            = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata)
                ? (0xffffffc1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata)
                : (0xfffffffdU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag)
            ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
            : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_wr_flag)
            ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
            : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_ff);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
            = (0xaaaU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata);
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sie_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
            = ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata 
                & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_ff) 
               | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                  & (~ vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_ff)));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__satp_mode 
        = (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata 
           >> 0x1fU);
    if ((1U & (~ ((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)) 
                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                     >> 0x14U))))) {
        if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_wr_flag) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_next 
                = (0x803fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata);
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__satp_mode)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_next = 0U;
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_inc 
        = (1U & (~ vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_wr_flag)
            ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_inc)
                ? ((IData)(1U) + vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff)
                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sip_mask = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
        = ((0xfffff7ffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next) 
           | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq0_ff) 
              << 0xbU));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
        = ((0xfffffdffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next) 
           | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq1_ff) 
              << 9U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
        = ((0xffffff7fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next) 
           | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__timer_irq_ff) 
              << 7U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
        = (0xfffffff7U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next);
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
            = ((0x222U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata) 
               | (0xfffffdddU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff));
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sip_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sip_mask 
            = (0x222U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_ff);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
            = ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata 
                & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sip_mask) 
               | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                  & (~ vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sip_mask)));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_h9d036853__0 
        = ((~ (IData)((0x84U == (0x84U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff)))) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__st_req));
    pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT____VdfgExtracted_h2af83cb0__0 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__st_req) 
           | (0U != (0xf0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT____VdfgTmp_h1ec82566__0 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__ld_req) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__st_req));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_inc 
        = ((0xffffffffU == vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_inc));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_wr_flag)
            ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_inc)
                ? ((IData)(1U) + vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff)
                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req 
        = (1U & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                  & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff) 
                 >> 0xbU));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req 
        = (1U & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                  & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff) 
                 >> 3U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req 
        = (1U & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                  & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff) 
                 >> 7U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__dtlb_update = 0U;
    if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff)))) {
                if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_valid_ff) {
                    if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_hf175b14a__0)))) {
                        if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_hb35f4e03__0) {
                            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_ff)))) {
                                if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_h1148e73c__0) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__dtlb_update = 1U;
                                }
                                if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgExtracted_h9d036853__0) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__dtlb_update = 0U;
                                }
                            }
                            if (((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff)) 
                                 & (0U != (0x3ffU & 
                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                            >> 0xaU))))) {
                                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__dtlb_update = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__st_page_fault = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgTmp_hd5ca5221__0 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT____VdfgTmp_h1ec82566__0) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__en_vaddr));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgExtracted_h50a45c3b__0 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT____VdfgTmp_h1ec82566__0) 
           | (IData)(((0U != (0xf0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) 
                      | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dcache_flush_req))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ld_page_fault = 0U;
    if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
                       >> 0x21U)))) {
        if ((1U & (~ (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
                              >> 0x22U))))) {
            if (pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT____VdfgExtracted_h2af83cb0__0) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__st_page_fault = 1U;
            }
            if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT____VdfgExtracted_h2af83cb0__0)))) {
                if (((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__st_req)) 
                     & ((~ (IData)((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                   >> 4U))))) 
                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT____VdfgTmp_h1ec82566__0)))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ld_page_fault = 1U;
                }
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu = 0ULL;
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT____VdfgTmp_h1ec82566__0) 
          & (((0x35fU >= ((IData)(0x2cU) + (0x3ffU 
                                            & ((IData)(0x36U) 
                                               * (0xfU 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                     >> 0x16U))))))
               ? (0x3ffU & (((0U == (0x1fU & ((IData)(0x2cU) 
                                              + (0x3ffU 
                                                 & ((IData)(0x36U) 
                                                    * 
                                                    (0xfU 
                                                     & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                        >> 0x16U)))))))
                              ? 0U : (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[
                                      (((IData)(0x35U) 
                                        + (0x3ffU & 
                                           ((IData)(0x36U) 
                                            * (0xfU 
                                               & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                  >> 0x16U))))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x2cU) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0x36U) 
                                                           * 
                                                           (0xfU 
                                                            & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                               >> 0x16U))))))))) 
                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[
                               (((IData)(0x2cU) + (0x3ffU 
                                                   & ((IData)(0x36U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                          >> 0x16U))))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(0x2cU) 
                                             + (0x3ffU 
                                                & ((IData)(0x36U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                       >> 0x16U)))))))))
               : 0U) == (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                         >> 0x16U))) & ((0x35fU >= 
                                         ((IData)(0x21U) 
                                          + (0x3ffU 
                                             & ((IData)(0x36U) 
                                                * (0xfU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                      >> 0x16U)))))) 
                                        & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[
                                           (((IData)(0x21U) 
                                             + (0x3ffU 
                                                & ((IData)(0x36U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                       >> 0x16U))))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x21U) 
                                                  + 
                                                  (0x3ffU 
                                                   & ((IData)(0x36U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                          >> 0x16U)))))))))) {
        if (((((0x35fU >= ((IData)(0x22U) + (0x3ffU 
                                             & ((IData)(0x36U) 
                                                * (0xfU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                      >> 0x16U))))))
                ? (0x3ffU & (((0U == (0x1fU & ((IData)(0x22U) 
                                               + (0x3ffU 
                                                  & ((IData)(0x36U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                         >> 0x16U)))))))
                               ? 0U : (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[
                                       (((IData)(0x2bU) 
                                         + (0x3ffU 
                                            & ((IData)(0x36U) 
                                               * (0xfU 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                     >> 0x16U))))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x22U) 
                                            + (0x3ffU 
                                               & ((IData)(0x36U) 
                                                  * 
                                                  (0xfU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                      >> 0x16U))))))))) 
                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[
                                (((IData)(0x22U) + 
                                  (0x3ffU & ((IData)(0x36U) 
                                             * (0xfU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                   >> 0x16U))))) 
                                 >> 5U)] >> (0x1fU 
                                             & ((IData)(0x22U) 
                                                + (0x3ffU 
                                                   & ((IData)(0x36U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                          >> 0x16U)))))))))
                : 0U) == (0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                    >> 0xcU))) | ((0x35fU 
                                                   >= 
                                                   ((IData)(0x20U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0x36U) 
                                                        * 
                                                        (0xfU 
                                                         & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                            >> 0x16U)))))) 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[
                                                     (((IData)(0x20U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0x36U) 
                                                           * 
                                                           (0xfU 
                                                            & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                               >> 0x16U))))) 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x3ffU 
                                                          & ((IData)(0x36U) 
                                                             * 
                                                             (0xfU 
                                                              & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                                 >> 0x16U)))))))))) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                = ((3ULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu) 
                   | ((QData)((IData)(((0x35fU >= (0x3ffU 
                                                   & ((IData)(0x36U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                          >> 0x16U)))))
                                        ? (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x36U) 
                                                 * 
                                                 (0xfU 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                     >> 0x16U)))))
                                             ? 0U : 
                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[
                                             (((IData)(0x1fU) 
                                               + (0x3ffU 
                                                  & ((IData)(0x36U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                         >> 0x16U))))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x36U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                         >> 0x16U))))))) 
                                           | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[
                                              (0x1fU 
                                               & (((IData)(0x36U) 
                                                   * 
                                                   (0xfU 
                                                    & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                       >> 0x16U))) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x36U) 
                                                     * 
                                                     (0xfU 
                                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                         >> 0x16U))))))
                                        : 0U))) << 2U));
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                = (2ULL | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu);
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                = ((0x3fffffffeULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu) 
                   | (IData)((IData)(((0x35fU >= ((IData)(0x20U) 
                                                  + 
                                                  (0x3ffU 
                                                   & ((IData)(0x36U) 
                                                      * 
                                                      (0xfU 
                                                       & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                          >> 0x16U)))))) 
                                      & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[
                                         (((IData)(0x20U) 
                                           + (0x3ffU 
                                              & ((IData)(0x36U) 
                                                 * 
                                                 (0xfU 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                     >> 0x16U))))) 
                                          >> 5U)] >> 
                                         (0x1fU & ((IData)(0x20U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0x36U) 
                                                       * 
                                                       (0xfU 
                                                        & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                           >> 0x16U)))))))))));
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req) 
            | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req) 
               | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req))) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_irq_req));
    __Vtableidx2 = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__stip_irq_req) 
                     << 5U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ssip_irq_req) 
                                << 4U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__seip_irq_req) 
                                           << 3U) | 
                                          (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req) 
                                            << 2U) 
                                           | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req) 
                                               << 1U) 
                                              | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req))))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code 
        = Vpcore_tb__ConstPool__TABLE_h354860ac_0[__Vtableidx2];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[2U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[2U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[4U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[4U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[7U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[7U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[9U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[9U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xeU] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xeU];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x13U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x13U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x18U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x18U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x1aU] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x1aU];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index 
        = (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff 
                   >> 0x16U));
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sfence_vma_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
            = (0xfffffffdU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[2U] 
            = (0xff7fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[2U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[4U] 
            = (0xffffdfffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[4U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[6U] 
            = (0xfffff7U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[6U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
            = (0xfffffffdU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[2U] 
            = (0xff7fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[2U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[4U] 
            = (0xffffdfffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[4U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
            = (0xfffffff7U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[7U] 
            = (0xfdffffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[7U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[9U] 
            = (0xffff7fffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[9U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
            = (0xffffffdfU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU] 
            = (0xf7ffffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xeU] 
            = (0xfffdffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xeU]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
            = (0xffffff7fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
            = (0xdfffffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x13U] 
            = (0xfff7ffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x13U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
            = (0xfffffdffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
            = (0x7fffffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x18U] 
            = (0xffdfffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x18U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x1aU] 
            = (0xfffff7ffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x1aU]);
    } else {
        if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__itlb_update) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____Vlvbound_hc317f493__0 
                = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0;
            if ((0xd7U >= (0xffU & ((IData)(0x36U) 
                                    * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index))))) {
                VL_ASSIGNSEL_WI(216,32,(0xffU & ((IData)(0x36U) 
                                                 * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index))), vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____Vlvbound_hc317f493__0);
            }
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____Vlvbound_hfd82cb66__0 
                = (1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff)));
            if ((0xd7U >= ((IData)(0x20U) + (0xffU 
                                             & ((IData)(0x36U) 
                                                * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index)))))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[(
                                                                                ((IData)(0x20U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x36U) 
                                                                                * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index)))) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x20U) 
                                             + (0xffU 
                                                & ((IData)(0x36U) 
                                                   * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index))))))) 
                        & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[
                        (((IData)(0x20U) + (0xffU & 
                                            ((IData)(0x36U) 
                                             * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index)))) 
                         >> 5U)]) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____Vlvbound_hfd82cb66__0) 
                                     << (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x36U) 
                                                      * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index)))))));
            }
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____Vlvbound_hd8a42b58__0 
                = (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff 
                   >> 0x16U);
            if ((0xd7U >= ((IData)(0x2cU) + (0xffU 
                                             & ((IData)(0x36U) 
                                                * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index)))))) {
                VL_ASSIGNSEL_WI(216,10,((IData)(0x2cU) 
                                        + (0xffU & 
                                           ((IData)(0x36U) 
                                            * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index)))), vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____Vlvbound_hd8a42b58__0);
            }
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____Vlvbound_hd92c8ecc__0 
                = (0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff 
                             >> 0xcU));
            if ((0xd7U >= ((IData)(0x22U) + (0xffU 
                                             & ((IData)(0x36U) 
                                                * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index)))))) {
                VL_ASSIGNSEL_WI(216,10,((IData)(0x22U) 
                                        + (0xffU & 
                                           ((IData)(0x36U) 
                                            * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index)))), vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____Vlvbound_hd92c8ecc__0);
            }
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____Vlvbound_hfc4f707f__0 = 1U;
            if ((0xd7U >= ((IData)(0x21U) + (0xffU 
                                             & ((IData)(0x36U) 
                                                * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index)))))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[(
                                                                                ((IData)(0x21U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & ((IData)(0x36U) 
                                                                                * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index)))) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x21U) 
                                             + (0xffU 
                                                & ((IData)(0x36U) 
                                                   * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index))))))) 
                        & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[
                        (((IData)(0x21U) + (0xffU & 
                                            ((IData)(0x36U) 
                                             * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index)))) 
                         >> 5U)]) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____Vlvbound_hfc4f707f__0) 
                                     << (0x1fU & ((IData)(0x21U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x36U) 
                                                      * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index)))))));
            }
        }
        if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__dtlb_update) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT____Vlvbound_hfff67bcb__0 
                = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0;
            if ((0x35fU >= (0x3ffU & ((IData)(0x36U) 
                                      * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index))))) {
                VL_ASSIGNSEL_WI(864,32,(0x3ffU & ((IData)(0x36U) 
                                                  * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index))), vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT____Vlvbound_hfff67bcb__0);
            }
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT____Vlvbound_h1f4435cb__0 
                = (1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff)));
            if ((0x35fU >= ((IData)(0x20U) + (0x3ffU 
                                              & ((IData)(0x36U) 
                                                 * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index)))))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[(
                                                                                ((IData)(0x20U) 
                                                                                + 
                                                                                (0x3ffU 
                                                                                & ((IData)(0x36U) 
                                                                                * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index)))) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x20U) 
                                             + (0x3ffU 
                                                & ((IData)(0x36U) 
                                                   * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index))))))) 
                        & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[
                        (((IData)(0x20U) + (0x3ffU 
                                            & ((IData)(0x36U) 
                                               * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index)))) 
                         >> 5U)]) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT____Vlvbound_h1f4435cb__0) 
                                     << (0x1fU & ((IData)(0x20U) 
                                                  + 
                                                  (0x3ffU 
                                                   & ((IData)(0x36U) 
                                                      * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index)))))));
            }
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT____Vlvbound_he1fe55da__0 
                = (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff 
                   >> 0x16U);
            if ((0x35fU >= ((IData)(0x2cU) + (0x3ffU 
                                              & ((IData)(0x36U) 
                                                 * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index)))))) {
                VL_ASSIGNSEL_WI(864,10,((IData)(0x2cU) 
                                        + (0x3ffU & 
                                           ((IData)(0x36U) 
                                            * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index)))), vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT____Vlvbound_he1fe55da__0);
            }
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT____Vlvbound_he24a8595__0 
                = (0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff 
                             >> 0xcU));
            if ((0x35fU >= ((IData)(0x22U) + (0x3ffU 
                                              & ((IData)(0x36U) 
                                                 * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index)))))) {
                VL_ASSIGNSEL_WI(864,10,((IData)(0x22U) 
                                        + (0x3ffU & 
                                           ((IData)(0x36U) 
                                            * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index)))), vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT____Vlvbound_he24a8595__0);
            }
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT____Vlvbound_h1e84952c__0 = 1U;
            if ((0x35fU >= ((IData)(0x21U) + (0x3ffU 
                                              & ((IData)(0x36U) 
                                                 * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index)))))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[(
                                                                                ((IData)(0x21U) 
                                                                                + 
                                                                                (0x3ffU 
                                                                                & ((IData)(0x36U) 
                                                                                * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index)))) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x21U) 
                                             + (0x3ffU 
                                                & ((IData)(0x36U) 
                                                   * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index))))))) 
                        & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[
                        (((IData)(0x21U) + (0x3ffU 
                                            & ((IData)(0x36U) 
                                               * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index)))) 
                         >> 5U)]) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT____Vlvbound_h1e84952c__0) 
                                     << (0x1fU & ((IData)(0x21U) 
                                                  + 
                                                  (0x3ffU 
                                                   & ((IData)(0x36U) 
                                                      * (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index)))))));
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_csr_req 
        = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgExtracted_h50a45c3b__0) 
                 | ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff)) 
                    | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                       >> 2U))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
        = ((0x1ffffffffcULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu) 
           | (IData)((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ld_page_fault) 
                               << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__st_page_fault)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__dtlb_miss 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__en_vaddr) 
           & ((~ (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                          >> 1U))) & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgTmp_hd5ca5221__0)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
        = ((3ULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu) 
           | (((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U])) 
               << 3U) | ((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT____VdfgTmp_h1ec82566__0)) 
                         << 2U)));
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__en_vaddr) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
            = ((3ULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu) 
               | (((QData)((IData)((0x3fffffU & (IData)(
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                                         >> 0xcU))))) 
                   << 0xfU) | ((QData)((IData)(((0x1ffeU 
                                                 & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                                              >> 1U)))))) 
                               << 2U)));
        if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu))) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                = ((0x1ffe007fffULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu) 
                   | ((QData)((IData)((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                                 >> 0xcU)))) 
                      << 0xfU));
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next = 0U;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next = 1U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_delegated_req 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_irq_req) 
           & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_ff 
              >> (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h140467bf__0) 
            << 3U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_hb3ea78f5__0) 
                       << 2U) | ((((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_csr_req)) 
                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard)) 
                                  << 1U) | ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_csr_req)) 
                                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code = 0xeU;
    if ((8U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code 
            = (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                       >> 1U));
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_exc_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code = 2U;
    } else if ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                              >> 1U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code = 0xdU;
    } else if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code = 0xfU;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__lsu_pf_exc_req 
        = (IData)((0ULL != (3ULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
        = ((0xfU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U]) 
           | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                       >> 3U)) << 4U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
        = ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                    >> 3U)) >> 0x1cU);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
        = ((0xfffffff0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U]) 
           | ((0xcU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                       >> 6U)) | ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__ld_req) 
                                    & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                                               >> 2U))) 
                                   << 1U) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__st_req) 
                                             & (IData)(
                                                       (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                                                        >> 2U))))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req 
        = ((((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)) 
             & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                >> 1U)) | (0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff))) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_delegated_req));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req) 
           & ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_delegated_req)) 
              & (((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)) 
                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                     >> 3U)) | (3U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data 
        = ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe))
            ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]
            : ((8U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe))
                ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data
                : ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[6U] 
                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[5U] 
                                 >> 5U))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data 
        = ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe))
            ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]
            : ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe))
                ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data
                : ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[5U] 
                    << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] 
                                 >> 5U))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req 
        = (1U & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                  >> 3U) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_exc_req) 
                            | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__lsu_pf_exc_req))));
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
        = (3U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]);
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
        = (0xffffffc0U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U]);
    if ((1U == (3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                      >> 2U)))) {
        if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
            if ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = ((0x3fffffffU & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                       | (0xc0000000U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                         << 0x1aU)));
                vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                    = ((0xffffffc0U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U]) 
                       | (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                   >> 6U)));
                vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = (0x20U | (0xffffffc3U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]));
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = ((0xc03fffffU & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                       | (0x3fc00000U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                         << 0x12U)));
                vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = (0x10U | (0xffffffc3U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]));
            }
        } else if ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
            vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                = ((0xffc03fffU & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                   | (0x3fc000U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                   << 0xaU)));
            vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                = (8U | (0xffffffc3U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]));
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                = ((0xffffc003U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                   | (0xfffffffcU & (4U | (0x3fc0U 
                                           & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                              << 2U)))));
        }
    } else if ((2U == (3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                             >> 2U)))) {
        if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
            if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = ((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                       | (0xffc00000U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                         << 0x12U)));
                vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                    = ((0xffffffc0U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U]) 
                       | (0x3fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                   >> 0xeU)));
                vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                    = (0x30U | (0xffffffc3U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]));
            }
        } else {
            vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                = ((0xffc00003U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
                   | (0xfffffffcU & (0xcU | (0x3fffc0U 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                << 2U)))));
        }
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
            = ((3U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
               | ((IData)(((3U == (3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                         >> 2U))) ? 
                           (0xfULL | ((QData)((IData)(
                                                      ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                        << 0x1cU) 
                                                       | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                          >> 4U)))) 
                                      << 4U)) : 0ULL)) 
                  << 2U));
        vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
            = ((0xffffffc0U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U]) 
               | (((IData)(((3U == (3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                          >> 2U))) ? 
                            (0xfULL | ((QData)((IData)(
                                                       ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                         << 0x1cU) 
                                                        | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                           >> 4U)))) 
                                       << 4U)) : 0ULL)) 
                   >> 0x1eU) | ((IData)((((3U == (3U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                     >> 2U)))
                                           ? (0xfULL 
                                              | ((QData)((IData)(
                                                                 ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                                   << 0x1cU) 
                                                                  | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                                                     >> 4U)))) 
                                                 << 4U))
                                           : 0ULL) 
                                         >> 0x20U)) 
                                << 2U)));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
        = ((0x3fU & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U]) 
           | (0xffffffc0U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                             << 2U)));
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
        = (0x3fU & ((0x3cU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                              << 2U)) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                         >> 0x1eU)));
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req 
        = (IData)((0U != (3U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U])));
    vlSelf->__VdfgTmp_h2981c0ee__0 = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req) 
                                      | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
        = ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                          >> 0xcU))) ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data
            : ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
                             >> 5U)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
        = ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                          >> 0xbU))) ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data
            : ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[1U] 
                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U] 
                             >> 5U)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 
        = ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                          >> 0xaU))) ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data
            : ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[1U] 
                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U] 
                             >> 5U)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ecall 
        = (1U & (~ (IData)((0x10U == (0x18U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U])))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ebreak 
        = (3U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                          >> 1U)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_inc 
        = (1U & ((~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                     >> 2U)) & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe_stall_flush) 
                                   | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req) 
                                       & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ecall)) 
                                      & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ebreak))))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_wr_flag)
            ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_inc)
                ? ((IData)(1U) + vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff)
                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req) 
           & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_ff 
              >> (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code)));
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
        = ((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U]) 
           | ((2U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                     << 1U)) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req)));
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dmem_sel = 0U;
    if (((IData)(((8U == vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U]) 
                  & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req))) 
         | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dcache_flush_req))) {
        vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dmem_sel = 1U;
    }
    pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h7e08302d__0 
        = ((0x9cU == (0xffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                << 4U) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                          >> 0x1cU)))) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req));
    pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h45a1e74b__0 
        = ((0x98U == (0xffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                << 4U) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                          >> 0x1cU)))) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req));
    pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hb164bcbf__0 
        = ((0x90U == (0xffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                << 4U) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                          >> 0x1cU)))) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req));
    pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hac15c8da__0 
        = ((0x94U == (0xffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                << 4U) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                          >> 0x1cU)))) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req));
    pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h39b4dcc6__0 
        = ((2U == (0xffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                             << 4U) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                       >> 0x1cU)))) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output 
        = ((1U == (0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                   >> 0x22U)))) ? (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                   + vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
            : (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
               - vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data)) 
                             - (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_inc 
        = ((0xffffffffU == vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_inc));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_wr_flag)
            ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_inc)
                ? ((IData)(1U) + vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff)
                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scause_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req)
            ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code)
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req)
                ? (0x80000000U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code))
                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scause_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sret_pc_req 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sret_req) 
           & ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req)) 
              & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req 
        = ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req)) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req));
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__bmem_sel = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__clint_sel = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_ns_sel = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_sel = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__spi_sel = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__plic_sel = 0U;
    if ((1U & (~ ((IData)(((8U == vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U]) 
                           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req))) 
                  | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dcache_flush_req))))) {
        if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h39b4dcc6__0)))) {
            if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hac15c8da__0)))) {
                if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hb164bcbf__0)))) {
                    if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h45a1e74b__0)))) {
                        if ((1U & (~ (IData)(pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h7e08302d__0)))) {
                            if (((1U == (0xfffffU & 
                                         ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                           << 0x10U) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                             >> 0x10U)))) 
                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req))) {
                                vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__bmem_sel = 1U;
                            }
                        }
                        if (pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h7e08302d__0) {
                            vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__spi_sel = 1U;
                        }
                    }
                    if (pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h45a1e74b__0) {
                        vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_ns_sel = 1U;
                    }
                }
                if (pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hb164bcbf__0) {
                    vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_sel = 1U;
                }
            }
            if (pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_hac15c8da__0) {
                vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__plic_sel = 1U;
            }
        }
        if (pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT____VdfgExtracted_h39b4dcc6__0) {
            vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__clint_sel = 1U;
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_overflow 
        = (1U & (((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                           >> 0x1fU)) & ((~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data 
                                             >> 0x1fU)) 
                                         & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 
                                            >> 0x1fU))) 
                 | ((~ (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                >> 0x1fU))) & ((~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2 
                                                   >> 0x1fU)) 
                                               & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data 
                                                  >> 0x1fU)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_new_pc 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sret_pc_req)
            ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_ff
            : ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_ff)
                ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req)
                    ? (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_ff)
                    : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req)
                        ? ((0xffffffc0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_ff) 
                           | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code) 
                              << 2U)) : (0xfffffffcU 
                                         & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_ff)))
                : (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_pc_req 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sret_pc_req) 
           | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req) 
              | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next 
            = (0x80000000U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code));
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next 
            = (0x8000000fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata);
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff;
    pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_he0ec7886__0 
        = (1U & ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req)) 
                 & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req))));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_d_sel 
        = (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__bmem_sel));
    pcore_tb__DOT__dut__DOT__clint_module__DOT____VdfgTmp_h7b251b97__0 
        = (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__clint_sel));
    pcore_tb__DOT__dut__DOT__uart_ns_module__DOT____VdfgTmp_h1ea301df__0 
        = (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_ns_sel));
    pcore_tb__DOT__dut__DOT__uart_module__DOT____VdfgTmp_ha680e920__0 
        = (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_sel));
    pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0 
        = (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__spi_sel));
    pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____VdfgTmp_hf58aaa35__0 
        = (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__plic_sel));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dmem_sel)
            ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2dbus
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__clint_sel)
                ? vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff
                : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__plic_sel)
                    ? vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff
                    : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_sel)
                        ? vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff
                        : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_ns_sel)
                            ? vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff
                            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__spi_sel)
                                ? vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff
                                : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__bmem_sel)
                                    ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_ff
                                    : 0ULL)))))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result 
        = ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                          >> 0x25U))) ? ((1U & (IData)(
                                                       (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                        >> 0x24U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                            >> 0x23U)))
                                              ? 0U : 
                                             ((1U & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x22U)))
                                               ? 0U
                                               : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                          : ((1U & (IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                            >> 0x23U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x22U)))
                                                  ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1
                                                  : 
                                                 VL_SHIFTRS_III(32,32,5, vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1, 
                                                                (0x1fU 
                                                                 & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x22U)))
                                                  ? 
                                                 (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                                  : 
                                                 (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))))
            : ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                              >> 0x24U))) ? ((1U & (IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                            >> 0x23U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x22U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                             >> 0x20U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                              >> 0x1fU))) 
                                                  ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_overflow)))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x22U)))
                                                  ? 
                                                 (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                  ^ vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                                                  : 
                                                 (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                  | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)))
                : ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                  >> 0x23U))) ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x22U)))
                                                  ? 
                                                 (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                                  & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                                                  : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output)
                    : ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                      >> 0x22U))) ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output
                        : 0U))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h2edbfac7__0 
        = (1U & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                          >> 0x1fU)) ^ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_overflow)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__trap_priv_mode = 3U;
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_delegated_req) 
          | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req)) 
         & (IData)(pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_he0ec7886__0))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__trap_priv_mode 
            = ((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff))
                ? 3U : 1U);
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_req) 
           & (IData)(pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_he0ec7886__0));
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__clint_module__DOT____VdfgTmp_h7b251b97__0));
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__w_req 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__clint_module__DOT____VdfgTmp_h7b251b97__0));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_rd_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__uart_ns_module__DOT____VdfgTmp_h1ea301df__0));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_wr_req 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__uart_ns_module__DOT____VdfgTmp_h1ea301df__0));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_rd_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__uart_module__DOT____VdfgTmp_ha680e920__0));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_wr_req 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__uart_module__DOT____VdfgTmp_ha680e920__0));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rd_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_wr_req 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT____VdfgTmp_h567affa7__0));
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req 
        = ((~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
               >> 1U)) & (IData)(pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____VdfgTmp_hf58aaa35__0));
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
            >> 1U) & (IData)(pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____VdfgTmp_hf58aaa35__0));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[0U] 
        = (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                   >> 1U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[1U] 
        = (IData)((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[2U] 
        = (IData)(((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]))) 
                   >> 0x20U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save = 0U;
    if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_next 
                    = (1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass)));
            }
        } else if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state)))) {
            if ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                >> 4U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_next = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
                if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save 
                        = (1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                          >> 4U)));
                }
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next = 0U;
    if ((4U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next 
            = ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))
                ? ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu))
                    ? 4U : 3U) : (((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                   >> 4U))) 
                                   | ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass)) 
                                      & (0x20U == (0xf0U 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff))))
                                   ? 4U : 3U));
    } else if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next 
            = ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu))
                ? 2U : 1U);
    } else if ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                               >> 4U)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next = 1U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword = 0U;
    if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                      >> 0xbU)))) {
            if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word 
                    = (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                               >> 1U));
            }
            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                          >> 0xaU)))) {
                if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                    if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword 
                            = (0xffffU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                                  >> 0x11U)));
                    }
                } else {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword 
                        = (0xffffU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                              >> 1U)));
                }
            }
        }
    } else if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
        if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
            if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                if ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword 
                        = (0xffffU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                              >> 0x11U)));
                }
            } else {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword 
                    = (0xffffU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                          >> 1U)));
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte = 0U;
    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                  >> 0xcU)))) {
        if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                          >> 0xaU)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte 
                    = (0xffU & ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                                 ? ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                                     ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                                >> 0x19U))
                                     : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                                >> 0x11U)))
                                 : ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                                     ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                                >> 9U))
                                     : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                                >> 1U)))));
            }
        } else if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte 
                = (0xffU & ((0x20U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                             ? ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                                 ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                            >> 0x19U))
                                 : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                            >> 0x11U)))
                             : ((0x10U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U])
                                 ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                            >> 9U))
                                 : (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                            >> 1U)))));
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__icache_flush_req 
        = (1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_ff;
    if ((1U & ((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                               >> 4U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done)
                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next = 0U;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgExtracted_h50a45c3b__0) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next = 1U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req) 
         | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = (0xfffffffdU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = ((0xffffffdfU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next) 
               | (0x20U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                           << 4U)));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = ((0xfffffeffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next) 
               | (0x100U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff) 
                            << 8U)));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__trap_priv_mode;
    } else if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = (0xfffffff7U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = ((0xffffff7fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next) 
               | (0x80U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                           << 4U)));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = ((0xffffe7ffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next) 
               | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff) 
                  << 0xbU));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__trap_priv_mode;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sret_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = ((0xfffffffdU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next) 
               | (2U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                        >> 4U)));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = (0x20U | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = (0xfffffeffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_next 
            = (1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                     >> 8U));
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = ((0xfffffff7U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next) 
               | (8U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                        >> 4U)));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = (0x80U | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = (0xffffe7ffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_next 
            = (3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                     >> 0xbU));
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sstatus_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
            = ((0xfff39eddU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff) 
               | (0xc6122U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req) 
           | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
              | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req)));
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_hi_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_lo_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_lo_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_hi_wr_flag = 0U;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__w_req) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff)))) {
        if ((0xbff8U != (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    >> 6U)))) {
            if ((0xbffcU != (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U)))) {
                if ((0x4000U != (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) {
                    if ((0x4004U == (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U)))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_hi_wr_flag = 1U;
                    }
                }
                if ((0x4000U == (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_lo_wr_flag = 1U;
                }
            }
            if ((0xbffcU == (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_hi_wr_flag = 1U;
            }
        }
        if ((0xbff8U == (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    >> 6U)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_lo_wr_flag = 1U;
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_r_data = 0U;
    if (vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_rd_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_r_data 
            = ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                ? ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                    ? ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                        ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_scratch_ff)
                        : 0U) : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                  ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_ff)
                                  : 0U)) : ((0x200U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                             ? ((0x100U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                 ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lctrl_ff)
                                                 : 0U)
                                             : ((0x100U 
                                                 & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                                 ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_ie_ff)
                                                 : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_rx_ff))));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__fifoctrl_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__scratch_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__ie_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__lctrl_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_reg_wr_flag = 0U;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_wr_req) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff)))) {
        if ((1U & (~ (1U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                            >> 0xaU))))) {
            if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                if ((1U & (~ (7U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    >> 8U))))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__fifoctrl_reg_wr_flag = 1U;
                }
                if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__lctrl_reg_wr_flag = 1U;
                }
            }
            if ((1U & (~ (3U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                >> 9U))))) {
                if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__ie_reg_wr_flag = 1U;
                }
                if ((1U & (~ (7U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    >> 8U))))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_reg_wr_flag = 1U;
                }
            }
        }
        if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
            if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__scratch_reg_wr_flag = 1U;
                }
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_r_data = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__rx_empty = 0U;
    if (vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_rd_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_r_data 
            = ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                ? 0U : ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                         ? ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                             ? ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                 ? 0U : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_ff))
                             : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                 ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_ff)
                                 : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_int_mask_ff)))
                         : ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                             ? ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                 ? vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rxctrl_ff
                                 : vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_txctrl_ff)
                             : ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])
                                 ? (((~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_ff) 
                                         >> 1U)) << 0x1fU) 
                                    | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rx_ff))
                                 : ((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_ff)) 
                                    << 0x1fU)))));
        if ((1U & (~ (1U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                            >> 0xbU))))) {
            if ((1U & (~ (3U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                >> 0xaU))))) {
                if ((1U & (~ (7U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    >> 9U))))) {
                    if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__rx_empty = 1U;
                    }
                }
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__int_mask_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__baud_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__txctrl_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__rxctrl_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_reg_wr_flag = 0U;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_wr_req) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff)))) {
        if ((1U & (~ (1U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                            >> 0xbU))))) {
            if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                if ((1U & (~ (7U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    >> 9U))))) {
                    if ((1U & (~ (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                          >> 8U))))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__int_mask_reg_wr_flag = 1U;
                    }
                }
                if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                    if ((1U & (~ (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                          >> 8U))))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__baud_reg_wr_flag = 1U;
                    }
                }
            }
            if ((1U & (~ (3U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                >> 0xaU))))) {
                if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                    if ((1U & (~ (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                          >> 8U))))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__txctrl_reg_wr_flag = 1U;
                    }
                    if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__rxctrl_reg_wr_flag = 1U;
                    }
                }
                if ((1U & (~ (7U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    >> 9U))))) {
                    if ((1U & (~ (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                          >> 8U))))) {
                        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_reg_wr_flag = 1U;
                    }
                }
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_read 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rd_req) 
           & (0x1300U == (0x3fc0U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_rxmark = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txmark = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txdata = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_fmt = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del1 = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del0 = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ckmode = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_sdiv = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csid = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csdef = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csmode = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ie = 0U;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_wr_req) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff)))) {
        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                      >> 0xdU)))) {
            if ((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                              >> 0xbU)))) {
                    if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                      >> 9U)))) {
                            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_rxmark = 1U;
                                    }
                                }
                            }
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txmark = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                  >> 0xaU)))) {
                        if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txdata = 1U;
                                    }
                                }
                            }
                        }
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_fmt = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                    if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ie = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                          >> 0xcU)))) {
                if ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                  >> 0xaU)))) {
                        if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del1 = 1U;
                                    }
                                }
                            }
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del0 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                              >> 0xbU)))) {
                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                  >> 0xaU)))) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                      >> 9U)))) {
                            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ckmode = 1U;
                                    }
                                }
                            }
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_sdiv = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                        if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csid = 1U;
                                    }
                                }
                            }
                            if ((0x100U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csdef = 1U;
                                    }
                                }
                            }
                        }
                        if ((0x200U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U])) {
                            if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csmode = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req = 0U;
    if (vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req) {
        if (((((((((0U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U))) | 
                   (4U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U)))) | 
                  (8U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                       >> 6U)))) | 
                 (0x1000U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U)))) 
                | (0x2000U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) 
               | (0x2080U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U)))) 
              | (0x200000U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) 
             | (0x201000U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U))))) {
            vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data 
                = ((0xfffffff8U & vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data) 
                   | ((0U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U)))
                       ? 0U : (7U & ((4U == (0xffffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U)))
                                      ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff)
                                      : ((8U == (0xffffffU 
                                                 & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                    >> 6U)))
                                          ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                                             >> 3U)
                                          : ((0x1000U 
                                              == (0xffffffU 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                     >> 6U)))
                                              ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff) 
                                                 << 1U)
                                              : ((0x2000U 
                                                  == 
                                                  (0xffffffU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                      >> 6U)))
                                                  ? 
                                                 (6U 
                                                  & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                                     << 1U))
                                                  : 
                                                 ((0x2080U 
                                                   == 
                                                   (0xffffffU 
                                                    & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                       >> 6U)))
                                                   ? 
                                                  (6U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                                      >> 1U))
                                                   : 
                                                  ((0x200000U 
                                                    == 
                                                    (0xffffffU 
                                                     & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                        >> 6U)))
                                                    ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff)
                                                    : 
                                                   ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff) 
                                                    >> 3U))))))))));
        } else if ((0x200004U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data 
                = ((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data) 
                   | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_ff));
        } else if ((0x201004U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data 
                = ((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data) 
                   | (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i) 
                            >> 2U)));
        }
        if ((1U & (~ ((((((((0U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                 >> 6U))) 
                            | (4U == (0xffffffU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   >> 6U)))) 
                           | (8U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U)))) 
                          | (0x1000U == (0xffffffU 
                                         & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) 
                         | (0x2000U == (0xffffffU & 
                                        (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                         >> 6U)))) 
                        | (0x2080U == (0xffffffU & 
                                       (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U)))) | 
                       (0x200000U == (0xffffffU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   >> 6U)))) 
                      | (0x201000U == (0xffffffU & 
                                       (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U))))))) {
            if ((0x200004U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req 
                    = (1U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req));
            } else if ((0x201004U == (0xffffffU & (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   >> 6U)))) {
                vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req 
                    = (2U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req));
            }
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req = 0U;
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx = 0U;
    if (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req) 
         & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff)))) {
        if (((((((((0U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U))) | 
                   (4U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 6U)))) | 
                  (8U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                       >> 6U)))) | 
                 (0x2000U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U)))) 
                | (0x2080U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) 
               | (0x200000U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 6U)))) 
              | (0x201000U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) 
             | (0x200004U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U))))) {
            if ((0U != (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                     >> 6U)))) {
                if ((4U != (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                         >> 6U)))) {
                    if ((8U != (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 6U)))) {
                        if ((0x2000U == (0xffffffU 
                                         & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag 
                                = (1U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag));
                        } else if ((0x2080U == (0xffffffU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   >> 6U)))) {
                            vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag 
                                = (2U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag));
                        }
                        if ((0x2000U != (0xffffffU 
                                         & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                            >> 6U)))) {
                            if ((0x2080U != (0xffffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U)))) {
                                if ((0x200000U == (0xffffffU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                      >> 6U)))) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag 
                                        = (1U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag));
                                } else if ((0x201000U 
                                            == (0xffffffU 
                                                & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                   >> 6U)))) {
                                    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag 
                                        = (2U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag));
                                }
                                if ((0x200000U != (0xffffffU 
                                                   & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                      >> 6U)))) {
                                    if ((0x201000U 
                                         != (0xffffffU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U)))) {
                                        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req 
                                            = (1U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req));
                                        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx 
                                            = ((0xcU 
                                                & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx)) 
                                               | (3U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                     >> 6U)));
                                    }
                                }
                            }
                        }
                    }
                }
                if ((4U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                         >> 6U)))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag 
                        = (1U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag));
                } else if ((8U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                >> 6U)))) {
                    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag 
                        = (2U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag));
                }
            }
        } else if ((0x201004U == (0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                               >> 6U)))) {
            vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req 
                = (2U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req));
            vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx 
                = ((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx)) 
                   | (0xcU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                              >> 4U)));
        }
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
        = (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U]);
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
        = (0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U]);
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
            = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U]) 
               | (((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                   >> 4U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_ff)
                    : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff) 
                  << 5U));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
            = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U]) 
               | (((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                   >> 4U))) ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_ff)
                    : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff) 
                  >> 0x1bU));
    } else if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
            = ((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U]) 
               | (((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                    ? ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? 0U : ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                                 ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word
                                 : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword)))
                    : ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                            ? (((- (IData)((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword))
                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte))
                        : ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                            ? (((- (IData)((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte) 
                                                  >> 7U)))) 
                                << 8U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte))
                            : 0U))) << 5U));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
            = ((0xffffffe0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U]) 
               | (((0x1000U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                    ? ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? 0U : ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                                 ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word
                                 : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword)))
                    : ((0x800U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                        ? ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                            ? (((- (IData)((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword))
                            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte))
                        : ((0x400U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)
                            ? (((- (IData)((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte) 
                                                  >> 7U)))) 
                                << 8U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte))
                            : 0U))) >> 0x1bU));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_vaddr_iflush_req 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_wr_flag) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__icache_flush_req));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_stall_i 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__mul_stall_next));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next 
        = ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
            << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                         >> 5U));
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc;
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc 
            = ((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff)
                ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req)
                    ? (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff)
                    : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req)
                        ? ((0xffffffc0U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff) 
                           | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code) 
                              << 2U)) : (0xfffffffcU 
                                         & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff)))
                : (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff));
        if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sret_pc_req) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next 
                = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_new_pc;
        } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe_stall_flush) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next 
                = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_ff;
        } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_req) {
            vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next 
                = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U];
        }
    }
    pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h50c85e97__0 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_pc_req) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req));
    vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_lo_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_next 
            = ((0xffffffff00000000ULL & vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_next) 
               | (IData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                   << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U)))));
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_hi_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_next 
            = ((0xffffffffULL & vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_next) 
               | ((QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                    << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 >> 6U)))) 
                  << 0x20U));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_scratch_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__scratch_reg_wr_flag)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_scratch_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_ie_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__ie_reg_wr_flag)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_ie_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lctrl_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__lctrl_reg_wr_flag)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lctrl_ff)));
    if (vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_reg_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_valid_next = 1U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_tx_next 
            = (0xffU & ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                      >> 6U)));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_valid_next = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_tx_next 
            = (0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_tx_ff));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_ff;
    if ((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__frame_err_ff)))) {
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_next 
            = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_ff)
                ? (2U | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_next))
                : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__rx_empty)
                    ? (0xfdU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_next))
                    : ((0xfeU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_next)) 
                       | (0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_ff)))));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_int_mask_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__int_mask_reg_wr_flag)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_int_mask_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__baud_reg_wr_flag)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_txctrl_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__txctrl_reg_wr_flag)
            ? (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                          >> 6U)) : vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_txctrl_ff);
    vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rxctrl_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__rxctrl_reg_wr_flag)
            ? (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                          >> 6U)) : vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rxctrl_ff);
    if (vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_reg_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_valid_next = 1U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_tx_next 
            = (0xffU & ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                      >> 6U)));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_valid_next = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_tx_next 
            = (0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_tx_ff));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_next 
        = (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_rxmark)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_next 
        = (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txmark)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_data_next 
        = (0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txdata)
                     ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                         << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                      >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_data)));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del1)
            ? ((0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                           >> 0xeU)) | (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 >> 6U)))
            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del0)
            ? (1U | ((0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                 >> 0xeU)) | (0xfeU 
                                              & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 >> 6U))))
            : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_cs_id_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csid)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_id)));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_cs_default_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csdef)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_default)));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_cs_mode_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csmode)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode)));
    vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_next 
        = (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ie)
                  ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                      << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                   >> 6U)) : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_next 
        = ((0xcU & (((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                          << 0x19U) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                       >> 7U)) : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                                  >> 2U)) 
                    << 2U)) | (3U & ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                      ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                          << 0x19U) 
                                         | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                            >> 7U))
                                      : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff))));
    if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag))) {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h88a7fad0__0 
            = (7U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                     >> 6U));
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next 
            = ((0x38U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next)) 
               | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h88a7fad0__0));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h88a7fad0__1 
            = (7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff));
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next 
            = ((0x38U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next)) 
               | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h88a7fad0__1));
    }
    if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag))) {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h88a7fad0__0 
            = (7U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                     >> 6U));
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next 
            = ((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next)) 
               | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h88a7fad0__0) 
                  << 3U));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h88a7fad0__1 
            = (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                     >> 3U));
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next 
            = ((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next)) 
               | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h88a7fad0__1) 
                  << 3U));
    }
    if ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag))) {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h99f01eb0__0 
            = (7U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                     >> 6U));
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next 
            = ((0x38U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next)) 
               | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h99f01eb0__0));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h99f01eb0__1 
            = (7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff));
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next 
            = ((0x38U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next)) 
               | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h99f01eb0__1));
    }
    if ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag))) {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h99f01eb0__0 
            = (7U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                     >> 6U));
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next 
            = ((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next)) 
               | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h99f01eb0__0) 
                  << 3U));
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h99f01eb0__1 
            = (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff) 
                     >> 3U));
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next 
            = ((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next)) 
               | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT____Vlvbound_h99f01eb0__1) 
                  << 3U));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req) 
            << 6U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req) 
                       << 4U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx)));
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_stall_i) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_sign_next 
            = (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_sign_ff));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_next 
            = (0xfU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_sign_next 
            = (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_sign_ff));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_ff;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_ff;
    } else {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_sign_next 
            = (1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                     >> 0x1fU));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_next 
            = (0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                               >> 0x1eU)));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_sign_next 
            = (1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                     >> 0x1fU));
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_next 
            = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT____VdfgExtracted_hcd8ed81d__0)
                ? ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                    >> 0x1fU) ? ((IData)(1U) + (~ vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                    : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_next 
            = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT____VdfgExtracted_hcd8ed81d__0) 
                | (6U == (0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                          >> 0x1eU)))))
                ? ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                    >> 0x1fU) ? ((IData)(1U) + (~ vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))
                    : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)
                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1);
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard 
        = ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_stall_i)) 
           & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard) 
               & ((IData)((0ULL != (0x1004ULL & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff))) 
                  & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_csr_req))) 
              | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard) 
                 & ((IData)((0ULL != (0x6000804ULL 
                                      & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff))) 
                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_csr_req)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff;
    if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next;
    } else if (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_wr_flag) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next 
            = (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata);
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_next 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req)
            ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req)
                ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next
                : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_wr_flag)
                    ? (0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata)
                    : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_next 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req) 
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
                             : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_ff))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_next 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_exc_req))
            ? ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                             >> 5U)) : (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
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
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag)
                                                  ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                                  : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff)))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgExtracted_h46a986c8__0 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_pc_req)
            ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_new_pc
            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req)
                ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc
                : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_vaddr_iflush_req)
                    ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]
                    : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h41bfb133__0 
        = ((~ (IData)(pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h50c85e97__0)) 
           & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0 
        = ((IData)(pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT____VdfgTmp_h50c85e97__0) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_vaddr_iflush_req));
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete = 0U;
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
          >> 4U) & (0U != (3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete 
            = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete) 
               | (3U & ((IData)(1U) << (1U & ((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx)) 
                                              - (IData)(1U))))));
    }
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
          >> 5U) & (0U != (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx) 
                                 >> 2U))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete 
            = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete) 
               | (3U & ((IData)(1U) << (1U & ((3U & 
                                               ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx) 
                                                >> 2U)) 
                                              - (IData)(1U))))));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim = 0U;
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
          >> 6U) & (0U != (3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim 
            = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim) 
               | (3U & ((IData)(1U) << (1U & ((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i)) 
                                              - (IData)(1U))))));
    }
    if ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
          >> 7U) & (0U != (3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i) 
                                 >> 2U))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim 
            = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim) 
               | (3U & ((IData)(1U) << (1U & ((3U & 
                                               ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i) 
                                                >> 2U)) 
                                              - (IData)(1U))))));
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_stall_i));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h41bfb133__0));
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_active 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT____Vcellinp__plic_top_module__irq_src_i) 
           & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_next 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff) 
            | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_active)) 
           & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete)));
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_pending 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT____Vcellinp__plic_top_module__irq_src_i) 
            & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff))) 
           & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff)));
    vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_next 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff) 
            | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_pending)) 
           & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim)));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_accept_flag 
        = (1U & (~ (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                     | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_stall_ff)) 
                    | ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_req)) 
                       & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U]))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req 
        = (1U & ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall)) 
                 & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                             >> 3U)) | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                 >> 2U)) 
                                        & ((1U & (IData)(
                                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                          >> 0x18U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                           >> 0x17U)))
                                                ? (
                                                   (~ (IData)(
                                                              (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                               >> 0x16U))) 
                                                   & (IData)(
                                                             (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                              >> 0x20U)))
                                                : (
                                                   (1U 
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
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                               >> 0x16U)))
                                                    ? 
                                                   (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h2edbfac7__0))
                                                    : 
                                                   (0U 
                                                    != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output)))
                                                : ((IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                            >> 0x16U)) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output)))))))))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl 
        = ((0x78U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                     >> 1U)) | (((IData)((0U != (0xfU 
                                                 & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                    >> 4U)))) 
                                 << 2U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush) 
                                            << 1U) 
                                           | (1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu)))));
    __VdfgTmp_h3843d958__0 = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard) 
                              | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req) 
           | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
    __VdfgTmp_h43ca03c9__0 = ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0)) 
                              & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_flush_i 
        = ((IData)(__VdfgTmp_h3843d958__0) | (IData)(vlSelf->__VdfgTmp_h2981c0ee__0));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop 
        = (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush) 
            << 8U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                       << 7U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush) 
                                  << 6U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                                             << 5U) 
                                            | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_stall_i) 
                                                << 4U) 
                                               | (((IData)(__VdfgTmp_h3843d958__0) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h2981c0ee__0) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h140467bf__0) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_hb3ea78f5__0)))))))));
    vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellinp__icache_controller_module__if2icache_req_kill_i 
        = ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0) 
           | (IData)(__VdfgTmp_h43ca03c9__0));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if 
        = (((IData)(__VdfgTmp_h43ca03c9__0) << 3U) 
           | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0) 
               << 2U) | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h41bfb133__0) 
                          << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[0U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[1U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[2U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[3U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[3U];
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__mul2wrb_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_result_next;
    if ((IData)((0U != (0x14U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_next = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[0U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[1U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[2U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[3U] = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__mul2wrb_next = 0U;
    }
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
        = ((((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                            >> 9U))) ? (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                                 >> 0x14U))
              : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data) 
            << 5U) | (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U]));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
        = ((((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                            >> 9U))) ? (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                                 >> 0x14U))
              : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data) 
            >> 0x1bU) | ((IData)((((QData)((IData)(
                                                   ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                                     << 0x1bU) 
                                                    | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
                                                       >> 5U)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] 
                                                                 << 0x1bU) 
                                                                | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                                                   >> 5U)))))) 
                         << 5U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
        = (((IData)((((QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                        << 0x1bU) | 
                                       (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
                                        >> 5U)))) << 0x20U) 
                     | (QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] 
                                         << 0x1bU) 
                                        | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                           >> 5U)))))) 
            >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                                      << 0x1bU) 
                                                     | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
                                                        >> 5U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] 
                                                                  << 0x1bU) 
                                                                 | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                                                    >> 5U))))) 
                                  >> 0x20U)) << 5U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
        = ((0x1ffe0U & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] 
                         << 0xcU) | (0xfe0U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                               >> 0x14U)))) 
           | ((IData)(((((QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                           << 0x1bU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
                                             >> 5U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] 
                                                       << 0x1bU) 
                                                      | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                                         >> 5U))))) 
                       >> 0x20U)) >> 0x1bU));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[0U] 
        = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data;
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[1U] 
        = (IData)((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result)) 
                    << 0x20U) | (QData)((IData)(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
                                                  << 0x1bU) 
                                                 | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[1U] 
                                                    >> 5U))))));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[2U] 
        = (IData)(((((QData)((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result)) 
                     << 0x20U) | (QData)((IData)(((
                                                   vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
                                                   << 0x1bU) 
                                                  | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[1U] 
                                                     >> 5U))))) 
                   >> 0x20U));
    vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
        = ((0x1f0000U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                         << 4U)) | ((0xe000U & ((IData)(
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                         >> 6U)) 
                                                << 0xdU)) 
                                    | ((0x1f00U & ((IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                            >> 0x19U)) 
                                                   << 8U)) 
                                       | ((0xf0U & 
                                           ((IData)(
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                     >> 0x10U)) 
                                            << 4U)) 
                                          | ((8U & 
                                              (((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x14U))))
                                                 ? 
                                                ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                                 >> 2U)
                                                 : (IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                            >> 4U))) 
                                               << 3U)) 
                                             | ((6U 
                                                 & ((IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 2U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff))))))));
    if ((8U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next = 0U;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
            = (1U | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U]);
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next = 0U;
    } else if ((0x10U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))) {
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff;
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[0U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[1U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[2U] 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U];
        vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
            = vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff;
    }
}
