// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__8(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__8\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq0_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->rq_rd_pvld) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__15(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__15\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

extern const VlUnpacked<CData/*2:0*/, 128> VNV_nvdla__ConstPool__TABLE_hb3136986_0;
extern const VlUnpacked<CData/*2:0*/, 128> VNV_nvdla__ConstPool__TABLE_hfa701bb6_0;
extern const VlUnpacked<CData/*0:0*/, 128> VNV_nvdla__ConstPool__TABLE_hecff1c2f_0;

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__22(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__22\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlSelf->__Vdly__rq_wr_adr = vlSelf->__PVT__rq_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__Vdly__rq_wr_adr = (3U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__rq_wr_adr)));
        }
        if (((IData)(vlSelf->__PVT__wr_reserving) ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__rq_wr_count = vlSelf->__PVT__wr_count_next;
        } else if (((IData)(vlSelf->__PVT__wr_reserving) 
                    ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__rq_wr_count = 0U;
        }
        vlSelf->__PVT__rq_wr_busy_int = vlSelf->__PVT__wr_count_next_is_4;
        if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__rq_rd_adr = vlSelf->__PVT__rd_adr_next_popping;
        } else if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__rq_rd_adr = 0U;
        }
    } else {
        vlSelf->__Vdly__rq_wr_adr = 0U;
        vlSelf->__PVT__rq_wr_count = 0U;
        vlSelf->__PVT__rq_wr_busy_int = 0U;
        vlSelf->__PVT__rq_rd_adr = 0U;
    }
    __Vtableidx1 = ((((IData)(vlSelf->__PVT__rd_popping)
                       ? (0U != (IData)(vlSelf->__PVT__rd_count_next_rd_popping))
                       : (0U != (IData)(vlSelf->__PVT__rd_count_next_no_rd_popping))) 
                     << 6U) | ((((IData)(vlSelf->__PVT__rd_popping)
                                  ? (IData)(vlSelf->__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelf->__PVT__rd_count_next_no_rd_popping)) 
                                << 3U) | (((IData)(vlSelf->__PVT__rd_popping) 
                                           << 2U) | 
                                          (((IData)(vlSelf->__PVT__wr_reserving) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx1])) {
        vlSelf->__PVT__rq_rd_count = VNV_nvdla__ConstPool__TABLE_hfa701bb6_0
            [__Vtableidx1];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx1])) {
        vlSelf->rq_rd_pvld = VNV_nvdla__ConstPool__TABLE_hecff1c2f_0
            [__Vtableidx1];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx1])) {
        vlSelf->__PVT__rq_rd_pvld_int = VNV_nvdla__ConstPool__TABLE_hecff1c2f_0
            [__Vtableidx1];
    }
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__rq_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__23(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__23\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__wr_reserving) & (2U 
                                                 == (IData)(vlSelf->__PVT__rq_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff2 = (((QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[0U])));
    }
    if (((IData)(vlSelf->__PVT__wr_reserving) & (1U 
                                                 == (IData)(vlSelf->__PVT__rq_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff1 = (((QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[0U])));
    }
    if (((IData)(vlSelf->__PVT__wr_reserving) & (3U 
                                                 == (IData)(vlSelf->__PVT__rq_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff3 = (((QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[0U])));
    }
    if (((IData)(vlSelf->__PVT__wr_reserving) & (0U 
                                                 == (IData)(vlSelf->__PVT__rq_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff0 = (((QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[0U])));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__42(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__42\n"); );
    // Body
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__rq_rd_pvld_int) 
                                 & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__50(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__50\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq0_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)));
    if (vlSelf->__PVT__wr_reserving) {
        vlSelf->__PVT__rd_count_next_rd_popping = (7U 
                                                   & (IData)(vlSelf->__PVT__rq_rd_count));
        vlSelf->__PVT__rd_count_next_no_rd_popping 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__rq_rd_count)));
        vlSelf->__PVT__wr_count_next_no_wr_popping 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__rq_wr_count)));
    } else {
        vlSelf->__PVT__rd_count_next_rd_popping = (7U 
                                                   & ((IData)(vlSelf->__PVT__rq_rd_count) 
                                                      - (IData)(1U)));
        vlSelf->__PVT__rd_count_next_no_rd_popping 
            = (7U & (IData)(vlSelf->__PVT__rq_rd_count));
        vlSelf->__PVT__wr_count_next_no_wr_popping 
            = (7U & (IData)(vlSelf->__PVT__rq_wr_count));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__9(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__9\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq1_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->rq_rd_pvld) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                                   >> 1U))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__24(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__24\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    // Body
    vlSelf->__Vdly__rq_wr_adr = vlSelf->__PVT__rq_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__Vdly__rq_wr_adr = (3U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__rq_wr_adr)));
        }
        if (((IData)(vlSelf->__PVT__wr_reserving) ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__rq_wr_count = vlSelf->__PVT__wr_count_next;
        } else if (((IData)(vlSelf->__PVT__wr_reserving) 
                    ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__rq_wr_count = 0U;
        }
        vlSelf->__PVT__rq_wr_busy_int = vlSelf->__PVT__wr_count_next_is_4;
        if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__rq_rd_adr = vlSelf->__PVT__rd_adr_next_popping;
        } else if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__rq_rd_adr = 0U;
        }
    } else {
        vlSelf->__Vdly__rq_wr_adr = 0U;
        vlSelf->__PVT__rq_wr_count = 0U;
        vlSelf->__PVT__rq_wr_busy_int = 0U;
        vlSelf->__PVT__rq_rd_adr = 0U;
    }
    __Vtableidx2 = ((((IData)(vlSelf->__PVT__rd_popping)
                       ? (0U != (IData)(vlSelf->__PVT__rd_count_next_rd_popping))
                       : (0U != (IData)(vlSelf->__PVT__rd_count_next_no_rd_popping))) 
                     << 6U) | ((((IData)(vlSelf->__PVT__rd_popping)
                                  ? (IData)(vlSelf->__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelf->__PVT__rd_count_next_no_rd_popping)) 
                                << 3U) | (((IData)(vlSelf->__PVT__rd_popping) 
                                           << 2U) | 
                                          (((IData)(vlSelf->__PVT__wr_reserving) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx2])) {
        vlSelf->__PVT__rq_rd_count = VNV_nvdla__ConstPool__TABLE_hfa701bb6_0
            [__Vtableidx2];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx2])) {
        vlSelf->rq_rd_pvld = VNV_nvdla__ConstPool__TABLE_hecff1c2f_0
            [__Vtableidx2];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx2])) {
        vlSelf->__PVT__rq_rd_pvld_int = VNV_nvdla__ConstPool__TABLE_hecff1c2f_0
            [__Vtableidx2];
    }
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__rq_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__43(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__43\n"); );
    // Body
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__rq_rd_pvld_int) 
                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 1U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__51(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__51\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq1_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)));
    if (vlSelf->__PVT__wr_reserving) {
        vlSelf->__PVT__rd_count_next_rd_popping = (7U 
                                                   & (IData)(vlSelf->__PVT__rq_rd_count));
        vlSelf->__PVT__rd_count_next_no_rd_popping 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__rq_rd_count)));
        vlSelf->__PVT__wr_count_next_no_wr_popping 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__rq_wr_count)));
    } else {
        vlSelf->__PVT__rd_count_next_rd_popping = (7U 
                                                   & ((IData)(vlSelf->__PVT__rq_rd_count) 
                                                      - (IData)(1U)));
        vlSelf->__PVT__rd_count_next_no_rd_popping 
            = (7U & (IData)(vlSelf->__PVT__rq_rd_count));
        vlSelf->__PVT__wr_count_next_no_wr_popping 
            = (7U & (IData)(vlSelf->__PVT__rq_wr_count));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__10(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__10\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq2_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->rq_rd_pvld) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                                   >> 2U))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__26(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__26\n"); );
    // Init
    CData/*6:0*/ __Vtableidx3;
    // Body
    vlSelf->__Vdly__rq_wr_adr = vlSelf->__PVT__rq_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__Vdly__rq_wr_adr = (3U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__rq_wr_adr)));
        }
        if (((IData)(vlSelf->__PVT__wr_reserving) ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__rq_wr_count = vlSelf->__PVT__wr_count_next;
        } else if (((IData)(vlSelf->__PVT__wr_reserving) 
                    ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__rq_wr_count = 0U;
        }
        vlSelf->__PVT__rq_wr_busy_int = vlSelf->__PVT__wr_count_next_is_4;
        if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__rq_rd_adr = vlSelf->__PVT__rd_adr_next_popping;
        } else if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__rq_rd_adr = 0U;
        }
    } else {
        vlSelf->__Vdly__rq_wr_adr = 0U;
        vlSelf->__PVT__rq_wr_count = 0U;
        vlSelf->__PVT__rq_wr_busy_int = 0U;
        vlSelf->__PVT__rq_rd_adr = 0U;
    }
    __Vtableidx3 = ((((IData)(vlSelf->__PVT__rd_popping)
                       ? (0U != (IData)(vlSelf->__PVT__rd_count_next_rd_popping))
                       : (0U != (IData)(vlSelf->__PVT__rd_count_next_no_rd_popping))) 
                     << 6U) | ((((IData)(vlSelf->__PVT__rd_popping)
                                  ? (IData)(vlSelf->__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelf->__PVT__rd_count_next_no_rd_popping)) 
                                << 3U) | (((IData)(vlSelf->__PVT__rd_popping) 
                                           << 2U) | 
                                          (((IData)(vlSelf->__PVT__wr_reserving) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx3])) {
        vlSelf->__PVT__rq_rd_count = VNV_nvdla__ConstPool__TABLE_hfa701bb6_0
            [__Vtableidx3];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx3])) {
        vlSelf->rq_rd_pvld = VNV_nvdla__ConstPool__TABLE_hecff1c2f_0
            [__Vtableidx3];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx3])) {
        vlSelf->__PVT__rq_rd_pvld_int = VNV_nvdla__ConstPool__TABLE_hecff1c2f_0
            [__Vtableidx3];
    }
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__rq_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__44(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__44\n"); );
    // Body
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__rq_rd_pvld_int) 
                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 2U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__52(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__52\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq2_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)));
    if (vlSelf->__PVT__wr_reserving) {
        vlSelf->__PVT__rd_count_next_rd_popping = (7U 
                                                   & (IData)(vlSelf->__PVT__rq_rd_count));
        vlSelf->__PVT__rd_count_next_no_rd_popping 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__rq_rd_count)));
        vlSelf->__PVT__wr_count_next_no_wr_popping 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__rq_wr_count)));
    } else {
        vlSelf->__PVT__rd_count_next_rd_popping = (7U 
                                                   & ((IData)(vlSelf->__PVT__rq_rd_count) 
                                                      - (IData)(1U)));
        vlSelf->__PVT__rd_count_next_no_rd_popping 
            = (7U & (IData)(vlSelf->__PVT__rq_rd_count));
        vlSelf->__PVT__wr_count_next_no_wr_popping 
            = (7U & (IData)(vlSelf->__PVT__rq_wr_count));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__11(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__11\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq3_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->rq_rd_pvld) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                                   >> 3U))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__28(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__28\n"); );
    // Init
    CData/*6:0*/ __Vtableidx4;
    // Body
    vlSelf->__Vdly__rq_wr_adr = vlSelf->__PVT__rq_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__Vdly__rq_wr_adr = (3U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__rq_wr_adr)));
        }
        if (((IData)(vlSelf->__PVT__wr_reserving) ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__rq_wr_count = vlSelf->__PVT__wr_count_next;
        } else if (((IData)(vlSelf->__PVT__wr_reserving) 
                    ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__rq_wr_count = 0U;
        }
        vlSelf->__PVT__rq_wr_busy_int = vlSelf->__PVT__wr_count_next_is_4;
        if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__rq_rd_adr = vlSelf->__PVT__rd_adr_next_popping;
        } else if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__rq_rd_adr = 0U;
        }
    } else {
        vlSelf->__Vdly__rq_wr_adr = 0U;
        vlSelf->__PVT__rq_wr_count = 0U;
        vlSelf->__PVT__rq_wr_busy_int = 0U;
        vlSelf->__PVT__rq_rd_adr = 0U;
    }
    __Vtableidx4 = ((((IData)(vlSelf->__PVT__rd_popping)
                       ? (0U != (IData)(vlSelf->__PVT__rd_count_next_rd_popping))
                       : (0U != (IData)(vlSelf->__PVT__rd_count_next_no_rd_popping))) 
                     << 6U) | ((((IData)(vlSelf->__PVT__rd_popping)
                                  ? (IData)(vlSelf->__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelf->__PVT__rd_count_next_no_rd_popping)) 
                                << 3U) | (((IData)(vlSelf->__PVT__rd_popping) 
                                           << 2U) | 
                                          (((IData)(vlSelf->__PVT__wr_reserving) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx4])) {
        vlSelf->__PVT__rq_rd_count = VNV_nvdla__ConstPool__TABLE_hfa701bb6_0
            [__Vtableidx4];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx4])) {
        vlSelf->rq_rd_pvld = VNV_nvdla__ConstPool__TABLE_hecff1c2f_0
            [__Vtableidx4];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx4])) {
        vlSelf->__PVT__rq_rd_pvld_int = VNV_nvdla__ConstPool__TABLE_hecff1c2f_0
            [__Vtableidx4];
    }
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__rq_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__45(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__45\n"); );
    // Body
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__rq_rd_pvld_int) 
                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 3U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__53(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__53\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq3_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)));
    if (vlSelf->__PVT__wr_reserving) {
        vlSelf->__PVT__rd_count_next_rd_popping = (7U 
                                                   & (IData)(vlSelf->__PVT__rq_rd_count));
        vlSelf->__PVT__rd_count_next_no_rd_popping 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__rq_rd_count)));
        vlSelf->__PVT__wr_count_next_no_wr_popping 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__rq_wr_count)));
    } else {
        vlSelf->__PVT__rd_count_next_rd_popping = (7U 
                                                   & ((IData)(vlSelf->__PVT__rq_rd_count) 
                                                      - (IData)(1U)));
        vlSelf->__PVT__rd_count_next_no_rd_popping 
            = (7U & (IData)(vlSelf->__PVT__rq_rd_count));
        vlSelf->__PVT__wr_count_next_no_wr_popping 
            = (7U & (IData)(vlSelf->__PVT__rq_wr_count));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__12(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__12\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq4_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->rq_rd_pvld) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                                   >> 4U))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__30(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__30\n"); );
    // Init
    CData/*6:0*/ __Vtableidx5;
    // Body
    vlSelf->__Vdly__rq_wr_adr = vlSelf->__PVT__rq_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__Vdly__rq_wr_adr = (3U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__rq_wr_adr)));
        }
        if (((IData)(vlSelf->__PVT__wr_reserving) ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__rq_wr_count = vlSelf->__PVT__wr_count_next;
        } else if (((IData)(vlSelf->__PVT__wr_reserving) 
                    ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__rq_wr_count = 0U;
        }
        vlSelf->__PVT__rq_wr_busy_int = vlSelf->__PVT__wr_count_next_is_4;
        if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__rq_rd_adr = vlSelf->__PVT__rd_adr_next_popping;
        } else if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__rq_rd_adr = 0U;
        }
    } else {
        vlSelf->__Vdly__rq_wr_adr = 0U;
        vlSelf->__PVT__rq_wr_count = 0U;
        vlSelf->__PVT__rq_wr_busy_int = 0U;
        vlSelf->__PVT__rq_rd_adr = 0U;
    }
    __Vtableidx5 = ((((IData)(vlSelf->__PVT__rd_popping)
                       ? (0U != (IData)(vlSelf->__PVT__rd_count_next_rd_popping))
                       : (0U != (IData)(vlSelf->__PVT__rd_count_next_no_rd_popping))) 
                     << 6U) | ((((IData)(vlSelf->__PVT__rd_popping)
                                  ? (IData)(vlSelf->__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelf->__PVT__rd_count_next_no_rd_popping)) 
                                << 3U) | (((IData)(vlSelf->__PVT__rd_popping) 
                                           << 2U) | 
                                          (((IData)(vlSelf->__PVT__wr_reserving) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx5])) {
        vlSelf->__PVT__rq_rd_count = VNV_nvdla__ConstPool__TABLE_hfa701bb6_0
            [__Vtableidx5];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx5])) {
        vlSelf->rq_rd_pvld = VNV_nvdla__ConstPool__TABLE_hecff1c2f_0
            [__Vtableidx5];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx5])) {
        vlSelf->__PVT__rq_rd_pvld_int = VNV_nvdla__ConstPool__TABLE_hecff1c2f_0
            [__Vtableidx5];
    }
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__rq_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__46(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__46\n"); );
    // Body
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__rq_rd_pvld_int) 
                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 4U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__54(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__54\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq4_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)));
    if (vlSelf->__PVT__wr_reserving) {
        vlSelf->__PVT__rd_count_next_rd_popping = (7U 
                                                   & (IData)(vlSelf->__PVT__rq_rd_count));
        vlSelf->__PVT__rd_count_next_no_rd_popping 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__rq_rd_count)));
        vlSelf->__PVT__wr_count_next_no_wr_popping 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__rq_wr_count)));
    } else {
        vlSelf->__PVT__rd_count_next_rd_popping = (7U 
                                                   & ((IData)(vlSelf->__PVT__rq_rd_count) 
                                                      - (IData)(1U)));
        vlSelf->__PVT__rd_count_next_no_rd_popping 
            = (7U & (IData)(vlSelf->__PVT__rq_rd_count));
        vlSelf->__PVT__wr_count_next_no_wr_popping 
            = (7U & (IData)(vlSelf->__PVT__rq_wr_count));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__13(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__13\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq5_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->rq_rd_pvld) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                                   >> 5U))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__32(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__32\n"); );
    // Init
    CData/*6:0*/ __Vtableidx6;
    // Body
    vlSelf->__Vdly__rq_wr_adr = vlSelf->__PVT__rq_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__Vdly__rq_wr_adr = (3U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__rq_wr_adr)));
        }
        if (((IData)(vlSelf->__PVT__wr_reserving) ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__rq_wr_count = vlSelf->__PVT__wr_count_next;
        } else if (((IData)(vlSelf->__PVT__wr_reserving) 
                    ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__rq_wr_count = 0U;
        }
        vlSelf->__PVT__rq_wr_busy_int = vlSelf->__PVT__wr_count_next_is_4;
        if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__rq_rd_adr = vlSelf->__PVT__rd_adr_next_popping;
        } else if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__rq_rd_adr = 0U;
        }
    } else {
        vlSelf->__Vdly__rq_wr_adr = 0U;
        vlSelf->__PVT__rq_wr_count = 0U;
        vlSelf->__PVT__rq_wr_busy_int = 0U;
        vlSelf->__PVT__rq_rd_adr = 0U;
    }
    __Vtableidx6 = ((((IData)(vlSelf->__PVT__rd_popping)
                       ? (0U != (IData)(vlSelf->__PVT__rd_count_next_rd_popping))
                       : (0U != (IData)(vlSelf->__PVT__rd_count_next_no_rd_popping))) 
                     << 6U) | ((((IData)(vlSelf->__PVT__rd_popping)
                                  ? (IData)(vlSelf->__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelf->__PVT__rd_count_next_no_rd_popping)) 
                                << 3U) | (((IData)(vlSelf->__PVT__rd_popping) 
                                           << 2U) | 
                                          (((IData)(vlSelf->__PVT__wr_reserving) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx6])) {
        vlSelf->__PVT__rq_rd_count = VNV_nvdla__ConstPool__TABLE_hfa701bb6_0
            [__Vtableidx6];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx6])) {
        vlSelf->rq_rd_pvld = VNV_nvdla__ConstPool__TABLE_hecff1c2f_0
            [__Vtableidx6];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx6])) {
        vlSelf->__PVT__rq_rd_pvld_int = VNV_nvdla__ConstPool__TABLE_hecff1c2f_0
            [__Vtableidx6];
    }
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__rq_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__47(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__47\n"); );
    // Body
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__rq_rd_pvld_int) 
                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 5U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__55(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__55\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq5_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)));
    if (vlSelf->__PVT__wr_reserving) {
        vlSelf->__PVT__rd_count_next_rd_popping = (7U 
                                                   & (IData)(vlSelf->__PVT__rq_rd_count));
        vlSelf->__PVT__rd_count_next_no_rd_popping 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__rq_rd_count)));
        vlSelf->__PVT__wr_count_next_no_wr_popping 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__rq_wr_count)));
    } else {
        vlSelf->__PVT__rd_count_next_rd_popping = (7U 
                                                   & ((IData)(vlSelf->__PVT__rq_rd_count) 
                                                      - (IData)(1U)));
        vlSelf->__PVT__rd_count_next_no_rd_popping 
            = (7U & (IData)(vlSelf->__PVT__rq_rd_count));
        vlSelf->__PVT__wr_count_next_no_wr_popping 
            = (7U & (IData)(vlSelf->__PVT__rq_wr_count));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__14(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__14\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq6_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__rq_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->rq_rd_pvld) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                                   >> 6U))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__34(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__34\n"); );
    // Init
    CData/*6:0*/ __Vtableidx7;
    // Body
    vlSelf->__Vdly__rq_wr_adr = vlSelf->__PVT__rq_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__Vdly__rq_wr_adr = (3U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__rq_wr_adr)));
        }
        if (((IData)(vlSelf->__PVT__wr_reserving) ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__rq_wr_count = vlSelf->__PVT__wr_count_next;
        } else if (((IData)(vlSelf->__PVT__wr_reserving) 
                    ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__rq_wr_count = 0U;
        }
        vlSelf->__PVT__rq_wr_busy_int = vlSelf->__PVT__wr_count_next_is_4;
        if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__rq_rd_adr = vlSelf->__PVT__rd_adr_next_popping;
        } else if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__rq_rd_adr = 0U;
        }
    } else {
        vlSelf->__Vdly__rq_wr_adr = 0U;
        vlSelf->__PVT__rq_wr_count = 0U;
        vlSelf->__PVT__rq_wr_busy_int = 0U;
        vlSelf->__PVT__rq_rd_adr = 0U;
    }
    __Vtableidx7 = ((((IData)(vlSelf->__PVT__rd_popping)
                       ? (0U != (IData)(vlSelf->__PVT__rd_count_next_rd_popping))
                       : (0U != (IData)(vlSelf->__PVT__rd_count_next_no_rd_popping))) 
                     << 6U) | ((((IData)(vlSelf->__PVT__rd_popping)
                                  ? (IData)(vlSelf->__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelf->__PVT__rd_count_next_no_rd_popping)) 
                                << 3U) | (((IData)(vlSelf->__PVT__rd_popping) 
                                           << 2U) | 
                                          (((IData)(vlSelf->__PVT__wr_reserving) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx7])) {
        vlSelf->__PVT__rq_rd_count = VNV_nvdla__ConstPool__TABLE_hfa701bb6_0
            [__Vtableidx7];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx7])) {
        vlSelf->rq_rd_pvld = VNV_nvdla__ConstPool__TABLE_hecff1c2f_0
            [__Vtableidx7];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_hb3136986_0
         [__Vtableidx7])) {
        vlSelf->__PVT__rq_rd_pvld_int = VNV_nvdla__ConstPool__TABLE_hecff1c2f_0
            [__Vtableidx7];
    }
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__rq_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__48(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__48\n"); );
    // Body
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__rq_rd_pvld_int) 
                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 6U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__56(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__56\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq6_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)));
    if (vlSelf->__PVT__wr_reserving) {
        vlSelf->__PVT__rd_count_next_rd_popping = (7U 
                                                   & (IData)(vlSelf->__PVT__rq_rd_count));
        vlSelf->__PVT__rd_count_next_no_rd_popping 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__rq_rd_count)));
        vlSelf->__PVT__wr_count_next_no_wr_popping 
            = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__rq_wr_count)));
    } else {
        vlSelf->__PVT__rd_count_next_rd_popping = (7U 
                                                   & ((IData)(vlSelf->__PVT__rq_rd_count) 
                                                      - (IData)(1U)));
        vlSelf->__PVT__rd_count_next_no_rd_popping 
            = (7U & (IData)(vlSelf->__PVT__rq_rd_count));
        vlSelf->__PVT__wr_count_next_no_wr_popping 
            = (7U & (IData)(vlSelf->__PVT__rq_wr_count));
    }
}
