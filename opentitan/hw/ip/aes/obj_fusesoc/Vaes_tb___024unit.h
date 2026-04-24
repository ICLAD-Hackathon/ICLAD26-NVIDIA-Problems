// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_tb.h for the primary calling header

#ifndef VERILATED_VAES_TB___024UNIT_H_
#define VERILATED_VAES_TB___024UNIT_H_  // guard

#include "verilated.h"

class Vaes_tb__Syms;
VL_MODULE(Vaes_tb___024unit) {
  public:

    // INTERNAL VARIABLES
    Vaes_tb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vaes_tb___024unit(const char* name);
    ~Vaes_tb___024unit();
    VL_UNCOPYABLE(Vaes_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(Vaes_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
