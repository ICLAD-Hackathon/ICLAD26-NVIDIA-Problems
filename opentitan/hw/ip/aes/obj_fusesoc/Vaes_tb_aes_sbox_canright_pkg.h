// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_tb.h for the primary calling header

#ifndef VERILATED_VAES_TB_AES_SBOX_CANRIGHT_PKG_H_
#define VERILATED_VAES_TB_AES_SBOX_CANRIGHT_PKG_H_  // guard

#include "verilated.h"

class Vaes_tb__Syms;
VL_MODULE(Vaes_tb_aes_sbox_canright_pkg) {
  public:

    // INTERNAL VARIABLES
    Vaes_tb__Syms* vlSymsp;  // Symbol table

    // PARAMETERS
    static constexpr VlUnpacked<CData/*7:0*/, 8> __PVT__A2X = {{
        0x98U, 0xf3U, 0xf2U, 0x48U, 0x09U, 0x81U, 0xa9U, 0xffU
    }};
    static constexpr VlUnpacked<CData/*7:0*/, 8> __PVT__X2A = {{
        0x64U, 0x78U, 0x6eU, 0x8cU, 0x68U, 0x29U, 0xdeU, 0x60U
    }};
    static constexpr VlUnpacked<CData/*7:0*/, 8> __PVT__X2S = {{
        0x58U, 0x2dU, 0x9eU, 0x0bU, 0xdcU, 0x04U, 0x03U, 0x24U
    }};
    static constexpr VlUnpacked<CData/*7:0*/, 8> __PVT__S2X = {{
        0x8cU, 0x79U, 0x05U, 0xebU, 0x12U, 0x04U, 0x51U, 0x53U
    }};

    // CONSTRUCTORS
    Vaes_tb_aes_sbox_canright_pkg(const char* name);
    ~Vaes_tb_aes_sbox_canright_pkg();
    VL_UNCOPYABLE(Vaes_tb_aes_sbox_canright_pkg);

    // INTERNAL METHODS
    void __Vconfigure(Vaes_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
