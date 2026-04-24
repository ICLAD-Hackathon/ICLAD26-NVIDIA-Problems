// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_NV_RAM_RWSP_61X65__FZ2_H_
#define VERILATED_VNV_NVDLA_NV_RAM_RWSP_61X65__FZ2_H_  // guard

#include "verilated.h"

class VNV_nvdla__Syms;
class VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi22;

VL_MODULE(VNV_nvdla_nv_ram_rwsp_61x65__Fz2) {
  public:
    // CELLS
    VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi22* __PVT__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ __PVT__mbist_ramaccess_rst_;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__la_bist_clkw0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__dft_rst_gated_clk;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_jtag_Wa_reg_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_jtag_Data_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WRDCLK;
        VL_IN8(ra,5,0);
        VL_IN8(re,0,0);
        VL_IN8(ore,0,0);
        VL_IN8(wa,5,0);
        VL_IN8(we,0,0);
        CData/*5:0*/ __PVT__mbist_Wa_w0;
        CData/*5:0*/ __PVT__mbist_Ra_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__updateDR_sync;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__updateDR_sync_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__gated_clk_core;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Di_w0_S;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__posedge_updateDR_sync;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0_S;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__wadr_q;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__muxed_we_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__we_q;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0_S;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__radr_q;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__access_en_r_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0_S;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__re_q;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__mbist_ce_r0_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__CLK_GATE_clk__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__UJ_la_bist_clkw0_gate__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__UJ_clk_gate_core__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RE_LATB;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WE_LATB;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WE_FF;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RADR;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WAFF;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__RWSEL;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd;
        CData/*0:0*/ r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd;
        VL_OUTW(dout,64,0,3);
        VL_INW(di,64,0,3);
        VL_IN(pwrbus_ram_pd,31,0);
        VlWide<3>/*65:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__ramDataOut;
        VlWide<3>/*65:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr;
        VlWide<3>/*65:0*/ __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__dout;
    };
    struct {
        VlUnpacked<VlWide<3>/*65:0*/, 64> __PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__iow0__DOT__arr;
    };

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNV_nvdla_nv_ram_rwsp_61x65__Fz2(const char* name);
    ~VNV_nvdla_nv_ram_rwsp_61x65__Fz2();
    VL_UNCOPYABLE(VNV_nvdla_nv_ram_rwsp_61x65__Fz2);

    // INTERNAL METHODS
    void __Vconfigure(VNV_nvdla__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
