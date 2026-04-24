// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rws_128x18.h"

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__1(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__1\n"); );
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0xffffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
               << 0x11U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q) 
                            << 0x10U)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3fff0U & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3ff0fU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 7U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                          << 6U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 5U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                               << 4U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3f0ffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
               << 0xbU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xaU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                         << 9U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 8U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x30fffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
               << 0xfU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xeU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xdU) | 
                                        ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xcU)))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_0);
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank0_uram_0__re;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                           >> 8U))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RWSEL 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__2(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__2\n"); );
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0xffffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
               << 0x11U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q) 
                            << 0x10U)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3fff0U & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3ff0fU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 7U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                          << 6U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 5U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                               << 4U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3f0ffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
               << 0xbU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xaU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                         << 9U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 8U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x30fffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
               << 0xfU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xeU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xdU) | 
                                        ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xcU)))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_1);
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 1U));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank1_uram_0__re;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                           >> 8U))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RWSEL 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__3(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__3\n"); );
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0xffffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
               << 0x11U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q) 
                            << 0x10U)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3fff0U & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3ff0fU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 7U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                          << 6U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 5U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                               << 4U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3f0ffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
               << 0xbU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xaU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                         << 9U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 8U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x30fffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
               << 0xfU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xeU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xdU) | 
                                        ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xcU)))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_2);
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 2U));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank2_uram_0__re;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                           >> 8U))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RWSEL 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__4(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__4\n"); );
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0xffffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
               << 0x11U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q) 
                            << 0x10U)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3fff0U & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3ff0fU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 7U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                          << 6U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 5U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                               << 4U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3f0ffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
               << 0xbU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xaU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                         << 9U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 8U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x30fffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
               << 0xfU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xeU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xdU) | 
                                        ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xcU)))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_3);
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 3U));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank3_uram_0__re;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                           >> 8U))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RWSEL 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__5(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__5\n"); );
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0xffffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
               << 0x11U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q) 
                            << 0x10U)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3fff0U & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3ff0fU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 7U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                          << 6U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 5U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                               << 4U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3f0ffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
               << 0xbU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xaU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                         << 9U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 8U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x30fffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
               << 0xfU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xeU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xdU) | 
                                        ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xcU)))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_4);
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 4U));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank4_uram_0__re;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                           >> 8U))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RWSEL 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__6(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__6\n"); );
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0xffffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
               << 0x11U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q) 
                            << 0x10U)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3fff0U & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3ff0fU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 7U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                          << 6U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 5U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                               << 4U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3f0ffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
               << 0xbU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xaU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                         << 9U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 8U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x30fffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
               << 0xfU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xeU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xdU) | 
                                        ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xcU)))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_5);
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 5U));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank5_uram_0__re;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                           >> 8U))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RWSEL 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__7(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__7\n"); );
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0xffffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
               << 0x11U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q) 
                            << 0x10U)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3fff0U & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3ff0fU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 7U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                          << 6U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 5U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                               << 4U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3f0ffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
               << 0xbU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xaU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                         << 9U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 8U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x30fffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
               << 0xfU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xeU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xdU) | 
                                        ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xcU)))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_6);
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 6U));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank6_uram_0__re;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                           >> 8U))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RWSEL 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__8(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__8\n"); );
    // Body
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0xffffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
               << 0x11U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q) 
                            << 0x10U)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3fff0U & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3ff0fU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 7U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                          << 6U) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 5U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                               << 4U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x3f0ffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
               << 0xbU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xaU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                         << 9U) | ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 8U)))));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq 
        = ((0x30fffU & vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq) 
           | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
               << 0xfU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xeU) | (((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xdU) | 
                                        ((IData)(vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xcU)))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_core) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq
                    : 0U) : 0U) : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_7);
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                           & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q)))));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 7U));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____Vcellinp__bank7_uram_0__re;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK 
            = (1U & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB)) 
                     & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                           >> 8U))));
    } else {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK = 0U;
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_o_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RWSEL 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core)));
}
