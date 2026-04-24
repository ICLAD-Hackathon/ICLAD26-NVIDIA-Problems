// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__1\n"); );
    // Body
    vlSelf->__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__dat_fifo_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                    ? 8U : (IData)(vlSelf->__PVT__dat_fifo_rd_adr));
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo0_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_rdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_rdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__dat_fifo_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__dat_fifo_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__dat_fifo_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__dat_fifo_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__dat_fifo_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__dat_fifo_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__2(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__2\n"); );
    // Body
    vlSelf->__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__dat_fifo_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                    ? 8U : (IData)(vlSelf->__PVT__dat_fifo_rd_adr));
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo1_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo1_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo1_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__dat_fifo_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__dat_fifo_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__dat_fifo_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__dat_fifo_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__dat_fifo_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__dat_fifo_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__3(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__3\n"); );
    // Body
    vlSelf->__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__dat_fifo_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                    ? 8U : (IData)(vlSelf->__PVT__dat_fifo_rd_adr));
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo2_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo2_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo2_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__dat_fifo_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__dat_fifo_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__dat_fifo_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__dat_fifo_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__dat_fifo_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__dat_fifo_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__4(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__4\n"); );
    // Body
    vlSelf->__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__dat_fifo_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                    ? 8U : (IData)(vlSelf->__PVT__dat_fifo_rd_adr));
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo3_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo3_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo3_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__dat_fifo_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__dat_fifo_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__dat_fifo_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__dat_fifo_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__dat_fifo_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__dat_fifo_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__5(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__5\n"); );
    // Body
    vlSelf->__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__dat_fifo_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                    ? 8U : (IData)(vlSelf->__PVT__dat_fifo_rd_adr));
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo4_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo4_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo4_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__dat_fifo_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__dat_fifo_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__dat_fifo_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__dat_fifo_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__dat_fifo_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__dat_fifo_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__6(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__6\n"); );
    // Body
    vlSelf->__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__dat_fifo_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                    ? 8U : (IData)(vlSelf->__PVT__dat_fifo_rd_adr));
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo5_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo5_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo5_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__dat_fifo_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__dat_fifo_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__dat_fifo_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__dat_fifo_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__dat_fifo_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__dat_fifo_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__7(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__7\n"); );
    // Body
    vlSelf->__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__dat_fifo_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                    ? 8U : (IData)(vlSelf->__PVT__dat_fifo_rd_adr));
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo6_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo6_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo6_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__dat_fifo_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__dat_fifo_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__dat_fifo_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__dat_fifo_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__dat_fifo_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__dat_fifo_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__8(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__8\n"); );
    // Body
    vlSelf->__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__dat_fifo_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                    ? 8U : (IData)(vlSelf->__PVT__dat_fifo_rd_adr));
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo7_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo7_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo7_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__dat_fifo_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__dat_fifo_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__dat_fifo_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__dat_fifo_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__dat_fifo_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__dat_fifo_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}
