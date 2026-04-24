// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprim_ascon_duplex_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vprim_ascon_duplex_tb__Syms.h"
#include "Vprim_ascon_duplex_tb_ascon_model_dpi_pkg.h"

void Vprim_ascon_duplex_tb_ascon_model_dpi_pkg___ctor_var_reset(Vprim_ascon_duplex_tb_ascon_model_dpi_pkg* vlSelf);

Vprim_ascon_duplex_tb_ascon_model_dpi_pkg::Vprim_ascon_duplex_tb_ascon_model_dpi_pkg(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vprim_ascon_duplex_tb_ascon_model_dpi_pkg___ctor_var_reset(this);
}

void Vprim_ascon_duplex_tb_ascon_model_dpi_pkg::__Vconfigure(Vprim_ascon_duplex_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vprim_ascon_duplex_tb_ascon_model_dpi_pkg::~Vprim_ascon_duplex_tb_ascon_model_dpi_pkg() {
}
