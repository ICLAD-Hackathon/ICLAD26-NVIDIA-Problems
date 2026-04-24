// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkmac_reduced_tb.h for the primary calling header

#ifndef VERILATED_VKMAC_REDUCED_TB_DIGESTPP_DPI_PKG_H_
#define VERILATED_VKMAC_REDUCED_TB_DIGESTPP_DPI_PKG_H_  // guard

#include "verilated.h"

class Vkmac_reduced_tb__Syms;
VL_MODULE(Vkmac_reduced_tb_digestpp_dpi_pkg) {
  public:

    // INTERNAL VARIABLES
    Vkmac_reduced_tb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vkmac_reduced_tb_digestpp_dpi_pkg(const char* name);
    ~Vkmac_reduced_tb_digestpp_dpi_pkg();
    VL_UNCOPYABLE(Vkmac_reduced_tb_digestpp_dpi_pkg);

    // INTERNAL METHODS
    void __Vconfigure(Vkmac_reduced_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
