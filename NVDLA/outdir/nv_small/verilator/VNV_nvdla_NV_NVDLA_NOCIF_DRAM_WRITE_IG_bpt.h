// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_NV_NVDLA_NOCIF_DRAM_WRITE_IG_BPT_H_
#define VERILATED_VNV_NVDLA_NV_NVDLA_NOCIF_DRAM_WRITE_IG_BPT_H_  // guard

#include "verilated.h"

class VNV_nvdla__Syms;
VL_MODULE(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(nvdla_core_clk,0,0);
    VL_IN8(nvdla_core_rstn,0,0);
    CData/*0:0*/ __PVT__u_dfifo__DOT__nvdla_core_clk_mgated;
    VL_IN8(axid,3,0);
    VL_IN8(dma2bpt_req_valid,0,0);
    VL_OUT8(dma2bpt_req_ready,0,0);
    VL_OUT8(bpt2arb_cmd_valid,0,0);
    VL_IN8(bpt2arb_cmd_ready,0,0);
    VL_OUT8(bpt2arb_dat_valid,0,0);
    VL_IN8(bpt2arb_dat_ready,0,0);
    CData/*0:0*/ __PVT__cmd_en;
    CData/*0:0*/ __PVT__dat_en;
    CData/*0:0*/ __PVT__ipipe_rdy_p;
    CData/*0:0*/ __PVT__ipipe_cmd_vld;
    CData/*0:0*/ __PVT__ipipe_cmd_rdy;
    CData/*0:0*/ __PVT__dfifo_wr_pvld;
    CData/*0:0*/ __PVT__dfifo_rd_prdy;
    CData/*2:0*/ __PVT__beat_count;
    CData/*0:0*/ __PVT__is_last_beat;
    CData/*0:0*/ __PVT__bpt2arb_cmd_accept;
    CData/*0:0*/ __PVT__bpt2arb_dat_accept;
    CData/*0:0*/ __PVT__is_ltran;
    CData/*0:0*/ __PVT__out_cmd_vld;
    CData/*0:0*/ __PVT__out_dat_vld;
    CData/*0:0*/ __PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid;
    CData/*0:0*/ __PVT__pipe_p2__DOT__pipe_ipipe_vld_p;
    CData/*0:0*/ __PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld;
    CData/*0:0*/ __PVT__u_dfifo__DOT__wr_reserving;
    CData/*0:0*/ __PVT__u_dfifo__DOT__dfifo_wr_pvld_in;
    CData/*0:0*/ __PVT__u_dfifo__DOT__wr_busy_in;
    CData/*0:0*/ __PVT__u_dfifo__DOT__wr_busy_in_int;
    CData/*0:0*/ __PVT__u_dfifo__DOT__dfifo_wr_busy_int;
    CData/*0:0*/ __PVT__u_dfifo__DOT__dfifo_wr_count;
    CData/*0:0*/ __PVT__u_dfifo__DOT__wr_count_next;
    CData/*0:0*/ __PVT__u_dfifo__DOT__wr_count_next_is_1;
    CData/*0:0*/ __PVT__u_dfifo__DOT__rd_popping;
    CData/*0:0*/ __PVT__u_dfifo__DOT__dfifo_rd_prdy_d;
    CData/*0:0*/ __PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o;
    CData/*0:0*/ __PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    CData/*0:0*/ __PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o;
    CData/*0:0*/ __PVT__u_dfifo__DOT__dfifo_rd_count_p;
    CData/*0:0*/ __PVT__u_dfifo__DOT__rd_count_p_next;
    CData/*0:0*/ __PVT__u_dfifo__DOT__rd_req_next_o;
    CData/*0:0*/ __PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d;
    CData/*0:0*/ __PVT__u_dfifo__DOT__rd_req_next;
    CData/*0:0*/ __PVT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd;
    CData/*0:0*/ __Vdly__u_dfifo__DOT__wr_busy_in;
    CData/*0:0*/ __Vdly__u_dfifo__DOT__dfifo_rd_pvld_int;
    SData/*12:0*/ __PVT__req_count;
    VL_IN(pwrbus_ram_pd,31,0);
    VL_INW(dma2bpt_req_pd,65,0,3);
    VL_OUTW(bpt2arb_dat_pd,64,0,3);
    IData/*31:0*/ __PVT__out_addr;
    VlWide<3>/*65:0*/ __PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd;
    VlWide<3>/*65:0*/ __PVT__pipe_p2__DOT__pipe_ipipe_pd_p;
    VL_OUT64(bpt2arb_cmd_pd,44,0);
    QData/*45:0*/ __PVT__in_cmd_vld_pd;
    QData/*63:0*/ __PVT__dfifo_rd_data;
    QData/*45:0*/ __PVT__pipe_p3__DOT__pipe_ipipe_cmd_pd;
    QData/*63:0*/ __PVT__u_dfifo__DOT__dfifo_rd_pd_p;
    QData/*63:0*/ __PVT__u_dfifo__DOT__dfifo_rd_pd_o;
    QData/*63:0*/ __PVT__u_dfifo__DOT__ram__DOT__di_d;
    QData/*63:0*/ __PVT__u_dfifo__DOT__ram__DOT__ram_ff0;

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt(const char* name);
    ~VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt();
    VL_UNCOPYABLE(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt);

    // INTERNAL METHODS
    void __Vconfigure(VNV_nvdla__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
