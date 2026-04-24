// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprim_ascon_duplex_tb.h for the primary calling header

#ifndef VERILATED_VPRIM_ASCON_DUPLEX_TB_ASCON_MODEL_DPI_PKG_H_
#define VERILATED_VPRIM_ASCON_DUPLEX_TB_ASCON_MODEL_DPI_PKG_H_  // guard

#include "verilated.h"

class Vprim_ascon_duplex_tb__Syms;
VL_MODULE(Vprim_ascon_duplex_tb_ascon_model_dpi_pkg) {
  public:

    // INTERNAL VARIABLES
    Vprim_ascon_duplex_tb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vprim_ascon_duplex_tb_ascon_model_dpi_pkg(const char* name);
    ~Vprim_ascon_duplex_tb_ascon_model_dpi_pkg();
    VL_UNCOPYABLE(Vprim_ascon_duplex_tb_ascon_model_dpi_pkg);

    // INTERNAL METHODS
    void __Vconfigure(Vprim_ascon_duplex_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
