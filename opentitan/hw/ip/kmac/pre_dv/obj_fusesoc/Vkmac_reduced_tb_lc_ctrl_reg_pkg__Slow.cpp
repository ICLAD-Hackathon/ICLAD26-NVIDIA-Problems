// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkmac_reduced_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vkmac_reduced_tb__Syms.h"
#include "Vkmac_reduced_tb_lc_ctrl_reg_pkg.h"

// Parameter definitions for Vkmac_reduced_tb_lc_ctrl_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 35> Vkmac_reduced_tb_lc_ctrl_reg_pkg::__PVT__LC_CTRL_REGS_PERMIT;


void Vkmac_reduced_tb_lc_ctrl_reg_pkg___ctor_var_reset(Vkmac_reduced_tb_lc_ctrl_reg_pkg* vlSelf);

Vkmac_reduced_tb_lc_ctrl_reg_pkg::Vkmac_reduced_tb_lc_ctrl_reg_pkg(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vkmac_reduced_tb_lc_ctrl_reg_pkg___ctor_var_reset(this);
}

void Vkmac_reduced_tb_lc_ctrl_reg_pkg::__Vconfigure(Vkmac_reduced_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vkmac_reduced_tb_lc_ctrl_reg_pkg::~Vkmac_reduced_tb_lc_ctrl_reg_pkg() {
}
