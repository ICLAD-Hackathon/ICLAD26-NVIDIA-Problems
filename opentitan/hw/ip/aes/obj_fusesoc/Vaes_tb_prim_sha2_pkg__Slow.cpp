// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_prim_sha2_pkg.h"

// Parameter definitions for Vaes_tb_prim_sha2_pkg
constexpr VlUnpacked<IData/*31:0*/, 8> Vaes_tb_prim_sha2_pkg::__PVT__InitHash_256;
constexpr VlUnpacked<QData/*63:0*/, 8> Vaes_tb_prim_sha2_pkg::__PVT__InitHash_384;
constexpr VlUnpacked<QData/*63:0*/, 8> Vaes_tb_prim_sha2_pkg::__PVT__InitHash_512;
constexpr VlUnpacked<IData/*31:0*/, 64> Vaes_tb_prim_sha2_pkg::__PVT__CubicRootPrime256;
constexpr VlUnpacked<QData/*63:0*/, 80> Vaes_tb_prim_sha2_pkg::__PVT__CubicRootPrime512;


void Vaes_tb_prim_sha2_pkg___ctor_var_reset(Vaes_tb_prim_sha2_pkg* vlSelf);

Vaes_tb_prim_sha2_pkg::Vaes_tb_prim_sha2_pkg(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vaes_tb_prim_sha2_pkg___ctor_var_reset(this);
}

void Vaes_tb_prim_sha2_pkg::__Vconfigure(Vaes_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vaes_tb_prim_sha2_pkg::~Vaes_tb_prim_sha2_pkg() {
}
