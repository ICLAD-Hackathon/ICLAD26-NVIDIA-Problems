// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb___024root.h"

// Parameter definitions for Vaes_tb___024root
constexpr VlUnpacked<VlWide<6>/*167:0*/, 166> Vaes_tb___024root::aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__LFSR_COEFFS;


void Vaes_tb___024root___ctor_var_reset(Vaes_tb___024root* vlSelf);

Vaes_tb___024root::Vaes_tb___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vaes_tb___024root___ctor_var_reset(this);
}

void Vaes_tb___024root::__Vconfigure(Vaes_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vaes_tb___024root::~Vaes_tb___024root() {
}
