// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_NV_NVDLA_CDMA_CVT_CELL_H_
#define VERILATED_VNV_NVDLA_NV_NVDLA_CDMA_CVT_CELL_H_  // guard

#include "verilated.h"

class VNV_nvdla__Syms;
VL_MODULE(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(nvdla_core_clk,0,0);
    VL_IN8(nvdla_core_rstn,0,0);
    VL_IN8(cfg_in_precision,1,0);
    VL_IN8(cfg_out_precision,1,0);
    VL_IN8(cfg_truncate,5,0);
    VL_IN8(chn_alu_in_rsc_vz,0,0);
    VL_IN8(chn_data_in_rsc_vz,0,0);
    VL_IN8(chn_data_out_rsc_vz,0,0);
    VL_OUT8(chn_alu_in_rsc_lz,0,0);
    VL_OUT8(chn_data_in_rsc_lz,0,0);
    VL_OUT8(__PVT__chn_data_out_rsc_lz,0,0);
    CData/*0:0*/ __PVT__chn_sync_pvld;
    CData/*0:0*/ __PVT__sub_out_prdy;
    CData/*0:0*/ __PVT__tru_out_prdy;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_ready_bc;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_valid;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_catch;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_pipe_valid;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_ready;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_ready_flop;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_valid;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_pipe_ready_bc;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_pipe_valid;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_catch;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_pipe_valid;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_ready;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_ready_flop;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_valid;
    CData/*0:0*/ __PVT__pipe_p3__DOT__p3_skid_catch;
    CData/*0:0*/ __PVT__pipe_p3__DOT__p3_skid_pipe_valid;
    CData/*0:0*/ __PVT__pipe_p3__DOT__p3_skid_ready;
    CData/*0:0*/ __PVT__pipe_p3__DOT__p3_skid_ready_flop;
    CData/*0:0*/ __PVT__pipe_p3__DOT__p3_skid_valid;
    VL_IN16(cfg_mul_in_rsc_z,15,0);
    VL_IN16(chn_alu_in_rsc_z,15,0);
    VL_OUT16(chn_data_out_rsc_z,15,0);
    SData/*15:0*/ __PVT__chn_dout;
    SData/*15:0*/ __PVT__pipe_p3__DOT__p3_pipe_data;
    SData/*15:0*/ __PVT__pipe_p3__DOT__p3_skid_data;
    VL_IN(chn_data_in_rsc_z,16,0);
    IData/*17:0*/ __PVT__sub_dout;
    IData/*17:0*/ __PVT__pipe_p1__DOT__p1_pipe_data;
    IData/*17:0*/ __PVT__pipe_p1__DOT__p1_skid_data;
    QData/*33:0*/ __PVT__mul_dout;
    QData/*33:0*/ __PVT__pipe_p2__DOT__p2_pipe_data;
    QData/*33:0*/ __PVT__pipe_p2__DOT__p2_skid_data;

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNV_nvdla_NV_NVDLA_CDMA_CVT_cell(const char* name);
    ~VNV_nvdla_NV_NVDLA_CDMA_CVT_cell();
    VL_UNCOPYABLE(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell);

    // INTERNAL METHODS
    void __Vconfigure(VNV_nvdla__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
