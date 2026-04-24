// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkmac_reduced_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vkmac_reduced_tb___024root.h"

void Vkmac_reduced_tb___024root___sequent__TOP__8(Vkmac_reduced_tb___024root* vlSelf);
void Vkmac_reduced_tb___024root___sequent__TOP__9(Vkmac_reduced_tb___024root* vlSelf);
void Vkmac_reduced_tb___024root___sequent__TOP__10(Vkmac_reduced_tb___024root* vlSelf);
void Vkmac_reduced_tb___024root___sequent__TOP__11(Vkmac_reduced_tb___024root* vlSelf);
void Vkmac_reduced_tb___024root___multiclk__TOP__12(Vkmac_reduced_tb___024root* vlSelf);
void Vkmac_reduced_tb___024root___multiclk__TOP__13(Vkmac_reduced_tb___024root* vlSelf);

void Vkmac_reduced_tb___024root___eval(Vkmac_reduced_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkmac_reduced_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkmac_reduced_tb___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vkmac_reduced_tb___024root___sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vkmac_reduced_tb___024root___sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vkmac_reduced_tb___024root___sequent__TOP__10(vlSelf);
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vkmac_reduced_tb___024root___sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vkmac_reduced_tb___024root___multiclk__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vkmac_reduced_tb___024root___multiclk__TOP__13(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

#ifdef VL_DEBUG
void Vkmac_reduced_tb___024root___eval_debug_assertions(Vkmac_reduced_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkmac_reduced_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkmac_reduced_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
