// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_partition_m.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__17(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__17\n"); );
    // Body
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d3 
        = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d2;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__18(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__18\n"); );
    // Body
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d3 
        = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d2;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__19(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__19\n"); );
    // Body
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d3 
        = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d2;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__20(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__20\n"); );
    // Body
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d3 
        = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d2;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__21(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__21\n"); );
    // Body
    if (vlSelf->__PVT__nvdla_core_rstn) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1;
        if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d1) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d1;
        } else if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d1) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d2 = 0U;
        }
        if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d1 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d2;
        } else if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d1 = 0U;
        }
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__22(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__22\n"); );
    // Body
    if ((8U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1;
    } else if ((8U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d2 = 0U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1;
    } else if ((4U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d2 = 0U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1;
    } else if ((2U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d2 = 0U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1;
    } else if ((1U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d2 = 0U;
    }
    if ((8U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out_d0_d3;
    } else if ((8U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1 = 0U;
    }
    if ((4U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out_d0_d3;
    } else if ((4U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1 = 0U;
    }
    if ((2U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out_d0_d3;
    } else if ((2U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1 = 0U;
    }
    if ((1U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out_d0_d3;
    } else if ((1U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__25(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__25\n"); );
    // Body
    if (vlSelf->__PVT__nvdla_core_rstn) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_vld 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_vld 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_vld 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_vld 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_sd_pvld 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_pvld_w;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_sd_pvld 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_pvld_w;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_sd_pvld 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_pvld_w;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_sd_pvld 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_pvld_w;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld 
            = (0xffU & (- (IData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w))));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld 
            = (0xffU & (- (IData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w))));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld 
            = (0xffU & (- (IData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w))));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld 
            = (0xffU & (- (IData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w))));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3 
            = (0xffU & (- (IData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld))));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2 
            = (0xffU & (- (IData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld))));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1 
            = (0xffU & (- (IData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld))));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0 
            = (0xffU & (- (IData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld))));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_end;
        if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz;
        } else if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3 = 0U;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2 = 0U;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1 = 0U;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0 = 0U;
        }
        if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
             & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz;
        } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz = 0U;
        }
        if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
             & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz;
        } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz = 0U;
        }
        if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
             & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz;
        } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz = 0U;
        }
        if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
             & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz;
        } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz = 0U;
        }
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_end 
            = (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d2) 
                >> 6U) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2));
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_vld = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_vld = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_vld = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_vld = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_sd_pvld = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_sd_pvld = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_sd_pvld = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_sd_pvld = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0 = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_end = 0U;
    }
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0xfeU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (1U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0xfdU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (2U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0xfbU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (4U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0xf7U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (8U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0xefU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (0x10U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0xdfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (0x20U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0xbfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (0x40U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld 
        = ((0x7fU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld)) 
           | (0x80U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0xfeU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (1U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0xfdU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (2U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0xfbU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (4U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0xf7U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (8U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0xefU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (0x10U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0xdfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (0x20U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0xbfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (0x40U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld 
        = ((0x7fU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld)) 
           | (0x80U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0xfeU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (1U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0xfdU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (2U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0xfbU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (4U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0xf7U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (8U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0xefU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (0x10U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0xdfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (0x20U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0xbfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (0x40U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld 
        = ((0x7fU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld)) 
           | (0x80U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0xfeU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (1U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0xfdU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (2U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0xfbU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (4U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0xf7U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (8U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                     & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0xefU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (0x10U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0xdfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (0x20U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0xbfU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (0x40U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld 
        = ((0x7fU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld)) 
           | (0x80U & ((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0)) 
                        & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz)) 
                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__26(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__26\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | (IData)((IData)((0xffU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data)))));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 1U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 8U))))) 
                  << 8U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 1U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 2U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x10U))))) 
                  << 0x10U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 2U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 3U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x18U))))) 
                  << 0x18U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 3U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 4U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x20U))))) 
                  << 0x20U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 4U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 5U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x28U))))) 
                  << 0x28U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 5U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 6U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x30U))))) 
                  << 0x30U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 6U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 7U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x38U))))) 
                  << 0x38U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 7U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | (IData)((IData)((0xffU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data)))));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 1U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 8U))))) 
                  << 8U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 1U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 2U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x10U))))) 
                  << 0x10U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 2U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 3U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x18U))))) 
                  << 0x18U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 3U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 4U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x20U))))) 
                  << 0x20U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 4U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 5U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x28U))))) 
                  << 0x28U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 5U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 6U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x30U))))) 
                  << 0x30U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 6U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 7U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x38U))))) 
                  << 0x38U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 7U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | (IData)((IData)((0xffU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data)))));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 1U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 8U))))) 
                  << 8U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 1U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 2U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x10U))))) 
                  << 0x10U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 2U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 3U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x18U))))) 
                  << 0x18U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 3U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 4U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x20U))))) 
                  << 0x20U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 4U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 5U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x28U))))) 
                  << 0x28U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 5U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 6U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x30U))))) 
                  << 0x30U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 6U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 7U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x38U))))) 
                  << 0x38U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 7U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | (IData)((IData)((0xffU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data)))));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 1U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 8U))))) 
                  << 8U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 1U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 2U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x10U))))) 
                  << 0x10U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 2U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 3U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x18U))))) 
                  << 0x18U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 3U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 4U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x20U))))) 
                  << 0x20U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 4U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 5U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x28U))))) 
                  << 0x28U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 5U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 6U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x30U))))) 
                  << 0x30U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 6U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 7U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
                                                    >> 0x38U))))) 
                  << 0x38U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 7U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | (IData)((IData)((0xffU & ((- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz)))) 
                                           & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data))))));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz) 
                                                           >> 1U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
                                                       >> 8U)))))) 
                  << 8U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz) 
                                                           >> 2U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
                                                       >> 0x10U)))))) 
                  << 0x10U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz) 
                                                           >> 3U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
                                                       >> 0x18U)))))) 
                  << 0x18U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz) 
                                                           >> 4U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
                                                       >> 0x20U)))))) 
                  << 0x20U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz) 
                                                           >> 5U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
                                                       >> 0x28U)))))) 
                  << 0x28U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz) 
                                                           >> 6U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
                                                       >> 0x30U)))))) 
                  << 0x30U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz) 
                                                           >> 7U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
                                                       >> 0x38U)))))) 
                  << 0x38U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | (IData)((IData)((0xffU & ((- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz)))) 
                                           & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data))))));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz) 
                                                           >> 1U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
                                                       >> 8U)))))) 
                  << 8U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz) 
                                                           >> 2U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
                                                       >> 0x10U)))))) 
                  << 0x10U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz) 
                                                           >> 3U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
                                                       >> 0x18U)))))) 
                  << 0x18U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz) 
                                                           >> 4U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
                                                       >> 0x20U)))))) 
                  << 0x20U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz) 
                                                           >> 5U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
                                                       >> 0x28U)))))) 
                  << 0x28U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz) 
                                                           >> 6U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
                                                       >> 0x30U)))))) 
                  << 0x30U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz) 
                                                           >> 7U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
                                                       >> 0x38U)))))) 
                  << 0x38U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | (IData)((IData)((0xffU & ((- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz)))) 
                                           & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data))))));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz) 
                                                           >> 1U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
                                                       >> 8U)))))) 
                  << 8U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz) 
                                                           >> 2U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
                                                       >> 0x10U)))))) 
                  << 0x10U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz) 
                                                           >> 3U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
                                                       >> 0x18U)))))) 
                  << 0x18U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz) 
                                                           >> 4U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
                                                       >> 0x20U)))))) 
                  << 0x20U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz) 
                                                           >> 5U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
                                                       >> 0x28U)))))) 
                  << 0x28U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz) 
                                                           >> 6U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
                                                       >> 0x30U)))))) 
                  << 0x30U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz) 
                                                           >> 7U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
                                                       >> 0x38U)))))) 
                  << 0x38U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | (IData)((IData)((0xffU & ((- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz)))) 
                                           & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data))))));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz) 
                                                           >> 1U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
                                                       >> 8U)))))) 
                  << 8U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz) 
                                                           >> 2U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
                                                       >> 0x10U)))))) 
                  << 0x10U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz) 
                                                           >> 3U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
                                                       >> 0x18U)))))) 
                  << 0x18U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz) 
                                                           >> 4U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
                                                       >> 0x20U)))))) 
                  << 0x20U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz) 
                                                           >> 5U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
                                                       >> 0x28U)))))) 
                  << 0x28U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz) 
                                                           >> 6U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
                                                       >> 0x30U)))))) 
                  << 0x30U));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | ((QData)((IData)((0xffU & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz) 
                                                           >> 7U)))) 
                                            & (IData)(
                                                      (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
                                                       >> 0x38U)))))) 
                  << 0x38U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = ((0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data) 
               | (IData)((IData)((0xffU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w)))));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = (0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
            >> 1U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = ((0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
                                                    >> 8U))))) 
                  << 8U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
                   >> 1U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = (0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
            >> 2U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = ((0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
                                                    >> 0x10U))))) 
                  << 0x10U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
                   >> 2U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = (0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
            >> 3U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = ((0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
                                                    >> 0x18U))))) 
                  << 0x18U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
                   >> 3U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = (0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
            >> 4U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = ((0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
                                                    >> 0x20U))))) 
                  << 0x20U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
                   >> 4U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = (0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
            >> 5U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = ((0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
                                                    >> 0x28U))))) 
                  << 0x28U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
                   >> 5U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = (0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
            >> 6U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = ((0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
                                                    >> 0x30U))))) 
                  << 0x30U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
                   >> 6U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = (0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
            >> 7U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = ((0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
                                                    >> 0x38U))))) 
                  << 0x38U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
                   >> 7U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data 
            = (0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data);
    }
    if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = ((0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data) 
               | (IData)((IData)((0xffU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data)))));
    } else if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = (0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data);
    }
    if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 1U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = ((0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 8U))))) 
                  << 8U));
    } else if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 1U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = (0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data);
    }
    if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 2U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = ((0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x10U))))) 
                  << 0x10U));
    } else if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 2U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = (0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data);
    }
    if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 3U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = ((0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x18U))))) 
                  << 0x18U));
    } else if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 3U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = (0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data);
    }
    if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 4U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = ((0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x20U))))) 
                  << 0x20U));
    } else if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 4U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = (0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data);
    }
    if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 5U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = ((0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x28U))))) 
                  << 0x28U));
    } else if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 5U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = (0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data);
    }
    if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 6U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = ((0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x30U))))) 
                  << 0x30U));
    } else if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 6U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = (0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data);
    }
    if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 7U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = ((0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x38U))))) 
                  << 0x38U));
    } else if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 7U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data 
            = (0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data);
    }
    if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 2U) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = ((0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data) 
               | (IData)((IData)((0xffU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data)))));
    } else if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 2U) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = (0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data);
    }
    if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 2U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 1U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = ((0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 8U))))) 
                  << 8U));
    } else if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 2U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 1U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = (0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data);
    }
    if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 2U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 2U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = ((0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x10U))))) 
                  << 0x10U));
    } else if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 2U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 2U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = (0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data);
    }
    if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 2U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 3U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = ((0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x18U))))) 
                  << 0x18U));
    } else if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 2U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 3U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = (0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data);
    }
    if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 2U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 4U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = ((0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x20U))))) 
                  << 0x20U));
    } else if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 2U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 4U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = (0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data);
    }
    if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 2U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 5U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = ((0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x28U))))) 
                  << 0x28U));
    } else if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 2U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 5U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = (0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data);
    }
    if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 2U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 6U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = ((0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x30U))))) 
                  << 0x30U));
    } else if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 2U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 6U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = (0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data);
    }
    if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 2U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 7U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = ((0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x38U))))) 
                  << 0x38U));
    } else if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 2U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 7U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data 
            = (0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data);
    }
    if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 1U) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = ((0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data) 
               | (IData)((IData)((0xffU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data)))));
    } else if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 1U) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = (0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data);
    }
    if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 1U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 1U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = ((0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 8U))))) 
                  << 8U));
    } else if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 1U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 1U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = (0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data);
    }
    if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 1U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 2U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = ((0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x10U))))) 
                  << 0x10U));
    } else if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 1U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 2U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = (0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data);
    }
    if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 1U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 3U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = ((0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x18U))))) 
                  << 0x18U));
    } else if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 1U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 3U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = (0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data);
    }
    if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 1U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 4U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = ((0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x20U))))) 
                  << 0x20U));
    } else if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 1U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 4U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = (0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data);
    }
    if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 1U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 5U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = ((0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x28U))))) 
                  << 0x28U));
    } else if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 1U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 5U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = (0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data);
    }
    if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 1U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 6U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = ((0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x30U))))) 
                  << 0x30U));
    } else if ((1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 1U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 6U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = (0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data);
    }
    if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 1U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 7U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = ((0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x38U))))) 
                  << 0x38U));
    } else if ((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 1U) & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 7U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data 
            = (0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data);
    }
    if ((1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
               & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = ((0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data) 
               | (IData)((IData)((0xffU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data)))));
    } else if ((1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                      & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = (0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data);
    }
    if ((1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
               & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                  >> 1U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = ((0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 8U))))) 
                  << 8U));
    } else if ((1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                      & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                         >> 1U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = (0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data);
    }
    if ((1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
               & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                  >> 2U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = ((0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x10U))))) 
                  << 0x10U));
    } else if ((1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                      & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                         >> 2U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = (0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data);
    }
    if ((1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
               & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                  >> 3U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = ((0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x18U))))) 
                  << 0x18U));
    } else if ((1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                      & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                         >> 3U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = (0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data);
    }
    if ((1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
               & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                  >> 4U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = ((0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x20U))))) 
                  << 0x20U));
    } else if ((1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                      & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                         >> 4U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = (0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data);
    }
    if ((1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
               & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                  >> 5U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = ((0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x28U))))) 
                  << 0x28U));
    } else if ((1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                      & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                         >> 5U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = (0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data);
    }
    if ((1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
               & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                  >> 6U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = ((0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x30U))))) 
                  << 0x30U));
    } else if ((1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                      & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                         >> 6U)))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = (0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
            >> 7U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = ((0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
                                                    >> 0x38U))))) 
                  << 0x38U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                   >> 7U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data 
            = (0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = ((0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data) 
               | (IData)((IData)((0xffU & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w)))));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = (0xffffffffffffff00ULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
            >> 1U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = ((0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
                                                    >> 8U))))) 
                  << 8U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
                   >> 1U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = (0xffffffffffff00ffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
            >> 2U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = ((0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
                                                    >> 0x10U))))) 
                  << 0x10U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
                   >> 2U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = (0xffffffffff00ffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
            >> 3U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = ((0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
                                                    >> 0x18U))))) 
                  << 0x18U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
                   >> 3U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = (0xffffffff00ffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
            >> 4U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = ((0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
                                                    >> 0x20U))))) 
                  << 0x20U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
                   >> 4U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = (0xffffff00ffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
            >> 5U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = ((0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
                                                    >> 0x28U))))) 
                  << 0x28U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
                   >> 5U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = (0xffff00ffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
            >> 6U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = ((0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
                                                    >> 0x30U))))) 
                  << 0x30U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
                   >> 6U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = (0xff00ffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data);
    }
    if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
            >> 7U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = ((0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
                                                    >> 0x38U))))) 
                  << 0x38U));
    } else if (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
                   >> 7U))) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data 
            = (0xffffffffffffffULL & vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data);
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__37(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__37\n"); );
    // Body
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1 
        = ((IData)(vlSelf->__PVT__nvdla_core_rstn) ? (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask)
            : 0U);
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__38(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__38\n"); );
    // Body
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d2) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out_d0_d3 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out_d0_d2;
    }
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d1) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d2 = 1U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out_d0_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out_d0_d1;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d2 = 0U;
    }
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d1 = 1U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out_d0_d1 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__39(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__39\n"); );
    // Body
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d2) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out_d0_d3 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out_d0_d2;
    }
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d1) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d2 = 1U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out_d0_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out_d0_d1;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d2 = 0U;
    }
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d1 = 1U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out_d0_d1 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__40(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__40\n"); );
    // Body
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d2) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out_d0_d3 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out_d0_d2;
    }
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d1) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d2 = 1U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out_d0_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out_d0_d1;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d2 = 0U;
    }
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d1 = 1U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out_d0_d1 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__41(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__41\n"); );
    // Body
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d2) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out_d0_d3 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out_d0_d2;
    }
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d1) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d2 = 1U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out_d0_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out_d0_d1;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d2 = 0U;
    }
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d1 = 1U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out_d0_d1 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__42(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__42\n"); );
    // Body
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0 
        = (1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3) 
                 & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out 
        = (0x7ffffU & (((((((VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data)))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld))))))) 
                             + VL_EXTENDS_II(19,18, 
                                             (0x3ffffU 
                                              & (VL_MULS_III(18, 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 8U))))), 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 8U)))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld) 
                                                                  >> 1U)))))))) 
                            + VL_EXTENDS_II(19,18, 
                                            (0x3ffffU 
                                             & (VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x10U))))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x10U)))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld) 
                                                                 >> 2U)))))))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x18U))))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x18U)))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld) 
                                                                       >> 3U)))))))) 
                          + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                  & (VL_MULS_III(18, 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x20U))))), 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x20U)))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld) 
                                                                      >> 4U)))))))) 
                         + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (VL_MULS_III(18, 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x28U))))), 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x28U)))))) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld) 
                                                                     >> 5U)))))))) 
                        + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                & (VL_MULS_III(18, 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x30U))))), 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x30U)))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld) 
                                                                    >> 6U)))))))) 
                       + VL_EXTENDS_II(19,18, (0x3ffffU 
                                               & (VL_MULS_III(18, 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x38U))))), 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x38U)))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__op_out_pvld) 
                                                                   >> 7U)))))))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0 
        = (1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2) 
                 & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out 
        = (0x7ffffU & (((((((VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data)))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld))))))) 
                             + VL_EXTENDS_II(19,18, 
                                             (0x3ffffU 
                                              & (VL_MULS_III(18, 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 8U))))), 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 8U)))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld) 
                                                                  >> 1U)))))))) 
                            + VL_EXTENDS_II(19,18, 
                                            (0x3ffffU 
                                             & (VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x10U))))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x10U)))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld) 
                                                                 >> 2U)))))))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x18U))))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x18U)))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld) 
                                                                       >> 3U)))))))) 
                          + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                  & (VL_MULS_III(18, 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x20U))))), 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x20U)))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld) 
                                                                      >> 4U)))))))) 
                         + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (VL_MULS_III(18, 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x28U))))), 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x28U)))))) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld) 
                                                                     >> 5U)))))))) 
                        + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                & (VL_MULS_III(18, 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x30U))))), 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x30U)))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld) 
                                                                    >> 6U)))))))) 
                       + VL_EXTENDS_II(19,18, (0x3ffffU 
                                               & (VL_MULS_III(18, 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x38U))))), 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x38U)))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__op_out_pvld) 
                                                                   >> 7U)))))))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0 
        = (1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1) 
                 & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out 
        = (0x7ffffU & (((((((VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data)))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld))))))) 
                             + VL_EXTENDS_II(19,18, 
                                             (0x3ffffU 
                                              & (VL_MULS_III(18, 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 8U))))), 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 8U)))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld) 
                                                                  >> 1U)))))))) 
                            + VL_EXTENDS_II(19,18, 
                                            (0x3ffffU 
                                             & (VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x10U))))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x10U)))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld) 
                                                                 >> 2U)))))))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x18U))))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x18U)))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld) 
                                                                       >> 3U)))))))) 
                          + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                  & (VL_MULS_III(18, 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x20U))))), 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x20U)))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld) 
                                                                      >> 4U)))))))) 
                         + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (VL_MULS_III(18, 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x28U))))), 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x28U)))))) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld) 
                                                                     >> 5U)))))))) 
                        + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                & (VL_MULS_III(18, 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x30U))))), 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x30U)))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld) 
                                                                    >> 6U)))))))) 
                       + VL_EXTENDS_II(19,18, (0x3ffffU 
                                               & (VL_MULS_III(18, 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x38U))))), 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x38U)))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__op_out_pvld) 
                                                                   >> 7U)))))))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0 
        = (1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0) 
                 & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld)));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out 
        = (0x7ffffU & (((((((VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data)))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld))))))) 
                             + VL_EXTENDS_II(19,18, 
                                             (0x3ffffU 
                                              & (VL_MULS_III(18, 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 8U))))), 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,8, 
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 8U)))))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld) 
                                                                  >> 1U)))))))) 
                            + VL_EXTENDS_II(19,18, 
                                            (0x3ffffU 
                                             & (VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x10U))))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x10U)))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld) 
                                                                 >> 2U)))))))) 
                           + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x18U))))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x18U)))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld) 
                                                                       >> 3U)))))))) 
                          + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                  & (VL_MULS_III(18, 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x20U))))), 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x20U)))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld) 
                                                                      >> 4U)))))))) 
                         + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                 & (VL_MULS_III(18, 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x28U))))), 
                                                                (0x3ffffU 
                                                                 & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x28U)))))) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld) 
                                                                     >> 5U)))))))) 
                        + VL_EXTENDS_II(19,18, (0x3ffffU 
                                                & (VL_MULS_III(18, 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x30U))))), 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x30U)))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld) 
                                                                    >> 6U)))))))) 
                       + VL_EXTENDS_II(19,18, (0x3ffffU 
                                               & (VL_MULS_III(18, 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x38U))))), 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x38U)))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__op_out_pvld) 
                                                                   >> 7U)))))))));
    if (vlSelf->__PVT__nvdla_core_rstn) {
        if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld = 1U;
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2;
        } else {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld = 0U;
            if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) {
                vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz = 0U;
            }
        }
        if ((8U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz;
        } else if ((8U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz = 0U;
        }
        if ((4U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz;
        } else if ((4U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz = 0U;
        }
        if ((2U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz;
        } else if ((2U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz = 0U;
        }
        if ((1U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz;
        } else if ((1U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz = 0U;
        }
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st 
            = (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d2) 
                >> 5U) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2));
        if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz 
                = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2;
        } else if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) {
            vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz = 0U;
        }
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel 
            = ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d2) 
               & (- (IData)((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2))));
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz = 0U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel = 0U;
    }
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_sd_pvld;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_sd_pvld;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_sd_pvld;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_sd_pvld;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w 
            = ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_vld));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w 
            = ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_vld));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w 
            = ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_vld));
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w 
            = ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_vld));
    }
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_pvld_w 
        = (1U & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                 | ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st)) 
                    & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_sd_pvld))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_pvld_w 
        = (1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 1U) | ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st)) 
                            & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_sd_pvld))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_pvld_w 
        = (1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 2U) | ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st)) 
                            & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_sd_pvld))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_pvld_w 
        = (1U & (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) | ((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st)) 
                            & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_sd_pvld))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__43(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__43\n"); );
    // Body
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
        = (((QData)((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data7_d2) 
                              << 0x18U) | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data6_d2) 
                                            << 0x10U) 
                                           | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data5_d2) 
                                               << 8U) 
                                              | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data4_d2)))))) 
            << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data3_d2) 
                                          << 0x18U) 
                                         | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data2_d2) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data1_d2) 
                                                << 8U) 
                                               | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data0_d2)))))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
        = (((QData)((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data7_d2) 
                              << 0x18U) | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data6_d2) 
                                            << 0x10U) 
                                           | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data5_d2) 
                                               << 8U) 
                                              | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data4_d2)))))) 
            << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data3_d2) 
                                          << 0x18U) 
                                         | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data2_d2) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data1_d2) 
                                                << 8U) 
                                               | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data0_d2)))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___multiclk__TOP__NV_nvdla__DOT__u_partition_ma__51(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___multiclk__TOP__NV_nvdla__DOT__u_partition_ma__51\n"); );
    // Body
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask 
        = (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d3) 
            << 3U) | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d3) 
                       << 2U) | (((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d3) 
                                  << 1U) | (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d3))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__58(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__58\n"); );
    // Body
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d2 
        = ((IData)(vlSelf->__PVT__nvdla_core_rstn) 
           & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d1));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3 
        = ((IData)(vlSelf->__PVT__nvdla_core_rstn) 
           & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d2));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d1 
        = ((IData)(vlSelf->__PVT__nvdla_core_rstn) 
           & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d2 
        = ((IData)(vlSelf->__PVT__nvdla_core_rstn) 
           & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d1));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d1 
        = ((IData)(vlSelf->__PVT__nvdla_core_rstn) 
           & ((IData)((0x140U == (0x140U & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d2)))) 
              & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__61(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_ma__61\n"); );
    // Body
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d1) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2 = 1U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d2 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d1;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2 = 0U;
    }
    if (vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d1 = 1U;
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d1 
            = vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d2;
    } else {
        vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___multiclk__TOP__NV_nvdla__DOT__u_partition_ma__62(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___multiclk__TOP__NV_nvdla__DOT__u_partition_ma__62\n"); );
    // Body
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en_w 
        = (1U & (((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)) 
                  & ((8U == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d0_reg_wr_en)))
                  ? (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                             >> 0x16U)) : ((~ ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3) 
                                               & (~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)))) 
                                           & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en))));
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en_w 
        = (1U & (((~ (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)) 
                  & ((8U == (0xffcU & ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                       << 2U))) & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_wr_en)))
                  ? (IData)((vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                             >> 0x16U)) : ((~ ((IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3) 
                                               & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer))) 
                                           & (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_mb__31(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___sequent__TOP__NV_nvdla__DOT__u_partition_mb__31\n"); );
    // Body
    vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d2 
        = ((IData)(vlSelf->__PVT__nvdla_core_rstn) ? (IData)(vlSelf->__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1)
            : 0U);
}
