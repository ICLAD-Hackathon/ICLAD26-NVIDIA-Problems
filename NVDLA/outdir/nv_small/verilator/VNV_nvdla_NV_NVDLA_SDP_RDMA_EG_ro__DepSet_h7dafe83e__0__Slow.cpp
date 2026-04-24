// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___ctor_var_reset(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___ctor_var_reset\n"); );
    // Body
    vlSelf->nvdla_core_clk = VL_RAND_RESET_I(1);
    vlSelf->nvdla_core_rstn = VL_RAND_RESET_I(1);
    vlSelf->pwrbus_ram_pd = VL_RAND_RESET_I(32);
    vlSelf->sdp_rdma2dp_valid = VL_RAND_RESET_I(1);
    vlSelf->sdp_rdma2dp_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->sdp_rdma2dp_pd);
    vlSelf->rod0_wr_pd = VL_RAND_RESET_Q(64);
    vlSelf->rod1_wr_pd = VL_RAND_RESET_Q(64);
    vlSelf->rod2_wr_pd = VL_RAND_RESET_Q(64);
    vlSelf->rod3_wr_pd = VL_RAND_RESET_Q(64);
    vlSelf->rod_wr_mask = VL_RAND_RESET_I(4);
    vlSelf->rod_wr_vld = VL_RAND_RESET_I(1);
    vlSelf->rod_wr_rdy = VL_RAND_RESET_I(1);
    vlSelf->roc_wr_pd = VL_RAND_RESET_I(2);
    vlSelf->roc_wr_vld = VL_RAND_RESET_I(1);
    vlSelf->roc_wr_rdy = VL_RAND_RESET_I(1);
    vlSelf->cfg_dp_8 = VL_RAND_RESET_I(1);
    vlSelf->cfg_dp_size_1byte = VL_RAND_RESET_I(1);
    vlSelf->cfg_mode_per_element = VL_RAND_RESET_I(1);
    vlSelf->reg2dp_channel = VL_RAND_RESET_I(13);
    vlSelf->reg2dp_height = VL_RAND_RESET_I(13);
    vlSelf->reg2dp_width = VL_RAND_RESET_I(13);
    vlSelf->layer_end = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_cnt = VL_RAND_RESET_I(2);
    vlSelf->__PVT__beat_cnt_nxt = VL_RAND_RESET_I(3);
    vlSelf->__PVT__count_h = VL_RAND_RESET_I(13);
    vlSelf->__PVT__count_w = VL_RAND_RESET_I(13);
    vlSelf->__PVT__count_c = VL_RAND_RESET_I(11);
    vlSelf->__PVT__is_last_beat = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_cube_end = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_last_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_surf_end = VL_RAND_RESET_I(1);
    vlSelf->__PVT__roc_rd_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rod0_wr_prdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rod0_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rod1_wr_prdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rod1_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rod2_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rod3_wr_prdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rod3_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_data_1bpe = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__PVT__out_data_1bpe_ext);
    vlSelf->__PVT__out_accept = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_vld = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->__PVT__out_pd);
    vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod0__DOT__skid_flop_rod_wr_pd = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod0__DOT__skid_rod_wr_prdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod1__DOT__skid_flop_rod_wr_pd = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod1__DOT__skid_rod_wr_prdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod2__DOT__skid_flop_rod_wr_pd = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod2__DOT__skid_rod_wr_prdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod3__DOT__skid_flop_rod_wr_pd = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rod3__DOT__skid_rod_wr_prdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_roc__DOT__nvdla_core_clk_mgated = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_roc__DOT__wr_reserving = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_roc__DOT__roc_wr_busy_int = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_roc__DOT__roc_wr_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_roc__DOT__wr_count_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_roc__DOT__wr_count_next_is_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_roc__DOT__roc_wr_adr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_roc__DOT__rd_popping = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_roc__DOT__roc_rd_adr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_roc__DOT__ram_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_roc__DOT__roc_rd_pd_p = VL_RAND_RESET_I(2);
    vlSelf->u_roc__DOT____Vcellinp__ram__ra = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_roc__DOT__rd_adr_next_popping = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_roc__DOT__roc_rd_prdy_d_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_int_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_roc__DOT__roc_rd_count_p = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_roc__DOT__rd_count_p_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_roc__DOT__roc_rd_pd_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_roc__DOT__rd_req_next_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_roc__DOT__roc_rd_pvld_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff2 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_roc__DOT__ram__DOT__ram_ff3 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_vld = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->__PVT__pipe_p1__DOT__skid_flop_out_pd);
    vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_vld = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->__PVT__pipe_p1__DOT__pipe_skid_out_pd);
    vlSelf->__PVT__pipe_p1__DOT__skid_out_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__skid_out_rdy = VL_RAND_RESET_I(1);
}
