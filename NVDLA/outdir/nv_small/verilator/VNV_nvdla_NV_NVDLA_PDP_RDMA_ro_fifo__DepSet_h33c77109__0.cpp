// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__19(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__19\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__27(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__27\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__nvdla_op_gated_clk) 
                                            & (IData)(vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__37(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__37\n"); );
    // Body
    vlSelf->__Vdly__ro_wr_adr = vlSelf->__PVT__ro_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__ro_rd_adr = vlSelf->__PVT__rd_adr_next_popping;
        } else if (vlSelf->__PVT__rd_popping) {
            vlSelf->__PVT__ro_rd_adr = 0U;
        }
        if (vlSelf->__PVT__wr_reserving) {
            vlSelf->__Vdly__ro_wr_adr = (3U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__ro_wr_adr)));
        }
        vlSelf->__PVT__ro_rd_pvld_int = vlSelf->__PVT__rd_req_next;
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
        vlSelf->__Vdly__ro_wr_adr = 0U;
        vlSelf->__PVT__ro_rd_pvld_int = 0U;
        vlSelf->__PVT__ro_wr_count = 0U;
        vlSelf->__PVT__ro_rd_count_p = 0U;
        vlSelf->__PVT__ro_wr_busy_int = 0U;
    }
    vlSelf->__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__ro_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__38(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__38\n"); );
    // Body
    if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = (0xffU & ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                   ? 0U
                                                   : 
                                                  vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U]))
                                      : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff3)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff2))
                                          : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff1)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff0)))));
    } else if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = 0U;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (3U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff3 = (0xffU & 
                                            vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U]);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (2U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff2 = (0xffU & 
                                            vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U]);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (1U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff1 = (0xffU & 
                                            vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U]);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (0U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff0 = (0xffU & 
                                            vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U]);
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__57(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__57\n"); );
    // Body
    vlSelf->__PVT__wr_reserving = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                                   & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)));
    vlSelf->__PVT__wr_count_next_no_wr_popping = (7U 
                                                  & ((IData)(vlSelf->__PVT__wr_reserving)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__ro_wr_count))
                                                      : (IData)(vlSelf->__PVT__ro_wr_count)));
    vlSelf->__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelf->__PVT__ro_rd_count_p)) 
                                   | (IData)(vlSelf->__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__65(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__65\n"); );
    // Body
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
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
        vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__20(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__20\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__40(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__40\n"); );
    // Body
    if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = (0xffU & ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                   ? 0U
                                                   : 
                                                  ((vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                                      >> 8U))))
                                      : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff3)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff2))
                                          : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff1)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff0)))));
    } else if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = 0U;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (3U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff3 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                             >> 8U));
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (2U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff2 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                             >> 8U));
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (1U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff1 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                             >> 8U));
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (0U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff0 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                             >> 8U));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__66(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__66\n"); );
    // Body
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
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
        vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__21(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__21\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro2_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__42(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__42\n"); );
    // Body
    if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = (0xffU & ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                   ? 0U
                                                   : 
                                                  ((vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                                      >> 0x10U))))
                                      : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff3)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff2))
                                          : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff1)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff0)))));
    } else if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = 0U;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (3U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff3 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                             >> 0x10U));
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (2U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff2 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                             >> 0x10U));
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (1U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff1 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                             >> 0x10U));
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (0U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff0 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                             >> 0x10U));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__67(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__67\n"); );
    // Body
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro2_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro2_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
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
        vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__22(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__22\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro3_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__44(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__44\n"); );
    // Body
    if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = (0xffU & ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                   ? 0U
                                                   : 
                                                  ((vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                                      >> 0x18U))))
                                      : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff3)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff2))
                                          : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff1)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff0)))));
    } else if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = 0U;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (3U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff3 = (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                            >> 0x18U);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (2U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff2 = (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                            >> 0x18U);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (1U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff1 = (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                            >> 0x18U);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (0U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff0 = (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[0U] 
                                            >> 0x18U);
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__68(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__68\n"); );
    // Body
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro3_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro3_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
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
        vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__23(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__23\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro4_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__46(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__46\n"); );
    // Body
    if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = (0xffU & ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                   ? 0U
                                                   : 
                                                  vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U]))
                                      : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff3)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff2))
                                          : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff1)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff0)))));
    } else if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = 0U;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (3U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff3 = (0xffU & 
                                            vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U]);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (2U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff2 = (0xffU & 
                                            vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U]);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (1U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff1 = (0xffU & 
                                            vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U]);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (0U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff0 = (0xffU & 
                                            vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U]);
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__69(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__69\n"); );
    // Body
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro4_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro4_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
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
        vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__24(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__24\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro5_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__48(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__48\n"); );
    // Body
    if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = (0xffU & ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                   ? 0U
                                                   : 
                                                  ((vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                                      >> 8U))))
                                      : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff3)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff2))
                                          : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff1)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff0)))));
    } else if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = 0U;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (3U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff3 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                             >> 8U));
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (2U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff2 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                             >> 8U));
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (1U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff1 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                             >> 8U));
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (0U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff0 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                             >> 8U));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__70(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__70\n"); );
    // Body
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro5_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro5_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
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
        vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__17(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__17\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro6_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__34(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__34\n"); );
    // Body
    if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = (0xffU & ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                   ? 0U
                                                   : 
                                                  ((vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                                      >> 0x10U))))
                                      : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff3)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff2))
                                          : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff1)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff0)))));
    } else if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = 0U;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (3U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff3 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                             >> 0x10U));
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (2U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff2 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                             >> 0x10U));
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (1U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff1 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                             >> 0x10U));
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (0U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff0 = (0xffU & 
                                            (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                             >> 0x10U));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__71(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__71\n"); );
    // Body
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro6_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro6_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
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
        vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__18(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__18\n"); );
    // Body
    vlSelf->__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((((IData)(vlSelf->__PVT__wr_reserving) 
                    | (IData)(vlSelf->__PVT__rd_popping)) 
                   | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld) 
                      & (~ (IData)(vlSelf->__PVT__ro_wr_busy_int)))) 
                  | ((IData)(vlSelf->__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelf->__PVT__wr_count_next_is_4))) 
                 | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro7_rd_prdy))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__36(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__36\n"); );
    // Body
    if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = (0xffU & ((4U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                      ? ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->__Vcellinp__ram__ra))
                                                   ? 0U
                                                   : 
                                                  ((vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                                      >> 0x18U))))
                                      : ((2U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                          ? ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff3)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff2))
                                          : ((1U & (IData)(vlSelf->__Vcellinp__ram__ra))
                                              ? (IData)(vlSelf->__PVT__ram__DOT__ram_ff1)
                                              : (IData)(vlSelf->__PVT__ram__DOT__ram_ff0)))));
    } else if (vlSelf->__PVT__rd_popping) {
        vlSelf->ro_rd_pd = 0U;
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (3U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff3 = (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                            >> 0x18U);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (2U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff2 = (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                            >> 0x18U);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (1U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff1 = (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                            >> 0x18U);
    }
    if (((IData)(vlSelf->__PVT__ram_we) & (0U == (IData)(vlSelf->__PVT__ro_wr_adr)))) {
        vlSelf->__PVT__ram__DOT__ram_ff0 = (vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0.Q[1U] 
                                            >> 0x18U);
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__72(VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__72\n"); );
    // Body
    vlSelf->__PVT__rd_req_next = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                  | ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                     & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro7_rd_prdy))));
    vlSelf->__PVT__rd_popping = ((IData)(vlSelf->__PVT__ro_rd_pvld_p) 
                                 & (~ ((IData)(vlSelf->__PVT__ro_rd_pvld_int) 
                                       & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__ro7_rd_prdy)))));
    vlSelf->__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelf->__PVT__rd_popping)) 
                                         & (4U == (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping)));
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
        vlSelf->__PVT__wr_count_next = (7U & (IData)(vlSelf->__PVT__wr_count_next_no_wr_popping));
    }
}
