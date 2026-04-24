// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__8(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__8\n"); );
    // Init
    QData/*46:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data = vlSelf->__PVT__pipe_p2__DOT__p2_skid_data;
    __Vdly__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch)
                                           ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                           : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch)
                                                  ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
                                                  : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    if (vlSelf->__PVT__bpt2arb_accept) {
        vlSelf->__PVT__out_addr = ((0U == (IData)(vlSelf->__PVT__count_req))
                                    ? ((IData)(8U) 
                                       + (IData)(vlSelf->__PVT__in_vld_pd))
                                    : ((IData)(8U) 
                                       + vlSelf->__PVT__out_addr));
    }
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data = (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                  & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                   ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                                   : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data)
                                                  : vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                  & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dma_mux__DOT__pipe_skid_req_mc_in_pvld))
                                                  ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dma_mux__DOT__pipe_skid_req_mc_in_pd
                                                  : vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_data = __Vdly__pipe_p2__DOT__p2_skid_data;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__15(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__15\n"); );
    // Init
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    // Body
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready = (1U 
                                                  & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                                                     | (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                                                      : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__bpt2arb_accept) {
            vlSelf->__PVT__count_req = ((IData)(vlSelf->__PVT__is_ltran)
                                         ? 0U : (0xffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__count_req))));
        }
        vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid 
            = (1U & ((~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                     | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid)));
        vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid 
            = (1U & ((~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                     | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dma_mux__DOT__pipe_skid_req_mc_in_pvld)));
        vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid 
            = (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                      ? (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready))
                      : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch)));
    } else {
        vlSelf->__PVT__count_req = 0U;
        vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = 0U;
        vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = 0U;
        vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid = 0U;
    }
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelf->bpt2arb_req_pd = ((0x3ffffffffffULL & vlSelf->bpt2arb_req_pd) 
                              | ((QData)((IData)((0U 
                                                  == (IData)(vlSelf->__PVT__count_req)))) 
                                 << 0x2aU));
    vlSelf->__PVT__bpt2arb_accept = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_0__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__in_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                & vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    __PVT__pipe_p1__DOT__p1_pipe_skid_valid = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                                ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
                                                : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready)));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__count_req) 
                               == ((0xffffU & ((IData)(1U) 
                                               + (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                   - (IData)(1U)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->bpt2arb_req_pd = ((0x40000000000ULL & vlSelf->bpt2arb_req_pd) 
                              | (8ULL | (((QData)((IData)(vlSelf->__PVT__is_ltran)) 
                                          << 0x29U) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->__PVT__count_req))
                                                              ? (IData)(vlSelf->__PVT__in_vld_pd)
                                                              : vlSelf->__PVT__out_addr))) 
                                            << 4U))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_0__DOT__p1_pipe_ready_bc) 
                & (IData)(vlSelf->__PVT__is_ltran)) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__9(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__9\n"); );
    // Init
    QData/*46:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data = vlSelf->__PVT__pipe_p2__DOT__p2_skid_data;
    __Vdly__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch)
                                           ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                           : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch)
                                                  ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
                                                  : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    if (vlSelf->__PVT__bpt2arb_accept) {
        vlSelf->__PVT__out_addr = ((0U == (IData)(vlSelf->__PVT__count_req))
                                    ? ((IData)(8U) 
                                       + (IData)(vlSelf->__PVT__in_vld_pd))
                                    : ((IData)(8U) 
                                       + vlSelf->__PVT__out_addr));
    }
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data = (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                  & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                   ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                                   : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data)
                                                  : vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                  & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))
                                                  ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_dmaif_rd_req_pd
                                                  : vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_data = __Vdly__pipe_p2__DOT__p2_skid_data;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__16(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__16\n"); );
    // Init
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    // Body
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                                                      : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__bpt2arb_accept) {
            vlSelf->__PVT__count_req = ((IData)(vlSelf->__PVT__is_ltran)
                                         ? 0U : (0xffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__count_req))));
        }
        vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid 
            = (1U & ((~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                     | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid)));
        vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid 
            = (1U & ((~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                     | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld)));
        vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid 
            = (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                      ? (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready))
                      : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch)));
    } else {
        vlSelf->__PVT__count_req = 0U;
        vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = 0U;
        vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = 0U;
        vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid = 0U;
    }
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelf->bpt2arb_req_pd = ((0x3ffffffffffULL & vlSelf->bpt2arb_req_pd) 
                              | ((QData)((IData)((0U 
                                                  == (IData)(vlSelf->__PVT__count_req)))) 
                                 << 0x2aU));
    vlSelf->__PVT__bpt2arb_accept = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_1__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__in_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                & vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    __PVT__pipe_p1__DOT__p1_pipe_skid_valid = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                                ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
                                                : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready)));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__count_req) 
                               == ((0xffffU & ((IData)(1U) 
                                               + (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                   - (IData)(1U)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->bpt2arb_req_pd = ((0x40000000000ULL & vlSelf->bpt2arb_req_pd) 
                              | (9ULL | (((QData)((IData)(vlSelf->__PVT__is_ltran)) 
                                          << 0x29U) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->__PVT__count_req))
                                                              ? (IData)(vlSelf->__PVT__in_vld_pd)
                                                              : vlSelf->__PVT__out_addr))) 
                                            << 4U))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_1__DOT__p1_pipe_ready_bc) 
                & (IData)(vlSelf->__PVT__is_ltran)) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__10(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__10\n"); );
    // Init
    QData/*46:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data = vlSelf->__PVT__pipe_p2__DOT__p2_skid_data;
    __Vdly__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch)
                                           ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                           : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch)
                                                  ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
                                                  : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    if (vlSelf->__PVT__bpt2arb_accept) {
        vlSelf->__PVT__out_addr = ((0U == (IData)(vlSelf->__PVT__count_req))
                                    ? ((IData)(8U) 
                                       + (IData)(vlSelf->__PVT__in_vld_pd))
                                    : ((IData)(8U) 
                                       + vlSelf->__PVT__out_addr));
    }
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data = (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                  & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                   ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                                   : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data)
                                                  : vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                  & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))
                                                  ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_dmaif_rd_req_pd
                                                  : vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_data = __Vdly__pipe_p2__DOT__p2_skid_data;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__17(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__17\n"); );
    // Init
    SData/*9:0*/ __PVT__lat_cnt_ext;
    SData/*9:0*/ __PVT__lat_cnt_mod;
    SData/*9:0*/ __PVT__lat_cnt_new;
    CData/*0:0*/ __PVT__req_rdy;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    // Body
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                                                      : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__bpt2arb_accept) {
            vlSelf->__PVT__count_req = ((IData)(vlSelf->__PVT__is_ltran)
                                         ? 0U : (0xffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__count_req))));
        }
        vlSelf->__PVT__lat_cnt_cur = (0xffU & (IData)(vlSelf->__PVT__lat_cnt_nxt));
        vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid 
            = (1U & ((~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                     | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid)));
        vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid 
            = (1U & ((~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                     | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld)));
        vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid 
            = (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                      ? (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop))
                      : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch)));
        vlSelf->__PVT__lat_count_dec = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__cdp2mcif_rd_cdt_lat_fifo_pop;
    } else {
        vlSelf->__PVT__count_req = 0U;
        vlSelf->__PVT__lat_cnt_cur = 0U;
        vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = 0U;
        vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = 0U;
        vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid = 0U;
        vlSelf->__PVT__lat_count_dec = 0U;
    }
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelf->bpt2arb_req_pd = ((0x3ffffffffffULL & vlSelf->bpt2arb_req_pd) 
                              | ((QData)((IData)((0U 
                                                  == (IData)(vlSelf->__PVT__count_req)))) 
                                 << 0x2aU));
    __PVT__req_rdy = ((1U <= (0xffU & ((IData)(0x3dU) 
                                       - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                      & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_2__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__req_vld = ((1U <= (0xffU & ((IData)(0x3dU) 
                                               - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                              & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelf->__PVT__in_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                & vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    __PVT__pipe_p1__DOT__p1_pipe_skid_valid = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                                ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
                                                : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready)));
    vlSelf->__PVT__bpt2arb_accept = ((IData)(vlSelf->__PVT__req_vld) 
                                     & (IData)(__PVT__req_rdy));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__count_req) 
                               == ((0xffffU & ((IData)(1U) 
                                               + (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                   - (IData)(1U)));
    __PVT__lat_cnt_ext = vlSelf->__PVT__lat_cnt_cur;
    __PVT__lat_cnt_mod = (0x3ffU & (((IData)(vlSelf->__PVT__lat_cnt_cur) 
                                     + ((IData)(vlSelf->__PVT__bpt2arb_accept)
                                         ? 1U : 0U)) 
                                    - (IData)(vlSelf->__PVT__lat_count_dec)));
    __PVT__lat_cnt_new = ((((IData)(vlSelf->__PVT__bpt2arb_accept)
                             ? 1U : 0U) != (IData)(vlSelf->__PVT__lat_count_dec))
                           ? (IData)(__PVT__lat_cnt_mod)
                           : (IData)(__PVT__lat_cnt_ext));
    vlSelf->__PVT__lat_cnt_nxt = __PVT__lat_cnt_new;
    vlSelf->bpt2arb_req_pd = ((0x40000000000ULL & vlSelf->bpt2arb_req_pd) 
                              | (3ULL | (((QData)((IData)(vlSelf->__PVT__is_ltran)) 
                                          << 0x29U) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->__PVT__count_req))
                                                              ? (IData)(vlSelf->__PVT__in_vld_pd)
                                                              : vlSelf->__PVT__out_addr))) 
                                            << 4U))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & (((IData)(__PVT__req_rdy) & (IData)(vlSelf->__PVT__is_ltran)) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__11(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__11\n"); );
    // Init
    QData/*46:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data = vlSelf->__PVT__pipe_p2__DOT__p2_skid_data;
    __Vdly__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch)
                                           ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                           : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch)
                                                  ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
                                                  : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    if (vlSelf->__PVT__bpt2arb_accept) {
        vlSelf->__PVT__out_addr = ((0U == (IData)(vlSelf->__PVT__count_req))
                                    ? ((IData)(8U) 
                                       + (IData)(vlSelf->__PVT__in_vld_pd))
                                    : ((IData)(8U) 
                                       + vlSelf->__PVT__out_addr));
    }
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data = (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                  & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                   ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                                   : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data)
                                                  : vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                  & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))
                                                  ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_dmaif_rd_req_pd
                                                  : vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_data = __Vdly__pipe_p2__DOT__p2_skid_data;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__18(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__18\n"); );
    // Init
    SData/*9:0*/ __PVT__lat_cnt_ext;
    SData/*9:0*/ __PVT__lat_cnt_mod;
    SData/*9:0*/ __PVT__lat_cnt_new;
    CData/*0:0*/ __PVT__req_rdy;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    // Body
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                                                      : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__bpt2arb_accept) {
            vlSelf->__PVT__count_req = ((IData)(vlSelf->__PVT__is_ltran)
                                         ? 0U : (0xffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__count_req))));
        }
        vlSelf->__PVT__lat_cnt_cur = (0xffU & (IData)(vlSelf->__PVT__lat_cnt_nxt));
        vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid 
            = (1U & ((~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                     | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid)));
        vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid 
            = (1U & ((~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                     | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld)));
        vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid 
            = (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                      ? (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop))
                      : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch)));
        vlSelf->__PVT__lat_count_dec = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__pdp2mcif_rd_cdt_lat_fifo_pop;
    } else {
        vlSelf->__PVT__count_req = 0U;
        vlSelf->__PVT__lat_cnt_cur = 0U;
        vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = 0U;
        vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = 0U;
        vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid = 0U;
        vlSelf->__PVT__lat_count_dec = 0U;
    }
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelf->bpt2arb_req_pd = ((0x3ffffffffffULL & vlSelf->bpt2arb_req_pd) 
                              | ((QData)((IData)((0U 
                                                  == (IData)(vlSelf->__PVT__count_req)))) 
                                 << 0x2aU));
    __PVT__req_rdy = ((1U <= (0xffU & ((IData)(0x3dU) 
                                       - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                      & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_3__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__req_vld = ((1U <= (0xffU & ((IData)(0x3dU) 
                                               - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                              & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelf->__PVT__in_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                & vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    __PVT__pipe_p1__DOT__p1_pipe_skid_valid = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                                ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
                                                : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready)));
    vlSelf->__PVT__bpt2arb_accept = ((IData)(vlSelf->__PVT__req_vld) 
                                     & (IData)(__PVT__req_rdy));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__count_req) 
                               == ((0xffffU & ((IData)(1U) 
                                               + (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                   - (IData)(1U)));
    __PVT__lat_cnt_ext = vlSelf->__PVT__lat_cnt_cur;
    __PVT__lat_cnt_mod = (0x3ffU & (((IData)(vlSelf->__PVT__lat_cnt_cur) 
                                     + ((IData)(vlSelf->__PVT__bpt2arb_accept)
                                         ? 1U : 0U)) 
                                    - (IData)(vlSelf->__PVT__lat_count_dec)));
    __PVT__lat_cnt_new = ((((IData)(vlSelf->__PVT__bpt2arb_accept)
                             ? 1U : 0U) != (IData)(vlSelf->__PVT__lat_count_dec))
                           ? (IData)(__PVT__lat_cnt_mod)
                           : (IData)(__PVT__lat_cnt_ext));
    vlSelf->__PVT__lat_cnt_nxt = __PVT__lat_cnt_new;
    vlSelf->bpt2arb_req_pd = ((0x40000000000ULL & vlSelf->bpt2arb_req_pd) 
                              | (2ULL | (((QData)((IData)(vlSelf->__PVT__is_ltran)) 
                                          << 0x29U) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->__PVT__count_req))
                                                              ? (IData)(vlSelf->__PVT__in_vld_pd)
                                                              : vlSelf->__PVT__out_addr))) 
                                            << 4U))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & (((IData)(__PVT__req_rdy) & (IData)(vlSelf->__PVT__is_ltran)) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__12(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__12\n"); );
    // Init
    QData/*46:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data = vlSelf->__PVT__pipe_p2__DOT__p2_skid_data;
    __Vdly__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch)
                                           ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                           : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch)
                                                  ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
                                                  : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    if (vlSelf->__PVT__bpt2arb_accept) {
        vlSelf->__PVT__out_addr = ((0U == (IData)(vlSelf->__PVT__count_req))
                                    ? ((IData)(8U) 
                                       + (IData)(vlSelf->__PVT__in_vld_pd))
                                    : ((IData)(8U) 
                                       + vlSelf->__PVT__out_addr));
    }
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                  & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))
                                                  ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_dmaif_rd_req_pd
                                                  : vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data = (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                  & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                   ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                                   : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data)
                                                  : vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_data = __Vdly__pipe_p2__DOT__p2_skid_data;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__19(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__19\n"); );
    // Init
    SData/*9:0*/ __PVT__lat_cnt_ext;
    SData/*9:0*/ __PVT__lat_cnt_mod;
    SData/*9:0*/ __PVT__lat_cnt_new;
    CData/*0:0*/ __PVT__req_rdy;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    // Body
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                                                      : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__bpt2arb_accept) {
            vlSelf->__PVT__count_req = ((IData)(vlSelf->__PVT__is_ltran)
                                         ? 0U : (0xffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__count_req))));
        }
        vlSelf->__PVT__lat_cnt_cur = (0xffU & (IData)(vlSelf->__PVT__lat_cnt_nxt));
        vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid 
            = (1U & ((~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                     | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid)));
        vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid 
            = (1U & ((~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                     | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld)));
        vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid 
            = (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                      ? (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop))
                      : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch)));
        vlSelf->__PVT__lat_count_dec = vlSymsp->TOP.NV_nvdla__DOT__sdp2mcif_rd_cdt_lat_fifo_pop;
    } else {
        vlSelf->__PVT__count_req = 0U;
        vlSelf->__PVT__lat_cnt_cur = 0U;
        vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = 0U;
        vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = 0U;
        vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid = 0U;
        vlSelf->__PVT__lat_count_dec = 0U;
    }
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelf->bpt2arb_req_pd = ((0x3ffffffffffULL & vlSelf->bpt2arb_req_pd) 
                              | ((QData)((IData)((0U 
                                                  == (IData)(vlSelf->__PVT__count_req)))) 
                                 << 0x2aU));
    __PVT__req_rdy = ((1U <= (0xffU & ((IData)(0x50U) 
                                       - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                      & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_4__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__req_vld = ((1U <= (0xffU & ((IData)(0x50U) 
                                               - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                              & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelf->__PVT__in_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                & vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    __PVT__pipe_p1__DOT__p1_pipe_skid_valid = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                                ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
                                                : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready)));
    vlSelf->__PVT__bpt2arb_accept = ((IData)(vlSelf->__PVT__req_vld) 
                                     & (IData)(__PVT__req_rdy));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__count_req) 
                               == ((0xffffU & ((IData)(1U) 
                                               + (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                   - (IData)(1U)));
    __PVT__lat_cnt_ext = vlSelf->__PVT__lat_cnt_cur;
    __PVT__lat_cnt_mod = (0x3ffU & (((IData)(vlSelf->__PVT__lat_cnt_cur) 
                                     + ((IData)(vlSelf->__PVT__bpt2arb_accept)
                                         ? 1U : 0U)) 
                                    - (IData)(vlSelf->__PVT__lat_count_dec)));
    __PVT__lat_cnt_new = ((((IData)(vlSelf->__PVT__bpt2arb_accept)
                             ? 1U : 0U) != (IData)(vlSelf->__PVT__lat_count_dec))
                           ? (IData)(__PVT__lat_cnt_mod)
                           : (IData)(__PVT__lat_cnt_ext));
    vlSelf->__PVT__lat_cnt_nxt = __PVT__lat_cnt_new;
    vlSelf->bpt2arb_req_pd = ((0x40000000000ULL & vlSelf->bpt2arb_req_pd) 
                              | (1ULL | (((QData)((IData)(vlSelf->__PVT__is_ltran)) 
                                          << 0x29U) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->__PVT__count_req))
                                                              ? (IData)(vlSelf->__PVT__in_vld_pd)
                                                              : vlSelf->__PVT__out_addr))) 
                                            << 4U))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & (((IData)(__PVT__req_rdy) & (IData)(vlSelf->__PVT__is_ltran)) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__13(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__13\n"); );
    // Init
    QData/*46:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data = vlSelf->__PVT__pipe_p2__DOT__p2_skid_data;
    __Vdly__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch)
                                           ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                           : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch)
                                                  ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
                                                  : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    if (vlSelf->__PVT__bpt2arb_accept) {
        vlSelf->__PVT__out_addr = ((0U == (IData)(vlSelf->__PVT__count_req))
                                    ? ((IData)(8U) 
                                       + (IData)(vlSelf->__PVT__in_vld_pd))
                                    : ((IData)(8U) 
                                       + vlSelf->__PVT__out_addr));
    }
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                  & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))
                                                  ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_dmaif_rd_req_pd
                                                  : vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data = (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                  & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                   ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                                   : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data)
                                                  : vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_data = __Vdly__pipe_p2__DOT__p2_skid_data;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__20(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__20\n"); );
    // Init
    SData/*9:0*/ __PVT__lat_cnt_ext;
    SData/*9:0*/ __PVT__lat_cnt_mod;
    SData/*9:0*/ __PVT__lat_cnt_new;
    CData/*0:0*/ __PVT__req_rdy;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    // Body
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                                                      : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__bpt2arb_accept) {
            vlSelf->__PVT__count_req = ((IData)(vlSelf->__PVT__is_ltran)
                                         ? 0U : (0xffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__count_req))));
        }
        vlSelf->__PVT__lat_cnt_cur = (0xffU & (IData)(vlSelf->__PVT__lat_cnt_nxt));
        vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid 
            = (1U & ((~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                     | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid)));
        vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid 
            = (1U & ((~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                     | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld)));
        vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid 
            = (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                      ? (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop))
                      : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch)));
        vlSelf->__PVT__lat_count_dec = vlSymsp->TOP.NV_nvdla__DOT__sdp_b2mcif_rd_cdt_lat_fifo_pop;
    } else {
        vlSelf->__PVT__count_req = 0U;
        vlSelf->__PVT__lat_cnt_cur = 0U;
        vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = 0U;
        vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = 0U;
        vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid = 0U;
        vlSelf->__PVT__lat_count_dec = 0U;
    }
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelf->bpt2arb_req_pd = ((0x3ffffffffffULL & vlSelf->bpt2arb_req_pd) 
                              | ((QData)((IData)((0U 
                                                  == (IData)(vlSelf->__PVT__count_req)))) 
                                 << 0x2aU));
    __PVT__req_rdy = ((1U <= (0xffU & ((IData)(0xa0U) 
                                       - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                      & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_5__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__req_vld = ((1U <= (0xffU & ((IData)(0xa0U) 
                                               - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                              & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelf->__PVT__in_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                & vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    __PVT__pipe_p1__DOT__p1_pipe_skid_valid = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                                ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
                                                : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready)));
    vlSelf->__PVT__bpt2arb_accept = ((IData)(vlSelf->__PVT__req_vld) 
                                     & (IData)(__PVT__req_rdy));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__count_req) 
                               == ((0xffffU & ((IData)(1U) 
                                               + (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                   - (IData)(1U)));
    __PVT__lat_cnt_ext = vlSelf->__PVT__lat_cnt_cur;
    __PVT__lat_cnt_mod = (0x3ffU & (((IData)(vlSelf->__PVT__lat_cnt_cur) 
                                     + ((IData)(vlSelf->__PVT__bpt2arb_accept)
                                         ? 1U : 0U)) 
                                    - (IData)(vlSelf->__PVT__lat_count_dec)));
    __PVT__lat_cnt_new = ((((IData)(vlSelf->__PVT__bpt2arb_accept)
                             ? 1U : 0U) != (IData)(vlSelf->__PVT__lat_count_dec))
                           ? (IData)(__PVT__lat_cnt_mod)
                           : (IData)(__PVT__lat_cnt_ext));
    vlSelf->__PVT__lat_cnt_nxt = __PVT__lat_cnt_new;
    vlSelf->bpt2arb_req_pd = ((0x40000000000ULL & vlSelf->bpt2arb_req_pd) 
                              | (5ULL | (((QData)((IData)(vlSelf->__PVT__is_ltran)) 
                                          << 0x29U) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->__PVT__count_req))
                                                              ? (IData)(vlSelf->__PVT__in_vld_pd)
                                                              : vlSelf->__PVT__out_addr))) 
                                            << 4U))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & (((IData)(__PVT__req_rdy) & (IData)(vlSelf->__PVT__is_ltran)) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__14(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__14\n"); );
    // Init
    QData/*46:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    // Body
    __Vdly__pipe_p2__DOT__p2_skid_data = vlSelf->__PVT__pipe_p2__DOT__p2_skid_data;
    __Vdly__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch)
                                           ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                           : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch)
                                                  ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
                                                  : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    if (vlSelf->__PVT__bpt2arb_accept) {
        vlSelf->__PVT__out_addr = ((0U == (IData)(vlSelf->__PVT__count_req))
                                    ? ((IData)(8U) 
                                       + (IData)(vlSelf->__PVT__in_vld_pd))
                                    : ((IData)(8U) 
                                       + vlSelf->__PVT__out_addr));
    }
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                  & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))
                                                  ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_dmaif_rd_req_pd
                                                  : vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data = (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                  & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                   ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                                   : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data)
                                                  : vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_data = __Vdly__pipe_p2__DOT__p2_skid_data;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__21(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__21\n"); );
    // Init
    SData/*9:0*/ __PVT__lat_cnt_ext;
    SData/*9:0*/ __PVT__lat_cnt_mod;
    SData/*9:0*/ __PVT__lat_cnt_new;
    CData/*0:0*/ __PVT__req_rdy;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    // Body
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                                                      : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__bpt2arb_accept) {
            vlSelf->__PVT__count_req = ((IData)(vlSelf->__PVT__is_ltran)
                                         ? 0U : (0xffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__count_req))));
        }
        vlSelf->__PVT__lat_cnt_cur = (0xffU & (IData)(vlSelf->__PVT__lat_cnt_nxt));
        vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid 
            = (1U & ((~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                     | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid)));
        vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid 
            = (1U & ((~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                     | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld)));
        vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid 
            = (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                      ? (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop))
                      : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch)));
        vlSelf->__PVT__lat_count_dec = vlSymsp->TOP.NV_nvdla__DOT__sdp_n2mcif_rd_cdt_lat_fifo_pop;
    } else {
        vlSelf->__PVT__count_req = 0U;
        vlSelf->__PVT__lat_cnt_cur = 0U;
        vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = 0U;
        vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = 0U;
        vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid = 0U;
        vlSelf->__PVT__lat_count_dec = 0U;
    }
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelf->bpt2arb_req_pd = ((0x3ffffffffffULL & vlSelf->bpt2arb_req_pd) 
                              | ((QData)((IData)((0U 
                                                  == (IData)(vlSelf->__PVT__count_req)))) 
                                 << 0x2aU));
    __PVT__req_rdy = ((1U <= (0xffU & ((IData)(0xa0U) 
                                       - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                      & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_6__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__req_vld = ((1U <= (0xffU & ((IData)(0xa0U) 
                                               - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                              & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelf->__PVT__in_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                & vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    __PVT__pipe_p1__DOT__p1_pipe_skid_valid = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                                ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
                                                : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready)));
    vlSelf->__PVT__bpt2arb_accept = ((IData)(vlSelf->__PVT__req_vld) 
                                     & (IData)(__PVT__req_rdy));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__count_req) 
                               == ((0xffffU & ((IData)(1U) 
                                               + (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                   - (IData)(1U)));
    __PVT__lat_cnt_ext = vlSelf->__PVT__lat_cnt_cur;
    __PVT__lat_cnt_mod = (0x3ffU & (((IData)(vlSelf->__PVT__lat_cnt_cur) 
                                     + ((IData)(vlSelf->__PVT__bpt2arb_accept)
                                         ? 1U : 0U)) 
                                    - (IData)(vlSelf->__PVT__lat_count_dec)));
    __PVT__lat_cnt_new = ((((IData)(vlSelf->__PVT__bpt2arb_accept)
                             ? 1U : 0U) != (IData)(vlSelf->__PVT__lat_count_dec))
                           ? (IData)(__PVT__lat_cnt_mod)
                           : (IData)(__PVT__lat_cnt_ext));
    vlSelf->__PVT__lat_cnt_nxt = __PVT__lat_cnt_new;
    vlSelf->bpt2arb_req_pd = ((0x40000000000ULL & vlSelf->bpt2arb_req_pd) 
                              | (6ULL | (((QData)((IData)(vlSelf->__PVT__is_ltran)) 
                                          << 0x29U) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->__PVT__count_req))
                                                              ? (IData)(vlSelf->__PVT__in_vld_pd)
                                                              : vlSelf->__PVT__out_addr))) 
                                            << 4U))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & (((IData)(__PVT__req_rdy) & (IData)(vlSelf->__PVT__is_ltran)) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
}
