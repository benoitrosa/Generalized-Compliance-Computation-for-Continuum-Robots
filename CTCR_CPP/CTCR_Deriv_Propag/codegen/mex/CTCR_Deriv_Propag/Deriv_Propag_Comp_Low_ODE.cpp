//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Deriv_Propag_Comp_Low_ODE.cpp
//
// Code generation for function 'Deriv_Propag_Comp_Low_ODE'
//

// Include files
#include "Deriv_Propag_Comp_Low_ODE.h"
#include "CTCRAct.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCR_Deriv_Propag_data.h"
#include "MemBVP.h"
#include "MemDM0.h"
#include "MemDM0DS.h"
#include "MemDN0.h"
#include "MemDN0DS.h"
#include "MemDP0DS.h"
#include "MemDR0.h"
#include "MemDR0DS.h"
#include "MemDTi.h"
#include "MemDTiDS.h"
#include "MemDU0.h"
#include "MemDUZi.h"
#include "MemDUZiDS.h"
#include "MemDerivPropagLow.h"
#include "MemY.h"
#include "SimulationParam.h"
#include "duiinitxy_dbcj.h"
#include "duiinitxy_dtcj.h"
#include "find.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo x_emlrtRSI{ 63,     // lineNo
  "Deriv_Propag_Comp_Low_ODE",         // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m"// pathName
};

static emlrtRSInfo y_emlrtRSI{ 95,     // lineNo
  "Deriv_Propag_Comp_Low_ODE",         // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m"// pathName
};

static emlrtRSInfo ab_emlrtRSI{ 103,   // lineNo
  "Deriv_Propag_Comp_Low_ODE",         // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m"// pathName
};

static emlrtBCInfo hg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  45,                                  // lineNo
  45,                                  // colNo
  "mem_bvp.mem_y.mem_t",               // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ig_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  46,                                  // lineNo
  46,                                  // colNo
  "mem_bvp.mem_y.mem_m0",              // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  47,                                  // lineNo
  46,                                  // colNo
  "mem_bvp.mem_y.mem_n0",              // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  48,                                  // lineNo
  40,                                  // colNo
  "mem_bvp.mem_u0",                    // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  49,                                  // lineNo
  41,                                  // colNo
  "mem_bvp.mem_T",                     // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  52,                                  // lineNo
  53,                                  // colNo
  "ctcr_construc.vect_tau_dist",       // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ng_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  53,                                  // lineNo
  51,                                  // colNo
  "ctcr_construc.vect_f_dist",         // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtECInfo e_emlrtECI{ -1,     // nDims
  63,                                  // lineNo
  44,                                  // colNo
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m"// pName
};

static emlrtBCInfo og_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  72,                                  // lineNo
  123,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  72,                                  // lineNo
  69,                                  // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dtcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtECInfo f_emlrtECI{ -1,     // nDims
  72,                                  // lineNo
  17,                                  // colNo
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m"// pName
};

static emlrtBCInfo qg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  79,                                  // lineNo
  123,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  79,                                  // lineNo
  69,                                  // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dbcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtECInfo g_emlrtECI{ -1,     // nDims
  79,                                  // lineNo
  17,                                  // colNo
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m"// pName
};

static emlrtRTEInfo m_emlrtRTEI{ 86,   // lineNo
  25,                                  // colNo
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m"// pName
};

static emlrtBCInfo sg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  88,                                  // lineNo
  40,                                  // colNo
  "curr_vectT",                        // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  150,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ug_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  152,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  169,                                 // colNo
  "theta",                             // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  184,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  187,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yg_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  201,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ah_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  204,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  240,                                 // colNo
  "theta",                             // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ch_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  308,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  322,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo eh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  325,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  348,                                 // colNo
  "theta",                             // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  150,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  152,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ih_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  169,                                 // colNo
  "theta",                             // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  187,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  201,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  204,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  240,                                 // colNo
  "theta",                             // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  308,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo oh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  322,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ph_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  325,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  348,                                 // colNo
  "theta",                             // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  115,                                 // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  115,                                 // lineNo
  137,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo th_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  116,                                 // lineNo
  141,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  116,                                 // lineNo
  143,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  117,                                 // lineNo
  146,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  117,                                 // lineNo
  148,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  118,                                 // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yh_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  118,                                 // lineNo
  137,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ai_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  115,                                 // lineNo
  71,                                  // colNo
  "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  115,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ci_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo di_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  137,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ei_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  125,                                 // lineNo
  141,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  125,                                 // lineNo
  143,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  126,                                 // lineNo
  146,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  126,                                 // lineNo
  148,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ii_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  127,                                 // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ji_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  127,                                 // lineNo
  137,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ki_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  71,                                  // colNo
  "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dbcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo li_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dbcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  134,                                 // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ni_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  134,                                 // lineNo
  137,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo oi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  135,                                 // lineNo
  141,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  135,                                 // lineNo
  143,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  136,                                 // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ri_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  136,                                 // lineNo
  137,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo si_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  134,                                 // lineNo
  71,                                  // colNo
  "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ti_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  134,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ui_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  143,                                 // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  143,                                 // lineNo
  137,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  141,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  143,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yi_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  145,                                 // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo aj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  145,                                 // lineNo
  137,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  143,                                 // lineNo
  71,                                  // colNo
  "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dbcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  143,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dbcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  153,                                 // lineNo
  130,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ej_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  153,                                 // lineNo
  132,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  154,                                 // lineNo
  108,                                 // colNo
  "mem_bvp.mem_T",                     // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  154,                                 // lineNo
  160,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  154,                                 // lineNo
  162,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ij_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  153,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dtcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  153,                                 // lineNo
  75,                                  // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dtcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  163,                                 // lineNo
  130,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  163,                                 // lineNo
  132,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  164,                                 // lineNo
  108,                                 // colNo
  "mem_bvp.mem_T",                     // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  164,                                 // lineNo
  160,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo oj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  164,                                 // lineNo
  162,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  163,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dbcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  163,                                 // lineNo
  75,                                  // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dbcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  173,                                 // lineNo
  130,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  173,                                 // lineNo
  132,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  182,                                 // lineNo
  130,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  182,                                 // lineNo
  132,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  196,                                 // lineNo
  42,                                  // colNo
  "pt_s0_LIT_curr",                    // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  201,                                 // lineNo
  44,                                  // colNo
  "curr_vectT",                        // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  208,                                 // lineNo
  72,                                  // colNo
  "theta",                             // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yj_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  208,                                 // lineNo
  150,                                 // colNo
  "theta",                             // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ak_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  208,                                 // lineNo
  203,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  208,                                 // lineNo
  206,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ck_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  138,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  141,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ek_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  155,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  158,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  218,                                 // lineNo
  195,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  218,                                 // lineNo
  198,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ik_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  221,                                 // lineNo
  139,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  221,                                 // lineNo
  153,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  221,                                 // lineNo
  156,                                 // colNo
  "ui_init",                           // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  232,                                 // lineNo
  147,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  232,                                 // lineNo
  150,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  233,                                 // lineNo
  153,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ok_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  233,                                 // lineNo
  156,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  234,                                 // lineNo
  158,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  234,                                 // lineNo
  161,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  235,                                 // lineNo
  147,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo h_emlrtDCI{ 235,    // lineNo
  150,                                 // colNo
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo sk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  235,                                 // lineNo
  150,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  236,                                 // lineNo
  184,                                 // colNo
  "vect_res",                          // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  232,                                 // lineNo
  79,                                  // colNo
  "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtaus0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  232,                                 // lineNo
  82,                                  // colNo
  "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtaus0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  243,                                 // lineNo
  145,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  243,                                 // lineNo
  148,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yk_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  244,                                 // lineNo
  151,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo al_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  244,                                 // lineNo
  154,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  245,                                 // lineNo
  156,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  245,                                 // lineNo
  159,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  246,                                 // lineNo
  145,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo el_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  246,                                 // lineNo
  148,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  243,                                 // lineNo
  77,                                  // colNo
  "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dfs0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  243,                                 // lineNo
  80,                                  // colNo
  "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dfs0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  253,                                 // lineNo
  147,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo il_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  253,                                 // lineNo
  150,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  254,                                 // lineNo
  153,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  254,                                 // lineNo
  156,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ll_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  255,                                 // lineNo
  147,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ml_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  255,                                 // lineNo
  150,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  253,                                 // lineNo
  79,                                  // colNo
  "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtaus0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ol_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  253,                                 // lineNo
  82,                                  // colNo
  "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtaus0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  264,                                 // lineNo
  145,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ql_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  264,                                 // lineNo
  148,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  265,                                 // lineNo
  151,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  265,                                 // lineNo
  154,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  266,                                 // lineNo
  145,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ul_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  266,                                 // lineNo
  148,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  267,                                 // lineNo
  184,                                 // colNo
  "vect_res",                          // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  264,                                 // lineNo
  77,                                  // colNo
  "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dfs0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  264,                                 // lineNo
  80,                                  // colNo
  "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dfs0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yl_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  275,                                 // lineNo
  142,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo am_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  275,                                 // lineNo
  145,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  276,                                 // lineNo
  116,                                 // colNo
  "mem_bvp.mem_T",                     // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  276,                                 // lineNo
  172,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  276,                                 // lineNo
  175,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo em_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  275,                                 // lineNo
  81,                                  // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dtaus0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  275,                                 // lineNo
  84,                                  // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dtaus0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  284,                                 // lineNo
  140,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  284,                                 // lineNo
  143,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo im_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  285,                                 // lineNo
  116,                                 // colNo
  "mem_bvp.mem_T",                     // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  285,                                 // lineNo
  170,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo km_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  285,                                 // lineNo
  173,                                 // colNo
  "mem_deriv_propag_low.mem_du0.mem_du0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  284,                                 // lineNo
  79,                                  // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dfs0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  284,                                 // lineNo
  82,                                  // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dfs0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  292,                                 // lineNo
  142,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo om_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  292,                                 // lineNo
  145,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  300,                                 // lineNo
  140,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  300,                                 // lineNo
  143,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  308,                                 // lineNo
  145,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  308,                                 // lineNo
  148,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  308,                                 // lineNo
  75,                                  // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dtaus0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo i_emlrtDCI{ 308,    // lineNo
  78,                                  // colNo
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo um_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  308,                                 // lineNo
  78,                                  // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dtaus0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtECInfo h_emlrtECI{ -1,     // nDims
  308,                                 // lineNo
  21,                                  // colNo
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m"// pName
};

static emlrtBCInfo vm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  316,                                 // lineNo
  143,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  316,                                 // lineNo
  146,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xm_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  316,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dfs0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ym_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  316,                                 // lineNo
  76,                                  // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dfs0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtECInfo i_emlrtECI{ -1,     // nDims
  316,                                 // lineNo
  21,                                  // colNo
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m"// pName
};

