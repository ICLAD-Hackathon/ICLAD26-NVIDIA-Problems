// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi22.h"
#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rwsp_61x65__Fz2.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__26(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__26\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hc234f3e0__0;
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WAFF 
        = (0x3fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0));
    VL_EXTEND_WW(66,65, __Vtemp_hc234f3e0__0, vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__NV_NVDLA_PDP_RDMA_rdrsp__DOT__pipe_skid_dma_rd_rsp_pd);
    if (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Di_w0_S) {
        if (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Di_w0_S) {
            if (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[0U] 
                    = vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0->Q[0U];
                vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[1U] 
                    = vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0->Q[1U];
                vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[2U] 
                    = vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0->Q[2U];
            } else {
                vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[0U] = 0U;
                vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[1U] = 0U;
                vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[2U] = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[0U] = 0U;
            vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[1U] = 0U;
            vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[2U] = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[0U] 
            = __Vtemp_hc234f3e0__0[0U];
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[1U] 
            = __Vtemp_hc234f3e0__0[1U];
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[2U] 
            = __Vtemp_hc234f3e0__0[2U];
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__25(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__25\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hffcee766__0;
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WAFF 
        = (0x3fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0));
    VL_EXTEND_WW(66,65, __Vtemp_hffcee766__0, vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__pipe_skid_dma_rd_rsp_pd);
    if (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Di_w0_S) {
        if (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Di_w0_S) {
            if (vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[0U] 
                    = vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0->Q[0U];
                vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[1U] 
                    = vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0->Q[1U];
                vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[2U] 
                    = vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__testInst_Data_reg_r0->Q[2U];
            } else {
                vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[0U] = 0U;
                vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[1U] = 0U;
                vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[2U] = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[0U] = 0U;
            vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[1U] = 0U;
            vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[2U] = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[0U] 
            = __Vtemp_hffcee766__0[0U];
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[1U] 
            = __Vtemp_hffcee766__0[1U];
        vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__ram_Inst_61X66__DOT__ITOP__DOT__WDQ_pr[2U] 
            = __Vtemp_hffcee766__0[2U];
    }
}
