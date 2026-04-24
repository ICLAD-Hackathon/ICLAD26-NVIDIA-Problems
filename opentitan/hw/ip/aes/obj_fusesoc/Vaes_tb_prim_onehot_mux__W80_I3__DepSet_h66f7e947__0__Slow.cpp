// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb_prim_onehot_mux__W80_I3.h"

VL_ATTR_COLD void Vaes_tb_prim_onehot_mux__W80_I3___ctor_var_reset(Vaes_tb_prim_onehot_mux__W80_I3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vaes_tb_prim_onehot_mux__W80_I3___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->in_i[__Vi0]);
    }
    vlSelf->sel_i = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->out_o);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__in_mux[__Vi0] = VL_RAND_RESET_I(3);
    }
}
