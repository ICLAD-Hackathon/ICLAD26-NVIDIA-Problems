// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__16(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__16\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo0_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_8))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_rdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__24(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__24\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__39(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__39\n"); );
    // Body
    vlSelf->__Vdly__dat_fifo_wr_adr = vlSelf->__PVT__dat_fifo_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__dat_fifo_rd_adr = vlSelf->__PVT__rd_adr_next_popping;
        } else if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__dat_fifo_rd_adr = 0U;
        }
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__Vdly__dat_fifo_wr_adr = (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__dat_fifo_wr_adr)));
        }
        if (((IData)(vlSelf->__PVT__wr_reserving) ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__dat_fifo_wr_count = vlSelf->__PVT__wr_count_next;
        } else if (((IData)(vlSelf->__PVT__wr_reserving) 
                    ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__dat_fifo_wr_count = 0U;
        }
        if (((IData)(vlSelf->__PVT__wr_reserving) | (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__dat_fifo_rd_count_p = vlSelf->__PVT__rd_count_p_next;
        } else if (((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__dat_fifo_rd_count_p = 0U;
        }
        vlSelf->__PVT__dat_fifo_wr_busy_int = vlSelf->__PVT__wr_count_next_is_8;
        vlSelf->__PVT__dat_fifo_rd_pvld_int = vlSelf->__PVT__rd_req_next;
    } else {
        vlSelf->__PVT__dat_fifo_rd_adr = 0U;
        vlSelf->__Vdly__dat_fifo_wr_adr = 0U;
        vlSelf->__PVT__dat_fifo_wr_count = 0U;
        vlSelf->__PVT__dat_fifo_rd_count_p = 0U;
        vlSelf->__PVT__dat_fifo_wr_busy_int = 0U;
        vlSelf->__PVT__dat_fifo_rd_pvld_int = 0U;
    }
    vlSelf->__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__dat_fifo_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__40(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__40\n"); );
    // Body
    if (vlSelf->__PVT__rd_popping) {
        vlSelf->dat_fifo_rd_pd = (0xffU & ((8U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                            ? ((4U 
                                                & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                     ? 0U
                                                     : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd)))
                                            : ((4U 
                                                & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                     ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff7)
                                                     : (IData)(vlSelf->__PVT__ram__DOT__ram_ff6))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                     ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff5)
                                                     : (IData)(vlSelf->__PVT__ram__DOT__ram_ff4)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                     ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff3)
                                                     : (IData)(vlSelf->__PVT__ram__DOT__ram_ff2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                     ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff1)
                                                     : (IData)(vlSelf->__PVT__ram__DOT__ram_ff0))))));
    } else if (vlSelf->__PVT__rd_popping) {
        vlSelf->dat_fifo_rd_pd = 0U;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (7U == (IData)(vlSelf->__PVT__dat_fifo_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff7 = (0xffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (6U == (IData)(vlSelf->__PVT__dat_fifo_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff6 = (0xffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (5U == (IData)(vlSelf->__PVT__dat_fifo_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff5 = (0xffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (4U == (IData)(vlSelf->__PVT__dat_fifo_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff4 = (0xffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (3U == (IData)(vlSelf->__PVT__dat_fifo_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff3 = (0xffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (2U == (IData)(vlSelf->__PVT__dat_fifo_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff2 = (0xffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (1U == (IData)(vlSelf->__PVT__dat_fifo_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff1 = (0xffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (0U == (IData)(vlSelf->__PVT__dat_fifo_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff0 = (0xffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__49(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__49\n"); );
    // Body
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
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__57(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__57\n"); );
    // Body
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__9(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__9\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo1_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_8))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo1_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__50(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__50\n"); );
    // Body
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
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__58(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__58\n"); );
    // Body
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__10(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__10\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo2_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_8))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo2_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__51(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__51\n"); );
    // Body
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
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__59(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__59\n"); );
    // Body
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__11(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__11\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo3_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_8))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo3_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__52(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__52\n"); );
    // Body
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
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__60(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__60\n"); );
    // Body
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__12(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__12\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo4_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_8))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo4_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__53(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__53\n"); );
    // Body
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
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__61(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__61\n"); );
    // Body
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__13(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__13\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo5_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_8))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo5_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__54(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__54\n"); );
    // Body
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
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__62(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__62\n"); );
    // Body
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__14(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__14\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo6_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_8))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo6_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__55(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__55\n"); );
    // Body
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
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__63(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__63\n"); );
    // Body
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__15(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__15\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo7_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_8))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo7_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__56(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__56\n"); );
    // Body
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
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__64(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__64\n"); );
    // Body
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
