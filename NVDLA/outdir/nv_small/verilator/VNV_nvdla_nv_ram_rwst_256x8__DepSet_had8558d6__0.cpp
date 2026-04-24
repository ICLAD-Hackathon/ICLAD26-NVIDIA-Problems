// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rwst_256x8.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__8(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__8\n"); );
    // Init
    CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__RD;
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_o_pd)));
    __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__RD 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)
            ? 0U : ((0U != (0xffU & vlSymsp->TOP.nvdla_pwrbus_ram_o_pd))
                     ? 0U : ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
                             & (- (IData)((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o))))))));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ramDataOut 
        = __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__RD;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__10(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__10\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru_en 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru) 
             | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru_en) 
                & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_enable)))) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync))) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__12(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__12\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_enable) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_enable)));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru) 
           | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
               ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__access_en_r_1p)
               : ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__mbist_ce_r0_1p))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__14(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__14\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__36(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__36\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_enable));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__41(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__41\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru 
        = ((((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_adr) 
               == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_adr)) 
              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_enable)) 
             & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_enable)) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync))) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__43(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__43\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_enable));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__9(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__9\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru_en 
        = ((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru) 
             | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru_en) 
                & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_enable)))) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync))) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__11(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__11\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_enable) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_enable)));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru) 
           | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
               ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__access_en_r_1p)
               : ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__mbist_ce_r0_1p))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__35(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__35\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_enable));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__42(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__42\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru 
        = ((((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_adr) 
               == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_adr)) 
              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_enable)) 
             & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_enable)) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync))) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__44(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__44\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_enable));
}
