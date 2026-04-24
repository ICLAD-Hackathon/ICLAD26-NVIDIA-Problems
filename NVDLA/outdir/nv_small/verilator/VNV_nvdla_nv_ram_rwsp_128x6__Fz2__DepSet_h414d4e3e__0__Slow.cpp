// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rwsp_128x6__Fz2.h"

VL_ATTR_COLD void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__1(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__1\n"); );
    // Body
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq 
        = ((0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
               << 5U) | ((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                         << 4U)));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq 
        = ((0x30U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_reserving));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat 
            = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0;
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Di_w0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                        ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq)
                        : 0U) : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_data_in));
    }
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__2(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__2\n"); );
    // Body
    vlSelf->__PVT__mbist_Ra_r0 = 0U;
    vlSelf->__PVT__mbist_Wa_w0 = 0U;
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq 
        = ((0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
               << 5U) | ((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                         << 4U)));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq 
        = ((0x30U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_reserving));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat 
            = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0;
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Di_w0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                        ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq)
                        : 0U) : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_data_in));
    }
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat));
}
