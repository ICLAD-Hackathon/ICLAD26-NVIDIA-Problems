// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__7(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__7\n"); );
    // Init
    CData/*2:0*/ __Vdly__beat_count;
    // Body
    __Vdly__beat_count = vlSelf->__PVT__beat_count;
    vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int 
        = vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelf->__Vdly__u_dfifo__DOT__wr_busy_in = vlSelf->__PVT__u_dfifo__DOT__wr_busy_in;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__bpt2arb_cmd_accept) {
            vlSelf->__PVT__cmd_en = 0U;
        } else if (((IData)(vlSelf->__PVT__bpt2arb_dat_accept) 
                    & (0U == (IData)(vlSelf->__PVT__beat_count)))) {
            vlSelf->__PVT__cmd_en = 1U;
        }
        if (vlSelf->__PVT__bpt2arb_dat_accept) {
            __Vdly__beat_count = ((IData)(vlSelf->__PVT__is_last_beat)
                                   ? 0U : (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__beat_count))));
        }
        if (((IData)(vlSelf->__PVT__bpt2arb_dat_accept) 
             & (0U == (IData)(vlSelf->__PVT__beat_count)))) {
            vlSelf->__PVT__req_count = ((IData)(vlSelf->__PVT__is_ltran)
                                         ? 0U : (0x1fffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__req_count))));
        }
        if (vlSelf->__PVT__ipipe_cmd_rdy) {
            vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld 
                = vlSelf->__PVT__ipipe_cmd_vld;
        }
        if (vlSelf->__PVT__bpt2arb_cmd_accept) {
            vlSelf->__PVT__dat_en = 1U;
        } else if (((IData)(vlSelf->__PVT__bpt2arb_dat_accept) 
                    & (0U == (IData)(vlSelf->__PVT__beat_count)))) {
            vlSelf->__PVT__dat_en = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelf->__PVT__dfifo_rd_prdy)))) {
            vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int 
                = vlSelf->__PVT__u_dfifo__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelf->__PVT__dfifo_rd_prdy)))) {
            vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d 
            = vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
        if (vlSelf->__PVT__ipipe_rdy_p) {
            vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p 
                = vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid;
        }
        vlSelf->__Vdly__u_dfifo__DOT__wr_busy_in = 
            ((IData)(vlSelf->__PVT__dfifo_wr_pvld) ? (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_count_next_is_1)
              : (((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in) 
                  & (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_count_next_is_1)) 
                 & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving))));
    } else {
        vlSelf->__PVT__cmd_en = 1U;
        __Vdly__beat_count = 0U;
        vlSelf->__PVT__req_count = 0U;
        vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld = 0U;
        vlSelf->__PVT__dat_en = 0U;
        vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int = 0U;
        vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p = 0U;
        vlSelf->__Vdly__u_dfifo__DOT__wr_busy_in = 0U;
    }
    vlSelf->__PVT__beat_count = __Vdly__beat_count;
    vlSelf->__PVT__out_cmd_vld = ((IData)(vlSelf->__PVT__cmd_en) 
                                  & (IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld));
    vlSelf->__PVT__in_cmd_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))) 
                                    & vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_pd);
    vlSelf->__PVT__is_last_beat = (0U == (IData)(vlSelf->__PVT__beat_count));
    vlSelf->__PVT__bpt2arb_cmd_accept = ((IData)(vlSelf->__PVT__out_cmd_vld) 
                                         & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_0__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__req_count) 
                               == (0x1fffU & (IData)(
                                                     (vlSelf->__PVT__in_cmd_vld_pd 
                                                      >> 0x20U))));
    vlSelf->bpt2arb_cmd_pd = ((0xffffffffffULL & vlSelf->bpt2arb_cmd_pd) 
                              | ((QData)((IData)(((
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__req_count)) 
                                                   << 4U) 
                                                  | ((IData)(vlSelf->__PVT__is_ltran) 
                                                     << 3U)))) 
                                 << 0x28U));
    vlSelf->bpt2arb_cmd_pd = ((0x1f0000000000ULL & vlSelf->bpt2arb_cmd_pd) 
                              | (((QData)((IData)((
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__req_count))
                                                    ? (IData)(vlSelf->__PVT__in_cmd_vld_pd)
                                                    : vlSelf->__PVT__out_addr))) 
                                  << 5U) | (QData)((IData)(
                                                           (1U 
                                                            | (((IData)(
                                                                        (vlSelf->__PVT__in_cmd_vld_pd 
                                                                         >> 0x2dU)) 
                                                                & (IData)(vlSelf->__PVT__is_ltran)) 
                                                               << 4U))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__13(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__13\n"); );
    // Body
    vlSelf->__PVT__u_dfifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__16(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__16\n"); );
    // Body
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d = 
        (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
               | (IData)(vlSelf->__PVT__dfifo_rd_prdy)));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__u_dfifo__DOT__wr_busy_in_int) {
            if ((1U & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_busy_in_int)))) {
                vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in = 0U;
            }
        } else {
            vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in 
                = ((IData)(vlSelf->__PVT__dfifo_wr_pvld) 
                   & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_busy_in)));
        }
    } else {
        vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__20(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__20\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving) 
             ^ (IData)(vlSelf->__PVT__u_dfifo__DOT__rd_popping))) {
            vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count 
                = vlSelf->__PVT__u_dfifo__DOT__wr_count_next;
        } else if (((IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelf->__PVT__u_dfifo__DOT__rd_popping))) {
            vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count = 0U;
        }
        vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o 
            = vlSelf->__PVT__u_dfifo__DOT__rd_req_next_o;
        if (((IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving) 
             | (IData)(vlSelf->__PVT__u_dfifo__DOT__rd_popping))) {
            vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p 
                = vlSelf->__PVT__u_dfifo__DOT__rd_count_p_next;
        } else if (((IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__u_dfifo__DOT__rd_popping))) {
            vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p = 0U;
        }
        vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_busy_int 
            = vlSelf->__PVT__u_dfifo__DOT__wr_count_next_is_1;
    } else {
        vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count = 0U;
        vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o = 0U;
        vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p = 0U;
        vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_busy_int = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__25(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__25\n"); );
    // Body
    if (((~ (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_busy_in)) 
         & (IData)(vlSelf->__PVT__dfifo_wr_pvld))) {
        vlSelf->__PVT__u_dfifo__DOT__ram__DOT__di_d 
            = (((QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[0U])));
    }
    if (((IData)(vlSelf->__PVT__ipipe_rdy_p) & (IData)(vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid))) {
        vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[0U] 
            = vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[0U];
        vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[1U] 
            = vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[1U];
        vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
            = vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[2U];
    }
    if (((IData)(vlSelf->dma2bpt_req_ready) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif_wr__DOT__pipe_skid_mc_dma_wr_req_vld))) {
        vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[0U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif_wr__DOT__pipe_skid_dmaif_wr_req_pd[0U];
        vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[1U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif_wr__DOT__pipe_skid_dmaif_wr_req_pd[1U];
        vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[2U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif_wr__DOT__pipe_skid_dmaif_wr_req_pd[2U];
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__28(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__28\n"); );
    // Body
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int 
        = vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelf->__PVT__u_dfifo__DOT__wr_busy_in = vlSelf->__Vdly__u_dfifo__DOT__wr_busy_in;
    vlSelf->__PVT__ipipe_cmd_vld = ((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                    & (~ (vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                          >> 1U)));
    vlSelf->__PVT__dfifo_wr_pvld = ((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                    & (vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                       >> 1U));
    vlSelf->bpt2arb_dat_pd[0U] = (IData)(vlSelf->__PVT__dfifo_rd_data);
    vlSelf->bpt2arb_dat_pd[1U] = (IData)((vlSelf->__PVT__dfifo_rd_data 
                                          >> 0x20U));
    vlSelf->bpt2arb_dat_pd[2U] = vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelf->__PVT__out_dat_vld = ((IData)(vlSelf->__PVT__dat_en) 
                                  & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->dma2bpt_req_ready) {
            vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid 
                = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif_wr__DOT__pipe_skid_mc_dma_wr_req_vld;
        }
    } else {
        vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__33(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__33\n"); );
    // Body
    vlSelf->__PVT__dfifo_rd_prdy = ((IData)(vlSelf->__PVT__dat_en) 
                                    & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__DOT__dfifo_wr_busy_int)));
    vlSelf->__PVT__bpt2arb_dat_accept = ((IData)(vlSelf->__PVT__out_dat_vld) 
                                         & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__DOT__dfifo_wr_busy_int)));
    vlSelf->__PVT__ipipe_cmd_rdy = (1U & ((((IData)(vlSelf->__PVT__is_ltran) 
                                            & (0U == (IData)(vlSelf->__PVT__beat_count))) 
                                           & (IData)(vlSelf->__PVT__bpt2arb_dat_accept)) 
                                          | (~ (IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))));
    vlSelf->__PVT__ipipe_rdy_p = (1U & ((((IData)(vlSelf->__PVT__ipipe_cmd_vld) 
                                          & (IData)(vlSelf->__PVT__ipipe_cmd_rdy)) 
                                         | ((IData)(vlSelf->__PVT__dfifo_wr_pvld) 
                                            & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_busy_in)))) 
                                        | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p))));
    vlSelf->dma2bpt_req_ready = (1U & ((IData)(vlSelf->__PVT__ipipe_rdy_p) 
                                       | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__8(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__8\n"); );
    // Init
    CData/*2:0*/ __Vdly__beat_count;
    // Body
    __Vdly__beat_count = vlSelf->__PVT__beat_count;
    vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int 
        = vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelf->__Vdly__u_dfifo__DOT__wr_busy_in = vlSelf->__PVT__u_dfifo__DOT__wr_busy_in;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__bpt2arb_cmd_accept) {
            vlSelf->__PVT__cmd_en = 0U;
        } else if (((IData)(vlSelf->__PVT__bpt2arb_dat_accept) 
                    & (0U == (IData)(vlSelf->__PVT__beat_count)))) {
            vlSelf->__PVT__cmd_en = 1U;
        }
        if (vlSelf->__PVT__bpt2arb_dat_accept) {
            __Vdly__beat_count = ((IData)(vlSelf->__PVT__is_last_beat)
                                   ? 0U : (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__beat_count))));
        }
        if (((IData)(vlSelf->__PVT__bpt2arb_dat_accept) 
             & (0U == (IData)(vlSelf->__PVT__beat_count)))) {
            vlSelf->__PVT__req_count = ((IData)(vlSelf->__PVT__is_ltran)
                                         ? 0U : (0x1fffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__req_count))));
        }
        if (vlSelf->__PVT__ipipe_cmd_rdy) {
            vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld 
                = vlSelf->__PVT__ipipe_cmd_vld;
        }
        if (vlSelf->__PVT__bpt2arb_cmd_accept) {
            vlSelf->__PVT__dat_en = 1U;
        } else if (((IData)(vlSelf->__PVT__bpt2arb_dat_accept) 
                    & (0U == (IData)(vlSelf->__PVT__beat_count)))) {
            vlSelf->__PVT__dat_en = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelf->__PVT__dfifo_rd_prdy)))) {
            vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int 
                = vlSelf->__PVT__u_dfifo__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelf->__PVT__dfifo_rd_prdy)))) {
            vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d 
            = vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
        vlSelf->__Vdly__u_dfifo__DOT__wr_busy_in = 
            ((IData)(vlSelf->__PVT__dfifo_wr_pvld) ? (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_count_next_is_1)
              : (((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in) 
                  & (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_count_next_is_1)) 
                 & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving))));
        if (vlSelf->__PVT__ipipe_rdy_p) {
            vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p 
                = vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid;
        }
    } else {
        vlSelf->__PVT__cmd_en = 1U;
        __Vdly__beat_count = 0U;
        vlSelf->__PVT__req_count = 0U;
        vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld = 0U;
        vlSelf->__PVT__dat_en = 0U;
        vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int = 0U;
        vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelf->__Vdly__u_dfifo__DOT__wr_busy_in = 0U;
        vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p = 0U;
    }
    vlSelf->__PVT__beat_count = __Vdly__beat_count;
    vlSelf->__PVT__out_cmd_vld = ((IData)(vlSelf->__PVT__cmd_en) 
                                  & (IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld));
    vlSelf->__PVT__in_cmd_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))) 
                                    & vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_pd);
    vlSelf->__PVT__is_last_beat = (0U == (IData)(vlSelf->__PVT__beat_count));
    vlSelf->__PVT__bpt2arb_cmd_accept = ((IData)(vlSelf->__PVT__out_cmd_vld) 
                                         & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_1__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__req_count) 
                               == (0x1fffU & (IData)(
                                                     (vlSelf->__PVT__in_cmd_vld_pd 
                                                      >> 0x20U))));
    vlSelf->bpt2arb_cmd_pd = ((0xffffffffffULL & vlSelf->bpt2arb_cmd_pd) 
                              | ((QData)((IData)(((
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__req_count)) 
                                                   << 4U) 
                                                  | ((IData)(vlSelf->__PVT__is_ltran) 
                                                     << 3U)))) 
                                 << 0x28U));
    vlSelf->bpt2arb_cmd_pd = ((0x1f0000000000ULL & vlSelf->bpt2arb_cmd_pd) 
                              | (((QData)((IData)((
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__req_count))
                                                    ? (IData)(vlSelf->__PVT__in_cmd_vld_pd)
                                                    : vlSelf->__PVT__out_addr))) 
                                  << 5U) | (QData)((IData)(
                                                           (2U 
                                                            | (((IData)(
                                                                        (vlSelf->__PVT__in_cmd_vld_pd 
                                                                         >> 0x2dU)) 
                                                                & (IData)(vlSelf->__PVT__is_ltran)) 
                                                               << 4U))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__26(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__26\n"); );
    // Body
    if (((~ (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_busy_in)) 
         & (IData)(vlSelf->__PVT__dfifo_wr_pvld))) {
        vlSelf->__PVT__u_dfifo__DOT__ram__DOT__di_d 
            = (((QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[0U])));
    }
    if (((IData)(vlSelf->__PVT__ipipe_rdy_p) & (IData)(vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid))) {
        vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[0U] 
            = vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[0U];
        vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[1U] 
            = vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[1U];
        vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
            = vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[2U];
    }
    if (((IData)(vlSelf->dma2bpt_req_ready) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__NV_NVDLA_PDP_WDMA_wr__DOT__pipe_skid_mc_dma_wr_req_vld))) {
        vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[0U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__NV_NVDLA_PDP_WDMA_wr__DOT__pipe_skid_dmaif_wr_req_pd[0U];
        vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[1U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__NV_NVDLA_PDP_WDMA_wr__DOT__pipe_skid_dmaif_wr_req_pd[1U];
        vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[2U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__NV_NVDLA_PDP_WDMA_wr__DOT__pipe_skid_dmaif_wr_req_pd[2U];
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__29(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__29\n"); );
    // Body
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int 
        = vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelf->__PVT__u_dfifo__DOT__wr_busy_in = vlSelf->__Vdly__u_dfifo__DOT__wr_busy_in;
    vlSelf->__PVT__ipipe_cmd_vld = ((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                    & (~ (vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                          >> 1U)));
    vlSelf->__PVT__dfifo_wr_pvld = ((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                    & (vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                       >> 1U));
    vlSelf->bpt2arb_dat_pd[0U] = (IData)(vlSelf->__PVT__dfifo_rd_data);
    vlSelf->bpt2arb_dat_pd[1U] = (IData)((vlSelf->__PVT__dfifo_rd_data 
                                          >> 0x20U));
    vlSelf->bpt2arb_dat_pd[2U] = vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelf->__PVT__out_dat_vld = ((IData)(vlSelf->__PVT__dat_en) 
                                  & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->dma2bpt_req_ready) {
            vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid 
                = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__NV_NVDLA_PDP_WDMA_wr__DOT__pipe_skid_mc_dma_wr_req_vld;
        }
    } else {
        vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__32(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__32\n"); );
    // Body
    vlSelf->__PVT__dfifo_rd_prdy = ((IData)(vlSelf->__PVT__dat_en) 
                                    & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__DOT__dfifo_wr_busy_int)));
    vlSelf->__PVT__bpt2arb_dat_accept = ((IData)(vlSelf->__PVT__out_dat_vld) 
                                         & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__DOT__dfifo_wr_busy_int)));
    vlSelf->__PVT__ipipe_cmd_rdy = (1U & ((((IData)(vlSelf->__PVT__is_ltran) 
                                            & (0U == (IData)(vlSelf->__PVT__beat_count))) 
                                           & (IData)(vlSelf->__PVT__bpt2arb_dat_accept)) 
                                          | (~ (IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))));
    vlSelf->__PVT__ipipe_rdy_p = (1U & ((((IData)(vlSelf->__PVT__ipipe_cmd_vld) 
                                          & (IData)(vlSelf->__PVT__ipipe_cmd_rdy)) 
                                         | ((IData)(vlSelf->__PVT__dfifo_wr_pvld) 
                                            & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_busy_in)))) 
                                        | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p))));
    vlSelf->dma2bpt_req_ready = (1U & ((IData)(vlSelf->__PVT__ipipe_rdy_p) 
                                       | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__9(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__9\n"); );
    // Init
    CData/*2:0*/ __Vdly__beat_count;
    // Body
    __Vdly__beat_count = vlSelf->__PVT__beat_count;
    vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int 
        = vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelf->__Vdly__u_dfifo__DOT__wr_busy_in = vlSelf->__PVT__u_dfifo__DOT__wr_busy_in;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__bpt2arb_cmd_accept) {
            vlSelf->__PVT__cmd_en = 0U;
        } else if (((IData)(vlSelf->__PVT__bpt2arb_dat_accept) 
                    & (0U == (IData)(vlSelf->__PVT__beat_count)))) {
            vlSelf->__PVT__cmd_en = 1U;
        }
        if (vlSelf->__PVT__bpt2arb_dat_accept) {
            __Vdly__beat_count = ((IData)(vlSelf->__PVT__is_last_beat)
                                   ? 0U : (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__beat_count))));
        }
        if (((IData)(vlSelf->__PVT__bpt2arb_dat_accept) 
             & (0U == (IData)(vlSelf->__PVT__beat_count)))) {
            vlSelf->__PVT__req_count = ((IData)(vlSelf->__PVT__is_ltran)
                                         ? 0U : (0x1fffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__req_count))));
        }
        if (vlSelf->__PVT__ipipe_cmd_rdy) {
            vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld 
                = vlSelf->__PVT__ipipe_cmd_vld;
        }
        if (vlSelf->__PVT__bpt2arb_cmd_accept) {
            vlSelf->__PVT__dat_en = 1U;
        } else if (((IData)(vlSelf->__PVT__bpt2arb_dat_accept) 
                    & (0U == (IData)(vlSelf->__PVT__beat_count)))) {
            vlSelf->__PVT__dat_en = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelf->__PVT__dfifo_rd_prdy)))) {
            vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int 
                = vlSelf->__PVT__u_dfifo__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelf->__PVT__dfifo_rd_prdy)))) {
            vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d 
            = vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
        vlSelf->__Vdly__u_dfifo__DOT__wr_busy_in = 
            ((IData)(vlSelf->__PVT__dfifo_wr_pvld) ? (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_count_next_is_1)
              : (((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in) 
                  & (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_count_next_is_1)) 
                 & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving))));
        if (vlSelf->__PVT__ipipe_rdy_p) {
            vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p 
                = vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid;
        }
    } else {
        vlSelf->__PVT__cmd_en = 1U;
        __Vdly__beat_count = 0U;
        vlSelf->__PVT__req_count = 0U;
        vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld = 0U;
        vlSelf->__PVT__dat_en = 0U;
        vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int = 0U;
        vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelf->__Vdly__u_dfifo__DOT__wr_busy_in = 0U;
        vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p = 0U;
    }
    vlSelf->__PVT__beat_count = __Vdly__beat_count;
    vlSelf->__PVT__out_cmd_vld = ((IData)(vlSelf->__PVT__cmd_en) 
                                  & (IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld));
    vlSelf->__PVT__in_cmd_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))) 
                                    & vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_pd);
    vlSelf->__PVT__is_last_beat = (0U == (IData)(vlSelf->__PVT__beat_count));
    vlSelf->__PVT__bpt2arb_cmd_accept = ((IData)(vlSelf->__PVT__out_cmd_vld) 
                                         & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_2__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__req_count) 
                               == (0x1fffU & (IData)(
                                                     (vlSelf->__PVT__in_cmd_vld_pd 
                                                      >> 0x20U))));
    vlSelf->bpt2arb_cmd_pd = ((0xffffffffffULL & vlSelf->bpt2arb_cmd_pd) 
                              | ((QData)((IData)(((
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__req_count)) 
                                                   << 4U) 
                                                  | ((IData)(vlSelf->__PVT__is_ltran) 
                                                     << 3U)))) 
                                 << 0x28U));
    vlSelf->bpt2arb_cmd_pd = ((0x1f0000000000ULL & vlSelf->bpt2arb_cmd_pd) 
                              | (((QData)((IData)((
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__req_count))
                                                    ? (IData)(vlSelf->__PVT__in_cmd_vld_pd)
                                                    : vlSelf->__PVT__out_addr))) 
                                  << 5U) | (QData)((IData)(
                                                           (3U 
                                                            | (((IData)(
                                                                        (vlSelf->__PVT__in_cmd_vld_pd 
                                                                         >> 0x2dU)) 
                                                                & (IData)(vlSelf->__PVT__is_ltran)) 
                                                               << 4U))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__27(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__27\n"); );
    // Body
    if (((~ (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_busy_in)) 
         & (IData)(vlSelf->__PVT__dfifo_wr_pvld))) {
        vlSelf->__PVT__u_dfifo__DOT__ram__DOT__di_d 
            = (((QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[0U])));
    }
    if (((IData)(vlSelf->__PVT__ipipe_rdy_p) & (IData)(vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid))) {
        vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[0U] 
            = vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[0U];
        vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[1U] 
            = vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[1U];
        vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
            = vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[2U];
    }
    if (((IData)(vlSelf->dma2bpt_req_ready) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__NV_NVDLA_CDP_WDMA_wr__DOT__pipe_skid_mc_dma_wr_req_vld))) {
        vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[0U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__NV_NVDLA_CDP_WDMA_wr__DOT__pipe_skid_dmaif_wr_req_pd[0U];
        vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[1U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__NV_NVDLA_CDP_WDMA_wr__DOT__pipe_skid_dmaif_wr_req_pd[1U];
        vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[2U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__NV_NVDLA_CDP_WDMA_wr__DOT__pipe_skid_dmaif_wr_req_pd[2U];
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__30(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__30\n"); );
    // Body
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int 
        = vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelf->__PVT__u_dfifo__DOT__wr_busy_in = vlSelf->__Vdly__u_dfifo__DOT__wr_busy_in;
    vlSelf->__PVT__ipipe_cmd_vld = ((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                    & (~ (vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                          >> 1U)));
    vlSelf->__PVT__dfifo_wr_pvld = ((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                    & (vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                       >> 1U));
    vlSelf->bpt2arb_dat_pd[0U] = (IData)(vlSelf->__PVT__dfifo_rd_data);
    vlSelf->bpt2arb_dat_pd[1U] = (IData)((vlSelf->__PVT__dfifo_rd_data 
                                          >> 0x20U));
    vlSelf->bpt2arb_dat_pd[2U] = vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelf->__PVT__out_dat_vld = ((IData)(vlSelf->__PVT__dat_en) 
                                  & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->dma2bpt_req_ready) {
            vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid 
                = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__NV_NVDLA_CDP_WDMA_wr__DOT__pipe_skid_mc_dma_wr_req_vld;
        }
    } else {
        vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__31(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__31\n"); );
    // Body
    vlSelf->__PVT__dfifo_rd_prdy = ((IData)(vlSelf->__PVT__dat_en) 
                                    & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__DOT__dfifo_wr_busy_int)));
    vlSelf->__PVT__bpt2arb_dat_accept = ((IData)(vlSelf->__PVT__out_dat_vld) 
                                         & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__DOT__dfifo_wr_busy_int)));
    vlSelf->__PVT__ipipe_cmd_rdy = (1U & ((((IData)(vlSelf->__PVT__is_ltran) 
                                            & (0U == (IData)(vlSelf->__PVT__beat_count))) 
                                           & (IData)(vlSelf->__PVT__bpt2arb_dat_accept)) 
                                          | (~ (IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))));
    vlSelf->__PVT__ipipe_rdy_p = (1U & ((((IData)(vlSelf->__PVT__ipipe_cmd_vld) 
                                          & (IData)(vlSelf->__PVT__ipipe_cmd_rdy)) 
                                         | ((IData)(vlSelf->__PVT__dfifo_wr_pvld) 
                                            & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_busy_in)))) 
                                        | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p))));
    vlSelf->dma2bpt_req_ready = (1U & ((IData)(vlSelf->__PVT__ipipe_rdy_p) 
                                       | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid))));
}
