// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkmac_reduced_tb.h for the primary calling header

#ifndef VERILATED_VKMAC_REDUCED_TB_SHA3_PKG_H_
#define VERILATED_VKMAC_REDUCED_TB_SHA3_PKG_H_  // guard

#include "verilated.h"

class Vkmac_reduced_tb__Syms;
VL_MODULE(Vkmac_reduced_tb_sha3_pkg) {
  public:

    // INTERNAL VARIABLES
    Vkmac_reduced_tb__Syms* vlSymsp;  // Symbol table

    // PARAMETERS
    static constexpr VlUnpacked<IData/*31:0*/, 5> __PVT__KeccakRate = {{
        0x00000015U, 0x00000012U, 0x00000011U, 0x0000000dU,
        0x00000009U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 5> __PVT__KeccakBitCapacity = {{
        0x00000100U, 0x000001c0U, 0x00000200U, 0x00000300U,
        0x00000400U
    }};

    // CONSTRUCTORS
    Vkmac_reduced_tb_sha3_pkg(const char* name);
    ~Vkmac_reduced_tb_sha3_pkg();
    VL_UNCOPYABLE(Vkmac_reduced_tb_sha3_pkg);

    // INTERNAL METHODS
    void __Vconfigure(Vkmac_reduced_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
