// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__4(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__4\n"); );
    // Body
    if (vlSelf->__PVT__bpt2arb_cmd_accept) {
        vlSelf->__PVT__out_addr = ((0U == (IData)(vlSelf->__PVT__req_count))
                                    ? ((IData)(8U) 
                                       + (IData)(vlSelf->__PVT__in_cmd_vld_pd))
                                    : ((IData)(8U) 
                                       + vlSelf->__PVT__out_addr));
    }
    if (((IData)(vlSelf->__PVT__u_dfifo__DOT__rd_req_next) 
         & ((~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
            | (IData)(vlSelf->__PVT__dfifo_rd_prdy)))) {
        vlSelf->__PVT__dfifo_rd_data = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o)
                                         ? vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pd_p
                                         : ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o)
                                             ? 0ULL
                                             : vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pd_o));
    } else if (((IData)(vlSelf->__PVT__u_dfifo__DOT__rd_req_next) 
                & ((~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelf->__PVT__dfifo_rd_prdy)))) {
        vlSelf->__PVT__dfifo_rd_data = 0ULL;
    }
    if (((IData)(vlSelf->__PVT__ipipe_cmd_rdy) & (IData)(vlSelf->__PVT__ipipe_cmd_vld))) {
        vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_pd 
            = (0x3fffffffffffULL & (((QData)((IData)(
                                                     vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[0U]))));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__10(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__10\n"); );
    // Body
    vlSelf->__PVT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__u_dfifo__DOT__rd_popping)) 
                    | ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in) 
                       & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_count_next_is_1))) 
                  | ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int) 
                     & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__19(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__19\n"); );
    // Body
    if ((((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int) 
          & (IData)(vlSelf->__PVT__u_dfifo__DOT__rd_req_next_o)) 
         & (IData)(vlSelf->__PVT__u_dfifo__DOT__rd_popping))) {
        vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pd_o 
            = vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pd_p;
    } else if ((((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int) 
                 & (IData)(vlSelf->__PVT__u_dfifo__DOT__rd_req_next_o)) 
                & (IData)(vlSelf->__PVT__u_dfifo__DOT__rd_popping))) {
        vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pd_o = 0ULL;
    }
    if (((IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving) 
         & ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count) 
            | (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__rd_popping))))) {
        vlSelf->__PVT__u_dfifo__DOT__ram__DOT__ram_ff0 
            = vlSelf->__PVT__u_dfifo__DOT__ram__DOT__di_d;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__34(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__34\n"); );
    // Init
    CData/*0:0*/ __PVT__u_dfifo__DOT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__u_dfifo__DOT__dfifo_rd_pvld_p;
    // Body
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o 
        = (1U & (~ (((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
                     & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d)) 
                    & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d)))));
    vlSelf->__PVT__u_dfifo__DOT__wr_busy_in_int = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in) 
                                                   & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_busy_int));
    vlSelf->__PVT__u_dfifo__DOT__wr_reserving = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in) 
                                                 & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_busy_int)));
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pd_p = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count)
                                                   ? vlSelf->__PVT__u_dfifo__DOT__ram__DOT__ram_ff0
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count)
                                                    ? 0ULL
                                                    : vlSelf->__PVT__u_dfifo__DOT__ram__DOT__di_d));
    __PVT__u_dfifo__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count))
                  : (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count)));
    __PVT__u_dfifo__DOT__dfifo_rd_pvld_p = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p) 
                                            | (IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving));
    vlSelf->__PVT__u_dfifo__DOT__rd_req_next_o = ((IData)(__PVT__u_dfifo__DOT__dfifo_rd_pvld_p) 
                                                  | ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
                                                     & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o))));
    vlSelf->__PVT__u_dfifo__DOT__rd_req_next = ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o)
                                                 ? (IData)(__PVT__u_dfifo__DOT__dfifo_rd_pvld_p)
                                                 : (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o));
    vlSelf->__PVT__u_dfifo__DOT__rd_popping = ((IData)(__PVT__u_dfifo__DOT__dfifo_rd_pvld_p) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
                                                   & (~ (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d_o)))));
    vlSelf->__PVT__u_dfifo__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelf->__PVT__u_dfifo__DOT__rd_popping)) 
           & (IData)(__PVT__u_dfifo__DOT__wr_count_next_no_wr_popping));
    if (vlSelf->__PVT__u_dfifo__DOT__rd_popping) {
        if (vlSelf->__PVT__u_dfifo__DOT__wr_reserving) {
            vlSelf->__PVT__u_dfifo__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p));
            vlSelf->__PVT__u_dfifo__DOT__wr_count_next 
                = (1U & (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count));
        } else {
            vlSelf->__PVT__u_dfifo__DOT__rd_count_p_next 
                = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p) 
                         - (IData)(1U)));
            vlSelf->__PVT__u_dfifo__DOT__wr_count_next 
                = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__u_dfifo__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelf->__PVT__u_dfifo__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p))
                      : (IData)(vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p)));
        vlSelf->__PVT__u_dfifo__DOT__wr_count_next 
            = (1U & (IData)(__PVT__u_dfifo__DOT__wr_count_next_no_wr_popping));
    }
}
