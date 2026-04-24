// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rws_16x64.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__33(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__33\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__49(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__49\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_00) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_00)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__65(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__65\n"); );
    // Body
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
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__193(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__193\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_00))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_00))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__210(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__210\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_00))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_00))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__241(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__241\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_00));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__257(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__257\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_00));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__2385(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__2385\n"); );
    // Init
    QData/*63:0*/ __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__RD;
    // Body
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffffffffffeULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | (IData)((IData)((1U & ((~ ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                            | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                        & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffffffffffdULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 1U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 1U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 1U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffffffffffbULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 2U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 2U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 2U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffffffffff7ULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 3U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 3U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 3U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffffffffffefULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 4U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 4U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 4U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffffffffffdfULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 5U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 5U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 5U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffffffffffbfULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 6U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 6U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 6U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffffffffff7fULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 7U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 7U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 7U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffffffffeffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 8U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 8U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 8U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffffffffdffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 9U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 9U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 9U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffffffffbffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0xaU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0xaU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0xaU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffffffff7ffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0xbU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0xbU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0xbU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffffffffefffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0xcU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0xcU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0xcU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffffffffdfffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0xdU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0xdU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0xdU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffffffffbfffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0xeU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0xeU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0xeU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffffffff7fffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0xfU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0xfU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0xfU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffffffeffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x10U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x10U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x10U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffffffdffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x11U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x11U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x11U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffffffbffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x12U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x12U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x12U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffffff7ffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x13U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x13U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x13U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffffffefffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x14U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x14U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x14U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffffffdfffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x15U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x15U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x15U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffffffbfffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x16U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x16U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x16U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffffff7fffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x17U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x17U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x17U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffffeffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x18U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x18U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x18U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffffdffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x19U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x19U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x19U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffffbffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x1aU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x1aU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x1aU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffff7ffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x1bU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x1bU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x1bU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffffefffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x1cU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x1cU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x1cU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffffdfffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x1dU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x1dU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x1dU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffffbfffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x1eU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x1eU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x1eU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffff7fffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x1fU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x1fU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x1fU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffeffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x20U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x20U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x20U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffdffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x21U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x21U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x21U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffffbffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x22U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x22U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x22U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffff7ffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x23U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x23U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x23U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffefffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x24U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x24U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x24U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffdfffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x25U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x25U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x25U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffffbfffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x26U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x26U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x26U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffff7fffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x27U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x27U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x27U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffeffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x28U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x28U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x28U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffdffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x29U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x29U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x29U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffffbffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x2aU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x2aU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x2aU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffff7ffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x2bU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x2bU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x2bU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffefffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x2cU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x2cU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x2cU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffdfffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x2dU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x2dU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x2dU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffffbfffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x2eU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x2eU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x2eU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffff7fffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x2fU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x2fU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x2fU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffeffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x30U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x30U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x30U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffdffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x31U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x31U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x31U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfffbffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x32U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x32U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x32U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfff7ffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x33U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x33U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x33U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffefffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x34U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x34U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x34U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffdfffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x35U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x35U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x35U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xffbfffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x36U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x36U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x36U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xff7fffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x37U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x37U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x37U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfeffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x38U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x38U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x38U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfdffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x39U)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x39U)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x39U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfbffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x3aU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x3aU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x3aU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xf7ffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x3bU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x3bU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x3bU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xefffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x3cU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x3cU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x3cU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xdfffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x3dU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x3dU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x3dU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xbfffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((1U & ((~ ((IData)(
                                                     (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                      >> 0x3eU)) 
                                             | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                                     >> 0x3eU)) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))))))) 
                  << 0x3eU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0x7fffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
               | ((QData)((IData)((IData)((((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
                                             >> 0x3fU) 
                                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o))) 
                                           & (~ ((IData)(
                                                         (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
                                                          >> 0x3fU)) 
                                                 | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                                     == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat)) 
                                                    & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0)))))))) 
                  << 0x3fU));
    }
    __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__RD 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)
            ? 0ULL : ((0U != (0xffU & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd))
                       ? 0ULL : (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
                                 & (- (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ramDataOut 
        = __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__RD;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S)
                ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ramDataOut
                : 0ULL) : vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0);
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__50(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__50\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_01) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_01)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__194(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__194\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_01))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_01))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__212(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__212\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_01))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_01))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__242(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__242\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_01));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__258(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__258\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_01));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__51(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__51\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_02) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_02)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__195(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__195\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_02))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_02))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__214(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__214\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_02))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_02))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__243(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__243\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_02));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__259(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__259\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_02));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__52(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__52\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_03) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_03)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__196(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__196\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_03))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_03))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__216(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__216\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_03))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_03))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__244(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__244\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_03));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__260(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__260\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_03));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__53(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__53\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_04) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_04)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__197(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__197\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_04))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_04))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__218(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__218\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_04))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_04))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__245(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__245\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_04));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__261(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__261\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_04));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__54(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__54\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_05) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_05)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__198(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__198\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_05))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_05))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__220(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__220\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__246(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__246\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_05));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__262(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__262\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_05));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__55(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__55\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_06) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_06)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__199(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__199\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_06))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_06))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__222(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__222\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__247(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__247\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_06));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__263(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__263\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_06));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__56(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__56\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_07) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_07)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__200(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__200\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_07))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_07))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__224(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__224\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__248(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__248\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_07));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__264(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__264\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_07));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__57(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__57\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_08) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_08)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__201(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__201\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_08))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_08))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__226(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__226\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_08))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_08))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__249(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__249\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_08));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__265(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__265\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_08));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__58(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__58\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_09) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_09)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__202(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__202\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_09))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_09))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__228(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__228\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_09))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_09))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__250(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__250\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_09));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__266(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__266\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_09));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__59(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__59\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_10) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_10)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__203(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__203\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_10))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_10))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__230(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__230\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_10))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_10))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__251(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__251\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_10));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__267(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__267\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_10));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__60(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__60\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_11) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_11)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__204(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__204\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_11))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_11))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__232(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__232\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_11))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_11))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__252(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__252\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_11));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__268(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__268\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_11));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__61(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__61\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_12) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_12)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__205(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__205\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_12))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_12))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__234(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__234\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_12))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_12))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__253(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__253\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_12));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__269(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__269\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_12));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__62(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__62\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_13) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_13)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__206(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__206\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_13))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_13))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__236(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__236\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_13))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_13))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__254(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__254\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_13));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__270(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__270\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_13));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__63(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__63\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_14) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_14)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__207(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__207\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_14))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_14))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__238(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__238\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_14))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_14))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__255(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__255\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_14));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__271(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__271\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_14));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__64(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__64\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p)
            : ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
               & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_15) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_15)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__208(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__208\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_15))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_15))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__240(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__240\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0 
        = (0xfU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
                        ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q)
                            : 0U) : 0U) : (((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_15))) 
                                            & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__p0_wr_addr)) 
                                           | ((- (IData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_15))) 
                                              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__256(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__256\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_p0_re_15));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__272(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__272\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_15));
}
