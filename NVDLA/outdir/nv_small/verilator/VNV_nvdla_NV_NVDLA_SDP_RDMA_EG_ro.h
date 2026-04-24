// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_NV_NVDLA_SDP_RDMA_EG_RO_H_
#define VERILATED_VNV_NVDLA_NV_NVDLA_SDP_RDMA_EG_RO_H_  // guard

#include "verilated.h"

class VNV_nvdla__Syms;
VL_MODULE(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(nvdla_core_clk,0,0);
        VL_IN8(nvdla_core_rstn,0,0);
        CData/*0:0*/ __PVT__u_roc__DOT__nvdla_core_clk_mgated;
        VL_OUT8(sdp_rdma2dp_valid,0,0);
        VL_IN8(sdp_rdma2dp_ready,0,0);
        VL_IN8(rod_wr_mask,3,0);
        VL_IN8(rod_wr_vld,0,0);
        VL_OUT8(rod_wr_rdy,0,0);
        VL_IN8(roc_wr_pd,1,0);
        VL_IN8(roc_wr_vld,0,0);
        VL_OUT8(roc_wr_rdy,0,0);
        VL_IN8(cfg_dp_8,0,0);
        VL_IN8(cfg_dp_size_1byte,0,0);
        VL_IN8(cfg_mode_per_element,0,0);
        VL_OUT8(layer_end,0,0);
        CData/*1:0*/ __PVT__beat_cnt;
        CData/*2:0*/ __PVT__beat_cnt_nxt;
        CData/*0:0*/ __PVT__is_last_beat;
        CData/*0:0*/ __PVT__is_cube_end;
        CData/*0:0*/ __PVT__is_last_w;
        CData/*0:0*/ __PVT__is_surf_end;
        CData/*0:0*/ __PVT__roc_rd_pvld;
        CData/*0:0*/ __PVT__rod0_wr_prdy;
        CData/*0:0*/ __PVT__rod0_wr_pvld;
        CData/*0:0*/ __PVT__rod1_wr_prdy;
        CData/*0:0*/ __PVT__rod1_wr_pvld;
        CData/*0:0*/ __PVT__rod2_wr_pvld;
        CData/*0:0*/ __PVT__rod3_wr_prdy;
        CData/*0:0*/ __PVT__rod3_wr_pvld;
        CData/*0:0*/ __PVT__out_accept;
        CData/*0:0*/ __PVT__out_vld;
        CData/*0:0*/ __PVT__u_rod0__DOT__skid_flop_rod_wr_pvld;
        CData/*0:0*/ __PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld;
        CData/*0:0*/ __PVT__u_rod0__DOT__skid_rod_wr_pvld;
        CData/*0:0*/ __PVT__u_rod0__DOT__skid_rod_wr_prdy;
        CData/*0:0*/ __PVT__u_rod1__DOT__skid_flop_rod_wr_pvld;
        CData/*0:0*/ __PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld;
        CData/*0:0*/ __PVT__u_rod1__DOT__skid_rod_wr_pvld;
        CData/*0:0*/ __PVT__u_rod1__DOT__skid_rod_wr_prdy;
        CData/*0:0*/ __PVT__u_rod2__DOT__skid_flop_rod_wr_prdy;
        CData/*0:0*/ __PVT__u_rod2__DOT__skid_flop_rod_wr_pvld;
        CData/*0:0*/ __PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld;
        CData/*0:0*/ __PVT__u_rod2__DOT__skid_rod_wr_pvld;
        CData/*0:0*/ __PVT__u_rod2__DOT__skid_rod_wr_prdy;
        CData/*0:0*/ __PVT__u_rod3__DOT__skid_flop_rod_wr_pvld;
        CData/*0:0*/ __PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld;
        CData/*0:0*/ __PVT__u_rod3__DOT__skid_rod_wr_pvld;
        CData/*0:0*/ __PVT__u_rod3__DOT__skid_rod_wr_prdy;
        CData/*0:0*/ __PVT__u_roc__DOT__wr_reserving;
        CData/*0:0*/ __PVT__u_roc__DOT__roc_wr_busy_int;
        CData/*2:0*/ __PVT__u_roc__DOT__roc_wr_count;
        CData/*2:0*/ __PVT__u_roc__DOT__wr_count_next;
        CData/*0:0*/ __PVT__u_roc__DOT__wr_count_next_is_4;
        CData/*1:0*/ __PVT__u_roc__DOT__roc_wr_adr;
        CData/*0:0*/ __PVT__u_roc__DOT__rd_popping;
        CData/*1:0*/ __PVT__u_roc__DOT__roc_rd_adr;
        CData/*0:0*/ __PVT__u_roc__DOT__ram_we;
        CData/*1:0*/ __PVT__u_roc__DOT__roc_rd_pd_p;
        CData/*2:0*/ u_roc__DOT____Vcellinp__ram__ra;
        CData/*1:0*/ __PVT__u_roc__DOT__rd_adr_next_popping;
        CData/*0:0*/ __PVT__u_roc__DOT__roc_rd_prdy_d;
        CData/*0:0*/ __PVT__u_roc__DOT__roc_rd_prdy_d_o;
        CData/*0:0*/ __PVT__u_roc__DOT__roc_rd_pvld_int_o;
        CData/*2:0*/ __PVT__u_roc__DOT__roc_rd_count_p;
    };
    struct {
        CData/*2:0*/ __PVT__u_roc__DOT__rd_count_p_next;
        CData/*1:0*/ __PVT__u_roc__DOT__roc_rd_pd_o;
        CData/*0:0*/ __PVT__u_roc__DOT__rd_req_next_o;
        CData/*0:0*/ __PVT__u_roc__DOT__roc_rd_pvld_d;
        CData/*0:0*/ __PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd;
        CData/*1:0*/ __PVT__u_roc__DOT__ram__DOT__ram_ff0;
        CData/*1:0*/ __PVT__u_roc__DOT__ram__DOT__ram_ff1;
        CData/*1:0*/ __PVT__u_roc__DOT__ram__DOT__ram_ff2;
        CData/*1:0*/ __PVT__u_roc__DOT__ram__DOT__ram_ff3;
        CData/*0:0*/ __PVT__pipe_p1__DOT__skid_flop_out_rdy;
        CData/*0:0*/ __PVT__pipe_p1__DOT__skid_flop_out_vld;
        CData/*0:0*/ __PVT__pipe_p1__DOT__pipe_skid_out_vld;
        CData/*0:0*/ __PVT__pipe_p1__DOT__skid_out_vld;
        CData/*0:0*/ __PVT__pipe_p1__DOT__skid_out_rdy;
        VL_IN16(reg2dp_channel,12,0);
        VL_IN16(reg2dp_height,12,0);
        VL_IN16(reg2dp_width,12,0);
        SData/*12:0*/ __PVT__count_h;
        SData/*12:0*/ __PVT__count_w;
        SData/*10:0*/ __PVT__count_c;
        VL_IN(pwrbus_ram_pd,31,0);
        VL_OUTW(sdp_rdma2dp_pd,128,0,5);
        VlWide<4>/*127:0*/ __PVT__out_data_1bpe_ext;
        VlWide<5>/*128:0*/ __PVT__out_pd;
        VlWide<5>/*128:0*/ __PVT__pipe_p1__DOT__skid_flop_out_pd;
        VlWide<5>/*128:0*/ __PVT__pipe_p1__DOT__pipe_skid_out_pd;
        VL_IN64(rod0_wr_pd,63,0);
        VL_IN64(rod1_wr_pd,63,0);
        VL_IN64(rod2_wr_pd,63,0);
        VL_IN64(rod3_wr_pd,63,0);
        QData/*63:0*/ __PVT__out_data_1bpe;
        QData/*63:0*/ __PVT__u_rod0__DOT__skid_flop_rod_wr_pd;
        QData/*63:0*/ __PVT__u_rod0__DOT__pipe_skid_rod_wr_pd;
        QData/*63:0*/ __PVT__u_rod1__DOT__skid_flop_rod_wr_pd;
        QData/*63:0*/ __PVT__u_rod1__DOT__pipe_skid_rod_wr_pd;
        QData/*63:0*/ __PVT__u_rod2__DOT__skid_flop_rod_wr_pd;
        QData/*63:0*/ __PVT__u_rod2__DOT__pipe_skid_rod_wr_pd;
        QData/*63:0*/ __PVT__u_rod3__DOT__skid_flop_rod_wr_pd;
        QData/*63:0*/ __PVT__u_rod3__DOT__pipe_skid_rod_wr_pd;
    };

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro(const char* name);
    ~VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro();
    VL_UNCOPYABLE(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro);

    // INTERNAL METHODS
    void __Vconfigure(VNV_nvdla__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
