// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vascon_sim__Syms.h"
#include "Vascon_sim___024root.h"

void Vascon_sim___024root___ctor_var_reset(Vascon_sim___024root* vlSelf);

Vascon_sim___024root::Vascon_sim___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vascon_sim___024root___ctor_var_reset(this);
}

void Vascon_sim___024root::__Vconfigure(Vascon_sim__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vascon_sim___024root::~Vascon_sim___024root() {
}
