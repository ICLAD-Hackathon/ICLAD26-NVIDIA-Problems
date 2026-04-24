// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_model_dpi_pkg.h"

void Vaes_tb_aes_model_dpi_pkg___ctor_var_reset(Vaes_tb_aes_model_dpi_pkg* vlSelf);

Vaes_tb_aes_model_dpi_pkg::Vaes_tb_aes_model_dpi_pkg(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vaes_tb_aes_model_dpi_pkg___ctor_var_reset(this);
}

void Vaes_tb_aes_model_dpi_pkg::__Vconfigure(Vaes_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vaes_tb_aes_model_dpi_pkg::~Vaes_tb_aes_model_dpi_pkg() {
}
