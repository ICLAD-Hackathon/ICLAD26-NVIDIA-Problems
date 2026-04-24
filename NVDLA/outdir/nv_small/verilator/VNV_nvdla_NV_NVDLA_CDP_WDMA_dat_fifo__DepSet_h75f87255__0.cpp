// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__48(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__48\n"); );
    // Body
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                    ? 8U : (IData)(vlSelf->__PVT__dat_fifo_rd_adr));
    vlSelf->__PVT__dat_fifo_wr_adr = vlSelf->__Vdly__dat_fifo_wr_adr;
}
