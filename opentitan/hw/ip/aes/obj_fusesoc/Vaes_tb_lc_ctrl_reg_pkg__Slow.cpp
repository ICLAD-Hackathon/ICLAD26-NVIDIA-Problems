// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_lc_ctrl_reg_pkg.h"

// Parameter definitions for Vaes_tb_lc_ctrl_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 35> Vaes_tb_lc_ctrl_reg_pkg::__PVT__LC_CTRL_REGS_PERMIT;


void Vaes_tb_lc_ctrl_reg_pkg___ctor_var_reset(Vaes_tb_lc_ctrl_reg_pkg* vlSelf);

Vaes_tb_lc_ctrl_reg_pkg::Vaes_tb_lc_ctrl_reg_pkg(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vaes_tb_lc_ctrl_reg_pkg___ctor_var_reset(this);
}

void Vaes_tb_lc_ctrl_reg_pkg::__Vconfigure(Vaes_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vaes_tb_lc_ctrl_reg_pkg::~Vaes_tb_lc_ctrl_reg_pkg() {
}
