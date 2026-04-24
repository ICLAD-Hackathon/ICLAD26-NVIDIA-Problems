// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7.h"
#include "VNV_nvdla_nv_ram_rwst_256x8.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwst_256x8___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__26(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__26\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_r0_OutputMuxDataOut 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru_en)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->Q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ramDataOut));
}
