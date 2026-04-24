// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_NV_NVDLA_PDP_WDMA_DAT_FIFO_H_
#define VERILATED_VNV_NVDLA_NV_NVDLA_PDP_WDMA_DAT_FIFO_H_  // guard

#include "verilated.h"

class VNV_nvdla__Syms;
VL_MODULE(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(nvdla_core_clk,0,0);
    VL_IN8(nvdla_core_rstn,0,0);
    CData/*0:0*/ __PVT__nvdla_core_clk_mgated;
    VL_OUT8(dat_fifo_wr_prdy,0,0);
    VL_IN8(dat_fifo_wr_pvld,0,0);
    VL_IN8(dat_fifo_wr_pd,7,0);
    VL_IN8(dat_fifo_rd_prdy,0,0);
    VL_OUT8(dat_fifo_rd_pvld,0,0);
    VL_OUT8(dat_fifo_rd_pd,7,0);
    CData/*0:0*/ __PVT__wr_reserving;
    CData/*0:0*/ __PVT__dat_fifo_wr_busy_int;
    CData/*2:0*/ __PVT__dat_fifo_wr_count;
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*2:0*/ __PVT__wr_count_next;
    CData/*0:0*/ __PVT__wr_count_next_is_4;
    CData/*1:0*/ __PVT__dat_fifo_wr_adr;
    CData/*0:0*/ __PVT__rd_popping;
    CData/*1:0*/ __PVT__dat_fifo_rd_adr;
    CData/*0:0*/ __PVT__ram_we;
    CData/*2:0*/ __Vcellinp__ram__ra;
    CData/*1:0*/ __PVT__rd_adr_next_popping;
    CData/*0:0*/ __PVT__dat_fifo_rd_pvld_p;
    CData/*0:0*/ __PVT__dat_fifo_rd_pvld_int;
    CData/*2:0*/ __PVT__dat_fifo_rd_count_p;
    CData/*2:0*/ __PVT__rd_count_p_next;
    CData/*0:0*/ __PVT__rd_req_next;
    CData/*0:0*/ __PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd;
    CData/*7:0*/ __PVT__ram__DOT__ram_ff0;
    CData/*7:0*/ __PVT__ram__DOT__ram_ff1;
    CData/*7:0*/ __PVT__ram__DOT__ram_ff2;
    CData/*7:0*/ __PVT__ram__DOT__ram_ff3;
    CData/*1:0*/ __Vdly__dat_fifo_wr_adr;
    VL_IN(pwrbus_ram_pd,31,0);

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo(const char* name);
    ~VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo();
    VL_UNCOPYABLE(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo);

    // INTERNAL METHODS
    void __Vconfigure(VNV_nvdla__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
