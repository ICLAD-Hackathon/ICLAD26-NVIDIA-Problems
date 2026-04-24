// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7.h"
#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rwst_256x8.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__30(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__30\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->Q)
                    : 0U) : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__index_l7_0));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__34(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__34\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_S)
                ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_r0_OutputMuxDataOut)
                : 0U) : (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_adr));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__38(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__38\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_adr));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__28(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__28\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->Q)
                    : 0U) : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__index_l7_0));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__33(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__33\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_S)
                ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_r0_OutputMuxDataOut)
                : 0U) : (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_adr));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__37(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__37\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_adr));
}
