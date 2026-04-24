// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rws_16x64.h"

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_00))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_00))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_00;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__2(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__2\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_01))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_01))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_01;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__3(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__3\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_02))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_02))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_02;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__4(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__4\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_03))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_03))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_03;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__5(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__5\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_04))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_04))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_04;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__6(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__6\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_05))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_05))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_05;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__7(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__7\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_06))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_06))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_06;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__8(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__8\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_07))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_07))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_07;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__9(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__9\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_08))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_08))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_08;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__10(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__10\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_09))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_09))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_09;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__11(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__11\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_10))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_10))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_10;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__12(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__12\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_11))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_11))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_11;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__13(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__13\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_12))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_12))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_12;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__14(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__14\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_13))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_13))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_13;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__15(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__15\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_14))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_14))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_14;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__16(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__16\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__mbist_ramaccess_rst_ = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd));
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q));
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                    = (0xfU & 0U);
                vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
                = (0xfU & 0U);
            vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
            = (0xfU & (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_15))) 
                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                       | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_15))) 
                          & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_15;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}
