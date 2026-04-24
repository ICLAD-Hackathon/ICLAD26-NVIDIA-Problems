// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_tb.h for the primary calling header

#ifndef VERILATED_VAES_TB_PRIM_ONEHOT_CHECK__O3_ABZ3_SZ3_H_
#define VERILATED_VAES_TB_PRIM_ONEHOT_CHECK__O3_ABZ3_SZ3_H_  // guard

#include "verilated.h"

class Vaes_tb__Syms;
VL_MODULE(Vaes_tb_prim_onehot_check__O3_ABz3_Sz3) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(oh_i,2,0);
    VL_IN8(addr_i,4,0);
    VL_IN8(en_i,0,0);
    VL_OUT8(err_o,0,0);
    CData/*0:0*/ __PVT__or_tree__BRA__15__KET__;

    // INTERNAL VARIABLES
    Vaes_tb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vaes_tb_prim_onehot_check__O3_ABz3_Sz3(const char* name);
    ~Vaes_tb_prim_onehot_check__O3_ABz3_Sz3();
    VL_UNCOPYABLE(Vaes_tb_prim_onehot_check__O3_ABz3_Sz3);

    // INTERNAL METHODS
    void __Vconfigure(Vaes_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
