// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprim_ascon_duplex_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vprim_ascon_duplex_tb__Syms.h"
#include "Vprim_ascon_duplex_tb___024root.h"

void Vprim_ascon_duplex_tb___024root___ctor_var_reset(Vprim_ascon_duplex_tb___024root* vlSelf);

Vprim_ascon_duplex_tb___024root::Vprim_ascon_duplex_tb___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vprim_ascon_duplex_tb___024root___ctor_var_reset(this);
}

void Vprim_ascon_duplex_tb___024root::__Vconfigure(Vprim_ascon_duplex_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vprim_ascon_duplex_tb___024root::~Vprim_ascon_duplex_tb___024root() {
}
