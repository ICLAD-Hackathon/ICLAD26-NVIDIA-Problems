// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprim_ascon_duplex_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vprim_ascon_duplex_tb__Syms.h"
#include "Vprim_ascon_duplex_tb_prim_sha2_pkg.h"

// Parameter definitions for Vprim_ascon_duplex_tb_prim_sha2_pkg
constexpr VlUnpacked<IData/*31:0*/, 8> Vprim_ascon_duplex_tb_prim_sha2_pkg::__PVT__InitHash_256;
constexpr VlUnpacked<QData/*63:0*/, 8> Vprim_ascon_duplex_tb_prim_sha2_pkg::__PVT__InitHash_384;
constexpr VlUnpacked<QData/*63:0*/, 8> Vprim_ascon_duplex_tb_prim_sha2_pkg::__PVT__InitHash_512;
constexpr VlUnpacked<IData/*31:0*/, 64> Vprim_ascon_duplex_tb_prim_sha2_pkg::__PVT__CubicRootPrime256;
constexpr VlUnpacked<QData/*63:0*/, 80> Vprim_ascon_duplex_tb_prim_sha2_pkg::__PVT__CubicRootPrime512;


void Vprim_ascon_duplex_tb_prim_sha2_pkg___ctor_var_reset(Vprim_ascon_duplex_tb_prim_sha2_pkg* vlSelf);

Vprim_ascon_duplex_tb_prim_sha2_pkg::Vprim_ascon_duplex_tb_prim_sha2_pkg(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vprim_ascon_duplex_tb_prim_sha2_pkg___ctor_var_reset(this);
}

void Vprim_ascon_duplex_tb_prim_sha2_pkg::__Vconfigure(Vprim_ascon_duplex_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vprim_ascon_duplex_tb_prim_sha2_pkg::~Vprim_ascon_duplex_tb_prim_sha2_pkg() {
}
