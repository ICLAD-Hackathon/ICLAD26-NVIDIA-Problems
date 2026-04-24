// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi9.h"
#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rws_16x64.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__209(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__209\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_00))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_00))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__211(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__211\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_01))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_01))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__213(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__213\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_02))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_02))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__215(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__215\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_03))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_03))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__217(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__217\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_04))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_04))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__219(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__219\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__221(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__221\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__223(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__223\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__225(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_08__225\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_08))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_08))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__227(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_09__227\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_09))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_09))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__229(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_10__229\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_10))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_10))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__231(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_11__231\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_11))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_11))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__233(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_12__233\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_12))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_12))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__235(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_13__235\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_13))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_13))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__237(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_14__237\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_14))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_14))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__239(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_15__239\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
                    ? vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__testInst_Data_reg_r0->__PVT__Q
                    : 0ULL) : 0ULL) : (((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_15))) 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd[0U])))) 
                                       | ((- (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_15))) 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1)));
}
