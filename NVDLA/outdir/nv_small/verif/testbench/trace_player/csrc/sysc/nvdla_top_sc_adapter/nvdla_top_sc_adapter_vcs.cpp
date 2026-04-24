// ------------------------------------------------------------------
// SYNOPSYS CONFIDENTIAL                                             
//                                                                   
// This is an unpublished, proprietary work of Synopsys, Inc., and   
// is fully protected under copyright and trade secret laws. You may 
// not view, use, disclose, copy, or distribute this file or any     
// information contained herein except pursuant to a valid written   
// license from Synopsys.                                            
// ------------------------------------------------------------------
#include <systemc.h>
#include "nvdla_top_sc_adapter.h"
#include <string.h>
#include "veriuser.h"
#include "acc_user.h"
#include "vcs_acc_user.h"

#include "cosim/bf/sc_hsio_signal.h"
extern "C" {
  extern void bf_push_name_mode(const char *, int);
  extern void bf_pop_name();
  extern void vcs_systemc_init();
  extern char *BF_convert_name_opt_if(const char *);
  extern void BF_dpi_register_signal(const char *, const char *, int, const char *, int);
}

extern "C" {
  extern void BfInstantiateModule(void (*)(const char *), const char *);
}
  extern void BF_notify_vcs_event();
  extern void BF_notify_sysc();
  extern void *BF_register(sc_core::sc_object *);
  extern void BF_register_parameter(sc_core::sc_object *, const char*,
                          const char*, void(*)(sc_core::sc_object *,
                          const char*, const char*));
  extern void BF_register_signal(void *, sc_hs2v_signal_base *, const char *);
  extern void BF_register_signal(void *, sc_hs2c_signal_base *, const char *);
  extern void BF_register_signal(void *, sc_hsio_signal_base *, const char *);
  extern "C" svScope svGetScopeFromIpCurrent_internal(void);

#include <string.h>
#include "veriuser.h"
#include "acc_user.h"
#include "vcs_acc_user.h"
#include "cosim/bf/sc_hsio_signal.h"
extern "C" void *nvdla_top_sc_adapter__initHS(const char *instname_i) {
  char *instname = BF_convert_name_opt_if(instname_i);
  bf_push_name_mode(instname_i, 2); 
  nvdla_top_sc_adapter *M = new nvdla_top_sc_adapter(instname);
  bf_pop_name();
  snps::sysc::registerObject(M);
  void *obj = BF_register(M);
  sc_attribute<std::string> *aa = new sc_attribute<std::string>("dki_name", instname_i);
  M->add_attribute(*aa);

  sc_hs2v_signal<bool > *s_nvdla_top_sc2sv_nvdla_intr = new sc_hs2v_signal<bool >();
  s_nvdla_top_sc2sv_nvdla_intr->setW(1, 0, "nvdla_top_sc2sv_nvdla_intr");
  ( M->nvdla_top_sc2sv_nvdla_intr)(*s_nvdla_top_sc2sv_nvdla_intr);
  BF_register_signal(obj, s_nvdla_top_sc2sv_nvdla_intr, "nvdla_top_sc2sv_nvdla_intr");
  snps::sysc::registerObject(s_nvdla_top_sc2sv_nvdla_intr);

  return obj;
}

extern "C" void nvdla_top_sc_adapter__initHS1(const char *instname_i) {
  nvdla_top_sc_adapter__initHS(instname_i);
}

extern "C" int nvdla_top_sc_adapter__init(int user_data, int reason) {
  return 0;
}
