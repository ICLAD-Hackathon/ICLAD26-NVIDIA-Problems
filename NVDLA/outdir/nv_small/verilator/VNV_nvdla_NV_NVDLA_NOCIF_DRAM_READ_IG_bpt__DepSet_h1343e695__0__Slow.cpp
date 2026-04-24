// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___ctor_var_reset(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___ctor_var_reset\n"); );
    // Body
    vlSelf->nvdla_core_clk = VL_RAND_RESET_I(1);
    vlSelf->nvdla_core_rstn = VL_RAND_RESET_I(1);
    vlSelf->dma2bpt_req_valid = VL_RAND_RESET_I(1);
    vlSelf->dma2bpt_req_ready = VL_RAND_RESET_I(1);
    vlSelf->dma2bpt_req_pd = VL_RAND_RESET_Q(47);
    vlSelf->dma2bpt_cdt_lat_fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->bpt2arb_req_valid = VL_RAND_RESET_I(1);
    vlSelf->bpt2arb_req_ready = VL_RAND_RESET_I(1);
    vlSelf->bpt2arb_req_pd = VL_RAND_RESET_Q(43);
    vlSelf->tieoff_axid = VL_RAND_RESET_I(4);
    vlSelf->tieoff_lat_fifo_depth = VL_RAND_RESET_I(8);
    vlSelf->__PVT__count_req = VL_RAND_RESET_I(16);
    vlSelf->__PVT__lat_cnt_cur = VL_RAND_RESET_I(8);
    vlSelf->__PVT__lat_cnt_nxt = VL_RAND_RESET_I(10);
    vlSelf->__PVT__lat_count_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bpt2arb_accept = VL_RAND_RESET_I(1);
    vlSelf->__PVT__in_vld_pd = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__is_ltran = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_data = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_data = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid = VL_RAND_RESET_I(1);
}
