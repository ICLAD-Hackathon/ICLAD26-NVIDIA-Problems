// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___ctor_var_reset(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___ctor_var_reset\n"); );
    // Body
    vlSelf->nvdla_core_clk = VL_RAND_RESET_I(1);
    vlSelf->nvdla_core_rstn = VL_RAND_RESET_I(1);
    vlSelf->average_pooling_en = VL_RAND_RESET_I(1);
    vlSelf->cur_datin_disable = VL_RAND_RESET_I(1);
    vlSelf->last_out_en = VL_RAND_RESET_I(1);
    vlSelf->pdma2pdp_pd = VL_RAND_RESET_I(18);
    vlSelf->pdma2pdp_pvld = VL_RAND_RESET_I(1);
    vlSelf->pdp_din_lc_f = VL_RAND_RESET_I(1);
    vlSelf->pooling_din_1st = VL_RAND_RESET_I(1);
    vlSelf->pooling_din_last = VL_RAND_RESET_I(1);
    vlSelf->pooling_out_prdy = VL_RAND_RESET_I(1);
    vlSelf->pooling_type_cfg = VL_RAND_RESET_I(2);
    vlSelf->pooling_unit_en = VL_RAND_RESET_I(1);
    vlSelf->pdma2pdp_prdy = VL_RAND_RESET_I(1);
    vlSelf->pooling_out = VL_RAND_RESET_I(15);
    vlSelf->pooling_out_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add_out_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_pooling = VL_RAND_RESET_I(11);
    vlSelf->__PVT__load_din = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pooling_result = VL_RAND_RESET_I(11);
    vlSelf->__PVT__latch_result0_d3 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__flush_out0 = VL_RAND_RESET_I(15);
    vlSelf->__PVT__latch_result0_d4 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__latch_result1_d3 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__flush_out1 = VL_RAND_RESET_I(15);
    vlSelf->__PVT__latch_result1_d4 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__latch_result2_d3 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__flush_out2 = VL_RAND_RESET_I(15);
    vlSelf->__PVT__latch_result2_d4 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__latch_result3_d3 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__flush_out3 = VL_RAND_RESET_I(15);
    vlSelf->__PVT__latch_result3_d4 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__latch_result4_d3 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__flush_out4 = VL_RAND_RESET_I(15);
    vlSelf->__PVT__latch_result4_d4 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__latch_result5_d3 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__flush_out5 = VL_RAND_RESET_I(15);
    vlSelf->__PVT__latch_result5_d4 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__latch_result6_d3 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__flush_out6 = VL_RAND_RESET_I(15);
    vlSelf->__PVT__latch_result6_d4 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__latch_result7_d3 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__flush_out7 = VL_RAND_RESET_I(15);
    vlSelf->__PVT__latch_result7_d4 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__pooling_cnt = VL_RAND_RESET_I(5);
    vlSelf->__PVT__pooling_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__pipe_rdy_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_vld_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_dp_1 = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__pipe_rdy_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_vld_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_dp_2 = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__pipe_rdy_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_vld_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_dp_3 = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__pipe_rdy_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_vld_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_dp_4 = VL_RAND_RESET_Q(34);
}
