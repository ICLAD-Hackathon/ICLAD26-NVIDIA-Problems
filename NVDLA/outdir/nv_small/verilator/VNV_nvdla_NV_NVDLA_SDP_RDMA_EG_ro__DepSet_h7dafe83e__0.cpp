// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__39(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__39\n"); );
    // Body
    vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_d) 
                                                      & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d)))));
}
