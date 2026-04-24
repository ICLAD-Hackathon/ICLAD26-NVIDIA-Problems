// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__15(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__15\n"); );
    // Body
    vlSelf->__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_roc_vld) 
                       & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__u_roc__DOT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__roc_rd_pvld) 
                     & (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o))));
}

extern const VlUnpacked<CData/*1:0*/, 256> VNV_nvdla__ConstPool__TABLE_hcafb2f10_0;
extern const VlUnpacked<CData/*1:0*/, 256> VNV_nvdla__ConstPool__TABLE_hbac8e53f_0;

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__17(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__17\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    SData/*12:0*/ __Vdly__count_h;
    SData/*10:0*/ __Vdly__count_c;
    // Body
    __Vdly__count_c = vlSelf->__PVT__count_c;
    __Vdly__count_h = vlSelf->__PVT__count_h;
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__pipe_p1__DOT__skid_out_rdy) {
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_vld 
                = vlSelf->__PVT__pipe_p1__DOT__skid_out_vld;
        }
        if (vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__out_accept) {
            if (vlSelf->__PVT__is_cube_end) {
                __Vdly__count_c = 0U;
            } else if (vlSelf->__PVT__is_surf_end) {
                __Vdly__count_c = (0x7ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__count_c)));
            }
        }
        if (vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) {
            vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_vld 
                = vlSelf->__PVT__out_vld;
        }
    } else {
        vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_vld = 0U;
        vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld = 0U;
        __Vdly__count_c = 0U;
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_vld = 0U;
    }
    vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d = (1U 
                                                & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn)) 
                                                   | (((IData)(vlSelf->__PVT__is_last_beat) 
                                                       & ((IData)(vlSelf->__PVT__is_surf_end) 
                                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_mode))) 
                                                      & (IData)(vlSelf->__PVT__out_accept))));
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__out_accept) {
            vlSelf->__PVT__count_w = ((IData)(vlSelf->__PVT__is_last_w)
                                       ? 0U : (0x1fffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__count_w))));
            if (vlSelf->__PVT__is_surf_end) {
                __Vdly__count_h = 0U;
            } else if (vlSelf->__PVT__is_last_w) {
                __Vdly__count_h = (0x1fffU & ((IData)(1U) 
                                              + (IData)(vlSelf->__PVT__count_h)));
            }
        }
    } else {
        vlSelf->__PVT__count_w = 0U;
        __Vdly__count_h = 0U;
    }
    __Vtableidx1 = (((IData)(vlSelf->__PVT__is_surf_end) 
                     << 7U) | (((IData)(vlSelf->__PVT__beat_cnt_nxt) 
                                << 4U) | (((IData)(vlSelf->__PVT__is_last_beat) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_mode) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__out_accept) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))))));
    if ((2U & VNV_nvdla__ConstPool__TABLE_hcafb2f10_0
         [__Vtableidx1])) {
        vlSelf->__PVT__beat_cnt = VNV_nvdla__ConstPool__TABLE_hbac8e53f_0
            [__Vtableidx1];
    }
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__rod3_wr_prdy) {
            vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod3_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) {
            vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod2_wr_pvld;
        }
        if (vlSelf->__PVT__rod1_wr_prdy) {
            vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod1_wr_pvld;
        }
        if (vlSelf->__PVT__rod0_wr_prdy) {
            vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod0_wr_pvld;
        }
    } else {
        vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld = 0U;
    }
    vlSelf->__PVT__count_c = __Vdly__count_c;
    vlSelf->__PVT__count_h = __Vdly__count_h;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__19(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__19\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_out_rdy) 
         & (IData)(vlSelf->__PVT__pipe_p1__DOT__skid_out_vld))) {
        if (vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) {
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[0U] 
                = vlSelf->__PVT__out_pd[0U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[1U] 
                = vlSelf->__PVT__out_pd[1U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[2U] 
                = vlSelf->__PVT__out_pd[2U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[3U] 
                = vlSelf->__PVT__out_pd[3U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[4U] 
                = vlSelf->__PVT__out_pd[4U];
        } else {
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[0U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[0U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[1U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[1U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[2U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[2U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[3U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[3U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[4U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[4U];
        }
    }
    if (((IData)(vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__rod1_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd
                : vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__rod0_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd
                : vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__rod3_wr_prdy)
                ? (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[7U])) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[6U])))
                : vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
                ? (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[5U])) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[4U])))
                : vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) 
         & (IData)(vlSelf->__PVT__out_vld))) {
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[0U] 
            = vlSelf->__PVT__out_pd[0U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[1U] 
            = vlSelf->__PVT__out_pd[1U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[2U] 
            = vlSelf->__PVT__out_pd[2U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[3U] 
            = vlSelf->__PVT__out_pd[3U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[4U] 
            = vlSelf->__PVT__out_pd[4U];
    }
    if (((IData)(vlSelf->__PVT__rod1_wr_prdy) & (IData)(vlSelf->__PVT__rod1_wr_pvld))) {
        vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd;
    }
    if (((IData)(vlSelf->__PVT__rod0_wr_prdy) & (IData)(vlSelf->__PVT__rod0_wr_pvld))) {
        vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd;
    }
    if (((IData)(vlSelf->__PVT__rod3_wr_prdy) & (IData)(vlSelf->__PVT__rod3_wr_pvld))) {
        vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pd 
            = (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[7U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[6U])));
    }
    if (((IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__rod2_wr_pvld))) {
        vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pd 
            = (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[5U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[4U])));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__23(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__23\n"); );
    // Body
    vlSelf->__PVT__u_roc__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__27(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__27\n"); );
    // Body
    vlSelf->__PVT__out_data_1bpe = ((2U & (IData)(vlSelf->__PVT__beat_cnt))
                                     ? ((1U & (IData)(vlSelf->__PVT__beat_cnt))
                                         ? vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd
                                         : vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd)
                                     : ((1U & (IData)(vlSelf->__PVT__beat_cnt))
                                         ? vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd
                                         : vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd));
    vlSelf->__PVT__out_data_1bpe_ext[0U] = ((0xffff0000U 
                                             & vlSelf->__PVT__out_data_1bpe_ext[0U]) 
                                            | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__out_data_1bpe 
                                                                          >> 7U))))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (IData)(vlSelf->__PVT__out_data_1bpe))));
    vlSelf->__PVT__out_data_1bpe_ext[0U] = ((0xffffU 
                                             & vlSelf->__PVT__out_data_1bpe_ext[0U]) 
                                            | (0xffff0000U 
                                               & (((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__out_data_1bpe 
                                                                          >> 0xfU))))) 
                                                   << 0x18U) 
                                                  | (0xff0000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__out_data_1bpe 
                                                                 >> 8U)) 
                                                        << 0x10U)))));
    vlSelf->__PVT__out_data_1bpe_ext[1U] = ((0xffff0000U 
                                             & vlSelf->__PVT__out_data_1bpe_ext[1U]) 
                                            | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__out_data_1bpe 
                                                                          >> 0x17U))))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__out_data_1bpe 
                                                             >> 0x10U)))));
    vlSelf->__PVT__out_data_1bpe_ext[1U] = ((0xffffU 
                                             & vlSelf->__PVT__out_data_1bpe_ext[1U]) 
                                            | (0xffff0000U 
                                               & (((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__out_data_1bpe 
                                                                          >> 0x1fU))))) 
                                                   << 0x18U) 
                                                  | (0xff0000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__out_data_1bpe 
                                                                 >> 0x18U)) 
                                                        << 0x10U)))));
    vlSelf->__PVT__out_data_1bpe_ext[2U] = ((0xffff0000U 
                                             & vlSelf->__PVT__out_data_1bpe_ext[2U]) 
                                            | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__out_data_1bpe 
                                                                          >> 0x27U))))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__out_data_1bpe 
                                                             >> 0x20U)))));
    vlSelf->__PVT__out_data_1bpe_ext[2U] = ((0xffffU 
                                             & vlSelf->__PVT__out_data_1bpe_ext[2U]) 
                                            | (0xffff0000U 
                                               & (((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__out_data_1bpe 
                                                                          >> 0x2fU))))) 
                                                   << 0x18U) 
                                                  | (0xff0000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__out_data_1bpe 
                                                                 >> 0x28U)) 
                                                        << 0x10U)))));
    vlSelf->__PVT__out_data_1bpe_ext[3U] = ((0xffff0000U 
                                             & vlSelf->__PVT__out_data_1bpe_ext[3U]) 
                                            | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__out_data_1bpe 
                                                                          >> 0x37U))))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__out_data_1bpe 
                                                             >> 0x30U)))));
    vlSelf->__PVT__out_data_1bpe_ext[3U] = ((0xffffU 
                                             & vlSelf->__PVT__out_data_1bpe_ext[3U]) 
                                            | (0xffff0000U 
                                               & (((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__out_data_1bpe 
                                                                          >> 0x3fU))))) 
                                                   << 0x18U) 
                                                  | (0xff0000U 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__out_data_1bpe 
                                                                 >> 0x38U)) 
                                                        << 0x10U)))));
    vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__pipe_p1__DOT__skid_out_rdy)));
    vlSelf->__PVT__rod1_wr_prdy = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_prdy)));
    vlSelf->__PVT__rod0_wr_prdy = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_prdy)));
    vlSelf->__PVT__rod3_wr_prdy = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_prdy)));
    vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy 
        = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn)) 
                 | (IData)(vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_prdy)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__33(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__33\n"); );
    // Body
    if (vlSelf->__PVT__u_roc__DOT__rd_popping) {
        vlSelf->__PVT__u_roc__DOT__roc_rd_pd_o = vlSelf->__PVT__u_roc__DOT__roc_rd_pd_p;
    } else if (vlSelf->__PVT__u_roc__DOT__rd_popping) {
        vlSelf->__PVT__u_roc__DOT__roc_rd_pd_o = 0U;
    }
    if (((IData)(vlSelf->__PVT__u_roc__DOT__ram_we) 
         & (2U == (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_adr)))) {
        vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff2 
            = (3U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_roc_size) 
                     - (IData)(1U)));
    }
    if (((IData)(vlSelf->__PVT__u_roc__DOT__ram_we) 
         & (1U == (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_adr)))) {
        vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff1 
            = (3U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_roc_size) 
                     - (IData)(1U)));
    }
    if (((IData)(vlSelf->__PVT__u_roc__DOT__ram_we) 
         & (3U == (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_adr)))) {
        vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff3 
            = (3U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_roc_size) 
                     - (IData)(1U)));
    }
    if (((IData)(vlSelf->__PVT__u_roc__DOT__ram_we) 
         & (0U == (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_adr)))) {
        vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff0 
            = (3U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_roc_size) 
                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__34(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__34\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__u_roc__DOT__rd_popping) {
            vlSelf->__PVT__u_roc__DOT__roc_rd_adr = vlSelf->__PVT__u_roc__DOT__rd_adr_next_popping;
        } else if (vlSelf->__PVT__u_roc__DOT__rd_popping) {
            vlSelf->__PVT__u_roc__DOT__roc_rd_adr = 0U;
        }
        vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o 
            = vlSelf->__PVT__u_roc__DOT__rd_req_next_o;
        if (vlSelf->__PVT__u_roc__DOT__wr_reserving) {
            vlSelf->__PVT__u_roc__DOT__roc_wr_adr = 
                (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_adr)));
        }
        vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_d = vlSelf->__PVT__roc_rd_pvld;
        if (((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving) 
             ^ (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping))) {
            vlSelf->__PVT__u_roc__DOT__roc_wr_count 
                = vlSelf->__PVT__u_roc__DOT__wr_count_next;
        } else if (((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving) 
                    ^ (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping))) {
            vlSelf->__PVT__u_roc__DOT__roc_wr_count = 0U;
        }
        if (((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving) 
             | (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping))) {
            vlSelf->__PVT__u_roc__DOT__roc_rd_count_p 
                = vlSelf->__PVT__u_roc__DOT__rd_count_p_next;
        } else if (((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping))) {
            vlSelf->__PVT__u_roc__DOT__roc_rd_count_p = 0U;
        }
        vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int 
            = vlSelf->__PVT__u_roc__DOT__wr_count_next_is_4;
    } else {
        vlSelf->__PVT__u_roc__DOT__roc_rd_adr = 0U;
        vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o = 0U;
        vlSelf->__PVT__u_roc__DOT__roc_wr_adr = 0U;
        vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_d = 0U;
        vlSelf->__PVT__u_roc__DOT__roc_wr_count = 0U;
        vlSelf->__PVT__u_roc__DOT__roc_rd_count_p = 0U;
        vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int = 0U;
    }
    vlSelf->__PVT__u_roc__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_adr)));
    vlSelf->u_roc__DOT____Vcellinp__ram__ra = ((0U 
                                                == (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count))
                                                ? 4U
                                                : (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_adr));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__41(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__41\n"); );
    // Init
    CData/*0:0*/ __PVT__is_last_h;
    CData/*0:0*/ __PVT__rodx_rd_en;
    CData/*0:0*/ __PVT__rod1_sel;
    CData/*0:0*/ __PVT__rod3_sel;
    VlWide<4>/*127:0*/ __Vtemp_hddb584ff__0;
    // Body
    vlSelf->__PVT__beat_cnt_nxt = (7U & ((IData)(vlSelf->__PVT__beat_cnt) 
                                         + ((1U & (
                                                   (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_size)) 
                                                   | (0U 
                                                      != (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_proc_precision))))
                                             ? 1U : 2U)));
    if ((1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_size)) 
               | (0U != (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_proc_precision))))) {
        vlSelf->__PVT__out_vld = ((2U & (IData)(vlSelf->__PVT__beat_cnt))
                                   ? ((1U & (IData)(vlSelf->__PVT__beat_cnt))
                                       ? (IData)(vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld)
                                       : (IData)(vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld))
                                   : ((1U & (IData)(vlSelf->__PVT__beat_cnt))
                                       ? (IData)(vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld)
                                       : (IData)(vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld)));
        __PVT__rod1_sel = (1U == (IData)(vlSelf->__PVT__beat_cnt));
        __PVT__rod3_sel = (3U == (IData)(vlSelf->__PVT__beat_cnt));
    } else {
        if ((0U == (IData)(vlSelf->__PVT__beat_cnt))) {
            vlSelf->__PVT__out_vld = ((IData)(vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld) 
                                      & (IData)(vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld));
            __PVT__rod1_sel = 1U;
        } else {
            vlSelf->__PVT__out_vld = ((2U == (IData)(vlSelf->__PVT__beat_cnt)) 
                                      & ((IData)(vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld) 
                                         & (IData)(vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld)));
            __PVT__rod1_sel = 0U;
        }
        __PVT__rod3_sel = (2U == (IData)(vlSelf->__PVT__beat_cnt));
    }
    vlSelf->__PVT__is_last_w = ((IData)(vlSelf->__PVT__count_w) 
                                == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_width));
    __PVT__is_last_h = ((IData)(vlSelf->__PVT__count_h) 
                        == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_height));
    if (vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) {
        vlSelf->__PVT__out_accept = vlSelf->__PVT__out_vld;
        vlSelf->__PVT__pipe_p1__DOT__skid_out_vld = vlSelf->__PVT__out_vld;
    } else {
        vlSelf->__PVT__out_accept = 0U;
        vlSelf->__PVT__pipe_p1__DOT__skid_out_vld = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_vld;
    }
    vlSelf->__PVT__is_surf_end = ((IData)(vlSelf->__PVT__is_last_w) 
                                  & (IData)(__PVT__is_last_h));
    __PVT__rodx_rd_en = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_mode) 
                         | ((IData)(__PVT__is_last_h) 
                            & (IData)(vlSelf->__PVT__is_last_w)));
    vlSelf->__PVT__is_cube_end = ((IData)(vlSelf->__PVT__is_surf_end) 
                                  & ((IData)(vlSelf->__PVT__count_c) 
                                     == (0x7ffU & (
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_proc_precision))
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_channel) 
                                                       >> 3U))
                                                    : 
                                                   ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_channel) 
                                                    >> 2U)))));
    vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_prdy = 
        (1U & (((((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) 
                  & (IData)(__PVT__rodx_rd_en)) & (0U 
                                                   == (IData)(vlSelf->__PVT__beat_cnt))) 
                & (~ ((IData)(__PVT__rod1_sel) & (~ (IData)(vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld))))) 
               | (~ (IData)(vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld))));
    vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_prdy = 
        (1U & (((((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) 
                  & (IData)(__PVT__rodx_rd_en)) & (IData)(__PVT__rod1_sel)) 
                & (~ ((0U == (IData)(vlSelf->__PVT__beat_cnt)) 
                      & (~ (IData)(vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld))))) 
               | (~ (IData)(vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld))));
    vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_prdy = 
        (1U & (((((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) 
                  & (IData)(__PVT__rodx_rd_en)) & (2U 
                                                   == (IData)(vlSelf->__PVT__beat_cnt))) 
                & (~ ((IData)(__PVT__rod3_sel) & (~ (IData)(vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld))))) 
               | (~ (IData)(vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld))));
    vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_prdy = 
        (1U & (((((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) 
                  & (IData)(__PVT__rodx_rd_en)) & (IData)(__PVT__rod3_sel)) 
                & (~ ((2U == (IData)(vlSelf->__PVT__beat_cnt)) 
                      & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld))))) 
               | (~ (IData)(vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld))));
    VL_EXTEND_WQ(128,64, __Vtemp_hddb584ff__0, vlSelf->__PVT__out_data_1bpe);
    if ((0U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_proc_precision))) {
        if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_size) {
            if ((0U == (IData)(vlSelf->__PVT__beat_cnt))) {
                vlSelf->__PVT__out_pd[0U] = (IData)(vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd);
                vlSelf->__PVT__out_pd[1U] = (IData)(
                                                    (vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd 
                                                     >> 0x20U));
                vlSelf->__PVT__out_pd[2U] = (IData)(vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd);
                vlSelf->__PVT__out_pd[3U] = (IData)(
                                                    (vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd 
                                                     >> 0x20U));
            } else if ((2U == (IData)(vlSelf->__PVT__beat_cnt))) {
                vlSelf->__PVT__out_pd[0U] = (IData)(vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd);
                vlSelf->__PVT__out_pd[1U] = (IData)(
                                                    (vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd 
                                                     >> 0x20U));
                vlSelf->__PVT__out_pd[2U] = (IData)(vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd);
                vlSelf->__PVT__out_pd[3U] = (IData)(
                                                    (vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd 
                                                     >> 0x20U));
            } else {
                vlSelf->__PVT__out_pd[0U] = 0U;
                vlSelf->__PVT__out_pd[1U] = 0U;
                vlSelf->__PVT__out_pd[2U] = 0U;
                vlSelf->__PVT__out_pd[3U] = 0U;
            }
        } else {
            vlSelf->__PVT__out_pd[0U] = vlSelf->__PVT__out_data_1bpe_ext[0U];
            vlSelf->__PVT__out_pd[1U] = vlSelf->__PVT__out_data_1bpe_ext[1U];
            vlSelf->__PVT__out_pd[2U] = vlSelf->__PVT__out_data_1bpe_ext[2U];
            vlSelf->__PVT__out_pd[3U] = vlSelf->__PVT__out_data_1bpe_ext[3U];
        }
    } else {
        vlSelf->__PVT__out_pd[0U] = __Vtemp_hddb584ff__0[0U];
        vlSelf->__PVT__out_pd[1U] = __Vtemp_hddb584ff__0[1U];
        vlSelf->__PVT__out_pd[2U] = __Vtemp_hddb584ff__0[2U];
        vlSelf->__PVT__out_pd[3U] = __Vtemp_hddb584ff__0[3U];
    }
    vlSelf->__PVT__out_pd[4U] = vlSelf->__PVT__is_cube_end;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__43(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__43\n"); );
    // Body
    vlSelf->rod_wr_rdy = (1U & (~ (((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                      & (~ (IData)(vlSelf->__PVT__rod0_wr_prdy))) 
                                     | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                         >> 1U) & (~ (IData)(vlSelf->__PVT__rod1_wr_prdy)))) 
                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                        >> 2U) & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)))) 
                                   | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                       >> 3U) & (~ (IData)(vlSelf->__PVT__rod3_wr_prdy))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__46(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__46\n"); );
    // Body
    vlSelf->__PVT__rod0_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_vld) 
                                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask)) 
                                   & (~ (((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                            >> 1U) 
                                           & (~ (IData)(vlSelf->__PVT__rod1_wr_prdy))) 
                                          | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                              >> 2U) 
                                             & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)))) 
                                         | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                             >> 3U) 
                                            & (~ (IData)(vlSelf->__PVT__rod3_wr_prdy))))));
    vlSelf->__PVT__rod1_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_vld) 
                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                       >> 1U)) & (~ 
                                                  ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                     & (~ (IData)(vlSelf->__PVT__rod0_wr_prdy))) 
                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                        >> 2U) 
                                                       & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)))) 
                                                   | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                       >> 3U) 
                                                      & (~ (IData)(vlSelf->__PVT__rod3_wr_prdy))))));
    vlSelf->__PVT__rod2_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_vld) 
                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                       >> 2U)) & (~ 
                                                  ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                     & (~ (IData)(vlSelf->__PVT__rod0_wr_prdy))) 
                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                        >> 1U) 
                                                       & (~ (IData)(vlSelf->__PVT__rod1_wr_prdy)))) 
                                                   | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                       >> 3U) 
                                                      & (~ (IData)(vlSelf->__PVT__rod3_wr_prdy))))));
    vlSelf->__PVT__rod3_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_vld) 
                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                       >> 3U)) & (~ 
                                                  ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                     & (~ (IData)(vlSelf->__PVT__rod0_wr_prdy))) 
                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                        >> 1U) 
                                                       & (~ (IData)(vlSelf->__PVT__rod1_wr_prdy)))) 
                                                   | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                       >> 2U) 
                                                      & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy))))));
    vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__rod0_wr_prdy) ? (IData)(vlSelf->__PVT__rod0_wr_pvld)
          : (IData)(vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld));
    vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__rod1_wr_prdy) ? (IData)(vlSelf->__PVT__rod1_wr_pvld)
          : (IData)(vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld));
    vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
          ? (IData)(vlSelf->__PVT__rod2_wr_pvld) : (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld));
    vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__rod3_wr_prdy) ? (IData)(vlSelf->__PVT__rod3_wr_pvld)
          : (IData)(vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__54(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__54\n"); );
    // Body
    vlSelf->__PVT__pipe_p1__DOT__skid_out_rdy = (1U 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__sdp_brdma2dp_alu_ready) 
                                                    | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_vld))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__57(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__57\n"); );
    // Body
    vlSelf->__PVT__u_roc__DOT__roc_rd_pd_p = (3U & 
                                              ((4U 
                                                & (IData)(vlSelf->u_roc__DOT____Vcellinp__ram__ra))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->u_roc__DOT____Vcellinp__ram__ra))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->u_roc__DOT____Vcellinp__ram__ra))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_roc_size) 
                                                     - (IData)(1U))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->u_roc__DOT____Vcellinp__ram__ra))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->u_roc__DOT____Vcellinp__ram__ra))
                                                     ? (IData)(vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff3)
                                                     : (IData)(vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->u_roc__DOT____Vcellinp__ram__ra))
                                                     ? (IData)(vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff1)
                                                     : (IData)(vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff0)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__62(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__62\n"); );
    // Init
    CData/*2:0*/ __PVT__u_roc__DOT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__u_roc__DOT__roc_rd_pvld_p;
    // Body
    vlSelf->__PVT__u_roc__DOT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_roc_vld) 
                                               & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int)));
    __PVT__u_roc__DOT__wr_count_next_no_wr_popping 
        = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count))
                  : (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count)));
    __PVT__u_roc__DOT__roc_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p)) 
                                        | (IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving));
    vlSelf->__PVT__u_roc__DOT__rd_req_next_o = ((IData)(__PVT__u_roc__DOT__roc_rd_pvld_p) 
                                                | ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o) 
                                                   & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o))));
    vlSelf->__PVT__roc_rd_pvld = ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o)
                                   ? (IData)(__PVT__u_roc__DOT__roc_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o));
    vlSelf->__PVT__u_roc__DOT__rd_popping = ((IData)(__PVT__u_roc__DOT__roc_rd_pvld_p) 
                                             & (~ ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o) 
                                                   & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o)))));
    vlSelf->__PVT__is_last_beat = ((IData)(vlSelf->__PVT__beat_cnt_nxt) 
                                   == ((IData)(vlSelf->__PVT__roc_rd_pvld)
                                        ? (7U & ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o)
                                                   ? (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pd_p)
                                                   : (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pd_o))))
                                        : 0U));
    vlSelf->__PVT__u_roc__DOT__wr_count_next_is_4 = 
        ((~ (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping)) 
         & (4U == (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__u_roc__DOT__ram_we = ((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving) 
                                         & ((0U < (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count)) 
                                            | (~ (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping))));
    if (vlSelf->__PVT__u_roc__DOT__rd_popping) {
        if (vlSelf->__PVT__u_roc__DOT__wr_reserving) {
            vlSelf->__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p));
            vlSelf->__PVT__u_roc__DOT__wr_count_next 
                = (7U & (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count));
        } else {
            vlSelf->__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p) 
                         - (IData)(1U)));
            vlSelf->__PVT__u_roc__DOT__wr_count_next 
                = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__u_roc__DOT__rd_count_p_next 
            = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p))
                      : (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p)));
        vlSelf->__PVT__u_roc__DOT__wr_count_next = 
            (7U & (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__16(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__16\n"); );
    // Body
    vlSelf->__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_roc_vld) 
                       & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__u_roc__DOT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__roc_rd_pvld) 
                     & (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__18(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__18\n"); );
    // Init
    CData/*7:0*/ __Vtableidx2;
    SData/*12:0*/ __Vdly__count_h;
    SData/*10:0*/ __Vdly__count_c;
    // Body
    __Vdly__count_c = vlSelf->__PVT__count_c;
    __Vdly__count_h = vlSelf->__PVT__count_h;
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__pipe_p1__DOT__skid_out_rdy) {
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_vld 
                = vlSelf->__PVT__pipe_p1__DOT__skid_out_vld;
        }
        if (vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__out_accept) {
            if (vlSelf->__PVT__is_cube_end) {
                __Vdly__count_c = 0U;
            } else if (vlSelf->__PVT__is_surf_end) {
                __Vdly__count_c = (0x7ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__count_c)));
            }
        }
        if (vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) {
            vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_vld 
                = vlSelf->__PVT__out_vld;
        }
    } else {
        vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_vld = 0U;
        vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld = 0U;
        __Vdly__count_c = 0U;
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_vld = 0U;
    }
    vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d = (1U 
                                                & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn)) 
                                                   | (((IData)(vlSelf->__PVT__is_last_beat) 
                                                       & ((IData)(vlSelf->__PVT__is_surf_end) 
                                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_mode))) 
                                                      & (IData)(vlSelf->__PVT__out_accept))));
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__out_accept) {
            vlSelf->__PVT__count_w = ((IData)(vlSelf->__PVT__is_last_w)
                                       ? 0U : (0x1fffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__count_w))));
            if (vlSelf->__PVT__is_surf_end) {
                __Vdly__count_h = 0U;
            } else if (vlSelf->__PVT__is_last_w) {
                __Vdly__count_h = (0x1fffU & ((IData)(1U) 
                                              + (IData)(vlSelf->__PVT__count_h)));
            }
        }
    } else {
        vlSelf->__PVT__count_w = 0U;
        __Vdly__count_h = 0U;
    }
    __Vtableidx2 = (((IData)(vlSelf->__PVT__is_surf_end) 
                     << 7U) | (((IData)(vlSelf->__PVT__beat_cnt_nxt) 
                                << 4U) | (((IData)(vlSelf->__PVT__is_last_beat) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_mode) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__out_accept) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))))));
    if ((2U & VNV_nvdla__ConstPool__TABLE_hcafb2f10_0
         [__Vtableidx2])) {
        vlSelf->__PVT__beat_cnt = VNV_nvdla__ConstPool__TABLE_hbac8e53f_0
            [__Vtableidx2];
    }
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__rod3_wr_prdy) {
            vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod3_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) {
            vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod2_wr_pvld;
        }
        if (vlSelf->__PVT__rod1_wr_prdy) {
            vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod1_wr_pvld;
        }
        if (vlSelf->__PVT__rod0_wr_prdy) {
            vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod0_wr_pvld;
        }
    } else {
        vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld = 0U;
    }
    vlSelf->__PVT__count_c = __Vdly__count_c;
    vlSelf->__PVT__count_h = __Vdly__count_h;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__20(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__20\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_out_rdy) 
         & (IData)(vlSelf->__PVT__pipe_p1__DOT__skid_out_vld))) {
        if (vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) {
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[0U] 
                = vlSelf->__PVT__out_pd[0U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[1U] 
                = vlSelf->__PVT__out_pd[1U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[2U] 
                = vlSelf->__PVT__out_pd[2U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[3U] 
                = vlSelf->__PVT__out_pd[3U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[4U] 
                = vlSelf->__PVT__out_pd[4U];
        } else {
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[0U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[0U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[1U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[1U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[2U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[2U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[3U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[3U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[4U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[4U];
        }
    }
    if (((IData)(vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__rod1_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd
                : vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__rod0_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd
                : vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__rod3_wr_prdy)
                ? (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[7U])) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[6U])))
                : vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
                ? (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[5U])) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[4U])))
                : vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) 
         & (IData)(vlSelf->__PVT__out_vld))) {
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[0U] 
            = vlSelf->__PVT__out_pd[0U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[1U] 
            = vlSelf->__PVT__out_pd[1U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[2U] 
            = vlSelf->__PVT__out_pd[2U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[3U] 
            = vlSelf->__PVT__out_pd[3U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[4U] 
            = vlSelf->__PVT__out_pd[4U];
    }
    if (((IData)(vlSelf->__PVT__rod1_wr_prdy) & (IData)(vlSelf->__PVT__rod1_wr_pvld))) {
        vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd;
    }
    if (((IData)(vlSelf->__PVT__rod0_wr_prdy) & (IData)(vlSelf->__PVT__rod0_wr_pvld))) {
        vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd;
    }
    if (((IData)(vlSelf->__PVT__rod3_wr_prdy) & (IData)(vlSelf->__PVT__rod3_wr_pvld))) {
        vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pd 
            = (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[7U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[6U])));
    }
    if (((IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__rod2_wr_pvld))) {
        vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pd 
            = (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[5U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__unpack_out_pd[4U])));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__45(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__45\n"); );
    // Body
    vlSelf->__PVT__rod0_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod_vld) 
                                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask)) 
                                   & (~ (((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                            >> 1U) 
                                           & (~ (IData)(vlSelf->__PVT__rod1_wr_prdy))) 
                                          | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                              >> 2U) 
                                             & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)))) 
                                         | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                             >> 3U) 
                                            & (~ (IData)(vlSelf->__PVT__rod3_wr_prdy))))));
    vlSelf->__PVT__rod1_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod_vld) 
                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                       >> 1U)) & (~ 
                                                  ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                     & (~ (IData)(vlSelf->__PVT__rod0_wr_prdy))) 
                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                        >> 2U) 
                                                       & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)))) 
                                                   | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                       >> 3U) 
                                                      & (~ (IData)(vlSelf->__PVT__rod3_wr_prdy))))));
    vlSelf->__PVT__rod2_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod_vld) 
                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                       >> 2U)) & (~ 
                                                  ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                     & (~ (IData)(vlSelf->__PVT__rod0_wr_prdy))) 
                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                        >> 1U) 
                                                       & (~ (IData)(vlSelf->__PVT__rod1_wr_prdy)))) 
                                                   | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                       >> 3U) 
                                                      & (~ (IData)(vlSelf->__PVT__rod3_wr_prdy))))));
    vlSelf->__PVT__rod3_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod_vld) 
                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                       >> 3U)) & (~ 
                                                  ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                     & (~ (IData)(vlSelf->__PVT__rod0_wr_prdy))) 
                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                        >> 1U) 
                                                       & (~ (IData)(vlSelf->__PVT__rod1_wr_prdy)))) 
                                                   | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                       >> 2U) 
                                                      & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy))))));
    vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__rod0_wr_prdy) ? (IData)(vlSelf->__PVT__rod0_wr_pvld)
          : (IData)(vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld));
    vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__rod1_wr_prdy) ? (IData)(vlSelf->__PVT__rod1_wr_pvld)
          : (IData)(vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld));
    vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
          ? (IData)(vlSelf->__PVT__rod2_wr_pvld) : (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld));
    vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__rod3_wr_prdy) ? (IData)(vlSelf->__PVT__rod3_wr_pvld)
          : (IData)(vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__53(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__53\n"); );
    // Body
    vlSelf->__PVT__pipe_p1__DOT__skid_out_rdy = (1U 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__sdp_brdma2dp_mul_ready) 
                                                    | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_vld))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__61(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__61\n"); );
    // Init
    CData/*2:0*/ __PVT__u_roc__DOT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__u_roc__DOT__roc_rd_pvld_p;
    // Body
    vlSelf->__PVT__u_roc__DOT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_roc_vld) 
                                               & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int)));
    __PVT__u_roc__DOT__wr_count_next_no_wr_popping 
        = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count))
                  : (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count)));
    __PVT__u_roc__DOT__roc_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p)) 
                                        | (IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving));
    vlSelf->__PVT__u_roc__DOT__rd_req_next_o = ((IData)(__PVT__u_roc__DOT__roc_rd_pvld_p) 
                                                | ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o) 
                                                   & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o))));
    vlSelf->__PVT__roc_rd_pvld = ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o)
                                   ? (IData)(__PVT__u_roc__DOT__roc_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o));
    vlSelf->__PVT__u_roc__DOT__rd_popping = ((IData)(__PVT__u_roc__DOT__roc_rd_pvld_p) 
                                             & (~ ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o) 
                                                   & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o)))));
    vlSelf->__PVT__is_last_beat = ((IData)(vlSelf->__PVT__beat_cnt_nxt) 
                                   == ((IData)(vlSelf->__PVT__roc_rd_pvld)
                                        ? (7U & ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o)
                                                   ? (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pd_p)
                                                   : (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pd_o))))
                                        : 0U));
    vlSelf->__PVT__u_roc__DOT__wr_count_next_is_4 = 
        ((~ (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping)) 
         & (4U == (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__u_roc__DOT__ram_we = ((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving) 
                                         & ((0U < (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count)) 
                                            | (~ (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping))));
    if (vlSelf->__PVT__u_roc__DOT__rd_popping) {
        if (vlSelf->__PVT__u_roc__DOT__wr_reserving) {
            vlSelf->__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p));
            vlSelf->__PVT__u_roc__DOT__wr_count_next 
                = (7U & (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count));
        } else {
            vlSelf->__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p) 
                         - (IData)(1U)));
            vlSelf->__PVT__u_roc__DOT__wr_count_next 
                = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__u_roc__DOT__rd_count_p_next 
            = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p))
                      : (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p)));
        vlSelf->__PVT__u_roc__DOT__wr_count_next = 
            (7U & (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__9(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__9\n"); );
    // Body
    vlSelf->__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_roc_vld) 
                       & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__u_roc__DOT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__roc_rd_pvld) 
                     & (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__11(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__11\n"); );
    // Init
    CData/*7:0*/ __Vtableidx3;
    SData/*12:0*/ __Vdly__count_h;
    SData/*10:0*/ __Vdly__count_c;
    // Body
    __Vdly__count_c = vlSelf->__PVT__count_c;
    __Vdly__count_h = vlSelf->__PVT__count_h;
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__pipe_p1__DOT__skid_out_rdy) {
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_vld 
                = vlSelf->__PVT__pipe_p1__DOT__skid_out_vld;
        }
        if (vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__out_accept) {
            if (vlSelf->__PVT__is_cube_end) {
                __Vdly__count_c = 0U;
            } else if (vlSelf->__PVT__is_surf_end) {
                __Vdly__count_c = (0x7ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__count_c)));
            }
        }
        if (vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) {
            vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_vld 
                = vlSelf->__PVT__out_vld;
        }
    } else {
        vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_vld = 0U;
        vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld = 0U;
        __Vdly__count_c = 0U;
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_vld = 0U;
    }
    vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d = (1U 
                                                & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn)) 
                                                   | (((IData)(vlSelf->__PVT__is_last_beat) 
                                                       & ((IData)(vlSelf->__PVT__is_surf_end) 
                                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_mode))) 
                                                      & (IData)(vlSelf->__PVT__out_accept))));
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__out_accept) {
            vlSelf->__PVT__count_w = ((IData)(vlSelf->__PVT__is_last_w)
                                       ? 0U : (0x1fffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__count_w))));
            if (vlSelf->__PVT__is_surf_end) {
                __Vdly__count_h = 0U;
            } else if (vlSelf->__PVT__is_last_w) {
                __Vdly__count_h = (0x1fffU & ((IData)(1U) 
                                              + (IData)(vlSelf->__PVT__count_h)));
            }
        }
    } else {
        vlSelf->__PVT__count_w = 0U;
        __Vdly__count_h = 0U;
    }
    __Vtableidx3 = (((IData)(vlSelf->__PVT__is_surf_end) 
                     << 7U) | (((IData)(vlSelf->__PVT__beat_cnt_nxt) 
                                << 4U) | (((IData)(vlSelf->__PVT__is_last_beat) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_mode) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__out_accept) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))))));
    if ((2U & VNV_nvdla__ConstPool__TABLE_hcafb2f10_0
         [__Vtableidx3])) {
        vlSelf->__PVT__beat_cnt = VNV_nvdla__ConstPool__TABLE_hbac8e53f_0
            [__Vtableidx3];
    }
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__rod3_wr_prdy) {
            vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod3_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) {
            vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod2_wr_pvld;
        }
        if (vlSelf->__PVT__rod1_wr_prdy) {
            vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod1_wr_pvld;
        }
        if (vlSelf->__PVT__rod0_wr_prdy) {
            vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod0_wr_pvld;
        }
    } else {
        vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld = 0U;
    }
    vlSelf->__PVT__count_c = __Vdly__count_c;
    vlSelf->__PVT__count_h = __Vdly__count_h;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__13(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__13\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_out_rdy) 
         & (IData)(vlSelf->__PVT__pipe_p1__DOT__skid_out_vld))) {
        if (vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) {
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[0U] 
                = vlSelf->__PVT__out_pd[0U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[1U] 
                = vlSelf->__PVT__out_pd[1U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[2U] 
                = vlSelf->__PVT__out_pd[2U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[3U] 
                = vlSelf->__PVT__out_pd[3U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[4U] 
                = vlSelf->__PVT__out_pd[4U];
        } else {
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[0U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[0U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[1U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[1U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[2U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[2U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[3U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[3U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[4U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[4U];
        }
    }
    if (((IData)(vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__rod1_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd
                : vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__rod0_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd
                : vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__rod3_wr_prdy)
                ? (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[7U])) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[6U])))
                : vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
                ? (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[5U])) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[4U])))
                : vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) 
         & (IData)(vlSelf->__PVT__out_vld))) {
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[0U] 
            = vlSelf->__PVT__out_pd[0U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[1U] 
            = vlSelf->__PVT__out_pd[1U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[2U] 
            = vlSelf->__PVT__out_pd[2U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[3U] 
            = vlSelf->__PVT__out_pd[3U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[4U] 
            = vlSelf->__PVT__out_pd[4U];
    }
    if (((IData)(vlSelf->__PVT__rod1_wr_prdy) & (IData)(vlSelf->__PVT__rod1_wr_pvld))) {
        vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd;
    }
    if (((IData)(vlSelf->__PVT__rod0_wr_prdy) & (IData)(vlSelf->__PVT__rod0_wr_pvld))) {
        vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd;
    }
    if (((IData)(vlSelf->__PVT__rod3_wr_prdy) & (IData)(vlSelf->__PVT__rod3_wr_pvld))) {
        vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pd 
            = (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[7U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[6U])));
    }
    if (((IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__rod2_wr_pvld))) {
        vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pd 
            = (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[5U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[4U])));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__21(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__21\n"); );
    // Body
    vlSelf->__PVT__u_roc__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__29(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__29\n"); );
    // Body
    if (vlSelf->__PVT__u_roc__DOT__rd_popping) {
        vlSelf->__PVT__u_roc__DOT__roc_rd_pd_o = vlSelf->__PVT__u_roc__DOT__roc_rd_pd_p;
    } else if (vlSelf->__PVT__u_roc__DOT__rd_popping) {
        vlSelf->__PVT__u_roc__DOT__roc_rd_pd_o = 0U;
    }
    if (((IData)(vlSelf->__PVT__u_roc__DOT__ram_we) 
         & (2U == (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_adr)))) {
        vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff2 
            = (3U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_roc_size) 
                     - (IData)(1U)));
    }
    if (((IData)(vlSelf->__PVT__u_roc__DOT__ram_we) 
         & (1U == (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_adr)))) {
        vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff1 
            = (3U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_roc_size) 
                     - (IData)(1U)));
    }
    if (((IData)(vlSelf->__PVT__u_roc__DOT__ram_we) 
         & (3U == (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_adr)))) {
        vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff3 
            = (3U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_roc_size) 
                     - (IData)(1U)));
    }
    if (((IData)(vlSelf->__PVT__u_roc__DOT__ram_we) 
         & (0U == (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_adr)))) {
        vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff0 
            = (3U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_roc_size) 
                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__47(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__47\n"); );
    // Init
    CData/*0:0*/ __PVT__is_last_h;
    CData/*0:0*/ __PVT__rodx_rd_en;
    CData/*0:0*/ __PVT__rod1_sel;
    CData/*0:0*/ __PVT__rod3_sel;
    VlWide<4>/*127:0*/ __Vtemp_hddb584ff__0;
    // Body
    vlSelf->__PVT__beat_cnt_nxt = (7U & ((IData)(vlSelf->__PVT__beat_cnt) 
                                         + ((1U & (
                                                   (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_size)) 
                                                   | (0U 
                                                      != (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_proc_precision))))
                                             ? 1U : 2U)));
    if ((1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_size)) 
               | (0U != (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_proc_precision))))) {
        vlSelf->__PVT__out_vld = ((2U & (IData)(vlSelf->__PVT__beat_cnt))
                                   ? ((1U & (IData)(vlSelf->__PVT__beat_cnt))
                                       ? (IData)(vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld)
                                       : (IData)(vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld))
                                   : ((1U & (IData)(vlSelf->__PVT__beat_cnt))
                                       ? (IData)(vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld)
                                       : (IData)(vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld)));
        __PVT__rod1_sel = (1U == (IData)(vlSelf->__PVT__beat_cnt));
        __PVT__rod3_sel = (3U == (IData)(vlSelf->__PVT__beat_cnt));
    } else {
        if ((0U == (IData)(vlSelf->__PVT__beat_cnt))) {
            vlSelf->__PVT__out_vld = ((IData)(vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld) 
                                      & (IData)(vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld));
            __PVT__rod1_sel = 1U;
        } else {
            vlSelf->__PVT__out_vld = ((2U == (IData)(vlSelf->__PVT__beat_cnt)) 
                                      & ((IData)(vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld) 
                                         & (IData)(vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld)));
            __PVT__rod1_sel = 0U;
        }
        __PVT__rod3_sel = (2U == (IData)(vlSelf->__PVT__beat_cnt));
    }
    vlSelf->__PVT__is_last_w = ((IData)(vlSelf->__PVT__count_w) 
                                == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_width));
    __PVT__is_last_h = ((IData)(vlSelf->__PVT__count_h) 
                        == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_height));
    if (vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) {
        vlSelf->__PVT__out_accept = vlSelf->__PVT__out_vld;
        vlSelf->__PVT__pipe_p1__DOT__skid_out_vld = vlSelf->__PVT__out_vld;
    } else {
        vlSelf->__PVT__out_accept = 0U;
        vlSelf->__PVT__pipe_p1__DOT__skid_out_vld = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_vld;
    }
    vlSelf->__PVT__is_surf_end = ((IData)(vlSelf->__PVT__is_last_w) 
                                  & (IData)(__PVT__is_last_h));
    __PVT__rodx_rd_en = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_mode) 
                         | ((IData)(__PVT__is_last_h) 
                            & (IData)(vlSelf->__PVT__is_last_w)));
    vlSelf->__PVT__is_cube_end = ((IData)(vlSelf->__PVT__is_surf_end) 
                                  & ((IData)(vlSelf->__PVT__count_c) 
                                     == (0x7ffU & (
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_proc_precision))
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_channel) 
                                                       >> 3U))
                                                    : 
                                                   ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_channel) 
                                                    >> 2U)))));
    vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_prdy = 
        (1U & (((((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) 
                  & (IData)(__PVT__rodx_rd_en)) & (0U 
                                                   == (IData)(vlSelf->__PVT__beat_cnt))) 
                & (~ ((IData)(__PVT__rod1_sel) & (~ (IData)(vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld))))) 
               | (~ (IData)(vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld))));
    vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_prdy = 
        (1U & (((((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) 
                  & (IData)(__PVT__rodx_rd_en)) & (IData)(__PVT__rod1_sel)) 
                & (~ ((0U == (IData)(vlSelf->__PVT__beat_cnt)) 
                      & (~ (IData)(vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld))))) 
               | (~ (IData)(vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld))));
    vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_prdy = 
        (1U & (((((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) 
                  & (IData)(__PVT__rodx_rd_en)) & (2U 
                                                   == (IData)(vlSelf->__PVT__beat_cnt))) 
                & (~ ((IData)(__PVT__rod3_sel) & (~ (IData)(vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld))))) 
               | (~ (IData)(vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld))));
    vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_prdy = 
        (1U & (((((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) 
                  & (IData)(__PVT__rodx_rd_en)) & (IData)(__PVT__rod3_sel)) 
                & (~ ((2U == (IData)(vlSelf->__PVT__beat_cnt)) 
                      & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld))))) 
               | (~ (IData)(vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld))));
    VL_EXTEND_WQ(128,64, __Vtemp_hddb584ff__0, vlSelf->__PVT__out_data_1bpe);
    if ((0U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_proc_precision))) {
        if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_size) {
            if ((0U == (IData)(vlSelf->__PVT__beat_cnt))) {
                vlSelf->__PVT__out_pd[0U] = (IData)(vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd);
                vlSelf->__PVT__out_pd[1U] = (IData)(
                                                    (vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd 
                                                     >> 0x20U));
                vlSelf->__PVT__out_pd[2U] = (IData)(vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd);
                vlSelf->__PVT__out_pd[3U] = (IData)(
                                                    (vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd 
                                                     >> 0x20U));
            } else if ((2U == (IData)(vlSelf->__PVT__beat_cnt))) {
                vlSelf->__PVT__out_pd[0U] = (IData)(vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd);
                vlSelf->__PVT__out_pd[1U] = (IData)(
                                                    (vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd 
                                                     >> 0x20U));
                vlSelf->__PVT__out_pd[2U] = (IData)(vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd);
                vlSelf->__PVT__out_pd[3U] = (IData)(
                                                    (vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd 
                                                     >> 0x20U));
            } else {
                vlSelf->__PVT__out_pd[0U] = 0U;
                vlSelf->__PVT__out_pd[1U] = 0U;
                vlSelf->__PVT__out_pd[2U] = 0U;
                vlSelf->__PVT__out_pd[3U] = 0U;
            }
        } else {
            vlSelf->__PVT__out_pd[0U] = vlSelf->__PVT__out_data_1bpe_ext[0U];
            vlSelf->__PVT__out_pd[1U] = vlSelf->__PVT__out_data_1bpe_ext[1U];
            vlSelf->__PVT__out_pd[2U] = vlSelf->__PVT__out_data_1bpe_ext[2U];
            vlSelf->__PVT__out_pd[3U] = vlSelf->__PVT__out_data_1bpe_ext[3U];
        }
    } else {
        vlSelf->__PVT__out_pd[0U] = __Vtemp_hddb584ff__0[0U];
        vlSelf->__PVT__out_pd[1U] = __Vtemp_hddb584ff__0[1U];
        vlSelf->__PVT__out_pd[2U] = __Vtemp_hddb584ff__0[2U];
        vlSelf->__PVT__out_pd[3U] = __Vtemp_hddb584ff__0[3U];
    }
    vlSelf->__PVT__out_pd[4U] = vlSelf->__PVT__is_cube_end;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__49(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__49\n"); );
    // Body
    vlSelf->rod_wr_rdy = (1U & (~ (((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                      & (~ (IData)(vlSelf->__PVT__rod0_wr_prdy))) 
                                     | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                         >> 1U) & (~ (IData)(vlSelf->__PVT__rod1_wr_prdy)))) 
                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                        >> 2U) & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)))) 
                                   | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                       >> 3U) & (~ (IData)(vlSelf->__PVT__rod3_wr_prdy))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__52(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__52\n"); );
    // Body
    vlSelf->__PVT__rod0_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_vld) 
                                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask)) 
                                   & (~ (((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                            >> 1U) 
                                           & (~ (IData)(vlSelf->__PVT__rod1_wr_prdy))) 
                                          | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                              >> 2U) 
                                             & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)))) 
                                         | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                             >> 3U) 
                                            & (~ (IData)(vlSelf->__PVT__rod3_wr_prdy))))));
    vlSelf->__PVT__rod1_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_vld) 
                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                       >> 1U)) & (~ 
                                                  ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                     & (~ (IData)(vlSelf->__PVT__rod0_wr_prdy))) 
                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                        >> 2U) 
                                                       & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)))) 
                                                   | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                       >> 3U) 
                                                      & (~ (IData)(vlSelf->__PVT__rod3_wr_prdy))))));
    vlSelf->__PVT__rod2_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_vld) 
                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                       >> 2U)) & (~ 
                                                  ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                     & (~ (IData)(vlSelf->__PVT__rod0_wr_prdy))) 
                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                        >> 1U) 
                                                       & (~ (IData)(vlSelf->__PVT__rod1_wr_prdy)))) 
                                                   | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                       >> 3U) 
                                                      & (~ (IData)(vlSelf->__PVT__rod3_wr_prdy))))));
    vlSelf->__PVT__rod3_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_vld) 
                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                       >> 3U)) & (~ 
                                                  ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                     & (~ (IData)(vlSelf->__PVT__rod0_wr_prdy))) 
                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                        >> 1U) 
                                                       & (~ (IData)(vlSelf->__PVT__rod1_wr_prdy)))) 
                                                   | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                       >> 2U) 
                                                      & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy))))));
    vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__rod0_wr_prdy) ? (IData)(vlSelf->__PVT__rod0_wr_pvld)
          : (IData)(vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld));
    vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__rod1_wr_prdy) ? (IData)(vlSelf->__PVT__rod1_wr_pvld)
          : (IData)(vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld));
    vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
          ? (IData)(vlSelf->__PVT__rod2_wr_pvld) : (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld));
    vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__rod3_wr_prdy) ? (IData)(vlSelf->__PVT__rod3_wr_pvld)
          : (IData)(vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__56(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__56\n"); );
    // Body
    vlSelf->__PVT__pipe_p1__DOT__skid_out_rdy = (1U 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__sdp_nrdma2dp_alu_ready) 
                                                    | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_vld))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__59(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__59\n"); );
    // Body
    vlSelf->__PVT__u_roc__DOT__roc_rd_pd_p = (3U & 
                                              ((4U 
                                                & (IData)(vlSelf->u_roc__DOT____Vcellinp__ram__ra))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->u_roc__DOT____Vcellinp__ram__ra))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->u_roc__DOT____Vcellinp__ram__ra))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_roc_size) 
                                                     - (IData)(1U))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->u_roc__DOT____Vcellinp__ram__ra))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->u_roc__DOT____Vcellinp__ram__ra))
                                                     ? (IData)(vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff3)
                                                     : (IData)(vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->u_roc__DOT____Vcellinp__ram__ra))
                                                     ? (IData)(vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff1)
                                                     : (IData)(vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff0)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__64(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__64\n"); );
    // Init
    CData/*2:0*/ __PVT__u_roc__DOT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__u_roc__DOT__roc_rd_pvld_p;
    // Body
    vlSelf->__PVT__u_roc__DOT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_roc_vld) 
                                               & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int)));
    __PVT__u_roc__DOT__wr_count_next_no_wr_popping 
        = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count))
                  : (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count)));
    __PVT__u_roc__DOT__roc_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p)) 
                                        | (IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving));
    vlSelf->__PVT__u_roc__DOT__rd_req_next_o = ((IData)(__PVT__u_roc__DOT__roc_rd_pvld_p) 
                                                | ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o) 
                                                   & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o))));
    vlSelf->__PVT__roc_rd_pvld = ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o)
                                   ? (IData)(__PVT__u_roc__DOT__roc_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o));
    vlSelf->__PVT__u_roc__DOT__rd_popping = ((IData)(__PVT__u_roc__DOT__roc_rd_pvld_p) 
                                             & (~ ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o) 
                                                   & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o)))));
    vlSelf->__PVT__is_last_beat = ((IData)(vlSelf->__PVT__beat_cnt_nxt) 
                                   == ((IData)(vlSelf->__PVT__roc_rd_pvld)
                                        ? (7U & ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o)
                                                   ? (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pd_p)
                                                   : (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pd_o))))
                                        : 0U));
    vlSelf->__PVT__u_roc__DOT__wr_count_next_is_4 = 
        ((~ (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping)) 
         & (4U == (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__u_roc__DOT__ram_we = ((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving) 
                                         & ((0U < (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count)) 
                                            | (~ (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping))));
    if (vlSelf->__PVT__u_roc__DOT__rd_popping) {
        if (vlSelf->__PVT__u_roc__DOT__wr_reserving) {
            vlSelf->__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p));
            vlSelf->__PVT__u_roc__DOT__wr_count_next 
                = (7U & (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count));
        } else {
            vlSelf->__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p) 
                         - (IData)(1U)));
            vlSelf->__PVT__u_roc__DOT__wr_count_next 
                = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__u_roc__DOT__rd_count_p_next 
            = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p))
                      : (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p)));
        vlSelf->__PVT__u_roc__DOT__wr_count_next = 
            (7U & (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__10(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__10\n"); );
    // Body
    vlSelf->__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_roc_vld) 
                       & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__u_roc__DOT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__roc_rd_pvld) 
                     & (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__12(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__12\n"); );
    // Init
    CData/*7:0*/ __Vtableidx4;
    SData/*12:0*/ __Vdly__count_h;
    SData/*10:0*/ __Vdly__count_c;
    // Body
    __Vdly__count_c = vlSelf->__PVT__count_c;
    __Vdly__count_h = vlSelf->__PVT__count_h;
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__pipe_p1__DOT__skid_out_rdy) {
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_vld 
                = vlSelf->__PVT__pipe_p1__DOT__skid_out_vld;
        }
        if (vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_prdy) {
            vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld 
                = vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_pvld;
        }
        if (vlSelf->__PVT__out_accept) {
            if (vlSelf->__PVT__is_cube_end) {
                __Vdly__count_c = 0U;
            } else if (vlSelf->__PVT__is_surf_end) {
                __Vdly__count_c = (0x7ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__count_c)));
            }
        }
        if (vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) {
            vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_vld 
                = vlSelf->__PVT__out_vld;
        }
    } else {
        vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_vld = 0U;
        vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld = 0U;
        __Vdly__count_c = 0U;
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_vld = 0U;
    }
    vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d = (1U 
                                                & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn)) 
                                                   | (((IData)(vlSelf->__PVT__is_last_beat) 
                                                       & ((IData)(vlSelf->__PVT__is_surf_end) 
                                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_mode))) 
                                                      & (IData)(vlSelf->__PVT__out_accept))));
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__out_accept) {
            vlSelf->__PVT__count_w = ((IData)(vlSelf->__PVT__is_last_w)
                                       ? 0U : (0x1fffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__count_w))));
            if (vlSelf->__PVT__is_surf_end) {
                __Vdly__count_h = 0U;
            } else if (vlSelf->__PVT__is_last_w) {
                __Vdly__count_h = (0x1fffU & ((IData)(1U) 
                                              + (IData)(vlSelf->__PVT__count_h)));
            }
        }
    } else {
        vlSelf->__PVT__count_w = 0U;
        __Vdly__count_h = 0U;
    }
    __Vtableidx4 = (((IData)(vlSelf->__PVT__is_surf_end) 
                     << 7U) | (((IData)(vlSelf->__PVT__beat_cnt_nxt) 
                                << 4U) | (((IData)(vlSelf->__PVT__is_last_beat) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_mode) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__out_accept) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))))));
    if ((2U & VNV_nvdla__ConstPool__TABLE_hcafb2f10_0
         [__Vtableidx4])) {
        vlSelf->__PVT__beat_cnt = VNV_nvdla__ConstPool__TABLE_hbac8e53f_0
            [__Vtableidx4];
    }
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__rod3_wr_prdy) {
            vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod3_wr_pvld;
        }
        if (vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) {
            vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod2_wr_pvld;
        }
        if (vlSelf->__PVT__rod1_wr_prdy) {
            vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod1_wr_pvld;
        }
        if (vlSelf->__PVT__rod0_wr_prdy) {
            vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld 
                = vlSelf->__PVT__rod0_wr_pvld;
        }
    } else {
        vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld = 0U;
    }
    vlSelf->__PVT__count_c = __Vdly__count_c;
    vlSelf->__PVT__count_h = __Vdly__count_h;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__14(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__14\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_out_rdy) 
         & (IData)(vlSelf->__PVT__pipe_p1__DOT__skid_out_vld))) {
        if (vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) {
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[0U] 
                = vlSelf->__PVT__out_pd[0U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[1U] 
                = vlSelf->__PVT__out_pd[1U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[2U] 
                = vlSelf->__PVT__out_pd[2U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[3U] 
                = vlSelf->__PVT__out_pd[3U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[4U] 
                = vlSelf->__PVT__out_pd[4U];
        } else {
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[0U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[0U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[1U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[1U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[2U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[2U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[3U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[3U];
            vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd[4U] 
                = vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[4U];
        }
    }
    if (((IData)(vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__rod1_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd
                : vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__rod0_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd
                : vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__rod3_wr_prdy)
                ? (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[7U])) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[6U])))
                : vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_pvld))) {
        vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
                ? (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[5U])) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[4U])))
                : vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy) 
         & (IData)(vlSelf->__PVT__out_vld))) {
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[0U] 
            = vlSelf->__PVT__out_pd[0U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[1U] 
            = vlSelf->__PVT__out_pd[1U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[2U] 
            = vlSelf->__PVT__out_pd[2U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[3U] 
            = vlSelf->__PVT__out_pd[3U];
        vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd[4U] 
            = vlSelf->__PVT__out_pd[4U];
    }
    if (((IData)(vlSelf->__PVT__rod1_wr_prdy) & (IData)(vlSelf->__PVT__rod1_wr_pvld))) {
        vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd;
    }
    if (((IData)(vlSelf->__PVT__rod0_wr_prdy) & (IData)(vlSelf->__PVT__rod0_wr_pvld))) {
        vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd;
    }
    if (((IData)(vlSelf->__PVT__rod3_wr_prdy) & (IData)(vlSelf->__PVT__rod3_wr_pvld))) {
        vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pd 
            = (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[7U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[6U])));
    }
    if (((IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelf->__PVT__rod2_wr_pvld))) {
        vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pd 
            = (((QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[5U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__unpack_out_pd[4U])));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__51(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__51\n"); );
    // Body
    vlSelf->__PVT__rod0_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod_vld) 
                                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask)) 
                                   & (~ (((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                            >> 1U) 
                                           & (~ (IData)(vlSelf->__PVT__rod1_wr_prdy))) 
                                          | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                              >> 2U) 
                                             & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)))) 
                                         | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                             >> 3U) 
                                            & (~ (IData)(vlSelf->__PVT__rod3_wr_prdy))))));
    vlSelf->__PVT__rod1_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod_vld) 
                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                       >> 1U)) & (~ 
                                                  ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                     & (~ (IData)(vlSelf->__PVT__rod0_wr_prdy))) 
                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                        >> 2U) 
                                                       & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)))) 
                                                   | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                       >> 3U) 
                                                      & (~ (IData)(vlSelf->__PVT__rod3_wr_prdy))))));
    vlSelf->__PVT__rod2_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod_vld) 
                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                       >> 2U)) & (~ 
                                                  ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                     & (~ (IData)(vlSelf->__PVT__rod0_wr_prdy))) 
                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                        >> 1U) 
                                                       & (~ (IData)(vlSelf->__PVT__rod1_wr_prdy)))) 
                                                   | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                       >> 3U) 
                                                      & (~ (IData)(vlSelf->__PVT__rod3_wr_prdy))))));
    vlSelf->__PVT__rod3_wr_pvld = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod_vld) 
                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                       >> 3U)) & (~ 
                                                  ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                     & (~ (IData)(vlSelf->__PVT__rod0_wr_prdy))) 
                                                    | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                        >> 1U) 
                                                       & (~ (IData)(vlSelf->__PVT__rod1_wr_prdy)))) 
                                                   | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                       >> 2U) 
                                                      & (~ (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy))))));
    vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__rod0_wr_prdy) ? (IData)(vlSelf->__PVT__rod0_wr_pvld)
          : (IData)(vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld));
    vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__rod1_wr_prdy) ? (IData)(vlSelf->__PVT__rod1_wr_pvld)
          : (IData)(vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld));
    vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
          ? (IData)(vlSelf->__PVT__rod2_wr_pvld) : (IData)(vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld));
    vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_pvld = 
        ((IData)(vlSelf->__PVT__rod3_wr_prdy) ? (IData)(vlSelf->__PVT__rod3_wr_pvld)
          : (IData)(vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__55(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__55\n"); );
    // Body
    vlSelf->__PVT__pipe_p1__DOT__skid_out_rdy = (1U 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__sdp_nrdma2dp_mul_ready) 
                                                    | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_vld))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__63(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___multiclk__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__63\n"); );
    // Init
    CData/*2:0*/ __PVT__u_roc__DOT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__u_roc__DOT__roc_rd_pvld_p;
    // Body
    vlSelf->__PVT__u_roc__DOT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_roc_vld) 
                                               & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int)));
    __PVT__u_roc__DOT__wr_count_next_no_wr_popping 
        = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count))
                  : (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count)));
    __PVT__u_roc__DOT__roc_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p)) 
                                        | (IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving));
    vlSelf->__PVT__u_roc__DOT__rd_req_next_o = ((IData)(__PVT__u_roc__DOT__roc_rd_pvld_p) 
                                                | ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o) 
                                                   & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o))));
    vlSelf->__PVT__roc_rd_pvld = ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o)
                                   ? (IData)(__PVT__u_roc__DOT__roc_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o));
    vlSelf->__PVT__u_roc__DOT__rd_popping = ((IData)(__PVT__u_roc__DOT__roc_rd_pvld_p) 
                                             & (~ ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o) 
                                                   & (~ (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o)))));
    vlSelf->__PVT__is_last_beat = ((IData)(vlSelf->__PVT__beat_cnt_nxt) 
                                   == ((IData)(vlSelf->__PVT__roc_rd_pvld)
                                        ? (7U & ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o)
                                                   ? (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pd_p)
                                                   : (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_pd_o))))
                                        : 0U));
    vlSelf->__PVT__u_roc__DOT__wr_count_next_is_4 = 
        ((~ (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping)) 
         & (4U == (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__u_roc__DOT__ram_we = ((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving) 
                                         & ((0U < (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count)) 
                                            | (~ (IData)(vlSelf->__PVT__u_roc__DOT__rd_popping))));
    if (vlSelf->__PVT__u_roc__DOT__rd_popping) {
        if (vlSelf->__PVT__u_roc__DOT__wr_reserving) {
            vlSelf->__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p));
            vlSelf->__PVT__u_roc__DOT__wr_count_next 
                = (7U & (IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count));
        } else {
            vlSelf->__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p) 
                         - (IData)(1U)));
            vlSelf->__PVT__u_roc__DOT__wr_count_next 
                = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__roc_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__u_roc__DOT__rd_count_p_next 
            = (7U & ((IData)(vlSelf->__PVT__u_roc__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p))
                      : (IData)(vlSelf->__PVT__u_roc__DOT__roc_rd_count_p)));
        vlSelf->__PVT__u_roc__DOT__wr_count_next = 
            (7U & (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping));
    }
}
