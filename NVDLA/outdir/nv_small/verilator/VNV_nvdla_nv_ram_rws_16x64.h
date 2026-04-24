// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_NV_RAM_RWS_16X64_H_
#define VERILATED_VNV_NVDLA_NV_RAM_RWS_16X64_H_  // guard

#include "verilated.h"

class VNV_nvdla__Syms;
class VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi9;

VL_MODULE(VNV_nvdla_nv_ram_rws_16x64) {
  public:
    // CELLS
    VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi9* __PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ __PVT__mbist_ramaccess_rst_;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__0__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__1__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__2__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__3__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__4__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__5__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__6__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__7__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__8__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__9__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__10__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__11__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__12__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__13__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__14__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__15__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__16__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__17__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__18__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__19__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__20__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__21__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__22__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__23__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__24__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__25__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__26__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__27__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__28__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__29__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__30__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__31__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__32__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__33__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__34__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__35__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__36__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__37__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__38__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__39__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__40__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__41__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__42__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__43__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__44__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__45__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__46__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__47__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__48__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__49__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__50__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__51__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__52__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__53__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__54__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__55__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__56__KET____DOT____Vsenitemexpr1;
    };
    struct {
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__57__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__58__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__59__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__60__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__61__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__62__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__63__KET____DOT____Vsenitemexpr1;
        VL_IN8(ra,3,0);
        VL_IN8(re,0,0);
        VL_IN8(wa,3,0);
        VL_IN8(we,0,0);
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync;
        CData/*3:0*/ __PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0;
        CData/*3:0*/ __PVT__r_nv_ram_rws_16x64__DOT__wadr_q;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__we_q;
        CData/*3:0*/ __PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
        CData/*3:0*/ __PVT__r_nv_ram_rws_16x64__DOT__radr_q;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__re_q;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__we_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0;
        CData/*3:0*/ __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat;
        CData/*3:0*/ __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ __PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd;
        VL_IN(pwrbus_ram_pd,31,0);
        VL_OUT64(dout,63,0);
        VL_IN64(di,63,0);
        QData/*63:0*/ __PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0;
        QData/*63:0*/ __PVT__r_nv_ram_rws_16x64__DOT__ramDataOut;
        QData/*63:0*/ __PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_r0;
        QData/*63:0*/ __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat;
        QData/*63:0*/ __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr;
        QData/*63:0*/ __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff;
        QData/*63:0*/ __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp;
        VlUnpacked<QData/*63:0*/, 16> __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array;
    };

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNV_nvdla_nv_ram_rws_16x64(const char* name);
    ~VNV_nvdla_nv_ram_rws_16x64();
    VL_UNCOPYABLE(VNV_nvdla_nv_ram_rws_16x64);

    // INTERNAL METHODS
    void __Vconfigure(VNV_nvdla__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
