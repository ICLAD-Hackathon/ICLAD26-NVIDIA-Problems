// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_NV_RAM_RWSP_160X65__FZ2_H_
#define VERILATED_VNV_NVDLA_NV_RAM_RWSP_160X65__FZ2_H_  // guard

#include "verilated.h"

class VNV_nvdla__Syms;
class VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7;

VL_MODULE(VNV_nvdla_nv_ram_rwsp_160x65__Fz2) {
  public:
    // CELLS
    VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* __PVT__r_nv_ram_rwsp_160x65__DOT__testInst_Wa_reg_w0;
    VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* __PVT__r_nv_ram_rwsp_160x65__DOT__testInst_Ra_reg_r0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ __PVT__mbist_ramaccess_rst_;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__la_bist_clkw0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__dft_rst_gated_clk;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__gated_clk_jtag_Wa_reg_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__gated_clk_jtag_Data_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WRDCLK;
        VL_IN8(ra,7,0);
        VL_IN8(re,0,0);
        VL_IN8(ore,0,0);
        VL_IN8(wa,7,0);
        VL_IN8(we,0,0);
        CData/*7:0*/ __PVT__mbist_Wa_w0;
        CData/*7:0*/ __PVT__mbist_Ra_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__updateDR_sync;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__updateDR_sync_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__mbist_en_r;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__gated_clk_core;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Di_w0_S;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__posedge_updateDR_sync;
        CData/*7:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0_S;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__muxed_we_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__muxed_we_w0_S;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__we_q;
        CData/*7:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0_S;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__access_en_r_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__muxed_re_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__re_q;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__mbist_ce_r0_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__CLK_GATE_clk__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__UJ_la_bist_clkw0_gate__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__UJ_clk_gate_core__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RE_LATB;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WE_LATB;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WE_FF;
        CData/*7:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR;
        CData/*7:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WECLK;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RWSEL;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q;
    };
    struct {
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q;
        VL_OUTW(dout,64,0,3);
        VL_INW(di,64,0,3);
        VL_IN(pwrbus_ram_pd,31,0);
        VlWide<3>/*64:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut;
        VlWide<3>/*64:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__data_regq;
        VlWide<3>/*64:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WDQ_pr;
        VlWide<3>/*64:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout;
        VlWide<3>/*64:0*/ r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h3198c9a6__0;
        VlWide<3>/*64:0*/ r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h3198c9a6__0;
        VlUnpacked<VlWide<3>/*64:0*/, 80> __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT__arr;
        VlUnpacked<VlWide<3>/*64:0*/, 80> __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT__arr;
    };

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNV_nvdla_nv_ram_rwsp_160x65__Fz2(const char* name);
    ~VNV_nvdla_nv_ram_rwsp_160x65__Fz2();
    VL_UNCOPYABLE(VNV_nvdla_nv_ram_rwsp_160x65__Fz2);

    // INTERNAL METHODS
    void __Vconfigure(VNV_nvdla__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
