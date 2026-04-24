// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_tb.h for the primary calling header

#ifndef VERILATED_VAES_TB_AES_REG_PKG_H_
#define VERILATED_VAES_TB_AES_REG_PKG_H_  // guard

#include "verilated.h"

class Vaes_tb__Syms;
VL_MODULE(Vaes_tb_aes_reg_pkg) {
  public:

    // INTERNAL VARIABLES
    Vaes_tb__Syms* vlSymsp;  // Symbol table

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 35> __PVT__AES_PERMIT = {{
        0x01U, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU,
        0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU,
        0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU,
        0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x0fU, 0x03U, 0x01U, 0x01U,
        0x01U, 0x01U, 0x03U
    }};

    // CONSTRUCTORS
    Vaes_tb_aes_reg_pkg(const char* name);
    ~Vaes_tb_aes_reg_pkg();
    VL_UNCOPYABLE(Vaes_tb_aes_reg_pkg);

    // INTERNAL METHODS
    void __Vconfigure(Vaes_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
