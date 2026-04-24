// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rwsp_160x16__Fz2.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__8(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__8\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_enable) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_reserving)));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_popping) 
             & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r))) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync))) 
           | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)
               ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__access_en_r_1p)
               : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_ce_r0_1p))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__10(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__10\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__25(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__25\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_reserving));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core)));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RWSEL 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__27(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__27\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF 
        = vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0;
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WDQ_pr 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq)
                    : 0U) : 0U) : (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_ig__DOT__is_cube_end) 
                                    << 0xfU) | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_ig__DOT__dma_req_size)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__7(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__7\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_enable) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_reserving)));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_popping) 
             & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r))) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync))) 
           | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)
               ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__access_en_r_1p)
               : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_ce_r0_1p))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__9(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__9\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__26(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__26\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_reserving));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0)));
    }
    if (vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB)));
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WRDCLK 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_LATB)));
    } else {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WRDCLK = 0U;
    }
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                  >> 8U))) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core)));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RWSEL 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WE_FF) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__28(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__28\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF 
        = vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0;
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WDQ_pr 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq)
                    : 0U) : 0U) : (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_ig__DOT__is_cube_end) 
                                    << 0xfU) | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_ig__DOT__dma_req_size)));
}
