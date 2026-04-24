// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_nv_ram_rws_128x18.h"

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_128x18___ctor_var_reset(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->ra = VL_RAND_RESET_I(7);
    vlSelf->re = VL_RAND_RESET_I(1);
    vlSelf->dout = VL_RAND_RESET_I(18);
    vlSelf->wa = VL_RAND_RESET_I(7);
    vlSelf->we = VL_RAND_RESET_I(1);
    vlSelf->di = VL_RAND_RESET_I(18);
    vlSelf->pwrbus_ram_pd = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mbist_Wa_w0 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__mbist_Ra_r0 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__mbist_ramaccess_rst_ = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__la_bist_clkw0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_sync_1p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__dft_rst_gated_clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_en_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_core = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Di_w0_S = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__posedge_updateDR_sync = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0_S = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_we_w0_S = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__we_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0_S = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__access_en_r_1p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_re_r0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__re_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ramDataOut = VL_RAND_RESET_I(18);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Data_r0 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Data_S = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__mbist_ce_r0_1p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__data_regq = VL_RAND_RESET_I(18);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Wa_reg_w0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__gated_clk_jtag_Data_reg_r0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__CLK_GATE_clk__DOT__qd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_la_bist_clkw0_gate__DOT__qd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_gate_core__DOT__qd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RE_LATB = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_LATB = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WE_FF = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RADR = VL_RAND_RESET_I(8);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WAFF = VL_RAND_RESET_I(8);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WRDCLK = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RECLK = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WECLK = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__RWSEL = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__WDQ_pr = VL_RAND_RESET_I(18);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__dout = VL_RAND_RESET_I(18);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__iow0__DOT__arr[__Vi0] = VL_RAND_RESET_I(18);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__ram_Inst_128X18__DOT__ITOP__DOT__iow1__DOT__arr[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rws_128x18__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
}
