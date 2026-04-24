// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sha512.h for the primary calling header

#include "verilated.h"

#include "Vtb_sha512__Syms.h"
#include "Vtb_sha512___024root.h"

void Vtb_sha512___024root___ctor_var_reset(Vtb_sha512___024root* vlSelf);

Vtb_sha512___024root::Vtb_sha512___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtb_sha512___024root___ctor_var_reset(this);
}

void Vtb_sha512___024root::__Vconfigure(Vtb_sha512__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtb_sha512___024root::~Vtb_sha512___024root() {
}