static emlrtBCInfo an_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  182,                                 // lineNo
  71,                                  // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dbcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  182,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dbcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  300,                                 // lineNo
  77,                                  // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dfs0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  300,                                 // lineNo
  80,                                  // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dfs0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo en_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  173,                                 // lineNo
  71,                                  // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dtcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  173,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dtcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  292,                                 // lineNo
  79,                                  // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dtaus0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  292,                                 // lineNo
  82,                                  // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dtaus0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo in_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  193,                                 // lineNo
  61,                                  // colNo
  "simulation_param.pt_s0_LIT",        // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  208,                                 // lineNo
  120,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  208,                                 // lineNo
  124,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ln_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  208,                                 // lineNo
  127,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dtaus0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo j_emlrtDCI{ 208,    // lineNo
  127,                                 // colNo
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo mn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  286,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  288,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo on_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  290,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dtcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  101,                                 // colNo
  "K",                                 // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  81,                                  // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtaus0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  85,                                  // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtaus0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  88,                                  // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtaus0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  92,                                  // colNo
  "K",                                 // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo un_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  101,                                 // colNo
  "K",                                 // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  75,                                  // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  77,                                  // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  96,                                  // lineNo
  79,                                  // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yn_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  218,                                 // lineNo
  114,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ao_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  218,                                 // lineNo
  118,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  218,                                 // lineNo
  121,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dfs0",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo co_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  221,                                 // lineNo
  101,                                 // colNo
  "K",                                 // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo do_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  221,                                 // lineNo
  78,                                  // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dfs0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo eo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  221,                                 // lineNo
  82,                                  // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dfs0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  221,                                 // lineNo
  85,                                  // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dfs0_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo go_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  286,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ho_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  288,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo io_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  290,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dbcj",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  101,                                 // colNo
  "K",                                 // aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ko_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  75,                                  // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dbcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  77,                                  // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dbcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  104,                                 // lineNo
  79,                                  // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dbcj_ds",// aName
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo ic_emlrtRTEI{ 63,  // lineNo
  44,                                  // colNo
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m"// pName
};

static emlrtRTEInfo jc_emlrtRTEI{ 63,  // lineNo
  67,                                  // colNo
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m"// pName
};

static emlrtRTEInfo kc_emlrtRTEI{ 2,   // lineNo
  7,                                   // colNo
  "Deriv_Propag_Comp_Low_ODE",         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_Comp_Low_ODE.m"// pName
};

// Function Definitions
void Deriv_Propag_Comp_Low_ODE(const emlrtStack &sp, real_T is, const MemBVP
  *mem_bvp, const CTCRCarac *ctcr_carac, const CTCRAct *ctcr_act, const
  CTCRConstruc *ctcr_construc, const SimulationParam *simulation_param,
  MemDerivPropagLow *mem_deriv_propag_low)
{
  static const int8_T b_iv[3]{ 0, 0, 1 };

  coder::array<int32_T, 2U> r2;
  coder::array<int32_T, 1U> ii;
  coder::array<boolean_T, 1U> r;
  coder::array<boolean_T, 1U> r1;
  emlrtStack b_st;
  emlrtStack st;
  real_T dv[3];
  real_T ctcr_construc_tmp;
  real_T d;
  real_T d1;
  real_T d2;
  real_T ind_origin;
  int32_T b_mem_deriv_propag_low[2];
  int32_T c_mem_deriv_propag_low[2];
  int32_T ab_is;
  int32_T ac_is;
  int32_T b_is;
  int32_T bb_is;
  int32_T bc_is;
  int32_T c_is;
  int32_T cb_is;
  int32_T cc_is;
  int32_T d_is;
  int32_T db_is;
  int32_T dc_is;
  int32_T e_is;
  int32_T eb_is;
  int32_T ec_is;
  int32_T f_is;
  int32_T fb_is;
  int32_T fc_is;
  int32_T g_is;
  int32_T gb_is;
  int32_T gc_is;
  int32_T h_is;
  int32_T hb_is;
  int32_T hc_is;
  int32_T i1;
  int32_T i3;
  int32_T i_is;
  int32_T ib_is;
  int32_T ic_is;
  int32_T j_is;
  int32_T jb_is;
  int32_T jc_is;
  int32_T k_is;
  int32_T kb_is;
  int32_T kc_is;
  int32_T l_is;
  int32_T lb_is;
  int32_T lc_is;
  int32_T m_is;
  int32_T mb_is;
  int32_T mc_is;
  int32_T n_is;
  int32_T nb_is;
  int32_T nc_is;
  int32_T o_is;
  int32_T ob_is;
  int32_T oc_is;
  int32_T p_is;
  int32_T pb_is;
  int32_T pc_is;
  int32_T q_is;
  int32_T qb_is;
  int32_T qc_is;
  int32_T r_is;
  int32_T rb_is;
  int32_T rc_is;
  int32_T s_is;
  int32_T sb_is;
  int32_T sc_is;
  int32_T t_is;
  int32_T tb_is;
  int32_T tc_is;
  int32_T u_is;
  int32_T ub_is;
  int32_T uc_is;
  int32_T v_is;
  int32_T vb_is;
  int32_T vc_is;
  int32_T w_is;
  int32_T wb_is;
  int32_T wc_is;
  int32_T x_is;
  int32_T xb_is;
  int32_T y_is;
  int32_T yb_is;
  boolean_T b;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);

  //  ======================================================================= %
  //
  //  This function computes the derivative (w.r.t the current is) of
  //  the Low-Level partial derivatives involved in the Joint Jacobian and/or
  //  the Generalized Compliance Matrix computation.
  //  Here, there is no derivation w.r.t. the unknown initial state vector values yu(0).
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  is                    : (int ∊ [1 , nbP]) Index of the current curvilinear abscissa
  //  mem_bvp               : (class) Memory of the BVP variables
  //  ctcr_carac            : (class) Robot features
  //  ctcr_act              : (class) Robot actuation
  //  ctcr_construc         : (class) Robot features related to the model settings
  //  simulation_param      : (class) Model settings
  //  mem_deriv_propag_low  : (class) Memory of the Low-Level derivatives
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  mem_deriv_propag_low  : (class) Memory of the low-level partial derivatives
  //
  //  ======================================================================= %
  //  ========================================================== %
  //  ================== Getting input values ================== %
  ind_origin = ctcr_construc->ind_origin;
  if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
       mem_bvp->mem_y.mem_t.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
      mem_bvp->mem_y.mem_t.size(1), &hg_emlrtBCI, (emlrtConstCTX)&sp);
  }

  if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
       mem_bvp->mem_y.mem_m0.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
      mem_bvp->mem_y.mem_m0.size(1), &ig_emlrtBCI, (emlrtConstCTX)&sp);
  }

  if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
       mem_bvp->mem_y.mem_n0.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
      mem_bvp->mem_y.mem_n0.size(1), &jg_emlrtBCI, (emlrtConstCTX)&sp);
  }

  if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
       mem_bvp->mem_u0.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
      mem_bvp->mem_u0.size(1), &kg_emlrtBCI, (emlrtConstCTX)&sp);
  }

  if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
       mem_bvp->mem_T.size(2))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
      mem_bvp->mem_T.size(2), &lg_emlrtBCI, (emlrtConstCTX)&sp);
  }

  if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
       ctcr_construc->vect_tau_dist.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
      ctcr_construc->vect_tau_dist.size(1), &mg_emlrtBCI, (emlrtConstCTX)&sp);
  }

  if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
       ctcr_construc->vect_f_dist.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
      ctcr_construc->vect_f_dist.size(1), &ng_emlrtBCI, (emlrtConstCTX)&sp);
  }

  //  ========================================================== %
  if (!(is == ctcr_construc->nbP)) {
    int32_T b_loop_ub;
    int32_T i;
    int32_T i2;
    int32_T loop_ub;

    //  Vector of the tubes involved on the current discretization point
    r.set_size(&ic_emlrtRTEI, &sp, ctcr_construc->vect_ind_iT.size(0));
    loop_ub = ctcr_construc->vect_ind_iT.size(0);
    r1.set_size(&jc_emlrtRTEI, &sp, ctcr_construc->vect_ind_iT.size(0));
    for (i = 0; i < loop_ub; i++) {
      r[i] = (ctcr_construc->vect_ind_iT[i] <= is);
      r1[i] = (is <= ctcr_construc->vect_ind_iT[i +
               ctcr_construc->vect_ind_iT.size(0) * 2]);
    }

    if (r.size(0) != r1.size(0)) {
      emlrtSizeEqCheck1DR2012b(r.size(0), r1.size(0), &e_emlrtECI,
        (emlrtConstCTX)&sp);
    }

    st.site = &x_emlrtRSI;
    loop_ub = r.size(0);
    for (i = 0; i < loop_ub; i++) {
      r[i] = (r[i] && r1[i]);
    }

    b_st.site = &p_emlrtRSI;
    coder::eml_find(b_st, r, ii);
    if (simulation_param->bool_J) {
      //  ======================= %
      //  ==== ddti(s)ds_dtc ==== %
      //  (eq 31a)
      i = mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i,
          &pg_emlrtBCI, (emlrtConstCTX)&sp);
      }

      i = mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i,
          &og_emlrtBCI, (emlrtConstCTX)&sp);
      }

      b_mem_deriv_propag_low[0] =
        mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(0);
      b_mem_deriv_propag_low[1] =
        mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(1);
      c_mem_deriv_propag_low[0] =
        mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0);
      c_mem_deriv_propag_low[1] =
        mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(1);
      emlrtSubAssignSizeCheckR2012b(&b_mem_deriv_propag_low[0], 2,
        &c_mem_deriv_propag_low[0], 2, &f_emlrtECI, (emlrtCTX)&sp);
      loop_ub = mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(1);
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0);
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds[(i2 +
            mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(0) * i) +
            mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(0) *
            mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(1) * (
            static_cast<int32_T>(is) - 1)] =
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj[(i2 +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0) * i) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0) *
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(1) * (static_cast<
            int32_T>(is) - 1)];
        }
      }

      //  ======================= %
      //  ==== ddti(s)ds_dbc ==== %
      //  (eq 31a)
      i = mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i,
          &rg_emlrtBCI, (emlrtConstCTX)&sp);
      }

      i = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i,
          &qg_emlrtBCI, (emlrtConstCTX)&sp);
      }

      b_mem_deriv_propag_low[0] =
        mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(0);
      b_mem_deriv_propag_low[1] =
        mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(1);
      c_mem_deriv_propag_low[0] =
        mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0);
      c_mem_deriv_propag_low[1] =
        mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1);
      emlrtSubAssignSizeCheckR2012b(&b_mem_deriv_propag_low[0], 2,
        &c_mem_deriv_propag_low[0], 2, &g_emlrtECI, (emlrtCTX)&sp);
      loop_ub = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1);
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0);
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds[(i2 +
            mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(0) * i) +
            mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(0) *
            mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(1) * (
            static_cast<int32_T>(is) - 1)] =
            mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj[(i2 +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) * i) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) *
            mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)];
        }
      }
    }

    if (is >= ctcr_construc->ind_origin) {
      real_T b_R_tmp[9];
      real_T b_b[9];
      real_T b_mem_bvp[9];
      real_T d_mem_deriv_propag_low[9];
      real_T R_tmp[3];
      real_T b_ctcr_construc[3];
      real_T dv1[3];
      real_T R_tmp_tmp;
      real_T b_R_tmp_tmp;
      real_T b_ctcr_construc_tmp;
      real_T c_b;
      real_T c_ctcr_construc_tmp;
      real_T e_mem_deriv_propag_low;
      real_T is0_tmp;
      int32_T i4;
      int32_T tp_uinit_tmp;
      boolean_T b1;
      if (simulation_param->bool_J) {
        i = static_cast<int32_T>(ctcr_carac->nbT);
        emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
          static_cast<int32_T>(ctcr_carac->nbT), &m_emlrtRTEI, (emlrtConstCTX)&
          sp);
        if (i - 1 >= 0) {
          i1 = ii.size(0);
          if (i1 - 1 >= 0) {
            for (i2 = 0; i2 < 3; i2++) {
              dv[i2] = (mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1)] *
                        static_cast<real_T>(iv[3 * i2]) + mem_bvp->mem_u0[3 * (
                         static_cast<int32_T>(is) - 1) + 1] * static_cast<real_T>
                        (iv[3 * i2 + 1])) + mem_bvp->mem_u0[3 *
                (static_cast<int32_T>(is) - 1) + 2] * static_cast<real_T>(iv[3 *
                i2 + 2]);
            }
          }

          d = mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1) + 2];
          d1 = mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1) + 1];
          d2 = mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1)];
        }

        for (int32_T j{0}; j < i; j++) {
          for (loop_ub = 0; loop_ub < i1; loop_ub++) {
            real_T tp_uinit[2];
            real_T d3;
            real_T f_mem_deriv_propag_low;
            real_T g_mem_deriv_propag_low;
            if (loop_ub + 1 > ii.size(0)) {
              emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, ii.size(0),
                &sg_emlrtBCI, (emlrtConstCTX)&sp);
            }

            //  ======================== %
            //  ==== dduzi(s)ds_dtc ==== %
            //  (eq 31b)
            tp_uinit_tmp = ii[loop_ub];
            st.site = &y_emlrtRSI;
            duiinitxy_dtcj(st, is, ctcr_carac->Rc, static_cast<real_T>
                           (tp_uinit_tmp), static_cast<real_T>(j) + 1.0,
                           ctcr_act->theta_c, ctcr_construc->vect_ind_iT,
                           ind_origin, tp_uinit);
            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1);
            if ((j + 1 < 1) || (j + 1 > i2)) {
              emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &tg_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &ug_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = ii[loop_ub];
            if ((i2 < 1) || (i2 > mem_bvp->mem_y.mem_t.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, mem_bvp->mem_y.mem_t.size(0),
                &vg_emlrtBCI, (emlrtConstCTX)&sp);
            }

            //  ======================================================================= %
            //
            //  This function produces a rotation matrix R, associated to an angle gamma,
            //  around the Z-direction
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  gamma     : (float) angle in [rad]
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  R         : (3x3) Rotation matrix in SO(3)
            //
            //  ======================================================================= %
            R_tmp_tmp = mem_bvp->mem_y.mem_t[(ii[loop_ub] +
              mem_bvp->mem_y.mem_t.size(0) * (static_cast<int32_T>(is) - 1)) - 1];
            b_R_tmp_tmp = muDoubleScalarSin(R_tmp_tmp);
            R_tmp_tmp = muDoubleScalarCos(R_tmp_tmp);
            b1 = ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                   ctcr_construc->ui_init.size(1)));
            if (b1) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->ui_init.size(1), &wg_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = ii[loop_ub];
            if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size(2),
                &xg_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->ui_init.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->ui_init.size(1), &yg_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = ii[loop_ub];
            if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size(2),
                &ah_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = ii[loop_ub];
            if ((i2 < 1) || (i2 > mem_bvp->mem_y.mem_t.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, mem_bvp->mem_y.mem_t.size(0),
                &bh_emlrtBCI, (emlrtConstCTX)&sp);
            }

            //  ======================================================================= %
            //
            //  This function produces a rotation matrix R, associated to an angle gamma,
            //  around the Z-direction
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  gamma     : (float) angle in [rad]
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  R         : (3x3) Rotation matrix in SO(3)
            //
            //  ======================================================================= %
            i2 = mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(0);
            if ((ii[loop_ub] < 1) || (ii[loop_ub] > i2)) {
              emlrtDynamicBoundsCheckR2012b(ii[loop_ub], 1, i2, &mn_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(1);
            if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) || (
                 static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, i2, &nn_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &on_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_b = mem_deriv_propag_low->mem_dti.mem_dti_dtcj[((ii[loop_ub] +
              mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(0) * j) +
              mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(0) *
              mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(1) * (static_cast<
              int32_T>(is) - 1)) - 1];
            i2 = ii[loop_ub];
            if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size(2),
                &ch_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->ui_init.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->ui_init.size(1), &dh_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = ii[loop_ub];
            if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size(2),
                &eh_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = ii[loop_ub];
            if ((i2 < 1) || (i2 > mem_bvp->mem_y.mem_t.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, mem_bvp->mem_y.mem_t.size(0),
                &fh_emlrtBCI, (emlrtConstCTX)&sp);
            }

            //  ======================================================================= %
            //
            //  This function produces a rotation matrix R, associated to an angle gamma,
            //  around the Z-direction
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  gamma     : (float) angle in [rad]
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  R         : (3x3) Rotation matrix in SO(3)
            //
            //  ======================================================================= %
            b_R_tmp[0] = R_tmp_tmp;
            b_R_tmp[3] = -b_R_tmp_tmp;
            b_R_tmp[6] = 0.0;
            b_R_tmp[1] = b_R_tmp_tmp;
            b_R_tmp[4] = R_tmp_tmp;
            b_R_tmp[7] = 0.0;
            b_ctcr_construc_tmp = ctcr_construc->ui_init[(3 *
              (static_cast<int32_T>(is) - 1) + 3 * ctcr_construc->ui_init.size(1)
              * (ii[loop_ub] - 1)) + 1];
            b_ctcr_construc[0] = b_ctcr_construc_tmp;
            c_ctcr_construc_tmp = -ctcr_construc->ui_init[3 *
              (static_cast<int32_T>(is) - 1) + 3 * ctcr_construc->ui_init.size(1)
              * (ii[loop_ub] - 1)];
            b_ctcr_construc[1] = c_ctcr_construc_tmp;
            b_ctcr_construc[2] = 0.0;
            f_mem_deriv_propag_low = 0.0;
            for (i2 = 0; i2 < 3; i2++) {
              b_loop_ub = b_iv[i2];
              f_mem_deriv_propag_low +=
                ((mem_deriv_propag_low->mem_du0.mem_du0_dtcj[3 * j + 3 *
                  mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) * (
                   static_cast<int32_T>(is) - 1)] * b_R_tmp[3 * i2] +
                  mem_deriv_propag_low->mem_du0.mem_du0_dtcj[(3 * j + 3 *
                   mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) * (
                    static_cast<int32_T>(is) - 1)) + 1] * b_R_tmp[3 * i2 + 1]) +
                 mem_deriv_propag_low->mem_du0.mem_du0_dtcj[(3 * j + 3 *
                  mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) * (
                   static_cast<int32_T>(is) - 1)) + 2] * static_cast<real_T>
                 (b_loop_ub)) * b_ctcr_construc[i2];
              b_R_tmp[3 * i2 + 2] = b_loop_ub;
            }

            b_R_tmp[0] = R_tmp_tmp;
            b_R_tmp[3] = -b_R_tmp_tmp;
            b_R_tmp[6] = 0.0;
            b_R_tmp[1] = b_R_tmp_tmp;
            b_R_tmp[4] = R_tmp_tmp;
            b_R_tmp[7] = 0.0;
            b_ctcr_construc[0] = b_ctcr_construc_tmp;
            b_ctcr_construc[1] = c_ctcr_construc_tmp;
            b_ctcr_construc[2] = 0.0;
            g_mem_deriv_propag_low = 0.0;
            d3 = dv[0];
            is0_tmp = dv[1];
            e_mem_deriv_propag_low = dv[2];
            for (i2 = 0; i2 < 3; i2++) {
              i4 = 3 * i2 + 2;
              g_mem_deriv_propag_low += ((d3 * b_R_tmp[3 * i2] + is0_tmp *
                b_R_tmp[3 * i2 + 1]) + e_mem_deriv_propag_low * b_R_tmp[i4]) *
                c_b * b_ctcr_construc[i2];
              b_R_tmp[i4] = b_iv[i2];
            }

            b_R_tmp[0] = R_tmp_tmp;
            b_R_tmp[3] = -b_R_tmp_tmp;
            b_R_tmp[6] = 0.0;
            b_R_tmp[1] = b_R_tmp_tmp;
            b_R_tmp[4] = R_tmp_tmp;
            b_R_tmp[7] = 0.0;
            b_ctcr_construc[0] = tp_uinit[1];
            b_ctcr_construc[1] = -tp_uinit[0];
            b_ctcr_construc[2] = 0.0;
            e_mem_deriv_propag_low = 0.0;
            for (i2 = 0; i2 < 3; i2++) {
              e_mem_deriv_propag_low += ((mem_bvp->mem_u0[3 *
                (static_cast<int32_T>(is) - 1)] * b_R_tmp[3 * i2] +
                mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1) + 1] *
                b_R_tmp[3 * i2 + 1]) + mem_bvp->mem_u0[3 * (static_cast<int32_T>
                (is) - 1) + 2] * b_R_tmp[3 * i2 + 2]) * b_ctcr_construc[i2];
            }

            b1 = ((ii[loop_ub] < 1) || (ii[loop_ub] > ctcr_construc->K.size(2)));
            if (b1) {
              emlrtDynamicBoundsCheckR2012b(ii[loop_ub], 1,
                ctcr_construc->K.size(2), &tn_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((ii[loop_ub] < 1) || (ii[loop_ub] > ctcr_construc->K.size(2))) {
              emlrtDynamicBoundsCheckR2012b(ii[loop_ub], 1,
                ctcr_construc->K.size(2), &un_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(0);
            if ((ii[loop_ub] < 1) || (ii[loop_ub] > i2)) {
              emlrtDynamicBoundsCheckR2012b(ii[loop_ub], 1, i2, &vn_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(1);
            if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) || (
                 static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, i2, &wn_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &xn_emlrtBCI, (emlrtConstCTX)&sp);
            }

            d3 = ctcr_construc->K[9 * (ii[loop_ub] - 1)] / ctcr_construc->K[9 *
              (ii[loop_ub] - 1) + 8];
            mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds[((ii[loop_ub] +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(0) * j) +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(0) *
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)) - 1] = d3 *
              ((f_mem_deriv_propag_low + g_mem_deriv_propag_low) +
               e_mem_deriv_propag_low);

            //  ======================== %
            //  ==== dduzi(s)ds_dbc ==== %
            //  (eq 31b)
            st.site = &ab_emlrtRSI;
            duiinitxy_dbcj(st, is, ctcr_construc->vect_res, ctcr_carac->Rc,
                           static_cast<real_T>(tp_uinit_tmp), static_cast<real_T>
                           (j) + 1.0, ctcr_act->theta_c,
                           ctcr_construc->vect_ind_iT, ind_origin,
                           ctcr_carac->nbT, tp_uinit);
            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1);
            if ((j + 1 < 1) || (j + 1 > i2)) {
              emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &gh_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &hh_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = ii[loop_ub];
            if ((i2 < 1) || (i2 > mem_bvp->mem_y.mem_t.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, mem_bvp->mem_y.mem_t.size(0),
                &ih_emlrtBCI, (emlrtConstCTX)&sp);
            }

            //  ======================================================================= %
            //
            //  This function produces a rotation matrix R, associated to an angle gamma,
            //  around the Z-direction
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  gamma     : (float) angle in [rad]
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  R         : (3x3) Rotation matrix in SO(3)
            //
            //  ======================================================================= %
            i2 = ii[loop_ub];
            if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size(2),
                &jh_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->ui_init.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->ui_init.size(1), &kh_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = ii[loop_ub];
            if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size(2),
                &lh_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = ii[loop_ub];
            if ((i2 < 1) || (i2 > mem_bvp->mem_y.mem_t.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, mem_bvp->mem_y.mem_t.size(0),
                &mh_emlrtBCI, (emlrtConstCTX)&sp);
            }

            //  ======================================================================= %
            //
            //  This function produces a rotation matrix R, associated to an angle gamma,
            //  around the Z-direction
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  gamma     : (float) angle in [rad]
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  R         : (3x3) Rotation matrix in SO(3)
            //
            //  ======================================================================= %
            i2 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0);
            if ((ii[loop_ub] < 1) || (ii[loop_ub] > i2)) {
              emlrtDynamicBoundsCheckR2012b(ii[loop_ub], 1, i2, &go_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1);
            if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) || (
                 static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, i2, &ho_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &io_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_b = mem_deriv_propag_low->mem_dti.mem_dti_dbcj[((ii[loop_ub] +
              mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0) * j) +
              mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0) *
              mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1) * (static_cast<
              int32_T>(is) - 1)) - 1];
            i2 = ii[loop_ub];
            if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size(2),
                &nh_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->ui_init.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->ui_init.size(1), &oh_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = ii[loop_ub];
            if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size(2),
                &ph_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = ii[loop_ub];
            if ((i2 < 1) || (i2 > mem_bvp->mem_y.mem_t.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, mem_bvp->mem_y.mem_t.size(0),
                &qh_emlrtBCI, (emlrtConstCTX)&sp);
            }

            //  ======================================================================= %
            //
            //  This function produces a rotation matrix R, associated to an angle gamma,
            //  around the Z-direction
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  gamma     : (float) angle in [rad]
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  R         : (3x3) Rotation matrix in SO(3)
            //
            //  ======================================================================= %
            b_R_tmp[0] = R_tmp_tmp;
            b_R_tmp[3] = -b_R_tmp_tmp;
            b_R_tmp[6] = 0.0;
            b_R_tmp[1] = b_R_tmp_tmp;
            b_R_tmp[4] = R_tmp_tmp;
            b_R_tmp[7] = 0.0;
            b_ctcr_construc[0] = b_ctcr_construc_tmp;
            b_ctcr_construc[1] = c_ctcr_construc_tmp;
            b_ctcr_construc[2] = 0.0;
            f_mem_deriv_propag_low = 0.0;
            for (i2 = 0; i2 < 3; i2++) {
              b_loop_ub = b_iv[i2];
              f_mem_deriv_propag_low +=
                ((mem_deriv_propag_low->mem_du0.mem_du0_dbcj[3 * j + 3 *
                  mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) * (
                   static_cast<int32_T>(is) - 1)] * b_R_tmp[3 * i2] +
                  mem_deriv_propag_low->mem_du0.mem_du0_dbcj[(3 * j + 3 *
                   mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) * (
                    static_cast<int32_T>(is) - 1)) + 1] * b_R_tmp[3 * i2 + 1]) +
                 mem_deriv_propag_low->mem_du0.mem_du0_dbcj[(3 * j + 3 *
                  mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) * (
                   static_cast<int32_T>(is) - 1)) + 2] * static_cast<real_T>
                 (b_loop_ub)) * b_ctcr_construc[i2];
              b_R_tmp[3 * i2 + 2] = b_loop_ub;
            }

            b_R_tmp[0] = R_tmp_tmp;
            b_R_tmp[3] = -b_R_tmp_tmp;
            b_R_tmp[6] = 0.0;
            b_R_tmp[1] = b_R_tmp_tmp;
            b_R_tmp[4] = R_tmp_tmp;
            b_R_tmp[7] = 0.0;
            b_ctcr_construc[0] = b_ctcr_construc_tmp;
            b_ctcr_construc[1] = c_ctcr_construc_tmp;
            b_ctcr_construc[2] = 0.0;
            g_mem_deriv_propag_low = 0.0;
            is0_tmp = dv[0];
            e_mem_deriv_propag_low = dv[1];
            b_ctcr_construc_tmp = dv[2];
            for (i2 = 0; i2 < 3; i2++) {
              i4 = 3 * i2 + 2;
              g_mem_deriv_propag_low += ((is0_tmp * b_R_tmp[3 * i2] +
                e_mem_deriv_propag_low * b_R_tmp[3 * i2 + 1]) +
                b_ctcr_construc_tmp * b_R_tmp[i4]) * c_b * b_ctcr_construc[i2];
              b_R_tmp[i4] = b_iv[i2];
            }

            b_R_tmp[0] = R_tmp_tmp;
            b_R_tmp[3] = -b_R_tmp_tmp;
            b_R_tmp[6] = 0.0;
            b_R_tmp[1] = b_R_tmp_tmp;
            b_R_tmp[4] = R_tmp_tmp;
            b_R_tmp[7] = 0.0;
            b_ctcr_construc[0] = tp_uinit[1];
            b_ctcr_construc[1] = -tp_uinit[0];
            b_ctcr_construc[2] = 0.0;
            e_mem_deriv_propag_low = 0.0;
            for (i2 = 0; i2 < 3; i2++) {
              e_mem_deriv_propag_low += ((mem_bvp->mem_u0[3 *
                (static_cast<int32_T>(is) - 1)] * b_R_tmp[3 * i2] +
                mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1) + 1] *
                b_R_tmp[3 * i2 + 1]) + mem_bvp->mem_u0[3 * (static_cast<int32_T>
                (is) - 1) + 2] * b_R_tmp[3 * i2 + 2]) * b_ctcr_construc[i2];
            }

            if ((ii[loop_ub] < 1) || (ii[loop_ub] > ctcr_construc->K.size(2))) {
              emlrtDynamicBoundsCheckR2012b(ii[loop_ub], 1,
                ctcr_construc->K.size(2), &jo_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(0);
            if ((ii[loop_ub] < 1) || (ii[loop_ub] > i2)) {
              emlrtDynamicBoundsCheckR2012b(ii[loop_ub], 1, i2, &ko_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(1);
            if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) || (
                 static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, i2, &lo_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &mo_emlrtBCI, (emlrtConstCTX)&sp);
            }

            mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds[((ii[loop_ub] +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(0) * j) +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(0) *
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)) - 1] = d3 *
              ((f_mem_deriv_propag_low + g_mem_deriv_propag_low) +
               e_mem_deriv_propag_low);
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
            }
          }

          //  ======================= %
          //  ==== ddm0(s)ds_dtc ==== %
          //  (eq 31c)
          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &xh_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(3);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &yh_emlrtBCI, (emlrtConstCTX)&sp);
          }

          //  ======================================================================= %
          //
          //  This function creates the skew-symmetric matrix M formed from V
          //
          //  ====================
          //  ====== INPUTS ======
          //
          //  V     : (3x1) Vector
          //
          //  ====================
          //  ===== OUTPUTS ======
          //
          //  M     : (3x3) Matrix
          //
          //  ======================================================================= %
          b_R_tmp[0] = 0.0;
          b_R_tmp[3] = -d;
          b_R_tmp[6] = d1;
          b_R_tmp[1] = d;
          b_R_tmp[4] = 0.0;
          b_R_tmp[7] = -d2;
          b_R_tmp[2] = -d1;
          b_R_tmp[5] = d2;
          b_R_tmp[8] = 0.0;
          i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &rh_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &sh_emlrtBCI, (emlrtConstCTX)&sp);
          }

          //  ======================================================================= %
          //
          //  This function creates the skew-symmetric matrix M formed from V
          //
          //  ====================
          //  ====== INPUTS ======
          //
          //  V     : (3x1) Vector
          //
          //  ====================
          //  ===== OUTPUTS ======
          //
          //  M     : (3x3) Matrix
          //
          //  ======================================================================= %
          i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &th_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &uh_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &vh_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &wh_emlrtBCI, (emlrtConstCTX)&sp);
          }

          b_b[0] = 0.0;
          b_b[3] = -mem_deriv_propag_low->mem_du0.mem_du0_dtcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 2];
          b_b[6] = mem_deriv_propag_low->mem_du0.mem_du0_dtcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 1];
          b_b[1] = mem_deriv_propag_low->mem_du0.mem_du0_dtcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 2];
          b_b[4] = 0.0;
          b_b[7] = -mem_deriv_propag_low->mem_du0.mem_du0_dtcj[3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)];
          b_b[2] = -mem_deriv_propag_low->mem_du0.mem_du0_dtcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 1];
          b_b[5] = mem_deriv_propag_low->mem_du0.mem_du0_dtcj[3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)];
          b_b[8] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            dv1[i2] = (((b_b[i2] * mem_bvp->mem_y.mem_m0[3 *
                         (static_cast<int32_T>(is) - 1)] + b_b[i2 + 3] *
                         mem_bvp->mem_y.mem_m0[3 * (static_cast<int32_T>(is) - 1)
                         + 1]) + b_b[i2 + 6] * mem_bvp->mem_y.mem_m0[3 * (
              static_cast<int32_T>(is) - 1) + 2]) + ((b_R_tmp[i2] *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj[3 * j + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) * (static_cast<
              int32_T>(is) - 1)] + b_R_tmp[i2 + 3] *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj[(3 * j + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) *
              (static_cast<int32_T>(is) - 1)) + 1]) + b_R_tmp[i2 + 6] *
                        mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj[(3 * j + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) * (static_cast<
              int32_T>(is) - 1)) + 2])) - ((static_cast<real_T>(iv[i2]) *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[3 * j + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) *
              (static_cast<int32_T>(is) - 1)] + static_cast<real_T>(iv[i2 + 3]) *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[(3 * j + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) * (static_cast<
              int32_T>(is) - 1)) + 1]) + 0.0 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[(3 * j + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) *
              (static_cast<int32_T>(is) - 1)) + 2]);
            b_ctcr_construc[i2] = (mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[(3
              * i2 + 9 * j) + 9 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) *
              (static_cast<int32_T>(is) - 1)] * ctcr_construc->vect_tau_dist[3 *
              (static_cast<int32_T>(is) - 1)] +
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((3 * i2 + 9 * j) + 9 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) *
              (static_cast<int32_T>(is) - 1)) + 1] *
              ctcr_construc->vect_tau_dist[3 * (static_cast<int32_T>(is) - 1) +
              1]) + mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((3 * i2 + 9 * j)
              + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (
              static_cast<int32_T>(is) - 1)) + 2] * ctcr_construc->
              vect_tau_dist[3 * (static_cast<int32_T>(is) - 1) + 2];
          }

          i2 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(1);
          if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(j) + 1U), 1, i2, &ai_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &bi_emlrtBCI, (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds[3 * j + 3 *
            mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(1) * (
            static_cast<int32_T>(is) - 1)] = dv1[0] - b_ctcr_construc[0];
          mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds[(3 * j + 3 *
            mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(1) * (
            static_cast<int32_T>(is) - 1)) + 1] = dv1[1] - b_ctcr_construc[1];
          mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds[(3 * j + 3 *
            mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(1) * (
            static_cast<int32_T>(is) - 1)) + 2] = dv1[2] - b_ctcr_construc[2];

          //  ======================= %
          //  ==== ddm0(s)ds_dbc ==== %
          //  (eq 31c)
          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &ii_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &ji_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &ci_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &di_emlrtBCI, (emlrtConstCTX)&sp);
          }

          //  ======================================================================= %
          //
          //  This function creates the skew-symmetric matrix M formed from V
          //
          //  ====================
          //  ====== INPUTS ======
          //
          //  V     : (3x1) Vector
          //
          //  ====================
          //  ===== OUTPUTS ======
          //
          //  M     : (3x3) Matrix
          //
          //  ======================================================================= %
          i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &ei_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &fi_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &gi_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &hi_emlrtBCI, (emlrtConstCTX)&sp);
          }

          b_b[0] = 0.0;
          b_b[3] = -mem_deriv_propag_low->mem_du0.mem_du0_dbcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 2];
          b_b[6] = mem_deriv_propag_low->mem_du0.mem_du0_dbcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 1];
          b_b[1] = mem_deriv_propag_low->mem_du0.mem_du0_dbcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 2];
          b_b[4] = 0.0;
          b_b[7] = -mem_deriv_propag_low->mem_du0.mem_du0_dbcj[3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)];
          b_b[2] = -mem_deriv_propag_low->mem_du0.mem_du0_dbcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 1];
          b_b[5] = mem_deriv_propag_low->mem_du0.mem_du0_dbcj[3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)];
          b_b[8] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            dv1[i2] = (((b_b[i2] * mem_bvp->mem_y.mem_m0[3 *
                         (static_cast<int32_T>(is) - 1)] + b_b[i2 + 3] *
                         mem_bvp->mem_y.mem_m0[3 * (static_cast<int32_T>(is) - 1)
                         + 1]) + b_b[i2 + 6] * mem_bvp->mem_y.mem_m0[3 * (
              static_cast<int32_T>(is) - 1) + 2]) + ((b_R_tmp[i2] *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[3 * j + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) * (static_cast<
              int32_T>(is) - 1)] + b_R_tmp[i2 + 3] *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[(3 * j + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) *
              (static_cast<int32_T>(is) - 1)) + 1]) + b_R_tmp[i2 + 6] *
                        mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[(3 * j + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) * (static_cast<
              int32_T>(is) - 1)) + 2])) - ((static_cast<real_T>(iv[i2]) *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[3 * j + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) *
              (static_cast<int32_T>(is) - 1)] + static_cast<real_T>(iv[i2 + 3]) *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[(3 * j + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) * (static_cast<
              int32_T>(is) - 1)) + 1]) + 0.0 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[(3 * j + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) *
              (static_cast<int32_T>(is) - 1)) + 2]);
            b_ctcr_construc[i2] = (mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[(3
              * i2 + 9 * j) + 9 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) *
              (static_cast<int32_T>(is) - 1)] * ctcr_construc->vect_tau_dist[3 *
              (static_cast<int32_T>(is) - 1)] +
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i2 + 9 * j) + 9 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) *
              (static_cast<int32_T>(is) - 1)) + 1] *
              ctcr_construc->vect_tau_dist[3 * (static_cast<int32_T>(is) - 1) +
              1]) + mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i2 + 9 * j)
              + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
              static_cast<int32_T>(is) - 1)) + 2] * ctcr_construc->
              vect_tau_dist[3 * (static_cast<int32_T>(is) - 1) + 2];
          }

          i2 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(1);
          if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(j) + 1U), 1, i2, &ki_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &li_emlrtBCI, (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds[3 * j + 3 *
            mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(1) * (
            static_cast<int32_T>(is) - 1)] = dv1[0] - b_ctcr_construc[0];
          mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds[(3 * j + 3 *
            mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(1) * (
            static_cast<int32_T>(is) - 1)) + 1] = dv1[1] - b_ctcr_construc[1];
          mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds[(3 * j + 3 *
            mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(1) * (
            static_cast<int32_T>(is) - 1)) + 2] = dv1[2] - b_ctcr_construc[2];

          //  ======================= %
          //  ==== ddn0(s)ds_dtc ==== %
          //  (eq 31d)
          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &qi_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(3);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &ri_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &mi_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &ni_emlrtBCI, (emlrtConstCTX)&sp);
          }

          //  ======================================================================= %
          //
          //  This function creates the skew-symmetric matrix M formed from V
          //
          //  ====================
          //  ====== INPUTS ======
          //
          //  V     : (3x1) Vector
          //
          //  ====================
          //  ===== OUTPUTS ======
          //
          //  M     : (3x3) Matrix
          //
          //  ======================================================================= %
          i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &oi_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &pi_emlrtBCI, (emlrtConstCTX)&sp);
          }

          b_b[0] = 0.0;
          b_b[3] = -mem_deriv_propag_low->mem_du0.mem_du0_dtcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 2];
          b_b[6] = mem_deriv_propag_low->mem_du0.mem_du0_dtcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 1];
          b_b[1] = mem_deriv_propag_low->mem_du0.mem_du0_dtcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 2];
          b_b[4] = 0.0;
          b_b[7] = -mem_deriv_propag_low->mem_du0.mem_du0_dtcj[3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)];
          b_b[2] = -mem_deriv_propag_low->mem_du0.mem_du0_dtcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 1];
          b_b[5] = mem_deriv_propag_low->mem_du0.mem_du0_dtcj[3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)];
          b_b[8] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            b_ctcr_construc[i2] = (b_R_tmp[i2] *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[3 * j + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) *
              (static_cast<int32_T>(is) - 1)] + b_R_tmp[i2 + 3] *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[(3 * j + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) *
              (static_cast<int32_T>(is) - 1)) + 1]) + b_R_tmp[i2 + 6] *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[(3 * j + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) *
              (static_cast<int32_T>(is) - 1)) + 2];
            R_tmp[i2] = (b_b[i2] * mem_bvp->mem_y.mem_n0[3 *
                         (static_cast<int32_T>(is) - 1)] + b_b[i2 + 3] *
                         mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(is) - 1)
                         + 1]) + b_b[i2 + 6] * mem_bvp->mem_y.mem_n0[3 * (
              static_cast<int32_T>(is) - 1) + 2];
          }

          i2 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.size(1);
          if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(j) + 1U), 1, i2, &si_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &ti_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i2 = 0; i2 < 3; i2++) {
            mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] = (R_tmp[i2] + b_ctcr_construc[i2])
              - ((mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[(3 * i2 + 9 * j) +
                  9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (
                   static_cast<int32_T>(is) - 1)] * ctcr_construc->vect_f_dist[3
                  * (static_cast<int32_T>(is) - 1)] +
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((3 * i2 + 9 * j) +
                   9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (
                    static_cast<int32_T>(is) - 1)) + 1] *
                  ctcr_construc->vect_f_dist[3 * (static_cast<int32_T>(is) - 1)
                  + 1]) + mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((3 * i2 +
                   9 * j) + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size
                  (2) * (static_cast<int32_T>(is) - 1)) + 2] *
                 ctcr_construc->vect_f_dist[3 * (static_cast<int32_T>(is) - 1) +
                 2]);
          }

          //  ======================= %
          //  ==== ddn0(s)ds_dbc ==== %
          //  (eq 31d)
          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &yi_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &aj_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &ui_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &vi_emlrtBCI, (emlrtConstCTX)&sp);
          }

          //  ======================================================================= %
          //
          //  This function creates the skew-symmetric matrix M formed from V
          //
          //  ====================
          //  ====== INPUTS ======
          //
          //  V     : (3x1) Vector
          //
          //  ====================
          //  ===== OUTPUTS ======
          //
          //  M     : (3x3) Matrix
          //
          //  ======================================================================= %
          i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &wi_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &xi_emlrtBCI, (emlrtConstCTX)&sp);
          }

          b_b[0] = 0.0;
          b_b[3] = -mem_deriv_propag_low->mem_du0.mem_du0_dbcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 2];
          b_b[6] = mem_deriv_propag_low->mem_du0.mem_du0_dbcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 1];
          b_b[1] = mem_deriv_propag_low->mem_du0.mem_du0_dbcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 2];
          b_b[4] = 0.0;
          b_b[7] = -mem_deriv_propag_low->mem_du0.mem_du0_dbcj[3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)];
          b_b[2] = -mem_deriv_propag_low->mem_du0.mem_du0_dbcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 1];
          b_b[5] = mem_deriv_propag_low->mem_du0.mem_du0_dbcj[3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)];
          b_b[8] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            b_ctcr_construc[i2] = (b_R_tmp[i2] *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[3 * j + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) *
              (static_cast<int32_T>(is) - 1)] + b_R_tmp[i2 + 3] *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[(3 * j + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) *
              (static_cast<int32_T>(is) - 1)) + 1]) + b_R_tmp[i2 + 6] *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[(3 * j + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) *
              (static_cast<int32_T>(is) - 1)) + 2];
            R_tmp[i2] = (b_b[i2] * mem_bvp->mem_y.mem_n0[3 *
                         (static_cast<int32_T>(is) - 1)] + b_b[i2 + 3] *
                         mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(is) - 1)
                         + 1]) + b_b[i2 + 6] * mem_bvp->mem_y.mem_n0[3 * (
              static_cast<int32_T>(is) - 1) + 2];
          }

          i2 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.size(1);
          if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(j) + 1U), 1, i2, &bj_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &cj_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i2 = 0; i2 < 3; i2++) {
            mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] = (R_tmp[i2] + b_ctcr_construc[i2])
              - ((mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[(3 * i2 + 9 * j) +
                  9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                   static_cast<int32_T>(is) - 1)] * ctcr_construc->vect_f_dist[3
                  * (static_cast<int32_T>(is) - 1)] +
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i2 + 9 * j) +
                   9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                    static_cast<int32_T>(is) - 1)) + 1] *
                  ctcr_construc->vect_f_dist[3 * (static_cast<int32_T>(is) - 1)
                  + 1]) + mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i2 +
                   9 * j) + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size
                  (2) * (static_cast<int32_T>(is) - 1)) + 2] *
                 ctcr_construc->vect_f_dist[3 * (static_cast<int32_T>(is) - 1) +
                 2]);
          }

          //  ======================= %
          //  ==== ddR0(s)ds_dtc ==== %
          //  (eq 31e)
          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &dj_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(3);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &ej_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
               mem_bvp->mem_T.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
              mem_bvp->mem_T.size(2), &fj_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &gj_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &hj_emlrtBCI, (emlrtConstCTX)&sp);
          }

          //  ======================================================================= %
          //
          //  This function creates the skew-symmetric matrix M formed from V
          //
          //  ====================
          //  ====== INPUTS ======
          //
          //  V     : (3x1) Vector
          //
          //  ====================
          //  ===== OUTPUTS ======
          //
          //  M     : (3x3) Matrix
          //
          //  ======================================================================= %
          b_b[0] = 0.0;
          b_b[3] = -mem_deriv_propag_low->mem_du0.mem_du0_dtcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) * (static_cast<
            int32_T>(is) - 1)) + 2];
          b_b[6] = mem_deriv_propag_low->mem_du0.mem_du0_dtcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 1];
          b_b[1] = mem_deriv_propag_low->mem_du0.mem_du0_dtcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 2];
          b_b[4] = 0.0;
          b_b[7] = -mem_deriv_propag_low->mem_du0.mem_du0_dtcj[3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)];
          b_b[2] = -mem_deriv_propag_low->mem_du0.mem_du0_dtcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 1];
          b_b[5] = mem_deriv_propag_low->mem_du0.mem_du0_dtcj[3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)];
          b_b[8] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            for (i4 = 0; i4 < 3; i4++) {
              loop_ub = 3 * i4 + 1;
              b_loop_ub = 3 * i4 + 2;
              tp_uinit_tmp = i2 + 3 * i4;
              b_mem_bvp[tp_uinit_tmp] = (mem_bvp->mem_T[i2 + 16 * (static_cast<
                int32_T>(is) - 1)] * b_b[3 * i4] + mem_bvp->mem_T[(i2 + 16 * (
                static_cast<int32_T>(is) - 1)) + 4] * b_b[loop_ub]) +
                mem_bvp->mem_T[(i2 + 16 * (static_cast<int32_T>(is) - 1)) + 8] *
                b_b[b_loop_ub];
              d_mem_deriv_propag_low[tp_uinit_tmp] =
                (mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[(i2 + 9 * j) + 9 *
                 mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (
                  static_cast<int32_T>(is) - 1)] * b_R_tmp[3 * i4] +
                 mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((i2 + 9 * j) + 9 *
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (
                   static_cast<int32_T>(is) - 1)) + 3] * b_R_tmp[loop_ub]) +
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((i2 + 9 * j) + 9 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (
                static_cast<int32_T>(is) - 1)) + 6] * b_R_tmp[b_loop_ub];
            }
          }

          i2 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(2);
          if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(j) + 1U), 1, i2, &ij_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(3);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &jj_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i2 = 0; i2 < 3; i2++) {
            mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds[(3 * i2 + 9 * j) +
              9 * mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(2) * (
              static_cast<int32_T>(is) - 1)] = d_mem_deriv_propag_low[3 * i2] +
              b_mem_bvp[3 * i2];
            i4 = 3 * i2 + 1;
            mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds[((3 * i2 + 9 * j) +
              9 * mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(2) * (
              static_cast<int32_T>(is) - 1)) + 1] = d_mem_deriv_propag_low[i4] +
              b_mem_bvp[i4];
            i4 = 3 * i2 + 2;
            mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds[((3 * i2 + 9 * j) +
              9 * mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(2) * (
              static_cast<int32_T>(is) - 1)) + 2] = d_mem_deriv_propag_low[i4] +
              b_mem_bvp[i4];
          }

          //  ======================= %
          //  ==== ddR0(s)ds_dbc ==== %
          //  (eq 31e)
          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &kj_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &lj_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
               mem_bvp->mem_T.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
              mem_bvp->mem_T.size(2), &mj_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &nj_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &oj_emlrtBCI, (emlrtConstCTX)&sp);
          }

          //  ======================================================================= %
          //
          //  This function creates the skew-symmetric matrix M formed from V
          //
          //  ====================
          //  ====== INPUTS ======
          //
          //  V     : (3x1) Vector
          //
          //  ====================
          //  ===== OUTPUTS ======
          //
          //  M     : (3x3) Matrix
          //
          //  ======================================================================= %
          b_b[0] = 0.0;
          b_b[3] = -mem_deriv_propag_low->mem_du0.mem_du0_dbcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) * (static_cast<
            int32_T>(is) - 1)) + 2];
          b_b[6] = mem_deriv_propag_low->mem_du0.mem_du0_dbcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 1];
          b_b[1] = mem_deriv_propag_low->mem_du0.mem_du0_dbcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 2];
          b_b[4] = 0.0;
          b_b[7] = -mem_deriv_propag_low->mem_du0.mem_du0_dbcj[3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)];
          b_b[2] = -mem_deriv_propag_low->mem_du0.mem_du0_dbcj[(3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)) + 1];
          b_b[5] = mem_deriv_propag_low->mem_du0.mem_du0_dbcj[3 * j + 3 *
            mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)];
          b_b[8] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            for (i4 = 0; i4 < 3; i4++) {
              loop_ub = 3 * i4 + 1;
              b_loop_ub = 3 * i4 + 2;
              tp_uinit_tmp = i2 + 3 * i4;
              b_mem_bvp[tp_uinit_tmp] = (mem_bvp->mem_T[i2 + 16 * (static_cast<
                int32_T>(is) - 1)] * b_b[3 * i4] + mem_bvp->mem_T[(i2 + 16 * (
                static_cast<int32_T>(is) - 1)) + 4] * b_b[loop_ub]) +
                mem_bvp->mem_T[(i2 + 16 * (static_cast<int32_T>(is) - 1)) + 8] *
                b_b[b_loop_ub];
              d_mem_deriv_propag_low[tp_uinit_tmp] =
                (mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[(i2 + 9 * j) + 9 *
                 mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                  static_cast<int32_T>(is) - 1)] * b_R_tmp[3 * i4] +
                 mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((i2 + 9 * j) + 9 *
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                   static_cast<int32_T>(is) - 1)) + 3] * b_R_tmp[loop_ub]) +
                mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((i2 + 9 * j) + 9 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                static_cast<int32_T>(is) - 1)) + 6] * b_R_tmp[b_loop_ub];
            }
          }

          i2 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(2);
          if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(j) + 1U), 1, i2, &pj_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(3);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &qj_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i2 = 0; i2 < 3; i2++) {
            mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds[(3 * i2 + 9 * j) +
              9 * mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(2) * (
              static_cast<int32_T>(is) - 1)] = d_mem_deriv_propag_low[3 * i2] +
              b_mem_bvp[3 * i2];
            i4 = 3 * i2 + 1;
            mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds[((3 * i2 + 9 * j) +
              9 * mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(2) * (
              static_cast<int32_T>(is) - 1)) + 1] = d_mem_deriv_propag_low[i4] +
              b_mem_bvp[i4];
            i4 = 3 * i2 + 2;
            mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds[((3 * i2 + 9 * j) +
              9 * mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(2) * (
              static_cast<int32_T>(is) - 1)) + 2] = d_mem_deriv_propag_low[i4] +
              b_mem_bvp[i4];
          }

          //  ======================= %
          //  ==== ddp0(s)ds_dtc ==== %
          //  (eq 31f)
          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &rj_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(3);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &sj_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(1);
          if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(j) + 1U), 1, i2, &en_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &fn_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i2 = 0; i2 < 3; i2++) {
            mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] = 0.0;
            mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] =
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] +
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[(i2 + 9 * j) + 9 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (static_cast<
              int32_T>(is) - 1)] * 0.0;
            mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] =
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] +
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((i2 + 9 * j) + 9 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (static_cast<
              int32_T>(is) - 1)) + 3] * 0.0;
            mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] =
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] +
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((i2 + 9 * j) + 9 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (static_cast<
              int32_T>(is) - 1)) + 6];
          }

          //  ======================= %
          //  ==== ddp0(s)ds_dbc ==== %
          //  (eq 31f)
          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2);
          if ((j + 1 < 1) || (j + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &tj_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &uj_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1);
          if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(j) + 1U), 1, i2, &an_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &bn_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i2 = 0; i2 < 3; i2++) {
            mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] = 0.0;
            mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] =
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] +
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[(i2 + 9 * j) + 9 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (static_cast<
              int32_T>(is) - 1)] * 0.0;
            mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] =
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] +
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((i2 + 9 * j) + 9 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (static_cast<
              int32_T>(is) - 1)) + 3] * 0.0;
            mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] =
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds[(i2 + 3 * j) + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] +
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((i2 + 9 * j) + 9 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (static_cast<
              int32_T>(is) - 1)) + 6];
          }

          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
      }

      if (simulation_param->bool_Cs0) {
        tp_uinit_tmp = simulation_param->pt_s0_LIT.size(1) - 1;
        b_loop_ub = 0;
        for (loop_ub = 0; loop_ub <= tp_uinit_tmp; loop_ub++) {
          if (simulation_param->pt_s0_LIT[loop_ub] <= is) {
            b_loop_ub++;
          }
        }

        r2.set_size(&kc_emlrtRTEI, &sp, 1, b_loop_ub);
        b_loop_ub = 0;
        for (loop_ub = 0; loop_ub <= tp_uinit_tmp; loop_ub++) {
          if (simulation_param->pt_s0_LIT[loop_ub] <= is) {
            r2[b_loop_ub] = loop_ub;
            b_loop_ub++;
          }
        }

        loop_ub = r2.size(1);
        for (i = 0; i < loop_ub; i++) {
          if (r2[i] > tp_uinit_tmp) {
            emlrtDynamicBoundsCheckR2012b(r2[i], 0, tp_uinit_tmp, &in_emlrtBCI,
              (emlrtConstCTX)&sp);
          }
        }

        i = r2.size(1);
        if (r2.size(1) - 1 >= 0) {
          i3 = ii.size(0);
          b_is = static_cast<int32_T>(is);
          c_is = static_cast<int32_T>(is);
          d_is = static_cast<int32_T>(is);
          e_is = static_cast<int32_T>(is);
          f_is = static_cast<int32_T>(is);
          g_is = static_cast<int32_T>(is);
          h_is = static_cast<int32_T>(is);
          i_is = static_cast<int32_T>(is);
          j_is = static_cast<int32_T>(is);
          k_is = static_cast<int32_T>(is);
          l_is = static_cast<int32_T>(is);
          m_is = static_cast<int32_T>(is);
          n_is = static_cast<int32_T>(is);
          o_is = static_cast<int32_T>(is);
          p_is = static_cast<int32_T>(is);
          q_is = static_cast<int32_T>(is);
          r_is = static_cast<int32_T>(is);
          s_is = static_cast<int32_T>(is);
          ctcr_construc_tmp = ctcr_construc->vect_res[static_cast<int32_T>(is) -
            1];
          t_is = static_cast<int32_T>(is);
          u_is = static_cast<int32_T>(is);
          v_is = static_cast<int32_T>(is);
          w_is = static_cast<int32_T>(is);
          x_is = static_cast<int32_T>(is);
          y_is = static_cast<int32_T>(is);
          ab_is = static_cast<int32_T>(is);
          bb_is = static_cast<int32_T>(is);
          cb_is = static_cast<int32_T>(is);
          db_is = static_cast<int32_T>(is);
          eb_is = static_cast<int32_T>(is);
          fb_is = static_cast<int32_T>(is);
          gb_is = static_cast<int32_T>(is);
          hb_is = static_cast<int32_T>(is);
          ib_is = static_cast<int32_T>(is);
          jb_is = static_cast<int32_T>(is);
          kb_is = static_cast<int32_T>(is);
          lb_is = static_cast<int32_T>(is);
          mb_is = static_cast<int32_T>(is);
          nb_is = static_cast<int32_T>(is);
          ob_is = static_cast<int32_T>(is);
          pb_is = static_cast<int32_T>(is);
          qb_is = static_cast<int32_T>(is);
          rb_is = static_cast<int32_T>(is);
          sb_is = static_cast<int32_T>(is);
          tb_is = static_cast<int32_T>(is);
          wb_is = static_cast<int32_T>(is);
          xb_is = static_cast<int32_T>(is);
          yb_is = static_cast<int32_T>(is);
          ac_is = static_cast<int32_T>(is);
          bc_is = static_cast<int32_T>(is);
          cc_is = static_cast<int32_T>(is);
          dc_is = static_cast<int32_T>(is);
          ec_is = static_cast<int32_T>(is);
          fc_is = static_cast<int32_T>(is);
          gc_is = static_cast<int32_T>(is);
          hc_is = static_cast<int32_T>(is);
          ic_is = static_cast<int32_T>(is);
          jc_is = static_cast<int32_T>(is);
          kc_is = static_cast<int32_T>(is);
          lc_is = static_cast<int32_T>(is);
          mc_is = static_cast<int32_T>(is);
          nc_is = static_cast<int32_T>(is);
          oc_is = static_cast<int32_T>(is);
          pc_is = static_cast<int32_T>(is);
          qc_is = static_cast<int32_T>(is);
          rc_is = static_cast<int32_T>(is);
          sc_is = static_cast<int32_T>(is);
          tc_is = static_cast<int32_T>(is);
          uc_is = static_cast<int32_T>(is);
          vb_is = static_cast<int32_T>(is);
          ub_is = static_cast<int32_T>(is);
          wc_is = static_cast<int32_T>(is);
          vc_is = static_cast<int32_T>(is);
        }

        if ((i - 1 >= 0) && (i3 - 1 >= 0)) {
          b = ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                ctcr_construc->ui_init.size(1)));
        }

        for (b_loop_ub = 0; b_loop_ub < i; b_loop_ub++) {
          boolean_T a;
          if (b_loop_ub + 1 > r2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, r2.size(1),
              &vj_emlrtBCI, (emlrtConstCTX)&sp);
          }

          is0_tmp = simulation_param->pt_s0_LIT[r2[b_loop_ub]];
          a = (is == is0_tmp);
          for (int32_T j{0}; j < 3; j++) {
            for (loop_ub = 0; loop_ub < i3; loop_ub++) {
              if (loop_ub + 1 > ii.size(0)) {
                emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, ii.size(0),
                  &wj_emlrtBCI, (emlrtConstCTX)&sp);
              }

              //  ============================ %
              //  ==== dduzi(s)ds_dtau0s0 ==== %
              //  (eq 31b)
              i2 = ii[loop_ub];
              if ((i2 < 1) || (i2 > mem_bvp->mem_y.mem_t.size(0))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, mem_bvp->mem_y.mem_t.size(0),
                  &xj_emlrtBCI, (emlrtConstCTX)&sp);
              }

              //  ======================================================================= %
              //
              //  This function produces a rotation matrix R, associated to an angle gamma,
              //  around the Z-direction
              //
              //  ====================
              //  ====== INPUTS ======
              //
              //  gamma     : (float) angle in [rad]
              //
              //  ====================
              //  ===== OUTPUTS ======
              //
              //  R         : (3x3) Rotation matrix in SO(3)
              //
              //  ======================================================================= %
              R_tmp_tmp = mem_bvp->mem_y.mem_t[(ii[loop_ub] +
                mem_bvp->mem_y.mem_t.size(0) * (static_cast<int32_T>(is) - 1)) -
                1];
              b_R_tmp_tmp = muDoubleScalarSin(R_tmp_tmp);
              R_tmp_tmp = muDoubleScalarCos(R_tmp_tmp);
              i2 = mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0);
              if ((ii[loop_ub] < 1) || (ii[loop_ub] > i2)) {
                emlrtDynamicBoundsCheckR2012b(ii[loop_ub], 1, i2, &jn_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              i2 = mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(2);
              if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                   i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                  &kn_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i2 = mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(3);
              if (is0_tmp != static_cast<int32_T>(muDoubleScalarFloor(is0_tmp)))
              {
                emlrtIntegerCheckR2012b(is0_tmp, &j_emlrtDCI, (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                   (is0_tmp) > i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1,
                  i2, &ln_emlrtBCI, (emlrtConstCTX)&sp);
              }

              c_b = mem_deriv_propag_low->mem_dti.mem_dti_dtaus0[(((ii[loop_ub]
                + mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * j) +
                mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 3 * (
                static_cast<int32_T>(is) - 1)) +
                mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 3 *
                mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)) - 1];
              i2 = ii[loop_ub];
              b1 = ((i2 < 1) || (i2 > mem_bvp->mem_y.mem_t.size(0)));
              if (b1) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, mem_bvp->mem_y.mem_t.size(0),
                  &yj_emlrtBCI, (emlrtConstCTX)&sp);
              }

              //  ======================================================================= %
              //
              //  This function produces a rotation matrix R, associated to an angle gamma,
              //  around the Z-direction
              //
              //  ====================
              //  ====== INPUTS ======
              //
              //  gamma     : (float) angle in [rad]
              //
              //  ====================
              //  ===== OUTPUTS ======
              //
              //  R         : (3x3) Rotation matrix in SO(3)
              //
              //  ======================================================================= %
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2);
              if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                   i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                  &ak_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(3);
              if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                   (is0_tmp) > i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1,
                  i2, &bk_emlrtBCI, (emlrtConstCTX)&sp);
              }

              if ((ii[loop_ub] < 1) || (ii[loop_ub] > ctcr_construc->K.size(2)))
              {
                emlrtDynamicBoundsCheckR2012b(ii[loop_ub], 1,
                  ctcr_construc->K.size(2), &pn_emlrtBCI, (emlrtConstCTX)&sp);
              }

              e_mem_deriv_propag_low = ctcr_construc->K[9 * (ii[loop_ub] - 1)] /
                ctcr_construc->K[9 * (ii[loop_ub] - 1) + 8];
              if (b) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                  ctcr_construc->ui_init.size(1), &ck_emlrtBCI, (emlrtConstCTX)&
                  sp);
              }

              i2 = ii[loop_ub];
              if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size
                  (2), &dk_emlrtBCI, (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                   ctcr_construc->ui_init.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                  ctcr_construc->ui_init.size(1), &ek_emlrtBCI, (emlrtConstCTX)&
                  sp);
              }

              i2 = ii[loop_ub];
              if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size
                  (2), &fk_emlrtBCI, (emlrtConstCTX)&sp);
              }

              b_R_tmp[0] = R_tmp_tmp;
              b_R_tmp[3] = -b_R_tmp_tmp;
              b_R_tmp[6] = 0.0;
              b_R_tmp[1] = b_R_tmp_tmp;
              b_R_tmp[4] = R_tmp_tmp;
              b_R_tmp[7] = 0.0;
              for (i2 = 0; i2 < 3; i2++) {
                b_R_tmp[3 * i2 + 2] = b_iv[i2];
                d = b_R_tmp[3 * i2];
                d1 = b_R_tmp[3 * i2 + 1];
                for (i1 = 0; i1 < 3; i1++) {
                  b_b[i2 + 3 * i1] = static_cast<real_T>(iv[i1]) * d +
                    static_cast<real_T>(iv[i1 + 3]) * d1;
                }
              }

              for (i2 = 0; i2 < 9; i2++) {
                b_b[i2] *= c_b;
              }

              b_R_tmp[0] = R_tmp_tmp;
              b_R_tmp[1] = -b_R_tmp_tmp;
              b_R_tmp[2] = 0.0;
              b_R_tmp[3] = b_R_tmp_tmp;
              b_R_tmp[4] = R_tmp_tmp;
              b_R_tmp[5] = 0.0;
              for (i2 = 0; i2 < 3; i2++) {
                i1 = b_iv[i2];
                b_R_tmp[i2 + 6] = i1;
                R_tmp[i2] = (b_R_tmp[i2] *
                             mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[(3 * j
                  + 9 * (static_cast<int32_T>(is) - 1)) + 9 *
                             mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2)
                             * (static_cast<int32_T>(is0_tmp) - 1)] + b_R_tmp[i2
                             + 3] * mem_deriv_propag_low->
                             mem_du0.mem_du0_dtaus0[((3 * j + 9 *
                  (static_cast<int32_T>(is) - 1)) + 9 *
                  mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
                  static_cast<int32_T>(is0_tmp) - 1)) + 1]) + static_cast<real_T>
                  (i1) * mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[((3 * j +
                  9 * (static_cast<int32_T>(is) - 1)) + 9 *
                  mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
                  static_cast<int32_T>(is0_tmp) - 1)) + 2];
                b_ctcr_construc[i2] = (b_b[i2] * mem_bvp->mem_u0[3 * (
                  static_cast<int32_T>(is) - 1)] + b_b[i2 + 3] * mem_bvp->
                  mem_u0[3 * (static_cast<int32_T>(is) - 1) + 1]) + b_b[i2 + 6] *
                  mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1) + 2];
              }

              b_ctcr_construc_tmp = ctcr_construc->ui_init[(3 *
                (static_cast<int32_T>(is) - 1) + 3 * ctcr_construc->ui_init.size
                (1) * (ii[loop_ub] - 1)) + 1];
              c_ctcr_construc_tmp = -ctcr_construc->ui_init[3 *
                (static_cast<int32_T>(is) - 1) + 3 * ctcr_construc->ui_init.size
                (1) * (ii[loop_ub] - 1)];
              i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(0);
              if ((ii[loop_ub] < 1) || (ii[loop_ub] > i2)) {
                emlrtDynamicBoundsCheckR2012b(ii[loop_ub], 1, i2, &qn_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(2);
              if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                   i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                  &rn_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(3);
              if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                   (is0_tmp) > i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1,
                  i2, &sn_emlrtBCI, (emlrtConstCTX)&sp);
              }

              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds[(((ii[loop_ub]
                + mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(0) *
                j) + mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(0)
                * 3 * (static_cast<int32_T>(is) - 1)) +
                mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(0) * 3
                * mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(2) *
                (static_cast<int32_T>(is0_tmp) - 1)) - 1] =
                e_mem_deriv_propag_low * (b_ctcr_construc[0] + R_tmp[0]) *
                b_ctcr_construc_tmp + e_mem_deriv_propag_low * (b_ctcr_construc
                [1] + R_tmp[1]) * c_ctcr_construc_tmp;

              //  ============================ %
              //  ===== dduzi(s)ds_df0s0 ===== %
              //  (eq 31b)
              //  ======================================================================= %
              //
              //  This function produces a rotation matrix R, associated to an angle gamma,
              //  around the Z-direction
              //
              //  ====================
              //  ====== INPUTS ======
              //
              //  gamma     : (float) angle in [rad]
              //
              //  ====================
              //  ===== OUTPUTS ======
              //
              //  R         : (3x3) Rotation matrix in SO(3)
              //
              //  ======================================================================= %
              i2 = mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0);
              if ((ii[loop_ub] < 1) || (ii[loop_ub] > i2)) {
                emlrtDynamicBoundsCheckR2012b(ii[loop_ub], 1, i2, &yn_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              i2 = mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(2);
              if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                   i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                  &ao_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i2 = mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(3);
              if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                   (is0_tmp) > i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1,
                  i2, &bo_emlrtBCI, (emlrtConstCTX)&sp);
              }

              c_b = mem_deriv_propag_low->mem_dti.mem_dti_dfs0[(((ii[loop_ub] +
                mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * j) +
                mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 * (
                static_cast<int32_T>(is) - 1)) +
                mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 *
                mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)) - 1];

              //  ======================================================================= %
              //
              //  This function produces a rotation matrix R, associated to an angle gamma,
              //  around the Z-direction
              //
              //  ====================
              //  ====== INPUTS ======
              //
              //  gamma     : (float) angle in [rad]
              //
              //  ====================
              //  ===== OUTPUTS ======
              //
              //  R         : (3x3) Rotation matrix in SO(3)
              //
              //  ======================================================================= %
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2);
              if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                   i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                  &gk_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(3);
              if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                   (is0_tmp) > i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1,
                  i2, &hk_emlrtBCI, (emlrtConstCTX)&sp);
              }

              if ((ii[loop_ub] < 1) || (ii[loop_ub] > ctcr_construc->K.size(2)))
              {
                emlrtDynamicBoundsCheckR2012b(ii[loop_ub], 1,
                  ctcr_construc->K.size(2), &co_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i2 = ii[loop_ub];
              if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size
                  (2), &ik_emlrtBCI, (emlrtConstCTX)&sp);
              }

              if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                   ctcr_construc->ui_init.size(1))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                  ctcr_construc->ui_init.size(1), &jk_emlrtBCI, (emlrtConstCTX)&
                  sp);
              }

              i2 = ii[loop_ub];
              if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size
                  (2), &kk_emlrtBCI, (emlrtConstCTX)&sp);
              }

              b_R_tmp[0] = R_tmp_tmp;
              b_R_tmp[3] = -b_R_tmp_tmp;
              b_R_tmp[6] = 0.0;
              b_R_tmp[1] = b_R_tmp_tmp;
              b_R_tmp[4] = R_tmp_tmp;
              b_R_tmp[7] = 0.0;
              for (i2 = 0; i2 < 3; i2++) {
                b_R_tmp[3 * i2 + 2] = b_iv[i2];
                d = b_R_tmp[3 * i2];
                d1 = b_R_tmp[3 * i2 + 1];
                for (i1 = 0; i1 < 3; i1++) {
                  b_b[i2 + 3 * i1] = static_cast<real_T>(iv[i1]) * d +
                    static_cast<real_T>(iv[i1 + 3]) * d1;
                }
              }

              for (i2 = 0; i2 < 9; i2++) {
                b_b[i2] *= c_b;
              }

              b_R_tmp[0] = R_tmp_tmp;
              b_R_tmp[1] = -b_R_tmp_tmp;
              b_R_tmp[2] = 0.0;
              b_R_tmp[3] = b_R_tmp_tmp;
              b_R_tmp[4] = R_tmp_tmp;
              b_R_tmp[5] = 0.0;
              for (i2 = 0; i2 < 3; i2++) {
                i1 = b_iv[i2];
                b_R_tmp[i2 + 6] = i1;
                R_tmp[i2] = (b_R_tmp[i2] *
                             mem_deriv_propag_low->mem_du0.mem_du0_dfs0[(3 * j +
                  9 * (static_cast<int32_T>(is) - 1)) + 9 *
                             mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2) *
                             (static_cast<int32_T>(is0_tmp) - 1)] + b_R_tmp[i2 +
                             3] * mem_deriv_propag_low->mem_du0.mem_du0_dfs0[((3
                  * j + 9 * (static_cast<int32_T>(is) - 1)) + 9 *
                  mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2) * (
                  static_cast<int32_T>(is0_tmp) - 1)) + 1]) + static_cast<real_T>
                  (i1) * mem_deriv_propag_low->mem_du0.mem_du0_dfs0[((3 * j + 9 *
                  (static_cast<int32_T>(is) - 1)) + 9 *
                  mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2) * (
                  static_cast<int32_T>(is0_tmp) - 1)) + 2];
                b_ctcr_construc[i2] = (b_b[i2] * mem_bvp->mem_u0[3 * (
                  static_cast<int32_T>(is) - 1)] + b_b[i2 + 3] * mem_bvp->
                  mem_u0[3 * (static_cast<int32_T>(is) - 1) + 1]) + b_b[i2 + 6] *
                  mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1) + 2];
              }

              i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(0);
              if ((ii[loop_ub] < 1) || (ii[loop_ub] > i2)) {
                emlrtDynamicBoundsCheckR2012b(ii[loop_ub], 1, i2, &do_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(2);
              if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                   i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                  &eo_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(3);
              if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                   (is0_tmp) > i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1,
                  i2, &fo_emlrtBCI, (emlrtConstCTX)&sp);
              }

              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds[(((ii[loop_ub]
                + mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(0) * j)
                + mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(0) * 3
                * (static_cast<int32_T>(is) - 1)) +
                mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(0) * 3 *
                mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)) - 1] =
                e_mem_deriv_propag_low * (b_ctcr_construc[0] + R_tmp[0]) *
                b_ctcr_construc_tmp + e_mem_deriv_propag_low * (b_ctcr_construc
                [1] + R_tmp[1]) * c_ctcr_construc_tmp;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
              }
            }

            //  =========================== %
            //  ==== ddm0(s)ds_dtau0s0 ==== %
            //  (eq 31c)
            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &rk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (is0_tmp != static_cast<int32_T>(muDoubleScalarFloor(is0_tmp))) {
              emlrtIntegerCheckR2012b(is0_tmp, &h_emlrtDCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(4);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &sk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            //  ======================================================================= %
            //
            //  This function creates the skew-symmetric matrix M formed from V
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  V     : (3x1) Vector
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  M     : (3x3) Matrix
            //
            //  ======================================================================= %
            b_R_tmp[0] = 0.0;
            b_R_tmp[3] = -mem_bvp->mem_u0[3 * (b_is - 1) + 2];
            b_R_tmp[6] = mem_bvp->mem_u0[3 * (c_is - 1) + 1];
            b_R_tmp[1] = mem_bvp->mem_u0[3 * (d_is - 1) + 2];
            b_R_tmp[4] = 0.0;
            b_R_tmp[7] = -mem_bvp->mem_u0[3 * (e_is - 1)];
            b_R_tmp[2] = -mem_bvp->mem_u0[3 * (f_is - 1) + 1];
            b_R_tmp[5] = mem_bvp->mem_u0[3 * (g_is - 1)];
            b_R_tmp[8] = 0.0;

            //  ======================================================================= %
            //
            //  This function is the Kronecker delta
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  i         : (int ∊ [1 , nbT])
            //  j         : (int ∊ [1 , nbT])
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  deltaij   : (int) 0 or 1 only
            //
            //  ======================================================================= %
            //
            //  This function is the Kronecker delta
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  i         : (int ∊ [1 , nbT])
            //  j         : (int ∊ [1 , nbT])
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  deltaij   : (int) 0 or 1 only
            //
            //  ======================================================================= %
            //
            //  This function is the Kronecker delta
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  i         : (int ∊ [1 , nbT])
            //  j         : (int ∊ [1 , nbT])
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  deltaij   : (int) 0 or 1 only
            //
            //  ======================================================================= %
            //
            //  This function is the Kronecker delta
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  i         : (int ∊ [1 , nbT])
            //  j         : (int ∊ [1 , nbT])
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  deltaij   : (int) 0 or 1 only
            //
            //  ======================================================================= %
            dv[0] = static_cast<real_T>(a) * static_cast<real_T>(j + 1 == 1);
            dv[1] = static_cast<real_T>(a) * static_cast<real_T>(j + 1 == 2);
            dv[2] = static_cast<real_T>(a) * static_cast<real_T>(j + 1 == 3);
            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &lk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &mk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            //  ======================================================================= %
            //
            //  This function creates the skew-symmetric matrix M formed from V
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  V     : (3x1) Vector
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  M     : (3x3) Matrix
            //
            //  ======================================================================= %
            i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &nk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &ok_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &pk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &qk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->vect_res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->vect_res.size(1), &tk_emlrtBCI, (emlrtConstCTX)&
                sp);
            }

            b_b[0] = 0.0;
            b_b[3] = -mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[((3 * j + 9 *
              (h_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 2];
            b_b[6] = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[((3 * j + 9 *
              (i_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 1];
            b_b[1] = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[((3 * j + 9 *
              (j_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 2];
            b_b[4] = 0.0;
            b_b[7] = -mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[(3 * j + 9 *
              (k_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)];
            b_b[2] = -mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[((3 * j + 9 *
              (l_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 1];
            b_b[5] = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[(3 * j + 9 *
              (m_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)];
            b_b[8] = 0.0;
            for (i2 = 0; i2 < 3; i2++) {
              dv1[i2] = (((b_b[i2] * mem_bvp->mem_y.mem_m0[3 * (n_is - 1)] +
                           b_b[i2 + 3] * mem_bvp->mem_y.mem_m0[3 * (n_is - 1) +
                           1]) + b_b[i2 + 6] * mem_bvp->mem_y.mem_m0[3 * (n_is -
                1) + 2]) + ((b_R_tmp[i2] *
                             mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0[(3 * j
                + 9 * (o_is - 1)) + 9 *
                             mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2)
                             * (static_cast<int32_T>(is0_tmp) - 1)] + b_R_tmp[i2
                             + 3] * mem_deriv_propag_low->
                             mem_dm0.mem_dm0_dtaus0[((3 * j + 9 * (o_is - 1)) +
                9 * mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 1]) + b_R_tmp[i2 + 6] *
                            mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0[((3 * j
                + 9 * (o_is - 1)) + 9 *
                mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 2])) -
                ((static_cast<real_T>(iv[i2]) *
                  mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0[(3 * j + 9 *
                   (p_is - 1)) + 9 *
                  mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2) * (
                   static_cast<int32_T>(is0_tmp) - 1)] + static_cast<real_T>
                  (iv[i2 + 3]) * mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0
                  [((3 * j + 9 * (p_is - 1)) + 9 *
                    mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2) * (
                    static_cast<int32_T>(is0_tmp) - 1)) + 1]) + 0.0 *
                 mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0[((3 * j + 9 *
                   (p_is - 1)) + 9 *
                  mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2) * (
                   static_cast<int32_T>(is0_tmp) - 1)) + 2]);
              b_ctcr_construc[i2] =
                (mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[((3 * i2 + 9 * j)
                  + 27 * (q_is - 1)) + 27 *
                 mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                  static_cast<int32_T>(is0_tmp) - 1)] *
                 ctcr_construc->vect_tau_dist[3 * (r_is - 1)] +
                 mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((3 * i2 + 9 * j)
                   + 27 * (q_is - 1)) + 27 *
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                   static_cast<int32_T>(is0_tmp) - 1)) + 1] *
                 ctcr_construc->vect_tau_dist[3 * (r_is - 1) + 1]) +
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((3 * i2 + 9 * j)
                + 27 * (q_is - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 2] *
                ctcr_construc->vect_tau_dist[3 * (r_is - 1) + 2];
              R_tmp[i2] = dv[i2] / ctcr_construc_tmp;
            }

            i2 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &uk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &vk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            d = R_tmp[0];
            d1 = R_tmp[1];
            d2 = R_tmp[2];
            for (i2 = 0; i2 < 3; i2++) {
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds[((i2 + 3 * j) +
                9 * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] = (dv1[i2] -
                b_ctcr_construc[i2]) - ((mem_bvp->mem_T[4 * i2 + 16 * (s_is - 1)]
                * d + mem_bvp->mem_T[(4 * i2 + 16 * (s_is - 1)) + 1] * d1) +
                mem_bvp->mem_T[(4 * i2 + 16 * (s_is - 1)) + 2] * d2);
            }

            //  =========================== %
            //  ===== ddm0(s)ds_df0s0 ===== %
            //  (eq 31c)
            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &dl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(4);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &el_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &wk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &xk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            //  ======================================================================= %
            //
            //  This function creates the skew-symmetric matrix M formed from V
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  V     : (3x1) Vector
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  M     : (3x3) Matrix
            //
            //  ======================================================================= %
            i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &yk_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &al_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &bl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &cl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            b_b[0] = 0.0;
            b_b[3] = -mem_deriv_propag_low->mem_du0.mem_du0_dfs0[((3 * j + 9 *
              (t_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)) + 2];
            b_b[6] = mem_deriv_propag_low->mem_du0.mem_du0_dfs0[((3 * j + 9 *
              (u_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)) + 1];
            b_b[1] = mem_deriv_propag_low->mem_du0.mem_du0_dfs0[((3 * j + 9 *
              (v_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)) + 2];
            b_b[4] = 0.0;
            b_b[7] = -mem_deriv_propag_low->mem_du0.mem_du0_dfs0[(3 * j + 9 *
              (w_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)];
            b_b[2] = -mem_deriv_propag_low->mem_du0.mem_du0_dfs0[((3 * j + 9 *
              (x_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)) + 1];
            b_b[5] = mem_deriv_propag_low->mem_du0.mem_du0_dfs0[(3 * j + 9 *
              (y_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)];
            b_b[8] = 0.0;
            for (i2 = 0; i2 < 3; i2++) {
              dv1[i2] = (((b_b[i2] * mem_bvp->mem_y.mem_m0[3 * (ab_is - 1)] +
                           b_b[i2 + 3] * mem_bvp->mem_y.mem_m0[3 * (ab_is - 1) +
                           1]) + b_b[i2 + 6] * mem_bvp->mem_y.mem_m0[3 * (ab_is
                - 1) + 2]) + ((b_R_tmp[i2] *
                               mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0[(3 * j
                + 9 * (bb_is - 1)) + 9 *
                               mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2)
                               * (static_cast<int32_T>(is0_tmp) - 1)] +
                               b_R_tmp[i2 + 3] *
                               mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0[((3 *
                j + 9 * (bb_is - 1)) + 9 *
                mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 1]) + b_R_tmp[i2 + 6] *
                              mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0[((3 * j
                + 9 * (bb_is - 1)) + 9 *
                mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 2])) -
                ((static_cast<real_T>(iv[i2]) *
                  mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0[(3 * j + 9 * (cb_is
                    - 1)) + 9 * mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size
                  (2) * (static_cast<int32_T>(is0_tmp) - 1)] +
                  static_cast<real_T>(iv[i2 + 3]) *
                  mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0[((3 * j + 9 *
                    (cb_is - 1)) + 9 *
                   mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2) * (
                    static_cast<int32_T>(is0_tmp) - 1)) + 1]) + 0.0 *
                 mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0[((3 * j + 9 * (cb_is
                    - 1)) + 9 * mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size
                  (2) * (static_cast<int32_T>(is0_tmp) - 1)) + 2]);
              b_ctcr_construc[i2] = (mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0
                [((3 * i2 + 9 * j) + 27 * (db_is - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)] *
                ctcr_construc->vect_tau_dist[3 * (eb_is - 1)] +
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((3 * i2 + 9 * j) +
                27 * (db_is - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 1] *
                ctcr_construc->vect_tau_dist[3 * (eb_is - 1) + 1]) +
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((3 * i2 + 9 * j) +
                27 * (db_is - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 2] *
                ctcr_construc->vect_tau_dist[3 * (eb_is - 1) + 2];
            }

            i2 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &fl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &gl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds[(3 * j + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)] = dv1[0] - b_ctcr_construc[0];
            mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds[((3 * j + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 1] = dv1[1] -
              b_ctcr_construc[1];
            mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds[((3 * j + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 2] = dv1[2] -
              b_ctcr_construc[2];

            //  =========================== %
            //  ==== ddn0(s)ds_dtau0s0 ==== %
            //  (eq 31d)
            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &ll_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(4);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &ml_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &hl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &il_emlrtBCI, (emlrtConstCTX)&sp);
            }

            //  ======================================================================= %
            //
            //  This function creates the skew-symmetric matrix M formed from V
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  V     : (3x1) Vector
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  M     : (3x3) Matrix
            //
            //  ======================================================================= %
            i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &jl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &kl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            b_b[0] = 0.0;
            b_b[3] = -mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[((3 * j + 9 *
              (fb_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 2];
            b_b[6] = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[((3 * j + 9 *
              (gb_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 1];
            b_b[1] = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[((3 * j + 9 *
              (hb_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 2];
            b_b[4] = 0.0;
            b_b[7] = -mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[(3 * j + 9 *
              (ib_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)];
            b_b[2] = -mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[((3 * j + 9 *
              (jb_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 1];
            b_b[5] = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[(3 * j + 9 *
              (kb_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)];
            b_b[8] = 0.0;
            for (i2 = 0; i2 < 3; i2++) {
              b_ctcr_construc[i2] = (b_R_tmp[i2] *
                mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0[(3 * j + 9 * (mb_is
                - 1)) + 9 * mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2)
                * (static_cast<int32_T>(is0_tmp) - 1)] + b_R_tmp[i2 + 3] *
                mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0[((3 * j + 9 *
                (mb_is - 1)) + 9 *
                mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 1]) + b_R_tmp[i2 + 6] *
                mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0[((3 * j + 9 *
                (mb_is - 1)) + 9 *
                mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 2];
              R_tmp[i2] = (b_b[i2] * mem_bvp->mem_y.mem_n0[3 * (lb_is - 1)] +
                           b_b[i2 + 3] * mem_bvp->mem_y.mem_n0[3 * (lb_is - 1) +
                           1]) + b_b[i2 + 6] * mem_bvp->mem_y.mem_n0[3 * (lb_is
                - 1) + 2];
            }

            i2 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &nl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &ol_emlrtBCI, (emlrtConstCTX)&sp);
            }

            for (i2 = 0; i2 < 3; i2++) {
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds[((i2 + 3 * j) +
                9 * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] = (R_tmp[i2] +
                b_ctcr_construc[i2]) -
                ((mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[((3 * i2 + 9 * j)
                   + 27 * (nb_is - 1)) + 27 *
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                   static_cast<int32_T>(is0_tmp) - 1)] *
                  ctcr_construc->vect_f_dist[3 * (ob_is - 1)] +
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((3 * i2 + 9 * j)
                    + 27 * (nb_is - 1)) + 27 *
                   mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                    static_cast<int32_T>(is0_tmp) - 1)) + 1] *
                  ctcr_construc->vect_f_dist[3 * (ob_is - 1) + 1]) +
                 mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((3 * i2 + 9 * j)
                   + 27 * (nb_is - 1)) + 27 *
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                   static_cast<int32_T>(is0_tmp) - 1)) + 2] *
                 ctcr_construc->vect_f_dist[3 * (ob_is - 1) + 2]);
            }

            //  =========================== %
            //  ===== ddn0(s)ds_df0s0 ===== %
            //  (eq 31d)
            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &tl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(4);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &ul_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &pl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &ql_emlrtBCI, (emlrtConstCTX)&sp);
            }

            //  ======================================================================= %
            //
            //  This function creates the skew-symmetric matrix M formed from V
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  V     : (3x1) Vector
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  M     : (3x3) Matrix
            //
            //  ======================================================================= %
            i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &rl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &sl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->vect_res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->vect_res.size(1), &vl_emlrtBCI, (emlrtConstCTX)&
                sp);
            }

            b_b[0] = 0.0;
            b_b[3] = -mem_deriv_propag_low->mem_du0.mem_du0_dfs0[((3 * j + 9 *
              (pb_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)) + 2];
            b_b[6] = mem_deriv_propag_low->mem_du0.mem_du0_dfs0[((3 * j + 9 *
              (qb_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)) + 1];
            b_b[1] = mem_deriv_propag_low->mem_du0.mem_du0_dfs0[((3 * j + 9 *
              (rb_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)) + 2];
            b_b[4] = 0.0;
            b_b[7] = -mem_deriv_propag_low->mem_du0.mem_du0_dfs0[(3 * j + 9 *
              (sb_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)];
            b_b[2] = -mem_deriv_propag_low->mem_du0.mem_du0_dfs0[((3 * j + 9 *
              (tb_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)) + 1];
            b_b[5] = mem_deriv_propag_low->mem_du0.mem_du0_dfs0[(3 * j + 9 *
              (wb_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)];
            b_b[8] = 0.0;
            for (i2 = 0; i2 < 3; i2++) {
              dv1[i2] = dv[i2] / ctcr_construc_tmp;
              R_tmp[i2] = (((b_b[i2] * mem_bvp->mem_y.mem_n0[3 * (xb_is - 1)] +
                             b_b[i2 + 3] * mem_bvp->mem_y.mem_n0[3 * (xb_is - 1)
                             + 1]) + b_b[i2 + 6] * mem_bvp->mem_y.mem_n0[3 *
                            (xb_is - 1) + 2]) + ((b_R_tmp[i2] *
                mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0[(3 * j + 9 * (yb_is -
                1)) + 9 * mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] + b_R_tmp[i2 + 3] *
                mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0[((3 * j + 9 * (yb_is
                - 1)) + 9 * mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2) *
                (static_cast<int32_T>(is0_tmp) - 1)) + 1]) + b_R_tmp[i2 + 6] *
                mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0[((3 * j + 9 * (yb_is
                - 1)) + 9 * mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2) *
                (static_cast<int32_T>(is0_tmp) - 1)) + 2])) -
                ((mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[((3 * i2 + 9 * j) +
                   27 * (ac_is - 1)) + 27 *
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                   static_cast<int32_T>(is0_tmp) - 1)] *
                  ctcr_construc->vect_f_dist[3 * (bc_is - 1)] +
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((3 * i2 + 9 * j)
                    + 27 * (ac_is - 1)) + 27 *
                   mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                    static_cast<int32_T>(is0_tmp) - 1)) + 1] *
                  ctcr_construc->vect_f_dist[3 * (bc_is - 1) + 1]) +
                 mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((3 * i2 + 9 * j) +
                   27 * (ac_is - 1)) + 27 *
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                   static_cast<int32_T>(is0_tmp) - 1)) + 2] *
                 ctcr_construc->vect_f_dist[3 * (bc_is - 1) + 2]);
            }

            d = dv1[0];
            d1 = dv1[1];
            d2 = dv1[2];
            for (i2 = 0; i2 < 3; i2++) {
              b_ctcr_construc[i2] = (mem_bvp->mem_T[4 * i2 + 16 * (cc_is - 1)] *
                d + mem_bvp->mem_T[(4 * i2 + 16 * (cc_is - 1)) + 1] * d1) +
                mem_bvp->mem_T[(4 * i2 + 16 * (cc_is - 1)) + 2] * d2;
            }

            i2 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &wl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &xl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds[(3 * j + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)] = R_tmp[0] - b_ctcr_construc[0];
            mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds[((3 * j + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 1] = R_tmp[1] -
              b_ctcr_construc[1];
            mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds[((3 * j + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 2] = R_tmp[2] -
              b_ctcr_construc[2];

            //  =========================== %
            //  ==== ddR0(s)ds_dtau0s0 ==== %
            //  (eq 31e)
            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &yl_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(4);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &am_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 mem_bvp->mem_T.size(2))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                mem_bvp->mem_T.size(2), &bm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &cm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &dm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            //  ======================================================================= %
            //
            //  This function creates the skew-symmetric matrix M formed from V
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  V     : (3x1) Vector
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  M     : (3x3) Matrix
            //
            //  ======================================================================= %
            b_b[0] = 0.0;
            b_b[3] = -mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[((3 * j + 9 *
              (fc_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 2];
            b_b[6] = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[((3 * j + 9 *
              (gc_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 1];
            b_b[1] = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[((3 * j + 9 *
              (hc_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 2];
            b_b[4] = 0.0;
            b_b[7] = -mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[(3 * j + 9 *
              (ic_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)];
            b_b[2] = -mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[((3 * j + 9 *
              (jc_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)) + 1];
            b_b[5] = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[(3 * j + 9 *
              (kc_is - 1)) + 9 *
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) * (
              static_cast<int32_T>(is0_tmp) - 1)];
            b_b[8] = 0.0;
            for (i2 = 0; i2 < 3; i2++) {
              for (i1 = 0; i1 < 3; i1++) {
                i4 = 3 * i1 + 1;
                loop_ub = 3 * i1 + 2;
                tp_uinit_tmp = i2 + 3 * i1;
                b_mem_bvp[tp_uinit_tmp] = (mem_bvp->mem_T[i2 + 16 * (ec_is - 1)]
                  * b_b[3 * i1] + mem_bvp->mem_T[(i2 + 16 * (ec_is - 1)) + 4] *
                  b_b[i4]) + mem_bvp->mem_T[(i2 + 16 * (ec_is - 1)) + 8] *
                  b_b[loop_ub];
                d_mem_deriv_propag_low[tp_uinit_tmp] =
                  (mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[((i2 + 9 * j) +
                    27 * (dc_is - 1)) + 27 *
                   mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                    static_cast<int32_T>(is0_tmp) - 1)] * b_R_tmp[3 * i1] +
                   mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((i2 + 9 * j) +
                     27 * (dc_is - 1)) + 27 *
                    mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                     static_cast<int32_T>(is0_tmp) - 1)) + 3] * b_R_tmp[i4]) +
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((i2 + 9 * j) +
                  27 * (dc_is - 1)) + 27 *
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                  static_cast<int32_T>(is0_tmp) - 1)) + 6] * b_R_tmp[loop_ub];
              }
            }

            i2 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(3);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &em_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(4);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &fm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            for (i2 = 0; i2 < 3; i2++) {
              mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds[((3 * i2 + 9 *
                j) + 27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)] = d_mem_deriv_propag_low[3 *
                i2] + b_mem_bvp[3 * i2];
              i1 = 3 * i2 + 1;
              mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds[(((3 * i2 + 9 *
                j) + 27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 1] =
                d_mem_deriv_propag_low[i1] + b_mem_bvp[i1];
              i1 = 3 * i2 + 2;
              mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds[(((3 * i2 + 9 *
                j) + 27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 2] =
                d_mem_deriv_propag_low[i1] + b_mem_bvp[i1];
            }

            //  =========================== %
            //  ===== ddR0(s)ds_df0s0 ===== %
            //  (eq 31e)
            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &gm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(4);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &hm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 mem_bvp->mem_T.size(2))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                mem_bvp->mem_T.size(2), &im_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &jm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &km_emlrtBCI, (emlrtConstCTX)&sp);
            }

            //  ======================================================================= %
            //
            //  This function creates the skew-symmetric matrix M formed from V
            //
            //  ====================
            //  ====== INPUTS ======
            //
            //  V     : (3x1) Vector
            //
            //  ====================
            //  ===== OUTPUTS ======
            //
            //  M     : (3x3) Matrix
            //
            //  ======================================================================= %
            b_b[0] = 0.0;
            b_b[3] = -mem_deriv_propag_low->mem_du0.mem_du0_dfs0[((3 * j + 9 *
              (nc_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)) + 2];
            b_b[6] = mem_deriv_propag_low->mem_du0.mem_du0_dfs0[((3 * j + 9 *
              (oc_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)) + 1];
            b_b[1] = mem_deriv_propag_low->mem_du0.mem_du0_dfs0[((3 * j + 9 *
              (pc_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)) + 2];
            b_b[4] = 0.0;
            b_b[7] = -mem_deriv_propag_low->mem_du0.mem_du0_dfs0[(3 * j + 9 *
              (qc_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)];
            b_b[2] = -mem_deriv_propag_low->mem_du0.mem_du0_dfs0[((3 * j + 9 *
              (rc_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)) + 1];
            b_b[5] = mem_deriv_propag_low->mem_du0.mem_du0_dfs0[(3 * j + 9 *
              (sc_is - 1)) + 9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size
              (2) * (static_cast<int32_T>(is0_tmp) - 1)];
            b_b[8] = 0.0;
            for (i2 = 0; i2 < 3; i2++) {
              for (i1 = 0; i1 < 3; i1++) {
                i4 = 3 * i1 + 1;
                loop_ub = 3 * i1 + 2;
                tp_uinit_tmp = i2 + 3 * i1;
                b_mem_bvp[tp_uinit_tmp] = (mem_bvp->mem_T[i2 + 16 * (mc_is - 1)]
                  * b_b[3 * i1] + mem_bvp->mem_T[(i2 + 16 * (mc_is - 1)) + 4] *
                  b_b[i4]) + mem_bvp->mem_T[(i2 + 16 * (mc_is - 1)) + 8] *
                  b_b[loop_ub];
                d_mem_deriv_propag_low[tp_uinit_tmp] =
                  (mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[((i2 + 9 * j) + 27
                    * (lc_is - 1)) + 27 *
                   mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                    static_cast<int32_T>(is0_tmp) - 1)] * b_R_tmp[3 * i1] +
                   mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((i2 + 9 * j) +
                     27 * (lc_is - 1)) + 27 *
                    mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                     static_cast<int32_T>(is0_tmp) - 1)) + 3] * b_R_tmp[i4]) +
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((i2 + 9 * j) + 27
                  * (lc_is - 1)) + 27 *
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                  static_cast<int32_T>(is0_tmp) - 1)) + 6] * b_R_tmp[loop_ub];
              }
            }

            i2 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(3);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &lm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(4);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &mm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            for (i2 = 0; i2 < 3; i2++) {
              mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds[((3 * i2 + 9 * j)
                + 27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)] = d_mem_deriv_propag_low[3 *
                i2] + b_mem_bvp[3 * i2];
              i1 = 3 * i2 + 1;
              mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds[(((3 * i2 + 9 * j)
                + 27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 1] =
                d_mem_deriv_propag_low[i1] + b_mem_bvp[i1];
              i1 = 3 * i2 + 2;
              mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds[(((3 * i2 + 9 * j)
                + 27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 2] =
                d_mem_deriv_propag_low[i1] + b_mem_bvp[i1];
            }

            //  =========================== %
            //  ==== ddp0(s)ds_dtau0s0 ==== %
            //  (eq 31f)
            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &nm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(4);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &om_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &gn_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &hn_emlrtBCI, (emlrtConstCTX)&sp);
            }

            for (i2 = 0; i2 < 3; i2++) {
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds[((i2 + 3 * j) +
                9 * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] = 0.0;
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds[((i2 + 3 * j) +
                9 * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] =
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds[((i2 + 3 * j)
                + 9 * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] +
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[((i2 + 9 * j) + 27 *
                (tc_is - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)] * 0.0;
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds[((i2 + 3 * j) +
                9 * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] =
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds[((i2 + 3 * j)
                + 9 * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] +
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((i2 + 9 * j) + 27
                * (tc_is - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 3] * 0.0;
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds[((i2 + 3 * j) +
                9 * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] =
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds[((i2 + 3 * j)
                + 9 * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] +
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((i2 + 9 * j) + 27
                * (tc_is - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 6];
            }

            //  =========================== %
            //  ===== ddp0(s)ds_df0s0 ===== %
            //  (eq 31f)
            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &pm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(4);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &qm_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &cn_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(3);
            if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
                 (is0_tmp) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
                &dn_emlrtBCI, (emlrtConstCTX)&sp);
            }

            for (i2 = 0; i2 < 3; i2++) {
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds[((i2 + 3 * j) + 9
                * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] = 0.0;
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds[((i2 + 3 * j) + 9
                * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] =
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds[((i2 + 3 * j) +
                9 * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] +
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[((i2 + 9 * j) + 27 *
                (uc_is - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)] * 0.0;
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds[((i2 + 3 * j) + 9
                * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] =
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds[((i2 + 3 * j) +
                9 * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] +
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((i2 + 9 * j) + 27 *
                (uc_is - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 3] * 0.0;
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds[((i2 + 3 * j) + 9
                * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] =
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds[((i2 + 3 * j) +
                9 * (static_cast<int32_T>(is) - 1)) + 9 *
                mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] +
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((i2 + 9 * j) + 27 *
                (uc_is - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                static_cast<int32_T>(is0_tmp) - 1)) + 6];
            }

            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
            }
          }

          //  =========================== %
          //  ==== ddti(s)ds_dtau0s0 ==== %
          //  (eq 31a)
          i2 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &tm_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (is0_tmp != static_cast<int32_T>(muDoubleScalarFloor(is0_tmp))) {
            emlrtIntegerCheckR2012b(is0_tmp, &i_emlrtDCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(3);
          if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
               (is0_tmp) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
              &um_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &rm_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(3);
          if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
               (is0_tmp) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
              &sm_emlrtBCI, (emlrtConstCTX)&sp);
          }

          b_mem_deriv_propag_low[0] =
            mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(0);
          b_mem_deriv_propag_low[1] = 3;
          c_mem_deriv_propag_low[0] =
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0);
          c_mem_deriv_propag_low[1] = 3;
          emlrtSubAssignSizeCheckR2012b(&b_mem_deriv_propag_low[0], 2,
            &c_mem_deriv_propag_low[0], 2, &h_emlrtECI, (emlrtCTX)&sp);
          for (i2 = 0; i2 < 3; i2++) {
            loop_ub = mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0);
            for (i1 = 0; i1 < loop_ub; i1++) {
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds[((i1 +
                mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(0) * i2)
                + mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(0) * 3
                * (ub_is - 1)) +
                mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(0) * 3 *
                mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] =
                mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0[((i1 +
                mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * i2) +
                mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 *
                (vb_is - 1)) +
                mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 *
                mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)];
            }
          }

          //  =========================== %
          //  ===== ddti(s)ds_df0s0 ===== %
          //  (eq 31a)
          i2 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &xm_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(3);
          if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
               (is0_tmp) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
              &ym_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &vm_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(3);
          if ((static_cast<int32_T>(is0_tmp) < 1) || (static_cast<int32_T>
               (is0_tmp) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0_tmp), 1, i2,
              &wm_emlrtBCI, (emlrtConstCTX)&sp);
          }

          b_mem_deriv_propag_low[0] =
            mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(0);
          b_mem_deriv_propag_low[1] = 3;
          c_mem_deriv_propag_low[0] =
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0);
          c_mem_deriv_propag_low[1] = 3;
          emlrtSubAssignSizeCheckR2012b(&b_mem_deriv_propag_low[0], 2,
            &c_mem_deriv_propag_low[0], 2, &i_emlrtECI, (emlrtCTX)&sp);
          for (i2 = 0; i2 < 3; i2++) {
            loop_ub = mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0);
            for (i1 = 0; i1 < loop_ub; i1++) {
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds[((i1 +
                mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(0) * i2) +
                mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(0) * 3 *
                (vc_is - 1)) +
                mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(0) * 3 *
                mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(2) * (
                static_cast<int32_T>(is0_tmp) - 1)] =
                mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0[((i1 +
                mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * i2) +
                mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 *
                (wc_is - 1)) + mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size
                (0) * 3 * mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2) *
                (static_cast<int32_T>(is0_tmp) - 1)];
            }
          }

          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (Deriv_Propag_Comp_Low_ODE.cpp)
