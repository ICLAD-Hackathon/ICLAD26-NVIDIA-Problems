// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkmac_reduced_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vkmac_reduced_tb__Syms.h"
#include "Vkmac_reduced_tb_prim_sha2_pkg.h"

// Parameter definitions for Vkmac_reduced_tb_prim_sha2_pkg
constexpr VlUnpacked<IData/*31:0*/, 8> Vkmac_reduced_tb_prim_sha2_pkg::__PVT__InitHash_256;
constexpr VlUnpacked<QData/*63:0*/, 8> Vkmac_reduced_tb_prim_sha2_pkg::__PVT__InitHash_384;
constexpr VlUnpacked<QData/*63:0*/, 8> Vkmac_reduced_tb_prim_sha2_pkg::__PVT__InitHash_512;
constexpr VlUnpacked<IData/*31:0*/, 64> Vkmac_reduced_tb_prim_sha2_pkg::__PVT__CubicRootPrime256;
constexpr VlUnpacked<QData/*63:0*/, 80> Vkmac_reduced_tb_prim_sha2_pkg::__PVT__CubicRootPrime512;


void Vkmac_reduced_tb_prim_sha2_pkg___ctor_var_reset(Vkmac_reduced_tb_prim_sha2_pkg* vlSelf);

Vkmac_reduced_tb_prim_sha2_pkg::Vkmac_reduced_tb_prim_sha2_pkg(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vkmac_reduced_tb_prim_sha2_pkg___ctor_var_reset(this);
}

void Vkmac_reduced_tb_prim_sha2_pkg::__Vconfigure(Vkmac_reduced_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vkmac_reduced_tb_prim_sha2_pkg::~Vkmac_reduced_tb_prim_sha2_pkg() {
}
