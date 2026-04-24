// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt.h"
#include "VNV_nvdla__Syms.h"

void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___ctor_var_reset(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf);

VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt::VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___ctor_var_reset(this);
}

void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt::__Vconfigure(VNV_nvdla__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt::~VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt() {
}
