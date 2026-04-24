// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vascon_sim.h for the primary calling header

#ifndef VERILATED_VASCON_SIM_CSRNG_REG_PKG_H_
#define VERILATED_VASCON_SIM_CSRNG_REG_PKG_H_  // guard

#include "verilated.h"

class Vascon_sim__Syms;
VL_MODULE(Vascon_sim_csrng_reg_pkg) {
  public:

    // INTERNAL VARIABLES
    Vascon_sim__Syms* vlSymsp;  // Symbol table

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 24> __PVT__CSRNG_PERMIT = {{
        0x01U, 0x01U, 0x01U, 0x01U, 0x01U, 0x03U, 0x0fU, 0x0fU,
        0x0fU, 0x0fU, 0x0fU, 0x01U, 0x01U, 0x0fU, 0x01U, 0x01U,
        0x01U, 0x0fU, 0x01U, 0x03U, 0x03U, 0x0fU, 0x01U, 0x01U
    }};

    // CONSTRUCTORS
    Vascon_sim_csrng_reg_pkg(const char* name);
    ~Vascon_sim_csrng_reg_pkg();
    VL_UNCOPYABLE(Vascon_sim_csrng_reg_pkg);

    // INTERNAL METHODS
    void __Vconfigure(Vascon_sim__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
