// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sha512_core.h for the primary calling header

#include "verilated.h"

#include "Vtb_sha512_core__Syms.h"
#include "Vtb_sha512_core___024root.h"

void Vtb_sha512_core___024root___ctor_var_reset(Vtb_sha512_core___024root* vlSelf);

Vtb_sha512_core___024root::Vtb_sha512_core___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtb_sha512_core___024root___ctor_var_reset(this);
}

void Vtb_sha512_core___024root::__Vconfigure(Vtb_sha512_core__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtb_sha512_core___024root::~Vtb_sha512_core___024root() {
}
