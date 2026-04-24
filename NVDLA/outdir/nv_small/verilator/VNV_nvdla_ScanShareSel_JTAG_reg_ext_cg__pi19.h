// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_SCANSHARESEL_JTAG_REG_EXT_CG__PI19_H_
#define VERILATED_VNV_NVDLA_SCANSHARESEL_JTAG_REG_EXT_CG__PI19_H_  // guard

#include "verilated.h"

class VNV_nvdla__Syms;
VL_MODULE(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_,0,0);
    VL_IN8(scanin,0,0);
    VL_IN8(sel,0,0);
    VL_IN8(shiftDR,0,0);
    VL_OUT8(scanout,0,0);
    VL_IN8(D,6,0);
    VL_OUT8(Q,6,0);
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q;
    CData/*0:0*/ __Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q;

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19(const char* name);
    ~VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19();
    VL_UNCOPYABLE(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19);

    // INTERNAL METHODS
    void __Vconfigure(VNV_nvdla__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
