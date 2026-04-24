// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__9(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__9\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo0_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__17(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__17\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_wdma) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__25(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__25\n"); );
    // Body
    vlSelf->__Vdly__dat_fifo_wr_adr = vlSelf->__PVT__dat_fifo_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__dat_fifo_rd_adr = vlSelf->__PVT__rd_adr_next_popping;
        } else if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__dat_fifo_rd_adr = 0U;
        }
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__Vdly__dat_fifo_wr_adr = (3U & 
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
        vlSelf->__PVT__dat_fifo_wr_busy_int = vlSelf->__PVT__wr_count_next_is_4;
        vlSelf->__PVT__dat_fifo_rd_pvld_int = vlSelf->__PVT__rd_req_next;
    } else {
        vlSelf->__PVT__dat_fifo_rd_adr = 0U;
        vlSelf->__Vdly__dat_fifo_wr_adr = 0U;
        vlSelf->__PVT__dat_fifo_wr_count = 0U;
        vlSelf->__PVT__dat_fifo_rd_count_p = 0U;
        vlSelf->__PVT__dat_fifo_wr_busy_int = 0U;
        vlSelf->__PVT__dat_fifo_rd_pvld_int = 0U;
    }
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__dat_fifo_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__26(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__26\n"); );
    // Body
    if (vlSelf->__PVT__rd_popping) {
        vlSelf->dat_fifo_rd_pd = ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                   ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                ? 0U
                                                : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_skid_pdp_dp2wdma_pd)))
                                   : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                       ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                           ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff3)
                                           : (IData)(vlSelf->__PVT__ram__DOT__ram_ff2))
                                       : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                           ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff1)
                                           : (IData)(vlSelf->__PVT__ram__DOT__ram_ff0))));
    } else if (vlSelf->__PVT__rd_popping) {
        vlSelf->dat_fifo_rd_pd = 0U;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (3U == (IData)(vlSelf->__PVT__dat_fifo_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff3 = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_skid_pdp_dp2wdma_pd;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (2U == (IData)(vlSelf->__PVT__dat_fifo_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff2 = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_skid_pdp_dp2wdma_pd;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (1U == (IData)(vlSelf->__PVT__dat_fifo_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff1 = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_skid_pdp_dp2wdma_pd;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (0U == (IData)(vlSelf->__PVT__dat_fifo_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff0 = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_skid_pdp_dp2wdma_pd;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__41(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__41\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo0_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (7U 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__57(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__57\n"); );
    // Body
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
    vlSelf->__PVT__ram_we = ((IData)(vlSelf->__PVT__wr_reserving) 
                             & ((0U < (IData)(vlSelf->__PVT__dat_fifo_wr_count)) 
                                | (~ (IData)(vlSelf->__PVT__rd_popping))));
    if (vlSelf->__PVT__rd_popping) {
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__rd_count_p_next = (7U & (IData)(vlSelf->__PVT__dat_fifo_rd_count_p));
            vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__dat_fifo_wr_count));
        } else {
            vlSelf->__PVT__rd_count_p_next = (7U & 
                                              ((IData)(vlSelf->__PVT__dat_fifo_rd_count_p) 
                                               - (IData)(1U)));
            vlSelf->__PVT__wr_count_next = (7U & ((IData)(vlSelf->__PVT__dat_fifo_wr_count) 
                                                  - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__rd_count_p_next = (7U & ((IData)(vlSelf->__PVT__wr_reserving)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__dat_fifo_rd_count_p))
                                                 : (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)));
        vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo1__10(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo1__10\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo1_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo1__43(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo1__43\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo1_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (7U 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo2__11(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo2__11\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo2_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo2__45(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo2__45\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo2_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (7U 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo3__12(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo3__12\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo3_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo3__47(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo3__47\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo3_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (7U 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo4__13(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo4__13\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo4_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo4__49(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo4__49\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo4_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (7U 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo5__14(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo5__14\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo5_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo5__51(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo5__51\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo5_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (7U 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo6__15(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo6__15\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo6_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo6__53(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo6__53\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo6_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (7U 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo7__16(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo7__16\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo7_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__dat_fifo_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo7__55(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo7__55\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__dat0_fifo7_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__dat_fifo_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (7U 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__dat_fifo_wr_count))
                                                      : (IData)(vlSelf->__PVT__dat_fifo_wr_count)));
    vlSelf->__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__dat_fifo_rd_count_p)) 
                                         | (IData)(vlSelf->__PVT__wr_reserving));
}
