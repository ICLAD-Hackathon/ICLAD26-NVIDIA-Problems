// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_NV_NVDLA_PDP_CORE_UNIT1D_H_
#define VERILATED_VNV_NVDLA_NV_NVDLA_PDP_CORE_UNIT1D_H_  // guard

#include "verilated.h"

class VNV_nvdla__Syms;
VL_MODULE(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(nvdla_core_clk,0,0);
    VL_IN8(nvdla_core_rstn,0,0);
    VL_IN8(average_pooling_en,0,0);
    VL_IN8(cur_datin_disable,0,0);
    VL_IN8(last_out_en,0,0);
    VL_IN8(pdma2pdp_pvld,0,0);
    VL_IN8(pdp_din_lc_f,0,0);
    VL_IN8(pooling_din_1st,0,0);
    VL_IN8(pooling_din_last,0,0);
    VL_IN8(pooling_out_prdy,0,0);
    VL_IN8(pooling_type_cfg,1,0);
    VL_IN8(pooling_unit_en,0,0);
    VL_OUT8(pdma2pdp_prdy,0,0);
    VL_OUT8(pooling_out_pvld,0,0);
    CData/*0:0*/ __PVT__add_out_rdy;
    CData/*0:0*/ __PVT__load_din;
    CData/*4:0*/ __PVT__pooling_cnt;
    CData/*2:0*/ __PVT__pooling_size;
    CData/*0:0*/ __PVT__pipe_rdy_0;
    CData/*0:0*/ __PVT__pipe_vld_1;
    CData/*0:0*/ __PVT__pipe_rdy_1;
    CData/*0:0*/ __PVT__pipe_vld_2;
    CData/*0:0*/ __PVT__pipe_rdy_2;
    CData/*0:0*/ __PVT__pipe_vld_3;
    CData/*0:0*/ __PVT__pipe_rdy_3;
    CData/*0:0*/ __PVT__pipe_vld_4;
    VL_OUT16(pooling_out,14,0);
    SData/*10:0*/ __PVT__int_pooling;
    SData/*10:0*/ __PVT__pooling_result;
    SData/*10:0*/ __PVT__latch_result0_d3;
    SData/*14:0*/ __PVT__flush_out0;
    SData/*10:0*/ __PVT__latch_result0_d4;
    SData/*10:0*/ __PVT__latch_result1_d3;
    SData/*14:0*/ __PVT__flush_out1;
    SData/*10:0*/ __PVT__latch_result1_d4;
    SData/*10:0*/ __PVT__latch_result2_d3;
    SData/*14:0*/ __PVT__flush_out2;
    SData/*10:0*/ __PVT__latch_result2_d4;
    SData/*10:0*/ __PVT__latch_result3_d3;
    SData/*14:0*/ __PVT__flush_out3;
    SData/*10:0*/ __PVT__latch_result3_d4;
    SData/*10:0*/ __PVT__latch_result4_d3;
    SData/*14:0*/ __PVT__flush_out4;
    SData/*10:0*/ __PVT__latch_result4_d4;
    SData/*10:0*/ __PVT__latch_result5_d3;
    SData/*14:0*/ __PVT__flush_out5;
    SData/*10:0*/ __PVT__latch_result5_d4;
    SData/*10:0*/ __PVT__latch_result6_d3;
    SData/*14:0*/ __PVT__flush_out6;
    SData/*10:0*/ __PVT__latch_result6_d4;
    SData/*10:0*/ __PVT__latch_result7_d3;
    SData/*14:0*/ __PVT__flush_out7;
    SData/*10:0*/ __PVT__latch_result7_d4;
    VL_IN(pdma2pdp_pd,17,0);
    QData/*33:0*/ __PVT__pipe_dp_1;
    QData/*33:0*/ __PVT__pipe_dp_2;
    QData/*33:0*/ __PVT__pipe_dp_3;
    QData/*33:0*/ __PVT__pipe_dp_4;

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d(const char* name);
    ~VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d();
    VL_UNCOPYABLE(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d);

    // INTERNAL METHODS
    void __Vconfigure(VNV_nvdla__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
