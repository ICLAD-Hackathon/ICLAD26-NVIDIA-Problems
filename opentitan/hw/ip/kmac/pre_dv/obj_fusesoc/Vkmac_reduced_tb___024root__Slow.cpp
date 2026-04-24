// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkmac_reduced_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vkmac_reduced_tb__Syms.h"
#include "Vkmac_reduced_tb___024root.h"

// Parameter definitions for Vkmac_reduced_tb___024root
constexpr VlUnpacked<IData/*31:0*/, 25> Vkmac_reduced_tb___024root::kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__RhoOffset;
constexpr VlUnpacked<IData/*31:0*/, 5> Vkmac_reduced_tb___024root::kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__ThetaIndexX1;
constexpr VlUnpacked<IData/*31:0*/, 5> Vkmac_reduced_tb___024root::kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__ThetaIndexX2;
constexpr VlUnpacked<VlUnpacked<IData/*31:0*/, 5>, 5> Vkmac_reduced_tb___024root::kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__PiRotate;
constexpr VlUnpacked<IData/*31:0*/, 5> Vkmac_reduced_tb___024root::kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__ChiIndexX1;
constexpr VlUnpacked<IData/*31:0*/, 5> Vkmac_reduced_tb___024root::kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__ChiIndexX2;
constexpr VlUnpacked<QData/*63:0*/, 24> Vkmac_reduced_tb___024root::kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__RC;


void Vkmac_reduced_tb___024root___ctor_var_reset(Vkmac_reduced_tb___024root* vlSelf);

Vkmac_reduced_tb___024root::Vkmac_reduced_tb___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vkmac_reduced_tb___024root___ctor_var_reset(this);
}

void Vkmac_reduced_tb___024root::__Vconfigure(Vkmac_reduced_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vkmac_reduced_tb___024root::~Vkmac_reduced_tb___024root() {
}
