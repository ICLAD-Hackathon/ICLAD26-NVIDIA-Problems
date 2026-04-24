// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_CDMA_CVT_cell.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___ctor_var_reset(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___ctor_var_reset\n"); );
    // Body
    vlSelf->cfg_mul_in_rsc_z = VL_RAND_RESET_I(16);
    vlSelf->cfg_in_precision = VL_RAND_RESET_I(2);
    vlSelf->cfg_out_precision = VL_RAND_RESET_I(2);
    vlSelf->cfg_truncate = VL_RAND_RESET_I(6);
    vlSelf->chn_alu_in_rsc_vz = VL_RAND_RESET_I(1);
    vlSelf->chn_alu_in_rsc_z = VL_RAND_RESET_I(16);
    vlSelf->chn_data_in_rsc_vz = VL_RAND_RESET_I(1);
    vlSelf->chn_data_in_rsc_z = VL_RAND_RESET_I(17);
    vlSelf->chn_data_out_rsc_vz = VL_RAND_RESET_I(1);
    vlSelf->nvdla_core_clk = VL_RAND_RESET_I(1);
    vlSelf->nvdla_core_rstn = VL_RAND_RESET_I(1);
    vlSelf->chn_alu_in_rsc_lz = VL_RAND_RESET_I(1);
    vlSelf->chn_data_in_rsc_lz = VL_RAND_RESET_I(1);
    vlSelf->__PVT__chn_data_out_rsc_lz = VL_RAND_RESET_I(1);
    vlSelf->chn_data_out_rsc_z = VL_RAND_RESET_I(16);
    vlSelf->__PVT__chn_dout = VL_RAND_RESET_I(16);
    vlSelf->__PVT__chn_sync_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_dout = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__sub_dout = VL_RAND_RESET_I(18);
    vlSelf->__PVT__sub_out_prdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tru_out_prdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data = VL_RAND_RESET_I(18);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_data = VL_RAND_RESET_I(18);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_data = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p3__DOT__p3_pipe_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_catch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready_flop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_valid = VL_RAND_RESET_I(1);
}
