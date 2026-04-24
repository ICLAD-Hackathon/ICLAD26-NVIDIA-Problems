// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_prim_onehot_mux__W80_I3.h"

void Vaes_tb_prim_onehot_mux__W80_I3___ctor_var_reset(Vaes_tb_prim_onehot_mux__W80_I3* vlSelf);

Vaes_tb_prim_onehot_mux__W80_I3::Vaes_tb_prim_onehot_mux__W80_I3(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vaes_tb_prim_onehot_mux__W80_I3___ctor_var_reset(this);
}

void Vaes_tb_prim_onehot_mux__W80_I3::__Vconfigure(Vaes_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vaes_tb_prim_onehot_mux__W80_I3::~Vaes_tb_prim_onehot_mux__W80_I3() {
}
