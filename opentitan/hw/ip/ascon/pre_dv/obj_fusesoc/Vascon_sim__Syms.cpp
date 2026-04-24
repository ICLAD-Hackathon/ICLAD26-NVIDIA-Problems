// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vascon_sim__Syms.h"
#include "Vascon_sim.h"
#include "Vascon_sim___024root.h"
#include "Vascon_sim_lc_ctrl_reg_pkg.h"
#include "Vascon_sim_csrng_reg_pkg.h"
#include "Vascon_sim_edn_reg_pkg.h"
#include "Vascon_sim_keymgr_reg_pkg.h"
#include "Vascon_sim_ascon_reg_pkg.h"
#include "Vascon_sim_prim_sha2_pkg.h"

// FUNCTIONS
Vascon_sim__Syms::~Vascon_sim__Syms()
{
}

Vascon_sim__Syms::Vascon_sim__Syms(VerilatedContext* contextp, const char* namep,Vascon_sim* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
    , TOP__ascon_reg_pkg(Verilated::catName(namep, "ascon_reg_pkg"))
    , TOP__csrng_reg_pkg(Verilated::catName(namep, "csrng_reg_pkg"))
    , TOP__edn_reg_pkg(Verilated::catName(namep, "edn_reg_pkg"))
    , TOP__keymgr_reg_pkg(Verilated::catName(namep, "keymgr_reg_pkg"))
    , TOP__lc_ctrl_reg_pkg(Verilated::catName(namep, "lc_ctrl_reg_pkg"))
    , TOP__prim_sha2_pkg(Verilated::catName(namep, "prim_sha2_pkg"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ascon_reg_pkg = &TOP__ascon_reg_pkg;
    TOP.__PVT__csrng_reg_pkg = &TOP__csrng_reg_pkg;
    TOP.__PVT__edn_reg_pkg = &TOP__edn_reg_pkg;
    TOP.__PVT__keymgr_reg_pkg = &TOP__keymgr_reg_pkg;
    TOP.__PVT__lc_ctrl_reg_pkg = &TOP__lc_ctrl_reg_pkg;
    TOP.__PVT__prim_sha2_pkg = &TOP__prim_sha2_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__ascon_reg_pkg.__Vconfigure(this, true);
    TOP__csrng_reg_pkg.__Vconfigure(this, true);
    TOP__edn_reg_pkg.__Vconfigure(this, true);
    TOP__keymgr_reg_pkg.__Vconfigure(this, true);
    TOP__lc_ctrl_reg_pkg.__Vconfigure(this, true);
    TOP__prim_sha2_pkg.__Vconfigure(this, true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
