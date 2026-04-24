// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_tb.h for the primary calling header

#ifndef VERILATED_VAES_TB_PRIM_ONEHOT_MUX__W80_I3_H_
#define VERILATED_VAES_TB_PRIM_ONEHOT_MUX__W80_I3_H_  // guard

#include "verilated.h"

class Vaes_tb__Syms;
VL_MODULE(Vaes_tb_prim_onehot_mux__W80_I3) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(sel_i,2,0);
    VL_OUTW(out_o,127,0,4);
    VL_INW(in_i[3],127,0,4);
    VlUnpacked<CData/*2:0*/, 128> __PVT__in_mux;

    // INTERNAL VARIABLES
    Vaes_tb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vaes_tb_prim_onehot_mux__W80_I3(const char* name);
    ~Vaes_tb_prim_onehot_mux__W80_I3();
    VL_UNCOPYABLE(Vaes_tb_prim_onehot_mux__W80_I3);

    // INTERNAL METHODS
    void __Vconfigure(Vaes_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
