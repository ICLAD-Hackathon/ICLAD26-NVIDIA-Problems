// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rwsp_160x65__Fz2.h"

void VNV_nvdla_nv_ram_rwsp_160x65__Fz2___ctor_var_reset(VNV_nvdla_nv_ram_rwsp_160x65__Fz2* vlSelf);

VNV_nvdla_nv_ram_rwsp_160x65__Fz2::VNV_nvdla_nv_ram_rwsp_160x65__Fz2(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VNV_nvdla_nv_ram_rwsp_160x65__Fz2___ctor_var_reset(this);
}

void VNV_nvdla_nv_ram_rwsp_160x65__Fz2::__Vconfigure(VNV_nvdla__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VNV_nvdla_nv_ram_rwsp_160x65__Fz2::~VNV_nvdla_nv_ram_rwsp_160x65__Fz2() {
}
