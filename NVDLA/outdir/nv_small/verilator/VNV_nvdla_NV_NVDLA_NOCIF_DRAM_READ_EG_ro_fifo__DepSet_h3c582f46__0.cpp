// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__22(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__22\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rd_req_next) & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                                                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_rd0_prdy)))) {
        vlSelf->ro_rd_pd = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                             ? vlSelf->__PVT__ro_rd_pd_p
                             : ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                 ? 0ULL : vlSelf->__PVT__ro_rd_pd_o));
    } else if (((IData)(vlSelf->__PVT__rd_req_next) 
                & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_rd0_prdy)))) {
        vlSelf->ro_rd_pd = 0ULL;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__36(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__36\n"); );
    // Body
    vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_rd0_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_rd0_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__ro_rd_pvld_int_d = vlSelf->__PVT__ro_rd_pvld_int;
    } else {
        vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        vlSelf->__PVT__ro_rd_pvld_int_d = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__50(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__50\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_wr0_pvld) 
                       & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                     & (IData)(vlSelf->__PVT__ro_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__64(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__64\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__78(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__78\n"); );
    // Body
    vlSelf->__PVT__ro_rd_prdy_d = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_rd0_prdy)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__99(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__99\n"); );
    // Body
    if ((((IData)(vlSelf->__PVT__ro_rd_pvld_int) & (IData)(vlSelf->__PVT__rd_req_next_o)) 
         & (IData)(vlSelf->__PVT__rd_popping))) {
        vlSelf->__PVT__ro_rd_pd_o = vlSelf->__PVT__ro_rd_pd_p;
    } else if ((((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                 & (IData)(vlSelf->__PVT__rd_req_next_o)) 
                & (IData)(vlSelf->__PVT__rd_popping))) {
        vlSelf->__PVT__ro_rd_pd_o = 0ULL;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (2U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff2 = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_pd0;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (1U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff1 = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_pd0;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (3U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff3 = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_pd0;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (0U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff0 = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_pd0;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__100(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__100\n"); );
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__ro_rd_adr = vlSelf->__PVT__rd_adr_next_popping;
        } else if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__ro_rd_adr = 0U;
        }
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__PVT__ro_wr_adr = (3U & ((IData)(1U) 
                                              + (IData)(vlSelf->__PVT__ro_wr_adr)));
        }
        vlSelf->__PVT__ro_rd_pvld_int_o = vlSelf->__PVT__rd_req_next_o;
        if (((IData)(vlSelf->__PVT__wr_reserving) ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__ro_wr_count = vlSelf->__PVT__wr_count_next;
        } else if (((IData)(vlSelf->__PVT__wr_reserving) 
                    ^ (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__ro_wr_count = 0U;
        }
        if (((IData)(vlSelf->__PVT__wr_reserving) | (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__ro_rd_count_p = vlSelf->__PVT__rd_count_p_next;
        } else if (((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping))) {
            vlSelf->__PVT__ro_rd_count_p = 0U;
        }
        vlSelf->__PVT__ro_wr_busy_int = vlSelf->__PVT__wr_count_next_is_4;
    } else {
        vlSelf->__PVT__ro_rd_adr = 0U;
        vlSelf->__PVT__ro_wr_adr = 0U;
        vlSelf->__PVT__ro_rd_pvld_int_o = 0U;
        vlSelf->__PVT__ro_wr_count = 0U;
        vlSelf->__PVT__ro_rd_count_p = 0U;
        vlSelf->__PVT__ro_wr_busy_int = 0U;
    }
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
    vlSelf->__Vcellinp__ram__ra = ((0U == (IData)(vlSelf->__PVT__ro_wr_count))
                                    ? 4U : (IData)(vlSelf->__PVT__ro_rd_adr));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__148(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__148\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
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
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_wr0_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__15(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__15\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rd_req_next) & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                                                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_rd1_prdy)))) {
        vlSelf->ro_rd_pd = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                             ? vlSelf->__PVT__ro_rd_pd_p
                             : ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                 ? 0ULL : vlSelf->__PVT__ro_rd_pd_o));
    } else if (((IData)(vlSelf->__PVT__rd_req_next) 
                & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_rd1_prdy)))) {
        vlSelf->ro_rd_pd = 0ULL;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__29(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__29\n"); );
    // Body
    vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_rd1_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_rd1_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__ro_rd_pvld_int_d = vlSelf->__PVT__ro_rd_pvld_int;
    } else {
        vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        vlSelf->__PVT__ro_rd_pvld_int_d = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__43(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__43\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_wr1_pvld) 
                       & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                     & (IData)(vlSelf->__PVT__ro_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__71(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__71\n"); );
    // Body
    vlSelf->__PVT__ro_rd_prdy_d = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_rd1_prdy)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__85(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__85\n"); );
    // Body
    if ((((IData)(vlSelf->__PVT__ro_rd_pvld_int) & (IData)(vlSelf->__PVT__rd_req_next_o)) 
         & (IData)(vlSelf->__PVT__rd_popping))) {
        vlSelf->__PVT__ro_rd_pd_o = vlSelf->__PVT__ro_rd_pd_p;
    } else if ((((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                 & (IData)(vlSelf->__PVT__rd_req_next_o)) 
                & (IData)(vlSelf->__PVT__rd_popping))) {
        vlSelf->__PVT__ro_rd_pd_o = 0ULL;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (2U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff2 = (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled));
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (1U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff1 = (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled));
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (3U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff3 = (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled));
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (0U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff0 = (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__141(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__141\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
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
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_wr1_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__23(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__23\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rd_req_next) & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                                                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_rd0_prdy)))) {
        vlSelf->ro_rd_pd = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                             ? vlSelf->__PVT__ro_rd_pd_p
                             : ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                 ? 0ULL : vlSelf->__PVT__ro_rd_pd_o));
    } else if (((IData)(vlSelf->__PVT__rd_req_next) 
                & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_rd0_prdy)))) {
        vlSelf->ro_rd_pd = 0ULL;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__37(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__37\n"); );
    // Body
    vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_rd0_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_rd0_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__ro_rd_pvld_int_d = vlSelf->__PVT__ro_rd_pvld_int;
    } else {
        vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        vlSelf->__PVT__ro_rd_pvld_int_d = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__51(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__51\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_wr0_pvld) 
                       & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                     & (IData)(vlSelf->__PVT__ro_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__79(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__79\n"); );
    // Body
    vlSelf->__PVT__ro_rd_prdy_d = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_rd0_prdy)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__149(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__149\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
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
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_wr0_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__16(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__16\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rd_req_next) & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                                                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_rd1_prdy)))) {
        vlSelf->ro_rd_pd = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                             ? vlSelf->__PVT__ro_rd_pd_p
                             : ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                 ? 0ULL : vlSelf->__PVT__ro_rd_pd_o));
    } else if (((IData)(vlSelf->__PVT__rd_req_next) 
                & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_rd1_prdy)))) {
        vlSelf->ro_rd_pd = 0ULL;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__30(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__30\n"); );
    // Body
    vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_rd1_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_rd1_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__ro_rd_pvld_int_d = vlSelf->__PVT__ro_rd_pvld_int;
    } else {
        vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        vlSelf->__PVT__ro_rd_pvld_int_d = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__44(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__44\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_wr1_pvld) 
                       & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                     & (IData)(vlSelf->__PVT__ro_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__72(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__72\n"); );
    // Body
    vlSelf->__PVT__ro_rd_prdy_d = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_rd1_prdy)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__142(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__142\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
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
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_wr1_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__24(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__24\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rd_req_next) & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                                                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_rd0_prdy)))) {
        vlSelf->ro_rd_pd = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                             ? vlSelf->__PVT__ro_rd_pd_p
                             : ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                 ? 0ULL : vlSelf->__PVT__ro_rd_pd_o));
    } else if (((IData)(vlSelf->__PVT__rd_req_next) 
                & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_rd0_prdy)))) {
        vlSelf->ro_rd_pd = 0ULL;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__38(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__38\n"); );
    // Body
    vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_rd0_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_rd0_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__ro_rd_pvld_int_d = vlSelf->__PVT__ro_rd_pvld_int;
    } else {
        vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        vlSelf->__PVT__ro_rd_pvld_int_d = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__52(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__52\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_wr0_pvld) 
                       & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                     & (IData)(vlSelf->__PVT__ro_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__80(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__80\n"); );
    // Body
    vlSelf->__PVT__ro_rd_prdy_d = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_rd0_prdy)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__150(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__150\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
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
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_wr0_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__17(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__17\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rd_req_next) & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                                                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_rd1_prdy)))) {
        vlSelf->ro_rd_pd = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                             ? vlSelf->__PVT__ro_rd_pd_p
                             : ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                 ? 0ULL : vlSelf->__PVT__ro_rd_pd_o));
    } else if (((IData)(vlSelf->__PVT__rd_req_next) 
                & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_rd1_prdy)))) {
        vlSelf->ro_rd_pd = 0ULL;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__31(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__31\n"); );
    // Body
    vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_rd1_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_rd1_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__ro_rd_pvld_int_d = vlSelf->__PVT__ro_rd_pvld_int;
    } else {
        vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        vlSelf->__PVT__ro_rd_pvld_int_d = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__45(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__45\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_wr1_pvld) 
                       & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                     & (IData)(vlSelf->__PVT__ro_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__73(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__73\n"); );
    // Body
    vlSelf->__PVT__ro_rd_prdy_d = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_rd1_prdy)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__143(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__143\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
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
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_wr1_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__25(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__25\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rd_req_next) & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                                                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_rd0_prdy)))) {
        vlSelf->ro_rd_pd = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                             ? vlSelf->__PVT__ro_rd_pd_p
                             : ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                 ? 0ULL : vlSelf->__PVT__ro_rd_pd_o));
    } else if (((IData)(vlSelf->__PVT__rd_req_next) 
                & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_rd0_prdy)))) {
        vlSelf->ro_rd_pd = 0ULL;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__39(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__39\n"); );
    // Body
    vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_rd0_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_rd0_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__ro_rd_pvld_int_d = vlSelf->__PVT__ro_rd_pvld_int;
    } else {
        vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        vlSelf->__PVT__ro_rd_pvld_int_d = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__53(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__53\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_wr0_pvld) 
                       & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                     & (IData)(vlSelf->__PVT__ro_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__81(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__81\n"); );
    // Body
    vlSelf->__PVT__ro_rd_prdy_d = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_rd0_prdy)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__151(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__151\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
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
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_wr0_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__18(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__18\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rd_req_next) & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                                                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_rd1_prdy)))) {
        vlSelf->ro_rd_pd = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                             ? vlSelf->__PVT__ro_rd_pd_p
                             : ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                 ? 0ULL : vlSelf->__PVT__ro_rd_pd_o));
    } else if (((IData)(vlSelf->__PVT__rd_req_next) 
                & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_rd1_prdy)))) {
        vlSelf->ro_rd_pd = 0ULL;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__32(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__32\n"); );
    // Body
    vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_rd1_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_rd1_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__ro_rd_pvld_int_d = vlSelf->__PVT__ro_rd_pvld_int;
    } else {
        vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        vlSelf->__PVT__ro_rd_pvld_int_d = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__46(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__46\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_wr1_pvld) 
                       & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                     & (IData)(vlSelf->__PVT__ro_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__74(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__74\n"); );
    // Body
    vlSelf->__PVT__ro_rd_prdy_d = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_rd1_prdy)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__144(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__144\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
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
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_wr1_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__26(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__26\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rd_req_next) & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                                                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_rd0_prdy)))) {
        vlSelf->ro_rd_pd = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                             ? vlSelf->__PVT__ro_rd_pd_p
                             : ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                 ? 0ULL : vlSelf->__PVT__ro_rd_pd_o));
    } else if (((IData)(vlSelf->__PVT__rd_req_next) 
                & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_rd0_prdy)))) {
        vlSelf->ro_rd_pd = 0ULL;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__40(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__40\n"); );
    // Body
    vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_rd0_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_rd0_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__ro_rd_pvld_int_d = vlSelf->__PVT__ro_rd_pvld_int;
    } else {
        vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        vlSelf->__PVT__ro_rd_pvld_int_d = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__54(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__54\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_wr0_pvld) 
                       & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                     & (IData)(vlSelf->__PVT__ro_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__82(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__82\n"); );
    // Body
    vlSelf->__PVT__ro_rd_prdy_d = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_rd0_prdy)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__152(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__152\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
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
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_wr0_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__19(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__19\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rd_req_next) & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                                                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_rd1_prdy)))) {
        vlSelf->ro_rd_pd = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                             ? vlSelf->__PVT__ro_rd_pd_p
                             : ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                 ? 0ULL : vlSelf->__PVT__ro_rd_pd_o));
    } else if (((IData)(vlSelf->__PVT__rd_req_next) 
                & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_rd1_prdy)))) {
        vlSelf->ro_rd_pd = 0ULL;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__33(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__33\n"); );
    // Body
    vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_rd1_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_rd1_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__ro_rd_pvld_int_d = vlSelf->__PVT__ro_rd_pvld_int;
    } else {
        vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        vlSelf->__PVT__ro_rd_pvld_int_d = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__47(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__47\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_wr1_pvld) 
                       & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                     & (IData)(vlSelf->__PVT__ro_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__75(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__75\n"); );
    // Body
    vlSelf->__PVT__ro_rd_prdy_d = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_rd1_prdy)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__145(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__145\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
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
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_wr1_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__27(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__27\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rd_req_next) & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                                                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_rd0_prdy)))) {
        vlSelf->ro_rd_pd = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                             ? vlSelf->__PVT__ro_rd_pd_p
                             : ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                 ? 0ULL : vlSelf->__PVT__ro_rd_pd_o));
    } else if (((IData)(vlSelf->__PVT__rd_req_next) 
                & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_rd0_prdy)))) {
        vlSelf->ro_rd_pd = 0ULL;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__41(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__41\n"); );
    // Body
    vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_rd0_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_rd0_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__ro_rd_pvld_int_d = vlSelf->__PVT__ro_rd_pvld_int;
    } else {
        vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        vlSelf->__PVT__ro_rd_pvld_int_d = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__55(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__55\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_wr0_pvld) 
                       & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                     & (IData)(vlSelf->__PVT__ro_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__83(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__83\n"); );
    // Body
    vlSelf->__PVT__ro_rd_prdy_d = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_rd0_prdy)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__153(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__153\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
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
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_wr0_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__20(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__20\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rd_req_next) & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                                                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_rd1_prdy)))) {
        vlSelf->ro_rd_pd = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                             ? vlSelf->__PVT__ro_rd_pd_p
                             : ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                 ? 0ULL : vlSelf->__PVT__ro_rd_pd_o));
    } else if (((IData)(vlSelf->__PVT__rd_req_next) 
                & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_rd1_prdy)))) {
        vlSelf->ro_rd_pd = 0ULL;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__34(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__34\n"); );
    // Body
    vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_rd1_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_rd1_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__ro_rd_pvld_int_d = vlSelf->__PVT__ro_rd_pvld_int;
    } else {
        vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        vlSelf->__PVT__ro_rd_pvld_int_d = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__48(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__48\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_wr1_pvld) 
                       & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                     & (IData)(vlSelf->__PVT__ro_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__76(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__76\n"); );
    // Body
    vlSelf->__PVT__ro_rd_prdy_d = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_rd1_prdy)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__146(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__146\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
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
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_wr1_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__28(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__28\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rd_req_next) & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                                                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_rd0_prdy)))) {
        vlSelf->ro_rd_pd = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                             ? vlSelf->__PVT__ro_rd_pd_p
                             : ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                 ? 0ULL : vlSelf->__PVT__ro_rd_pd_o));
    } else if (((IData)(vlSelf->__PVT__rd_req_next) 
                & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_rd0_prdy)))) {
        vlSelf->ro_rd_pd = 0ULL;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__42(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__42\n"); );
    // Body
    vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_rd0_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_rd0_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__ro_rd_pvld_int_d = vlSelf->__PVT__ro_rd_pvld_int;
    } else {
        vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        vlSelf->__PVT__ro_rd_pvld_int_d = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__56(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__56\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_wr0_pvld) 
                       & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                     & (IData)(vlSelf->__PVT__ro_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__84(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__84\n"); );
    // Body
    vlSelf->__PVT__ro_rd_prdy_d = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_rd0_prdy)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__154(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__154\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
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
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_wr0_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
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

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__21(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__21\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rd_req_next) & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                                                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_rd1_prdy)))) {
        vlSelf->ro_rd_pd = ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                             ? vlSelf->__PVT__ro_rd_pd_p
                             : ((IData)(vlSelf->__PVT__ro_rd_prdy_d_o)
                                 ? 0ULL : vlSelf->__PVT__ro_rd_pd_o));
    } else if (((IData)(vlSelf->__PVT__rd_req_next) 
                & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_rd1_prdy)))) {
        vlSelf->ro_rd_pd = 0ULL;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__35(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__35\n"); );
    // Body
    vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__ro_rd_pvld_int;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_rd1_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = vlSelf->__PVT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__ro_rd_pvld_int)) 
                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_rd1_prdy)))) {
            vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        }
        vlSelf->__PVT__ro_rd_pvld_int_d = vlSelf->__PVT__ro_rd_pvld_int;
    } else {
        vlSelf->__Vdly__ro_rd_pvld_int = 0U;
        vlSelf->__PVT__ro_rd_pvld_int_d = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__49(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__49\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & ((((((IData)(vlSelf->__PVT__wr_reserving) 
                     | (IData)(vlSelf->__PVT__rd_popping)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_wr1_pvld) 
                       & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                   | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                      != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                     & (IData)(vlSelf->__PVT__ro_rd_prdy_d))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int_o) 
                    & (IData)(vlSelf->__PVT__ro_rd_prdy_d_o))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__77(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__77\n"); );
    // Body
    vlSelf->__PVT__ro_rd_prdy_d = (1U & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn)) 
                                         | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_rd1_prdy)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__147(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__147\n"); );
    // Init
    CData/*2:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*0:0*/ __PVT__ro_rd_pvld_p;
    // Body
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
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_wr1_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
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
