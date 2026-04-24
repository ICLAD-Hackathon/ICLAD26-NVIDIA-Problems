// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_NV_RAM_RWSP_128X6__FZ2_H_
#define VERILATED_VNV_NVDLA_NV_RAM_RWSP_128X6__FZ2_H_  // guard

#include "verilated.h"

class VNV_nvdla__Syms;
class VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19;

VL_MODULE(VNV_nvdla_nv_ram_rwsp_128x6__Fz2) {
  public:
    // CELLS
    VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* __PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0;
    VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* __PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ __PVT__mbist_ramaccess_rst_;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__la_bist_clkw0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__dft_rst_gated_clk;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_jtag_Wa_reg_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_jtag_Data_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__reclk_d0;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision__BRA__0__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision__BRA__1__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision__BRA__2__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision__BRA__3__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision__BRA__4__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision__BRA__5__KET____DOT____Vsenitemexpr1;
        VL_IN8(ra,6,0);
        VL_IN8(re,0,0);
        VL_IN8(ore,0,0);
        VL_OUT8(dout,5,0);
        VL_IN8(wa,6,0);
        VL_IN8(we,0,0);
        VL_IN8(di,5,0);
        CData/*6:0*/ __PVT__mbist_Wa_w0;
        CData/*6:0*/ __PVT__mbist_Ra_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Di_w0_S;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__we_q;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__re_q;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ramDataOut;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__mbist_ce_r0_1p;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__data_regq;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__CLK_GATE_clk__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_gate_core__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat;
        CData/*6:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff;
        CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h921bfe26__0;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q;
        CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q;
    };
    struct {
        VL_IN(pwrbus_ram_pd,31,0);
        VlUnpacked<CData/*5:0*/, 128> __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array;
    };

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNV_nvdla_nv_ram_rwsp_128x6__Fz2(const char* name);
    ~VNV_nvdla_nv_ram_rwsp_128x6__Fz2();
    VL_UNCOPYABLE(VNV_nvdla_nv_ram_rwsp_128x6__Fz2);

    // INTERNAL METHODS
    void __Vconfigure(VNV_nvdla__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
