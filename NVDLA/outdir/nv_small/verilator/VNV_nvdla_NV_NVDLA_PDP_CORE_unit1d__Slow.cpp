// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d.h"
#include "VNV_nvdla__Syms.h"

void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___ctor_var_reset(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf);

VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d::VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___ctor_var_reset(this);
}

void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d::__Vconfigure(VNV_nvdla__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d::~VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d() {
}
