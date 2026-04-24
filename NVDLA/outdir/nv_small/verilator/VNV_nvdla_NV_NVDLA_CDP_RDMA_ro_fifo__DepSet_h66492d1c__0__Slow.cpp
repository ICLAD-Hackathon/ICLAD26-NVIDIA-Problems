// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__1\n"); );
    // Body
    vlSelf->__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 8U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__nvdla_op_gated_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__9(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__9\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ro_wr_count))
                                                      : (IData)(vlSelf->__PVT__ro_wr_count)));
    vlSelf->__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                                   | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ro_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__10(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__10\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ro_wr_count))
                                                      : (IData)(vlSelf->__PVT__ro_wr_count)));
    vlSelf->__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                                   | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ro_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__11(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__11\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ro_wr_count))
                                                      : (IData)(vlSelf->__PVT__ro_wr_count)));
    vlSelf->__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                                   | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro2_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro2_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ro_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__12(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__12\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ro_wr_count))
                                                      : (IData)(vlSelf->__PVT__ro_wr_count)));
    vlSelf->__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                                   | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro3_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro3_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ro_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__13(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__13\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ro_wr_count))
                                                      : (IData)(vlSelf->__PVT__ro_wr_count)));
    vlSelf->__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                                   | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro4_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro4_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ro_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__14(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__14\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ro_wr_count))
                                                      : (IData)(vlSelf->__PVT__ro_wr_count)));
    vlSelf->__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                                   | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro5_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro5_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ro_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__15(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__15\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ro_wr_count))
                                                      : (IData)(vlSelf->__PVT__ro_wr_count)));
    vlSelf->__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                                   | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro6_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro6_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ro_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__16(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__16\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ro_wr_count))
                                                      : (IData)(vlSelf->__PVT__ro_wr_count)));
    vlSelf->__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                                   | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro7_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro7_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (8U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (0xfU 
                                              & ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                                 - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (0xfU & 
                                            ((IData)(vlSelf->__PVT__ro_wr_count) 
                                             - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (0xfU & ((IData)(vlSelf->__PVT__wr_reserving)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                   : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (0xfU & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}
