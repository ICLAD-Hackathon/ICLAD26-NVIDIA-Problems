// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7.h"
#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rws_256x64.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__577(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__577\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__1026(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__1026\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1__580(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1__580\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1__1028(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1__1028\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank0_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0__583(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0__583\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0__1030(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0__1030\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1__586(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1__586\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1__1032(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1__1032\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank1_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0__589(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0__589\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0__1034(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0__1034\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1__592(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1__592\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1__1036(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1__1036\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank2_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0__595(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0__595\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0__1038(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0__1038\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1__598(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1__598\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1__1040(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1__1040\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank3_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0__601(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0__601\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0__1042(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0__1042\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1__604(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1__604\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1__1044(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1__1044\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank4_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0__607(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0__607\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0__1046(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0__1046\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1__610(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1__610\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1__1048(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1__1048\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank5_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0__613(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0__613\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0__1050(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0__1050\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1__616(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1__616\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1__1052(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1__1052\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank6_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0__619(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0__619\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0__1054(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0__1054\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1__622(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1__622\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1__1056(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1__1056\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank7_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0__625(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0__625\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0__1058(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0__1058\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1__628(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1__628\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1__1060(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1__1060\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank8_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0__631(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0__631\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0__1062(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0__1062\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1__634(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1__634\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1__1064(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1__1064\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank9_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0__637(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0__637\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0__1066(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0__1066\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1__640(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1__640\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1__1068(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1__1068\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank10_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0__643(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0__643\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0__1070(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0__1070\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1__646(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1__646\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1__1072(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1__1072\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank11_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0__649(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0__649\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0__1074(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0__1074\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1__652(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1__652\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1__1076(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1__1076\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank12_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0__655(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0__655\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0__1078(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0__1078\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1__658(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1__658\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1__1080(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1__1080\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank13_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0__661(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0__661\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0__1082(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0__1082\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1__664(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1__664\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1__1084(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1__1084\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank14_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0__667(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0__667\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0__1086(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0__1086\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1__670(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1__670\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1__1088(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1__1088\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank15_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0__673(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0__673\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0__1090(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0__1090\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1__676(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1__676\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1__1092(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1__1092\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank16_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0__679(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0__679\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0__1094(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0__1094\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1__682(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1__682\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1__1096(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1__1096\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank17_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0__685(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0__685\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0__1098(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0__1098\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1__688(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1__688\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1__1100(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1__1100\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank18_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0__691(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0__691\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0__1102(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0__1102\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1__694(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1__694\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1__1104(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1__1104\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank19_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0__697(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0__697\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0__1106(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0__1106\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1__700(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1__700\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1__1108(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1__1108\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank20_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0__703(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0__703\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0__1110(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0__1110\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1__706(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1__706\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1__1112(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1__1112\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank21_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0__709(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0__709\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0__1114(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0__1114\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1__712(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1__712\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1__1116(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1__1116\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank22_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0__715(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0__715\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0__1118(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0__1118\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1__718(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1__718\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1__1120(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1__1120\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank23_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0__721(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0__721\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0__1122(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0__1122\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1__724(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1__724\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1__1124(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1__1124\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank24_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0__727(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0__727\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0__1126(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0__1126\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1__730(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1__730\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1__1128(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1__1128\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank25_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0__733(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0__733\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0__1130(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0__1130\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1__736(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1__736\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1__1132(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1__1132\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank26_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0__739(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0__739\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0__1134(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0__1134\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1__742(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1__742\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1__1136(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1__1136\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank27_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0__745(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0__745\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0__1138(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0__1138\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1__748(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1__748\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1__1140(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1__1140\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank28_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0__751(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0__751\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0__1142(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0__1142\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1__754(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1__754\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1__1144(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1__1144\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank29_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0__757(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0__757\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0__1146(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0__1146\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1__760(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1__760\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1__1148(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1__1148\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank30_ram1_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0__763(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0__763\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram0_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0__1150(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0__1150\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram0_wr_addr_d2));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1__766(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1__766\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram1_rd_addr_d1));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1__1152(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1__1152\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__bank31_ram1_wr_addr_d2));
}
