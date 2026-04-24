// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__120(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__120\n"); );
    // Body
    vlSelf->__PVT__ro_rd_pvld_int = vlSelf->__Vdly__ro_rd_pvld_int;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__134(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__134\n"); );
    // Body
    vlSelf->__PVT__ro_rd_prdy_d_o = (1U & (~ (((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                               & (IData)(vlSelf->__PVT__ro_rd_pvld_int_d)) 
                                              & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d)))));
}
