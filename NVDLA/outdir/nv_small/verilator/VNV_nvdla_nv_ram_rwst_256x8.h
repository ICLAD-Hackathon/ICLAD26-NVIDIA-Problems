// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_NV_RAM_RWST_256X8_H_
#define VERILATED_VNV_NVDLA_NV_RAM_RWST_256X8_H_  // guard

#include "verilated.h"

class VNV_nvdla__Syms;
class VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7;

VL_MODULE(VNV_nvdla_nv_ram_rwst_256x8) {
  public:
    // CELLS
    VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* __PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0;
    VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* __PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0;
    VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* __PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ __PVT__mbist_ramaccess_rst_;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__la_bist_clkw0;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__dft_rst_gated_clk;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_jtag_Wa_reg_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_jtag_Data_reg_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__reclk_d0;
        CData/*0:0*/ r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__0__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__1__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__2__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__3__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__4__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__5__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__6__KET____DOT____Vsenitemexpr1;
        CData/*0:0*/ r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__7__KET____DOT____Vsenitemexpr1;
        VL_IN8(ra,7,0);
        VL_IN8(re,0,0);
        VL_OUT8(dout,7,0);
        VL_IN8(wa,7,0);
        VL_IN8(we,0,0);
        VL_IN8(di,7,0);
        CData/*7:0*/ __PVT__mbist_Wa_w0;
        CData/*7:0*/ __PVT__mbist_Ra_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__wthru;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__wthru_en;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__updateDR_sync;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__updateDR_sync_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core;
        CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0_S;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync;
        CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__we_q;
        CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__access_en_r_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__re_q;
        CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ramDataOut;
        CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_r0_OutputMuxDataOut;
        CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_S;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__mbist_ce_r0_1p;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__CLK_GATE_clk__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_gate_core__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clk_w_iddq;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__we_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0;
        CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat;
        CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__re_lat;
        CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat;
        CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr;
        CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff;
        CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd;
        CData/*0:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd;
        VL_IN(pwrbus_ram_pd,31,0);
    };
    struct {
        VlUnpacked<CData/*7:0*/, 256> __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array;
    };

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNV_nvdla_nv_ram_rwst_256x8(const char* name);
    ~VNV_nvdla_nv_ram_rwst_256x8();
    VL_UNCOPYABLE(VNV_nvdla_nv_ram_rwst_256x8);

    // INTERNAL METHODS
    void __Vconfigure(VNV_nvdla__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
