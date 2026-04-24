// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb_aes_tb_pkg.h"

VL_ATTR_COLD void Vaes_tb_aes_tb_pkg___ctor_var_reset(Vaes_tb_aes_tb_pkg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_tb_aes_tb_pkg___ctor_var_reset\n"); );
    // Body
    for (int __Vi0=0; __Vi0<349; ++__Vi0) {
        VL_RAND_RESET_W(1261, vlSelf->requests[__Vi0]);
    }
}
