// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vascon_sim__Syms.h"


void Vascon_sim___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_sim___024root__trace_cleanup\n"); );
    // Init
    Vascon_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vascon_sim___024root*>(voidSelf);
    Vascon_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
