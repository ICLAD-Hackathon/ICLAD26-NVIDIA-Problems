// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vascon_sim__Syms.h"
#include "Vascon_sim_keymgr_reg_pkg.h"

// Parameter definitions for Vascon_sim_keymgr_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 63> Vascon_sim_keymgr_reg_pkg::__PVT__KEYMGR_PERMIT;


void Vascon_sim_keymgr_reg_pkg___ctor_var_reset(Vascon_sim_keymgr_reg_pkg* vlSelf);

Vascon_sim_keymgr_reg_pkg::Vascon_sim_keymgr_reg_pkg(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vascon_sim_keymgr_reg_pkg___ctor_var_reset(this);
}

void Vascon_sim_keymgr_reg_pkg::__Vconfigure(Vascon_sim__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vascon_sim_keymgr_reg_pkg::~Vascon_sim_keymgr_reg_pkg() {
}
