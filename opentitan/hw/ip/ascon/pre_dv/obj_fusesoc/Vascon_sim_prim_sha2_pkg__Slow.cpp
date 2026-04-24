// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vascon_sim__Syms.h"
#include "Vascon_sim_prim_sha2_pkg.h"

// Parameter definitions for Vascon_sim_prim_sha2_pkg
constexpr VlUnpacked<IData/*31:0*/, 8> Vascon_sim_prim_sha2_pkg::__PVT__InitHash_256;
constexpr VlUnpacked<QData/*63:0*/, 8> Vascon_sim_prim_sha2_pkg::__PVT__InitHash_384;
constexpr VlUnpacked<QData/*63:0*/, 8> Vascon_sim_prim_sha2_pkg::__PVT__InitHash_512;
constexpr VlUnpacked<IData/*31:0*/, 64> Vascon_sim_prim_sha2_pkg::__PVT__CubicRootPrime256;
constexpr VlUnpacked<QData/*63:0*/, 80> Vascon_sim_prim_sha2_pkg::__PVT__CubicRootPrime512;


void Vascon_sim_prim_sha2_pkg___ctor_var_reset(Vascon_sim_prim_sha2_pkg* vlSelf);

Vascon_sim_prim_sha2_pkg::Vascon_sim_prim_sha2_pkg(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vascon_sim_prim_sha2_pkg___ctor_var_reset(this);
}

void Vascon_sim_prim_sha2_pkg::__Vconfigure(Vascon_sim__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vascon_sim_prim_sha2_pkg::~Vascon_sim_prim_sha2_pkg() {
}
