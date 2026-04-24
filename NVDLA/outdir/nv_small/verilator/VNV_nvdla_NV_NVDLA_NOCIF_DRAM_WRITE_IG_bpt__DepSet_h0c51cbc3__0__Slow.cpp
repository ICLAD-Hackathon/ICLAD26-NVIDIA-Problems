// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__1\n"); );
    // Init
    CData/*0:0*/ __PVT__u_dfifo__DOT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__u_dfifo__DOT__dfifo_rd_pvld_p;
    // Body
    vlSelf->__PVT__is_last_beat = (0U == (IData)(vlSelf->__PVT__beat_count));
    vlSelf->__PVT__out_cmd_vld = ((IData)(vlSelf->__PVT__cmd_en) 
                                  & (IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld));
    vlSelf->__PVT__in_cmd_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))) 
                                    & vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_pd);
    vlSelf->__PVT__u_dfifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__dfifo_rd_prdy = ((IData)(vlSelf->__PVT__dat_en) 
                                    & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__DOT__dfifo_wr_busy_int)));
    vlSelf->bpt2arb_dat_pd[0U] = (IData)(vlSelf->__PVT__dfifo_rd_data);
    vlSelf->bpt2arb_dat_pd[1U] = (IData)((vlSelf->__PVT__dfifo_rd_data 
                                          >> 0x20U));
    vlSelf->bpt2arb_dat_pd[2U] = vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelf->__PVT__u_dfifo__DOT__wr_busy_in_int = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in) 
                                                   & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_busy_int));
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o 
        = (1U & (~ (((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
                     & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d)) 
                    & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d)))));
    vlSelf->__PVT__out_dat_vld = ((IData)(vlSelf->__PVT__dat_en) 
                                  & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int));
    vlSelf->__PVT__u_dfifo__DOT__wr_reserving = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in) 
                                                 & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_busy_int)));
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pd_p = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count)
                                                   ? vlSelf->__PVT__u_dfifo__DOT__ram__DOT__ram_ff0
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count)
                                                    ? 0ULL
                                                    : vlSelf->__PVT__u_dfifo__DOT__ram__DOT__di_d));
    vlSelf->__PVT__ipipe_cmd_vld = ((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                    & (~ (vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                          >> 1U)));
    vlSelf->__PVT__dfifo_wr_pvld = ((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                    & (vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                       >> 1U));
    vlSelf->__PVT__bpt2arb_cmd_accept = ((IData)(vlSelf->__PVT__out_cmd_vld) 
                                         & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_0__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__req_count) 
                               == (0x1fffU & (IData)(
                                                     (vlSelf->__PVT__in_cmd_vld_pd 
                                                      >> 0x20U))));
    vlSelf->__PVT__bpt2arb_dat_accept = ((IData)(vlSelf->__PVT__out_dat_vld) 
                                         & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__DOT__dfifo_wr_busy_int)));
    __PVT__u_dfifo__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count))
                  : (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count)));
    __PVT__u_dfifo__DOT__dfifo_rd_pvld_p = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p) 
                                            | (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving));
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
    vlSelf->__PVT__ipipe_cmd_rdy = (1U & ((((IData)(vlSelf->__PVT__is_ltran) 
                                            & (0U == (IData)(vlSelf->__PVT__beat_count))) 
                                           & (IData)(vlSelf->__PVT__bpt2arb_dat_accept)) 
                                          | (~ (IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))));
    vlSelf->__PVT__u_dfifo__DOT__rd_req_next_o = ((IData)(__PVT__u_dfifo__DOT__dfifo_rd_pvld_p) 
                                                  | ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
                                                     & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o))));
    vlSelf->__PVT__u_dfifo__DOT__rd_req_next = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o)
                                                 ? (IData)(__PVT__u_dfifo__DOT__dfifo_rd_pvld_p)
                                                 : (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o));
    vlSelf->__PVT__u_dfifo__DOT__rd_popping = ((IData)(__PVT__u_dfifo__DOT__dfifo_rd_pvld_p) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
                                                   & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o)))));
    vlSelf->__PVT__ipipe_rdy_p = (1U & ((((IData)(vlSelf->__PVT__ipipe_cmd_vld) 
                                          & (IData)(vlSelf->__PVT__ipipe_cmd_rdy)) 
                                         | ((IData)(vlSelf->__PVT__dfifo_wr_pvld) 
                                            & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_busy_in)))) 
                                        | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p))));
    vlSelf->__PVT__u_dfifo__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelf->__PVT__u_dfifo__DOT__rd_popping)) 
           & (IData)(__PVT__u_dfifo__DOT__wr_count_next_no_wr_popping));
    if (vlSelf->__PVT__u_dfifo__DOT__rd_popping) {
        if (vlSelf->__PVT__u_dfifo__DOT__wr_reserving) {
            vlSelf->__PVT__u_dfifo__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p));
            vlSelf->__PVT__u_dfifo__DOT__wr_count_next 
                = (1U & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count));
        } else {
            vlSelf->__PVT__u_dfifo__DOT__rd_count_p_next 
                = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p) 
                         - (IData)(1U)));
            vlSelf->__PVT__u_dfifo__DOT__wr_count_next 
                = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__u_dfifo__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p))
                      : (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p)));
        vlSelf->__PVT__u_dfifo__DOT__wr_count_next 
            = (1U & (IData)(__PVT__u_dfifo__DOT__wr_count_next_no_wr_popping));
    }
    vlSelf->dma2bpt_req_ready = (1U & ((IData)(vlSelf->__PVT__ipipe_rdy_p) 
                                       | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__2(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__2\n"); );
    // Init
    CData/*0:0*/ __PVT__u_dfifo__DOT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__u_dfifo__DOT__dfifo_rd_pvld_p;
    // Body
    vlSelf->__PVT__is_last_beat = (0U == (IData)(vlSelf->__PVT__beat_count));
    vlSelf->__PVT__out_cmd_vld = ((IData)(vlSelf->__PVT__cmd_en) 
                                  & (IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld));
    vlSelf->__PVT__in_cmd_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))) 
                                    & vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_pd);
    vlSelf->__PVT__u_dfifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__dfifo_rd_prdy = ((IData)(vlSelf->__PVT__dat_en) 
                                    & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__DOT__dfifo_wr_busy_int)));
    vlSelf->bpt2arb_dat_pd[0U] = (IData)(vlSelf->__PVT__dfifo_rd_data);
    vlSelf->bpt2arb_dat_pd[1U] = (IData)((vlSelf->__PVT__dfifo_rd_data 
                                          >> 0x20U));
    vlSelf->bpt2arb_dat_pd[2U] = vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelf->__PVT__u_dfifo__DOT__wr_busy_in_int = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in) 
                                                   & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_busy_int));
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o 
        = (1U & (~ (((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
                     & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d)) 
                    & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d)))));
    vlSelf->__PVT__out_dat_vld = ((IData)(vlSelf->__PVT__dat_en) 
                                  & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int));
    vlSelf->__PVT__u_dfifo__DOT__wr_reserving = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in) 
                                                 & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_busy_int)));
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pd_p = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count)
                                                   ? vlSelf->__PVT__u_dfifo__DOT__ram__DOT__ram_ff0
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count)
                                                    ? 0ULL
                                                    : vlSelf->__PVT__u_dfifo__DOT__ram__DOT__di_d));
    vlSelf->__PVT__ipipe_cmd_vld = ((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                    & (~ (vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                          >> 1U)));
    vlSelf->__PVT__dfifo_wr_pvld = ((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                    & (vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                       >> 1U));
    vlSelf->__PVT__bpt2arb_cmd_accept = ((IData)(vlSelf->__PVT__out_cmd_vld) 
                                         & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_1__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__req_count) 
                               == (0x1fffU & (IData)(
                                                     (vlSelf->__PVT__in_cmd_vld_pd 
                                                      >> 0x20U))));
    vlSelf->__PVT__bpt2arb_dat_accept = ((IData)(vlSelf->__PVT__out_dat_vld) 
                                         & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__DOT__dfifo_wr_busy_int)));
    __PVT__u_dfifo__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count))
                  : (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count)));
    __PVT__u_dfifo__DOT__dfifo_rd_pvld_p = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p) 
                                            | (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving));
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
    vlSelf->__PVT__ipipe_cmd_rdy = (1U & ((((IData)(vlSelf->__PVT__is_ltran) 
                                            & (0U == (IData)(vlSelf->__PVT__beat_count))) 
                                           & (IData)(vlSelf->__PVT__bpt2arb_dat_accept)) 
                                          | (~ (IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))));
    vlSelf->__PVT__u_dfifo__DOT__rd_req_next_o = ((IData)(__PVT__u_dfifo__DOT__dfifo_rd_pvld_p) 
                                                  | ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
                                                     & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o))));
    vlSelf->__PVT__u_dfifo__DOT__rd_req_next = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o)
                                                 ? (IData)(__PVT__u_dfifo__DOT__dfifo_rd_pvld_p)
                                                 : (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o));
    vlSelf->__PVT__u_dfifo__DOT__rd_popping = ((IData)(__PVT__u_dfifo__DOT__dfifo_rd_pvld_p) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
                                                   & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o)))));
    vlSelf->__PVT__ipipe_rdy_p = (1U & ((((IData)(vlSelf->__PVT__ipipe_cmd_vld) 
                                          & (IData)(vlSelf->__PVT__ipipe_cmd_rdy)) 
                                         | ((IData)(vlSelf->__PVT__dfifo_wr_pvld) 
                                            & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_busy_in)))) 
                                        | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p))));
    vlSelf->__PVT__u_dfifo__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelf->__PVT__u_dfifo__DOT__rd_popping)) 
           & (IData)(__PVT__u_dfifo__DOT__wr_count_next_no_wr_popping));
    if (vlSelf->__PVT__u_dfifo__DOT__rd_popping) {
        if (vlSelf->__PVT__u_dfifo__DOT__wr_reserving) {
            vlSelf->__PVT__u_dfifo__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p));
            vlSelf->__PVT__u_dfifo__DOT__wr_count_next 
                = (1U & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count));
        } else {
            vlSelf->__PVT__u_dfifo__DOT__rd_count_p_next 
                = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p) 
                         - (IData)(1U)));
            vlSelf->__PVT__u_dfifo__DOT__wr_count_next 
                = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__u_dfifo__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p))
                      : (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p)));
        vlSelf->__PVT__u_dfifo__DOT__wr_count_next 
            = (1U & (IData)(__PVT__u_dfifo__DOT__wr_count_next_no_wr_popping));
    }
    vlSelf->dma2bpt_req_ready = (1U & ((IData)(vlSelf->__PVT__ipipe_rdy_p) 
                                       | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__3(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__3\n"); );
    // Init
    CData/*0:0*/ __PVT__u_dfifo__DOT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__u_dfifo__DOT__dfifo_rd_pvld_p;
    // Body
    vlSelf->__PVT__is_last_beat = (0U == (IData)(vlSelf->__PVT__beat_count));
    vlSelf->__PVT__out_cmd_vld = ((IData)(vlSelf->__PVT__cmd_en) 
                                  & (IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld));
    vlSelf->__PVT__in_cmd_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))) 
                                    & vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_pd);
    vlSelf->__PVT__u_dfifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__dfifo_rd_prdy = ((IData)(vlSelf->__PVT__dat_en) 
                                    & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__DOT__dfifo_wr_busy_int)));
    vlSelf->bpt2arb_dat_pd[0U] = (IData)(vlSelf->__PVT__dfifo_rd_data);
    vlSelf->bpt2arb_dat_pd[1U] = (IData)((vlSelf->__PVT__dfifo_rd_data 
                                          >> 0x20U));
    vlSelf->bpt2arb_dat_pd[2U] = vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelf->__PVT__u_dfifo__DOT__wr_busy_in_int = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in) 
                                                   & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_busy_int));
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o 
        = (1U & (~ (((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
                     & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d)) 
                    & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d)))));
    vlSelf->__PVT__out_dat_vld = ((IData)(vlSelf->__PVT__dat_en) 
                                  & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int));
    vlSelf->__PVT__u_dfifo__DOT__wr_reserving = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in) 
                                                 & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_busy_int)));
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pd_p = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count)
                                                   ? vlSelf->__PVT__u_dfifo__DOT__ram__DOT__ram_ff0
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count)
                                                    ? 0ULL
                                                    : vlSelf->__PVT__u_dfifo__DOT__ram__DOT__di_d));
    vlSelf->__PVT__ipipe_cmd_vld = ((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                    & (~ (vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                          >> 1U)));
    vlSelf->__PVT__dfifo_wr_pvld = ((IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                    & (vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                       >> 1U));
    vlSelf->__PVT__bpt2arb_cmd_accept = ((IData)(vlSelf->__PVT__out_cmd_vld) 
                                         & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_2__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__req_count) 
                               == (0x1fffU & (IData)(
                                                     (vlSelf->__PVT__in_cmd_vld_pd 
                                                      >> 0x20U))));
    vlSelf->__PVT__bpt2arb_dat_accept = ((IData)(vlSelf->__PVT__out_dat_vld) 
                                         & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__DOT__dfifo_wr_busy_int)));
    __PVT__u_dfifo__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count))
                  : (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count)));
    __PVT__u_dfifo__DOT__dfifo_rd_pvld_p = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p) 
                                            | (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving));
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
    vlSelf->__PVT__ipipe_cmd_rdy = (1U & ((((IData)(vlSelf->__PVT__is_ltran) 
                                            & (0U == (IData)(vlSelf->__PVT__beat_count))) 
                                           & (IData)(vlSelf->__PVT__bpt2arb_dat_accept)) 
                                          | (~ (IData)(vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))));
    vlSelf->__PVT__u_dfifo__DOT__rd_req_next_o = ((IData)(__PVT__u_dfifo__DOT__dfifo_rd_pvld_p) 
                                                  | ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
                                                     & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o))));
    vlSelf->__PVT__u_dfifo__DOT__rd_req_next = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o)
                                                 ? (IData)(__PVT__u_dfifo__DOT__dfifo_rd_pvld_p)
                                                 : (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o));
    vlSelf->__PVT__u_dfifo__DOT__rd_popping = ((IData)(__PVT__u_dfifo__DOT__dfifo_rd_pvld_p) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
                                                   & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o)))));
    vlSelf->__PVT__ipipe_rdy_p = (1U & ((((IData)(vlSelf->__PVT__ipipe_cmd_vld) 
                                          & (IData)(vlSelf->__PVT__ipipe_cmd_rdy)) 
                                         | ((IData)(vlSelf->__PVT__dfifo_wr_pvld) 
                                            & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_busy_in)))) 
                                        | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p))));
    vlSelf->__PVT__u_dfifo__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelf->__PVT__u_dfifo__DOT__rd_popping)) 
           & (IData)(__PVT__u_dfifo__DOT__wr_count_next_no_wr_popping));
    if (vlSelf->__PVT__u_dfifo__DOT__rd_popping) {
        if (vlSelf->__PVT__u_dfifo__DOT__wr_reserving) {
            vlSelf->__PVT__u_dfifo__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p));
            vlSelf->__PVT__u_dfifo__DOT__wr_count_next 
                = (1U & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count));
        } else {
            vlSelf->__PVT__u_dfifo__DOT__rd_count_p_next 
                = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p) 
                         - (IData)(1U)));
            vlSelf->__PVT__u_dfifo__DOT__wr_count_next 
                = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__u_dfifo__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p))
                      : (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p)));
        vlSelf->__PVT__u_dfifo__DOT__wr_count_next 
            = (1U & (IData)(__PVT__u_dfifo__DOT__wr_count_next_no_wr_popping));
    }
    vlSelf->dma2bpt_req_ready = (1U & ((IData)(vlSelf->__PVT__ipipe_rdy_p) 
                                       | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid))));
}
