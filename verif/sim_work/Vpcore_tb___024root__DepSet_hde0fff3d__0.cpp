// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpcore_tb.h for the primary calling header

#include "verilated.h"

#include "Vpcore_tb__Syms.h"
#include "Vpcore_tb__Syms.h"
#include "Vpcore_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpcore_tb___024root___dump_triggers__act(Vpcore_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vpcore_tb___024root___eval_triggers__act(Vpcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->reset)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0))));
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_ff) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_ff__0))) 
                                     | ((~ (IData)(vlSelf->reset)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0))));
    vlSelf->__VactTriggered.set(4U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(5U, (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk) 
                                      ^ (IData)(vlSelf->__Vtrigprevexpr___TOP__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk__0)) 
                                     | ((~ (IData)(vlSelf->reset)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
    vlSelf->__Vtrigprevexpr___TOP__pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_ff__0 
        = vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_ff;
    vlSelf->__Vtrigprevexpr___TOP__pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk__0 
        = vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpcore_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
