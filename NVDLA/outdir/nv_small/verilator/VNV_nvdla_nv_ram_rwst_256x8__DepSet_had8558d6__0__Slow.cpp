// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rwst_256x8.h"

VL_ATTR_COLD void VNV_nvdla_nv_ram_rwst_256x8___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__1(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__1\n"); );
    // Init
    CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__RD;
    // Body
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_o_pd)));
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
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__RD 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)
            ? 0U : ((0U != (0xffU & vlSymsp->TOP.nvdla_pwrbus_ram_o_pd))
                     ? 0U : ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
                             & (- (IData)((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o))))))));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)));
    if (vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_enable;
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_enable;
    }
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ramDataOut 
        = __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__RD;
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clk_w_iddq)))) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__we_lat 
            = vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0;
    }
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clk_w_iddq) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__we_lat));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rwst_256x8___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__2(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__2\n"); );
    // Init
    CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__RD;
    // Body
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_o_pd)));
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
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__RD 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)
            ? 0U : ((0U != (0xffU & vlSymsp->TOP.nvdla_pwrbus_ram_o_pd))
                     ? 0U : ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
                             & (- (IData)((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o))))))));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)));
    if (vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__re_q))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__we_q))));
    } else {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_enable;
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_enable;
    }
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ramDataOut 
        = __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__RD;
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clk_w_iddq)))) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__we_lat 
            = vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0;
    }
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clk_w_iddq) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__we_lat));
}
