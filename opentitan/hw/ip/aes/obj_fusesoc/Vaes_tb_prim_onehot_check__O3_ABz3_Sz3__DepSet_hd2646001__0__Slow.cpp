// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb_prim_onehot_check__O3_ABz3_Sz3.h"

VL_ATTR_COLD void Vaes_tb_prim_onehot_check__O3_ABz3_Sz3___ctor_var_reset(Vaes_tb_prim_onehot_check__O3_ABz3_Sz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vaes_tb_prim_onehot_check__O3_ABz3_Sz3___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->oh_i = VL_RAND_RESET_I(3);
    vlSelf->addr_i = VL_RAND_RESET_I(5);
    vlSelf->en_i = VL_RAND_RESET_I(1);
    vlSelf->err_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__or_tree__BRA__15__KET__ = VL_RAND_RESET_I(1);
}
