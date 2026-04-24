// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__8(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__8\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 4U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__ro_rd_prdy_d_o = (1U & (~ (((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                               & (IData)(vlSelf->__PVT__ro_rd_pvld_int_d)) 
                                              & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d)))));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_wr0_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                  ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                 ? 0ULL
                                                 : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_pd0))
                                  : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff3
                                          : vlSelf->__PVT__ram__DOT__ram_ff2)
                                      : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff1
                                          : vlSelf->__PVT__ram__DOT__ram_ff0)));
    __PVT__wr_count_next_no_wr_popping = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_wr_count))
                                                 : (IData)(vlSelf->__PVT__ro_wr_count)));
    __PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                           | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next_o = ((IData)(__PVT__ro_rd_pvld_p) 
                                    | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                   ? (IData)(__PVT__ro_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__ro_rd_pvld_int_o));
    vlSelf->__PVT__rd_popping = ((IData)(__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (7U & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (7U & 
                                              ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                               - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__ro_wr_count) 
                                                  - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                 : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (7U & (IData)(__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__1\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 4U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__ro_rd_prdy_d_o = (1U & (~ (((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                               & (IData)(vlSelf->__PVT__ro_rd_pvld_int_d)) 
                                              & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d)))));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_wr1_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                  ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                 ? 0ULL
                                                 : (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled))))
                                  : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff3
                                          : vlSelf->__PVT__ram__DOT__ram_ff2)
                                      : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff1
                                          : vlSelf->__PVT__ram__DOT__ram_ff0)));
    __PVT__wr_count_next_no_wr_popping = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_wr_count))
                                                 : (IData)(vlSelf->__PVT__ro_wr_count)));
    __PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                           | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next_o = ((IData)(__PVT__ro_rd_pvld_p) 
                                    | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                   ? (IData)(__PVT__ro_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__ro_rd_pvld_int_o));
    vlSelf->__PVT__rd_popping = ((IData)(__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (7U & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (7U & 
                                              ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                               - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__ro_wr_count) 
                                                  - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                 : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (7U & (IData)(__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__9(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__9\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 4U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__ro_rd_prdy_d_o = (1U & (~ (((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                               & (IData)(vlSelf->__PVT__ro_rd_pvld_int_d)) 
                                              & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d)))));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_wr0_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                  ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                 ? 0ULL
                                                 : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_pd0))
                                  : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff3
                                          : vlSelf->__PVT__ram__DOT__ram_ff2)
                                      : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff1
                                          : vlSelf->__PVT__ram__DOT__ram_ff0)));
    __PVT__wr_count_next_no_wr_popping = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_wr_count))
                                                 : (IData)(vlSelf->__PVT__ro_wr_count)));
    __PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                           | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next_o = ((IData)(__PVT__ro_rd_pvld_p) 
                                    | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                   ? (IData)(__PVT__ro_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__ro_rd_pvld_int_o));
    vlSelf->__PVT__rd_popping = ((IData)(__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (7U & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (7U & 
                                              ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                               - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__ro_wr_count) 
                                                  - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                 : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (7U & (IData)(__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__2(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__2\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 4U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__ro_rd_prdy_d_o = (1U & (~ (((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                               & (IData)(vlSelf->__PVT__ro_rd_pvld_int_d)) 
                                              & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d)))));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_wr1_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                  ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                 ? 0ULL
                                                 : (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled))))
                                  : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff3
                                          : vlSelf->__PVT__ram__DOT__ram_ff2)
                                      : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff1
                                          : vlSelf->__PVT__ram__DOT__ram_ff0)));
    __PVT__wr_count_next_no_wr_popping = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_wr_count))
                                                 : (IData)(vlSelf->__PVT__ro_wr_count)));
    __PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                           | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next_o = ((IData)(__PVT__ro_rd_pvld_p) 
                                    | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                   ? (IData)(__PVT__ro_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__ro_rd_pvld_int_o));
    vlSelf->__PVT__rd_popping = ((IData)(__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (7U & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (7U & 
                                              ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                               - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__ro_wr_count) 
                                                  - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                 : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (7U & (IData)(__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__10(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__10\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 4U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__ro_rd_prdy_d_o = (1U & (~ (((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                               & (IData)(vlSelf->__PVT__ro_rd_pvld_int_d)) 
                                              & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d)))));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_wr0_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                  ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                 ? 0ULL
                                                 : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_pd0))
                                  : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff3
                                          : vlSelf->__PVT__ram__DOT__ram_ff2)
                                      : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff1
                                          : vlSelf->__PVT__ram__DOT__ram_ff0)));
    __PVT__wr_count_next_no_wr_popping = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_wr_count))
                                                 : (IData)(vlSelf->__PVT__ro_wr_count)));
    __PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                           | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next_o = ((IData)(__PVT__ro_rd_pvld_p) 
                                    | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                   ? (IData)(__PVT__ro_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__ro_rd_pvld_int_o));
    vlSelf->__PVT__rd_popping = ((IData)(__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (7U & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (7U & 
                                              ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                               - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__ro_wr_count) 
                                                  - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                 : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (7U & (IData)(__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__3(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__3\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 4U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__ro_rd_prdy_d_o = (1U & (~ (((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                               & (IData)(vlSelf->__PVT__ro_rd_pvld_int_d)) 
                                              & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d)))));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_wr1_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                  ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                 ? 0ULL
                                                 : (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled))))
                                  : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff3
                                          : vlSelf->__PVT__ram__DOT__ram_ff2)
                                      : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff1
                                          : vlSelf->__PVT__ram__DOT__ram_ff0)));
    __PVT__wr_count_next_no_wr_popping = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_wr_count))
                                                 : (IData)(vlSelf->__PVT__ro_wr_count)));
    __PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                           | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next_o = ((IData)(__PVT__ro_rd_pvld_p) 
                                    | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                   ? (IData)(__PVT__ro_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__ro_rd_pvld_int_o));
    vlSelf->__PVT__rd_popping = ((IData)(__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (7U & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (7U & 
                                              ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                               - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__ro_wr_count) 
                                                  - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                 : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (7U & (IData)(__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__11(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__11\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 4U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__ro_rd_prdy_d_o = (1U & (~ (((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                               & (IData)(vlSelf->__PVT__ro_rd_pvld_int_d)) 
                                              & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d)))));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_wr0_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                  ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                 ? 0ULL
                                                 : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_pd0))
                                  : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff3
                                          : vlSelf->__PVT__ram__DOT__ram_ff2)
                                      : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff1
                                          : vlSelf->__PVT__ram__DOT__ram_ff0)));
    __PVT__wr_count_next_no_wr_popping = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_wr_count))
                                                 : (IData)(vlSelf->__PVT__ro_wr_count)));
    __PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                           | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next_o = ((IData)(__PVT__ro_rd_pvld_p) 
                                    | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                   ? (IData)(__PVT__ro_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__ro_rd_pvld_int_o));
    vlSelf->__PVT__rd_popping = ((IData)(__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (7U & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (7U & 
                                              ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                               - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__ro_wr_count) 
                                                  - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                 : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (7U & (IData)(__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__4(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__4\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 4U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__ro_rd_prdy_d_o = (1U & (~ (((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                               & (IData)(vlSelf->__PVT__ro_rd_pvld_int_d)) 
                                              & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d)))));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_wr1_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                  ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                 ? 0ULL
                                                 : (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled))))
                                  : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff3
                                          : vlSelf->__PVT__ram__DOT__ram_ff2)
                                      : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff1
                                          : vlSelf->__PVT__ram__DOT__ram_ff0)));
    __PVT__wr_count_next_no_wr_popping = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_wr_count))
                                                 : (IData)(vlSelf->__PVT__ro_wr_count)));
    __PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                           | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next_o = ((IData)(__PVT__ro_rd_pvld_p) 
                                    | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                   ? (IData)(__PVT__ro_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__ro_rd_pvld_int_o));
    vlSelf->__PVT__rd_popping = ((IData)(__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (7U & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (7U & 
                                              ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                               - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__ro_wr_count) 
                                                  - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                 : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (7U & (IData)(__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__12(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__12\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 4U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__ro_rd_prdy_d_o = (1U & (~ (((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                               & (IData)(vlSelf->__PVT__ro_rd_pvld_int_d)) 
                                              & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d)))));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_wr0_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                  ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                 ? 0ULL
                                                 : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_pd0))
                                  : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff3
                                          : vlSelf->__PVT__ram__DOT__ram_ff2)
                                      : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff1
                                          : vlSelf->__PVT__ram__DOT__ram_ff0)));
    __PVT__wr_count_next_no_wr_popping = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_wr_count))
                                                 : (IData)(vlSelf->__PVT__ro_wr_count)));
    __PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                           | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next_o = ((IData)(__PVT__ro_rd_pvld_p) 
                                    | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                   ? (IData)(__PVT__ro_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__ro_rd_pvld_int_o));
    vlSelf->__PVT__rd_popping = ((IData)(__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (7U & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (7U & 
                                              ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                               - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__ro_wr_count) 
                                                  - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                 : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (7U & (IData)(__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__5(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__5\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 4U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__ro_rd_prdy_d_o = (1U & (~ (((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                               & (IData)(vlSelf->__PVT__ro_rd_pvld_int_d)) 
                                              & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d)))));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_wr1_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                  ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                 ? 0ULL
                                                 : (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled))))
                                  : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff3
                                          : vlSelf->__PVT__ram__DOT__ram_ff2)
                                      : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff1
                                          : vlSelf->__PVT__ram__DOT__ram_ff0)));
    __PVT__wr_count_next_no_wr_popping = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_wr_count))
                                                 : (IData)(vlSelf->__PVT__ro_wr_count)));
    __PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                           | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next_o = ((IData)(__PVT__ro_rd_pvld_p) 
                                    | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                   ? (IData)(__PVT__ro_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__ro_rd_pvld_int_o));
    vlSelf->__PVT__rd_popping = ((IData)(__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (7U & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (7U & 
                                              ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                               - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__ro_wr_count) 
                                                  - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                 : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (7U & (IData)(__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__13(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__13\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 4U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__ro_rd_prdy_d_o = (1U & (~ (((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                               & (IData)(vlSelf->__PVT__ro_rd_pvld_int_d)) 
                                              & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d)))));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_wr0_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                  ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                 ? 0ULL
                                                 : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_pd0))
                                  : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff3
                                          : vlSelf->__PVT__ram__DOT__ram_ff2)
                                      : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff1
                                          : vlSelf->__PVT__ram__DOT__ram_ff0)));
    __PVT__wr_count_next_no_wr_popping = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_wr_count))
                                                 : (IData)(vlSelf->__PVT__ro_wr_count)));
    __PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                           | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next_o = ((IData)(__PVT__ro_rd_pvld_p) 
                                    | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                   ? (IData)(__PVT__ro_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__ro_rd_pvld_int_o));
    vlSelf->__PVT__rd_popping = ((IData)(__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (7U & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (7U & 
                                              ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                               - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__ro_wr_count) 
                                                  - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                 : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (7U & (IData)(__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__6(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__6\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 4U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__ro_rd_prdy_d_o = (1U & (~ (((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                               & (IData)(vlSelf->__PVT__ro_rd_pvld_int_d)) 
                                              & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d)))));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_wr1_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                  ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                 ? 0ULL
                                                 : (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled))))
                                  : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff3
                                          : vlSelf->__PVT__ram__DOT__ram_ff2)
                                      : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff1
                                          : vlSelf->__PVT__ram__DOT__ram_ff0)));
    __PVT__wr_count_next_no_wr_popping = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_wr_count))
                                                 : (IData)(vlSelf->__PVT__ro_wr_count)));
    __PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                           | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next_o = ((IData)(__PVT__ro_rd_pvld_p) 
                                    | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                   ? (IData)(__PVT__ro_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__ro_rd_pvld_int_o));
    vlSelf->__PVT__rd_popping = ((IData)(__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (7U & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (7U & 
                                              ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                               - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__ro_wr_count) 
                                                  - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                 : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (7U & (IData)(__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__14(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__14\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 4U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__ro_rd_prdy_d_o = (1U & (~ (((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                               & (IData)(vlSelf->__PVT__ro_rd_pvld_int_d)) 
                                              & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d)))));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_wr0_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                  ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                 ? 0ULL
                                                 : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_pd0))
                                  : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff3
                                          : vlSelf->__PVT__ram__DOT__ram_ff2)
                                      : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff1
                                          : vlSelf->__PVT__ram__DOT__ram_ff0)));
    __PVT__wr_count_next_no_wr_popping = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_wr_count))
                                                 : (IData)(vlSelf->__PVT__ro_wr_count)));
    __PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                           | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next_o = ((IData)(__PVT__ro_rd_pvld_p) 
                                    | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                   ? (IData)(__PVT__ro_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__ro_rd_pvld_int_o));
    vlSelf->__PVT__rd_popping = ((IData)(__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (7U & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (7U & 
                                              ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                               - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__ro_wr_count) 
                                                  - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                 : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (7U & (IData)(__PVT__wr_count_next_no_wr_popping));
    }
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__7(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__7\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 4U : (IData)(vlSelf->__PVT__ro_rd_adr));
    vlSelf->__PVT__ro_rd_prdy_d_o = (1U & (~ (((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                               & (IData)(vlSelf->__PVT__ro_rd_pvld_int_d)) 
                                              & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d)))));
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_wr1_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                  ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? 0ULL : ((1U 
                                                 & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                 ? 0ULL
                                                 : (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled))))
                                  : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff3
                                          : vlSelf->__PVT__ram__DOT__ram_ff2)
                                      : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? vlSelf->__PVT__ram__DOT__ram_ff1
                                          : vlSelf->__PVT__ram__DOT__ram_ff0)));
    __PVT__wr_count_next_no_wr_popping = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_wr_count))
                                                 : (IData)(vlSelf->__PVT__ro_wr_count)));
    __PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                           | (IData)(vlSelf->__PVT__wr_reserving));
    vlSelf->__PVT__rd_req_next_o = ((IData)(__PVT__ro_rd_pvld_p) 
                                    | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                   ? (IData)(__PVT__ro_rd_pvld_p)
                                   : (IData)(vlSelf->__PVT__ro_rd_pvld_int_o));
    vlSelf->__PVT__rd_popping = ((IData)(__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                                       & (~ (IData)(vlSelf->__PVT__ro_rd_prdy_d_o)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__ro_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (7U & (IData)(vlSelf->__PVT__ro_rd_count_p));
            vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__ro_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (7U & 
                                              ((IData)(vlSelf->__PVT__ro_rd_count_p) 
                                               - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__ro_wr_count) 
                                                  - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__ro_rd_count_p))
                                                 : (IData)(vlSelf->__PVT__ro_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (7U & (IData)(__PVT__wr_count_next_no_wr_popping));
    }
}
