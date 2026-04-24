// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_nv_ram_rwsp_160x65__Fz2.h"

VL_ATTR_COLD void VNV_nvdla_nv_ram_rwsp_160x65__Fz2___ctor_var_reset(VNV_nvdla_nv_ram_rwsp_160x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x65__Fz2___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->ra = VL_RAND_RESET_I(8);
    vlSelf->re = VL_RAND_RESET_I(1);
    vlSelf->ore = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->dout);
    vlSelf->wa = VL_RAND_RESET_I(8);
    vlSelf->we = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->di);
    vlSelf->pwrbus_ram_pd = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mbist_Wa_w0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__mbist_Ra_r0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__mbist_ramaccess_rst_ = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__la_bist_clkw0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__updateDR_sync = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__updateDR_sync_1p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__dft_rst_gated_clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__mbist_en_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__gated_clk_core = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Di_w0_S = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__posedge_updateDR_sync = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0_S = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_we_w0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_we_w0_S = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__we_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0_S = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__access_en_r_1p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_re_r0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__re_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__mbist_ce_r0_1p = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__gated_clk_jtag_Wa_reg_w0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__gated_clk_jtag_Data_reg_r0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__CLK_GATE_clk__DOT__qd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__UJ_la_bist_clkw0_gate__DOT__qd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__UJ_clk_gate_core__DOT__qd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RE_LATB = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WE_LATB = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WE_FF = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR = VL_RAND_RESET_I(8);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF = VL_RAND_RESET_I(8);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WRDCLK = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WECLK = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RWSEL = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WDQ_pr);
    VL_RAND_RESET_W(65, vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout);
    for (int __Vi0=0; __Vi0<80; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT__arr[__Vi0]);
    }
    VL_RAND_RESET_W(65, vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h3198c9a6__0);
    for (int __Vi0=0; __Vi0<80; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT__arr[__Vi0]);
    }
    VL_RAND_RESET_W(65, vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h3198c9a6__0);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q = VL_RAND_RESET_I(1);
}
