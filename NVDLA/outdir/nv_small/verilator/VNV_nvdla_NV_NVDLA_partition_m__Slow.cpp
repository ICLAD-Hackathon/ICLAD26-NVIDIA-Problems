// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_partition_m.h"
#include "VNV_nvdla__Syms.h"

void VNV_nvdla_NV_NVDLA_partition_m___ctor_var_reset(VNV_nvdla_NV_NVDLA_partition_m* vlSelf);

VNV_nvdla_NV_NVDLA_partition_m::VNV_nvdla_NV_NVDLA_partition_m(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VNV_nvdla_NV_NVDLA_partition_m___ctor_var_reset(this);
}

void VNV_nvdla_NV_NVDLA_partition_m::__Vconfigure(VNV_nvdla__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VNV_nvdla_NV_NVDLA_partition_m::~VNV_nvdla_NV_NVDLA_partition_m() {
}
