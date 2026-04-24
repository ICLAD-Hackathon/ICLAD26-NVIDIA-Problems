// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rws_16x64.h"

void VNV_nvdla_nv_ram_rws_16x64___ctor_var_reset(VNV_nvdla_nv_ram_rws_16x64* vlSelf);

VNV_nvdla_nv_ram_rws_16x64::VNV_nvdla_nv_ram_rws_16x64(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VNV_nvdla_nv_ram_rws_16x64___ctor_var_reset(this);
}

void VNV_nvdla_nv_ram_rws_16x64::__Vconfigure(VNV_nvdla__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VNV_nvdla_nv_ram_rws_16x64::~VNV_nvdla_nv_ram_rws_16x64() {
}
