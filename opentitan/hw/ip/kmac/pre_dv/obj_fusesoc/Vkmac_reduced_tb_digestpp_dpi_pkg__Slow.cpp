// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkmac_reduced_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vkmac_reduced_tb__Syms.h"
#include "Vkmac_reduced_tb_digestpp_dpi_pkg.h"

void Vkmac_reduced_tb_digestpp_dpi_pkg___ctor_var_reset(Vkmac_reduced_tb_digestpp_dpi_pkg* vlSelf);

Vkmac_reduced_tb_digestpp_dpi_pkg::Vkmac_reduced_tb_digestpp_dpi_pkg(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vkmac_reduced_tb_digestpp_dpi_pkg___ctor_var_reset(this);
}

void Vkmac_reduced_tb_digestpp_dpi_pkg::__Vconfigure(Vkmac_reduced_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vkmac_reduced_tb_digestpp_dpi_pkg::~Vkmac_reduced_tb_digestpp_dpi_pkg() {
}
