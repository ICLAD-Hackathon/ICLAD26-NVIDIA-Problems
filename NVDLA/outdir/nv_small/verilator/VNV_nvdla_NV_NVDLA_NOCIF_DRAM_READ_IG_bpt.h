// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_NV_NVDLA_NOCIF_DRAM_READ_IG_BPT_H_
#define VERILATED_VNV_NVDLA_NV_NVDLA_NOCIF_DRAM_READ_IG_BPT_H_  // guard

#include "verilated.h"

class VNV_nvdla__Syms;
VL_MODULE(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(nvdla_core_clk,0,0);
    VL_IN8(nvdla_core_rstn,0,0);
    VL_IN8(dma2bpt_req_valid,0,0);
    VL_OUT8(dma2bpt_req_ready,0,0);
    VL_IN8(dma2bpt_cdt_lat_fifo_pop,0,0);
    VL_OUT8(bpt2arb_req_valid,0,0);
    VL_IN8(bpt2arb_req_ready,0,0);
    VL_IN8(tieoff_axid,3,0);
    VL_IN8(tieoff_lat_fifo_depth,7,0);
    CData/*7:0*/ __PVT__lat_cnt_cur;
    CData/*0:0*/ __PVT__lat_count_dec;
    CData/*0:0*/ __PVT__bpt2arb_accept;
    CData/*0:0*/ __PVT__is_ltran;
    CData/*0:0*/ __PVT__req_vld;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_ready;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_ready_bc;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_valid;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_catch;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_ready;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_ready_flop;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_skid_valid;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_pipe_rand_ready;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_pipe_ready_bc;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_pipe_valid;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_catch;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_pipe_valid;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_ready;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_ready_flop;
    CData/*0:0*/ __PVT__pipe_p2__DOT__p2_skid_valid;
    SData/*15:0*/ __PVT__count_req;
    SData/*9:0*/ __PVT__lat_cnt_nxt;
    IData/*31:0*/ __PVT__out_addr;
    VL_IN64(dma2bpt_req_pd,46,0);
    VL_OUT64(bpt2arb_req_pd,42,0);
    QData/*46:0*/ __PVT__in_vld_pd;
    QData/*46:0*/ __PVT__pipe_p1__DOT__p1_pipe_data;
    QData/*46:0*/ __PVT__pipe_p1__DOT__p1_pipe_skid_data;
    QData/*46:0*/ __PVT__pipe_p1__DOT__p1_skid_data;
    QData/*46:0*/ __PVT__pipe_p2__DOT__p2_pipe_data;
    QData/*46:0*/ __PVT__pipe_p2__DOT__p2_skid_data;

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt(const char* name);
    ~VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt();
    VL_UNCOPYABLE(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt);

    // INTERNAL METHODS
    void __Vconfigure(VNV_nvdla__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
