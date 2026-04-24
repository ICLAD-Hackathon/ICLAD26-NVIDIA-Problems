// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__1\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__rq_rd_adr)));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq0_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__rq_rd_pvld_int) 
                                 & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre));
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
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__rd_popping)
                                           ? ((IData)(vlSelf->__PVT__wr_reserving)
                                               ? (IData)(vlSelf->__PVT__rq_wr_count)
                                               : ((IData)(vlSelf->__PVT__rq_wr_count) 
                                                  - (IData)(1U)))
                                           : (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__2(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__2\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__rq_rd_adr)));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq1_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__rq_rd_pvld_int) 
                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 1U));
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
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__rd_popping)
                                           ? ((IData)(vlSelf->__PVT__wr_reserving)
                                               ? (IData)(vlSelf->__PVT__rq_wr_count)
                                               : ((IData)(vlSelf->__PVT__rq_wr_count) 
                                                  - (IData)(1U)))
                                           : (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__3(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__3\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__rq_rd_adr)));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq2_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__rq_rd_pvld_int) 
                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 2U));
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
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__rd_popping)
                                           ? ((IData)(vlSelf->__PVT__wr_reserving)
                                               ? (IData)(vlSelf->__PVT__rq_wr_count)
                                               : ((IData)(vlSelf->__PVT__rq_wr_count) 
                                                  - (IData)(1U)))
                                           : (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__4(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__4\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__rq_rd_adr)));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq3_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__rq_rd_pvld_int) 
                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 3U));
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
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__rd_popping)
                                           ? ((IData)(vlSelf->__PVT__wr_reserving)
                                               ? (IData)(vlSelf->__PVT__rq_wr_count)
                                               : ((IData)(vlSelf->__PVT__rq_wr_count) 
                                                  - (IData)(1U)))
                                           : (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__5(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__5\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__rq_rd_adr)));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq4_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__rq_rd_pvld_int) 
                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 4U));
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
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__rd_popping)
                                           ? ((IData)(vlSelf->__PVT__wr_reserving)
                                               ? (IData)(vlSelf->__PVT__rq_wr_count)
                                               : ((IData)(vlSelf->__PVT__rq_wr_count) 
                                                  - (IData)(1U)))
                                           : (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__6(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__6\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__rq_rd_adr)));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq5_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__rq_rd_pvld_int) 
                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 5U));
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
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__rd_popping)
                                           ? ((IData)(vlSelf->__PVT__wr_reserving)
                                               ? (IData)(vlSelf->__PVT__rq_wr_count)
                                               : ((IData)(vlSelf->__PVT__rq_wr_count) 
                                                  - (IData)(1U)))
                                           : (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__7(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__7\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__rq_rd_adr)));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq6_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__rq_wr_busy_int)));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__rq_rd_pvld_int) 
                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 6U));
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
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__rd_popping)
                                           ? ((IData)(vlSelf->__PVT__wr_reserving)
                                               ? (IData)(vlSelf->__PVT__rq_wr_count)
                                               : ((IData)(vlSelf->__PVT__rq_wr_count) 
                                                  - (IData)(1U)))
                                           : (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
}
