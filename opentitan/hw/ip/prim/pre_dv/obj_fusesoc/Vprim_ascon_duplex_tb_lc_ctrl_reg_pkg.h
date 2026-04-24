// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprim_ascon_duplex_tb.h for the primary calling header

#ifndef VERILATED_VPRIM_ASCON_DUPLEX_TB_LC_CTRL_REG_PKG_H_
#define VERILATED_VPRIM_ASCON_DUPLEX_TB_LC_CTRL_REG_PKG_H_  // guard

#include "verilated.h"

class Vprim_ascon_duplex_tb__Syms;
VL_MODULE(Vprim_ascon_duplex_tb_lc_ctrl_reg_pkg) {
  public:

    // INTERNAL VARIABLES
    Vprim_ascon_duplex_tb__Syms* vlSymsp;  // Symbol table

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 35> __PVT__LC_CTRL_REGS_PERMIT = {{
        0x01U, 0x03U, 0x01U, 0x01U, 0x01U, 0x01U, 0x01U, 0x0fU,
        0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x01U,
        0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU,
        0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU,
        0x0fU, 0x0fU, 0x0fU
    }};

    // CONSTRUCTORS
    Vprim_ascon_duplex_tb_lc_ctrl_reg_pkg(const char* name);
    ~Vprim_ascon_duplex_tb_lc_ctrl_reg_pkg();
    VL_UNCOPYABLE(Vprim_ascon_duplex_tb_lc_ctrl_reg_pkg);

    // INTERNAL METHODS
    void __Vconfigure(Vprim_ascon_duplex_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
