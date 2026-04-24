// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rwsp_160x16__Fz2.h"

VL_ATTR_COLD void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___settle__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__1(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___settle__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__1\n"); );
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq 
        = ((0xfff0U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq 
        = ((0xff0fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 7U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                          << 6U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 5U) | ((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                               << 4U)))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq 
        = ((0xf0ffU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
               << 0xbU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xaU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                         << 9U) | ((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 8U)))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq 
        = ((0xfffU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
               << 0xfU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xeU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xdU) | 
                                        ((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xcU)))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_reserving));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core)));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RWSEL 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___settle__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__2(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___settle__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__2\n"); );
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq 
        = ((0xfff0U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq 
        = ((0xff0fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 7U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                          << 6U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 5U) | ((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                               << 4U)))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq 
        = ((0xf0ffU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
               << 0xbU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xaU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                         << 9U) | ((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 8U)))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq 
        = ((0xfffU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
               << 0xfU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xeU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xdU) | 
                                        ((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xcU)))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_reserving));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core)));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RWSEL 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core)));
}
