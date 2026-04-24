// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__51(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__51\n"); );
    // Body
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 8U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__ro_wr_adr = vlSelf->__Vdly__ro_wr_adr;
}
