//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Deriv_Propag_MaJ_Mem.cpp
//
// Code generation for function 'Deriv_Propag_MaJ_Mem'
//

// Include files
#include "Deriv_Propag_MaJ_Mem.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCR_Deriv_Propag_data.h"
#include "MemBVP.h"
#include "MemDM0.h"
#include "MemDM0DS.h"
#include "MemDN0.h"
#include "MemDN0DS.h"
#include "MemDP0.h"
#include "MemDP0DS.h"
#include "MemDR0.h"
#include "MemDR0DS.h"
#include "MemDTi.h"
#include "MemDTiDS.h"
#include "MemDUZi.h"
#include "MemDUZiDS.h"
#include "MemDerivPropagLow.h"
#include "MemY.h"
#include "MemYS.h"
#include "SimulationParam.h"
#include "find.h"
#include "ismember.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo bb_emlrtRSI{ 50,    // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

static emlrtRSInfo cb_emlrtRSI{ 51,    // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

static emlrtRSInfo db_emlrtRSI{ 52,    // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

static emlrtRSInfo eb_emlrtRSI{ 71,    // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

static emlrtRSInfo fb_emlrtRSI{ 73,    // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

static emlrtRSInfo gb_emlrtRSI{ 100,   // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

static emlrtRSInfo hb_emlrtRSI{ 102,   // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

static emlrtRSInfo ib_emlrtRSI{ 104,   // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

static emlrtRSInfo jb_emlrtRSI{ 45,    // lineNo
  "ismember",                          // fcnName
  "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/ismember.m"// pathName
};

static emlrtECInfo j_emlrtECI{ -1,     // nDims
  50,                                  // lineNo
  48,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtECInfo k_emlrtECI{ -1,     // nDims
  51,                                  // lineNo
  48,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo no_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  61,                                  // lineNo
  28,                                  // colNo
  "next_vectT",                        // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo oo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  62,                                  // lineNo
  129,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo po_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  62,                                  // lineNo
  133,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  62,                                  // lineNo
  203,                                 // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dtcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ro_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  62,                                  // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dtcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo so_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  62,                                  // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo l_emlrtECI{ 2,      // nDims
  62,                                  // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo to_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  62,                                  // lineNo
  55,                                  // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  62,                                  // lineNo
  59,                                  // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo m_emlrtECI{ -1,     // nDims
  62,                                  // lineNo
  13,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo n_emlrtRTEI{ 69,   // lineNo
  17,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo o_emlrtRTEI{ 70,   // lineNo
  21,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo vo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  74,                                  // lineNo
  129,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  74,                                  // lineNo
  133,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  74,                                  // lineNo
  187,                                 // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yo_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  74,                                  // lineNo
  191,                                 // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ap_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  74,                                  // lineNo
  218,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo n_emlrtECI{ 2,      // nDims
  74,                                  // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo bp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  74,                                  // lineNo
  63,                                  // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  74,                                  // lineNo
  67,                                  // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo o_emlrtECI{ -1,     // nDims
  74,                                  // lineNo
  21,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo dp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  88,                                  // lineNo
  36,                                  // colNo
  "next_vectT",                        // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ep_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  90,                                  // lineNo
  131,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  90,                                  // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  90,                                  // lineNo
  205,                                 // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  90,                                  // lineNo
  209,                                 // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ip_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  90,                                  // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo p_emlrtECI{ 2,      // nDims
  90,                                  // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo jp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  90,                                  // lineNo
  65,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  90,                                  // lineNo
  69,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo q_emlrtECI{ -1,     // nDims
  90,                                  // lineNo
  21,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo p_emlrtRTEI{ 97,   // lineNo
  29,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo q_emlrtRTEI{ 98,   // lineNo
  29,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo lp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  102,                                 // lineNo
  85,                                  // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  117,                                 // lineNo
  133,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo np_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  117,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo op_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  117,                                 // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo r_emlrtECI{ 2,      // nDims
  117,                                 // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo pp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  117,                                 // lineNo
  63,                                  // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo s_emlrtECI{ -1,     // nDims
  117,                                 // lineNo
  17,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo qp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  118,                                 // lineNo
  133,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  118,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  118,                                 // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo t_emlrtECI{ 2,      // nDims
  118,                                 // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo tp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  118,                                 // lineNo
  63,                                  // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo u_emlrtECI{ -1,     // nDims
  118,                                 // lineNo
  17,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo up_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  119,                                 // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  119,                                 // lineNo
  209,                                 // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dtcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  119,                                 // lineNo
  245,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo v_emlrtECI{ 3,      // nDims
  119,                                 // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo xp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  119,                                 // lineNo
  65,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo w_emlrtECI{ -1,     // nDims
  119,                                 // lineNo
  17,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo yp_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  120,                                 // lineNo
  133,                                 // colNo
  "mem_deriv_propag_low.mem_dP0.mem_dP0_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo aq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  120,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dtcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  120,                                 // lineNo
  245,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo x_emlrtECI{ 2,      // nDims
  120,                                 // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo cq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  120,                                 // lineNo
  63,                                  // colNo
  "mem_deriv_propag_low.mem_dP0.mem_dP0_dtcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo y_emlrtECI{ -1,     // nDims
  120,                                 // lineNo
  17,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo r_emlrtRTEI{ 122,  // lineNo
  25,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo dq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  130,                                 // lineNo
  131,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo eq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  130,                                 // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  130,                                 // lineNo
  178,                                 // colNo
  "mem_bvp.mem_y.mem_m0",              // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo k_emlrtDCI{ 130,    // lineNo
  69,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo gq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  130,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  131,                                 // lineNo
  131,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo iq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  131,                                 // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  131,                                 // lineNo
  178,                                 // colNo
  "mem_bvp.mem_y.mem_n0",              // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  131,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  132,                                 // lineNo
  133,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  132,                                 // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  132,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo oq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  132,                                 // lineNo
  209,                                 // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  132,                                 // lineNo
  245,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  132,                                 // lineNo
  71,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  132,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  133,                                 // lineNo
  133,                                 // colNo
  "mem_deriv_propag_low.mem_dP0.mem_dP0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  133,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  133,                                 // lineNo
  245,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo ab_emlrtECI{ 2,     // nDims
  133,                                 // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo vq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  133,                                 // lineNo
  71,                                  // colNo
  "mem_deriv_propag_low.mem_dP0.mem_dP0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtECInfo bb_emlrtECI{ -1,    // nDims
  133,                                 // lineNo
  25,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtBCInfo wq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  137,                                 // lineNo
  131,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  137,                                 // lineNo
  133,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yq_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  137,                                 // lineNo
  205,                                 // colNo
  "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ar_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  137,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo br_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  137,                                 // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  137,                                 // lineNo
  71,                                  // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  138,                                 // lineNo
  131,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo er_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  138,                                 // lineNo
  133,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  138,                                 // lineNo
  205,                                 // colNo
  "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  138,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  138,                                 // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ir_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  138,                                 // lineNo
  71,                                  // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  139,                                 // lineNo
  133,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  139,                                 // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  139,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  139,                                 // lineNo
  209,                                 // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  139,                                 // lineNo
  245,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo or_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  139,                                 // lineNo
  71,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  139,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  140,                                 // lineNo
  131,                                 // colNo
  "mem_deriv_propag_low.mem_dP0.mem_dP0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  140,                                 // lineNo
  133,                                 // colNo
  "mem_deriv_propag_low.mem_dP0.mem_dP0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  140,                                 // lineNo
  205,                                 // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  140,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ur_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  140,                                 // lineNo
  245,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  140,                                 // lineNo
  71,                                  // colNo
  "mem_deriv_propag_low.mem_dP0.mem_dP0_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  155,                                 // lineNo
  42,                                  // colNo
  "pt_s0_LIT_curr",                    // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  161,                                 // lineNo
  40,                                  // colNo
  "next_vectT",                        // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yr_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  163,                                 // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo as_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  163,                                 // lineNo
  139,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bs_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  163,                                 // lineNo
  142,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cs_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  163,                                 // lineNo
  205,                                 // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dtaus0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ds_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  163,                                 // lineNo
  209,                                 // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dtaus0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo es_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  163,                                 // lineNo
  212,                                 // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dtaus0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fs_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  163,                                 // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gs_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  163,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo l_emlrtDCI{ 163,    // lineNo
  78,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo hs_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  164,                                 // lineNo
  133,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo is_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  164,                                 // lineNo
  137,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo js_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  164,                                 // lineNo
  140,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ks_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  164,                                 // lineNo
  203,                                 // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dfs0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ls_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  164,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dfs0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ms_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  164,                                 // lineNo
  210,                                 // colNo
  "mem_deriv_propag_low.mem_dti_ds.mem_dti_dfs0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ns_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  164,                                 // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo os_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  164,                                 // lineNo
  71,                                  // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ps_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  165,                                 // lineNo
  137,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qs_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  165,                                 // lineNo
  141,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rs_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  165,                                 // lineNo
  144,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ss_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  165,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtaus0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ts_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  165,                                 // lineNo
  211,                                 // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtaus0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo us_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  165,                                 // lineNo
  214,                                 // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dtaus0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vs_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  165,                                 // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ws_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  165,                                 // lineNo
  75,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xs_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  166,                                 // lineNo
  135,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ys_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  166,                                 // lineNo
  139,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo at_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  166,                                 // lineNo
  142,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  166,                                 // lineNo
  205,                                 // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dfs0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ct_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  166,                                 // lineNo
  209,                                 // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dfs0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  166,                                 // lineNo
  212,                                 // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dfs0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo et_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  166,                                 // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ft_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  166,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  174,                                 // lineNo
  139,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ht_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  174,                                 // lineNo
  142,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo it_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  174,                                 // lineNo
  209,                                 // colNo
  "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtaus0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  174,                                 // lineNo
  212,                                 // colNo
  "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dtaus0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  174,                                 // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  174,                                 // lineNo
  69,                                  // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo m_emlrtDCI{ 174,    // lineNo
  74,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo mt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  174,                                 // lineNo
  74,                                  // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  175,                                 // lineNo
  137,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ot_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  175,                                 // lineNo
  140,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  175,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dfs0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  175,                                 // lineNo
  210,                                 // colNo
  "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dfs0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  175,                                 // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo st_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  175,                                 // lineNo
  67,                                  // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  175,                                 // lineNo
  72,                                  // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ut_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  176,                                 // lineNo
  139,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  176,                                 // lineNo
  142,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  176,                                 // lineNo
  209,                                 // colNo
  "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtaus0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  176,                                 // lineNo
  212,                                 // colNo
  "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dtaus0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yt_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  176,                                 // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo au_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  176,                                 // lineNo
  69,                                  // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  176,                                 // lineNo
  74,                                  // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  177,                                 // lineNo
  137,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo du_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  177,                                 // lineNo
  140,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo eu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  177,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dfs0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  177,                                 // lineNo
  210,                                 // colNo
  "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dfs0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  177,                                 // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  177,                                 // lineNo
  67,                                  // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo iu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  177,                                 // lineNo
  72,                                  // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ju_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  178,                                 // lineNo
  141,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ku_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  178,                                 // lineNo
  144,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  178,                                 // lineNo
  211,                                 // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dtaus0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  178,                                 // lineNo
  214,                                 // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dtaus0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  178,                                 // lineNo
  245,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ou_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  178,                                 // lineNo
  71,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  178,                                 // lineNo
  76,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  179,                                 // lineNo
  139,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ru_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  179,                                 // lineNo
  142,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo su_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  179,                                 // lineNo
  209,                                 // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dfs0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  179,                                 // lineNo
  212,                                 // colNo
  "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dfs0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  179,                                 // lineNo
  245,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  179,                                 // lineNo
  69,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  179,                                 // lineNo
  74,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  180,                                 // lineNo
  139,                                 // colNo
  "mem_deriv_propag_low.mem_dP0.mem_dP0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yu_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  180,                                 // lineNo
  142,                                 // colNo
  "mem_deriv_propag_low.mem_dP0.mem_dP0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo av_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  180,                                 // lineNo
  209,                                 // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dtaus0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  180,                                 // lineNo
  212,                                 // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dtaus0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  180,                                 // lineNo
  245,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  180,                                 // lineNo
  69,                                  // colNo
  "mem_deriv_propag_low.mem_dP0.mem_dP0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ev_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  180,                                 // lineNo
  74,                                  // colNo
  "mem_deriv_propag_low.mem_dP0.mem_dP0_dtaus0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  181,                                 // lineNo
  137,                                 // colNo
  "mem_deriv_propag_low.mem_dP0.mem_dP0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  181,                                 // lineNo
  140,                                 // colNo
  "mem_deriv_propag_low.mem_dP0.mem_dP0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  181,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dfs0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo iv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  181,                                 // lineNo
  210,                                 // colNo
  "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dfs0_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  181,                                 // lineNo
  245,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  181,                                 // lineNo
  67,                                  // colNo
  "mem_deriv_propag_low.mem_dP0.mem_dP0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  181,                                 // lineNo
  72,                                  // colNo
  "mem_deriv_propag_low.mem_dP0.mem_dP0_dfs0",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  72,                                  // lineNo
  129,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  72,                                  // lineNo
  131,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ov_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  72,                                  // lineNo
  133,                                 // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  72,                                  // lineNo
  159,                                 // colNo
  "mem_bvp.mem_y.mem_t",               // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  72,                                  // lineNo
  161,                                 // colNo
  "mem_bvp.mem_y.mem_t",               // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  72,                                  // lineNo
  188,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  72,                                  // lineNo
  63,                                  // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  72,                                  // lineNo
  65,                                  // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  72,                                  // lineNo
  67,                                  // colNo
  "mem_deriv_propag_low.mem_dti.mem_dti_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  152,                                 // lineNo
  61,                                  // colNo
  "simulation_param.pt_s0_LIT",        // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  101,                                 // lineNo
  143,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  101,                                 // lineNo
  145,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yv_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  101,                                 // lineNo
  151,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo aw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  101,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  101,                                 // lineNo
  209,                                 // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  101,                                 // lineNo
  215,                                 // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  101,                                 // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ew_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  101,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  101,                                 // lineNo
  75,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  101,                                 // lineNo
  81,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  107,                                 // lineNo
  143,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo iw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  107,                                 // lineNo
  145,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  107,                                 // lineNo
  151,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  107,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  107,                                 // lineNo
  75,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  107,                                 // lineNo
  81,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  103,                                 // lineNo
  143,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ow_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  103,                                 // lineNo
  145,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  103,                                 // lineNo
  151,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  103,                                 // lineNo
  207,                                 // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  103,                                 // lineNo
  209,                                 // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  103,                                 // lineNo
  215,                                 // colNo
  "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dbcj_ds",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  103,                                 // lineNo
  249,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  103,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  103,                                 // lineNo
  75,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ww_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  103,                                 // lineNo
  81,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  105,                                 // lineNo
  123,                                 // colNo
  "mem_bvp.mem_ys.mem_uzs",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yw_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  105,                                 // lineNo
  125,                                 // colNo
  "mem_bvp.mem_ys.mem_uzs",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ax_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  105,                                 // lineNo
  177,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  105,                                 // lineNo
  179,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  105,                                 // lineNo
  185,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  105,                                 // lineNo
  73,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ex_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  105,                                 // lineNo
  75,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  105,                                 // lineNo
  81,                                  // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  130,                                 // lineNo
  205,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  131,                                 // lineNo
  205,                                 // colNo
  "ctcr_construc.vect_res",            // aName
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo lc_emlrtRTEI{ 50,  // lineNo
  48,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo mc_emlrtRTEI{ 50,  // lineNo
  71,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo nc_emlrtRTEI{ 50,  // lineNo
  9,                                   // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo oc_emlrtRTEI{ 51,  // lineNo
  48,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo pc_emlrtRTEI{ 51,  // lineNo
  73,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo qc_emlrtRTEI{ 51,  // lineNo
  9,                                   // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo rc_emlrtRTEI{ 52,  // lineNo
  48,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo sc_emlrtRTEI{ 52,  // lineNo
  9,                                   // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo tc_emlrtRTEI{ 62,  // lineNo
  155,                                 // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo uc_emlrtRTEI{ 62,  // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo vc_emlrtRTEI{ 74,  // lineNo
  139,                                 // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo wc_emlrtRTEI{ 74,  // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo xc_emlrtRTEI{ 90,  // lineNo
  155,                                 // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo yc_emlrtRTEI{ 90,  // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo ad_emlrtRTEI{ 117, // lineNo
  155,                                 // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo bd_emlrtRTEI{ 117, // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo cd_emlrtRTEI{ 118, // lineNo
  155,                                 // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo dd_emlrtRTEI{ 118, // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo ed_emlrtRTEI{ 119, // lineNo
  155,                                 // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo fd_emlrtRTEI{ 119, // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo gd_emlrtRTEI{ 120, // lineNo
  155,                                 // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo hd_emlrtRTEI{ 120, // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo id_emlrtRTEI{ 133, // lineNo
  155,                                 // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo jd_emlrtRTEI{ 133, // lineNo
  87,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRTEInfo kd_emlrtRTEI{ 2,   // lineNo
  11,                                  // colNo
  "Deriv_Propag_MaJ_Mem",              // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pName
};

static emlrtRSInfo jd_emlrtRSI{ 62,    // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

static emlrtRSInfo kd_emlrtRSI{ 74,    // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

static emlrtRSInfo ld_emlrtRSI{ 90,    // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

static emlrtRSInfo md_emlrtRSI{ 133,   // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

static emlrtRSInfo nd_emlrtRSI{ 120,   // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

static emlrtRSInfo od_emlrtRSI{ 119,   // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

static emlrtRSInfo pd_emlrtRSI{ 118,   // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

static emlrtRSInfo qd_emlrtRSI{ 117,   // lineNo
  "Deriv_Propag_MaJ_Mem",              // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_MaJ_Mem.m"// pathName
};

// Function Declarations
static void b_binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const MemDerivPropagLow *in2, const coder::array<real_T, 1U> &in3,
  int32_T in4, real_T in5);
static void b_binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const MemDerivPropagLow *in2, real_T in3);
static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
  const MemDerivPropagLow *in2, const coder::array<real_T, 1U> &in3, int32_T in4,
  real_T in5);
static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
  const MemDerivPropagLow *in2, int32_T in3, real_T in4);
static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
  const MemDerivPropagLow *in2, real_T in3);
static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 3U> &in1,
  const MemDerivPropagLow *in2, real_T in3);
static void c_binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const MemDerivPropagLow *in2, real_T in3);
static void d_binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const MemDerivPropagLow *in2, real_T in3);

// Function Definitions
static void b_binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const MemDerivPropagLow *in2, const coder::array<real_T, 1U> &in3,
  int32_T in4, real_T in5)
{
  coder::array<real_T, 2U> b_in2;
  int32_T b_in3;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_in3 = static_cast<int32_T>(in3[in4]);
  if (in1.size(1) == 1) {
    i = in2->mem_duzi.mem_duzi_dtcj.size(1);
  } else {
    i = in1.size(1);
  }

  b_in2.set_size(&yc_emlrtRTEI, &sp, 1, i);
  stride_0_1 = (in2->mem_duzi.mem_duzi_dtcj.size(1) != 1);
  stride_1_1 = (in1.size(1) != 1);
  if (in1.size(1) == 1) {
    loop_ub = in2->mem_duzi.mem_duzi_dtcj.size(1);
  } else {
    loop_ub = in1.size(1);
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2[i] = in2->mem_duzi.mem_duzi_dtcj[((b_in3 +
      in2->mem_duzi.mem_duzi_dtcj.size(0) * (i * stride_0_1)) +
      in2->mem_duzi.mem_duzi_dtcj.size(0) * in2->mem_duzi.mem_duzi_dtcj.size(1) *
      (static_cast<int32_T>(in5) - 1)) - 1] + in1[i * stride_1_1];
  }

  in1.set_size(&yc_emlrtRTEI, &sp, 1, b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void b_binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const MemDerivPropagLow *in2, real_T in3)
{
  coder::array<real_T, 2U> b_in2;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in1.size(1) == 1) {
    i = in2->mem_dP0.mem_dP0_dtcj.size(1);
  } else {
    i = in1.size(1);
  }

  b_in2.set_size(&hd_emlrtRTEI, &sp, 3, i);
  stride_0_1 = (in2->mem_dP0.mem_dP0_dtcj.size(1) != 1);
  stride_1_1 = (in1.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in1.size(1) == 1) {
    loop_ub = in2->mem_dP0.mem_dP0_dtcj.size(1);
  } else {
    loop_ub = in1.size(1);
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2[3 * i] = in2->mem_dP0.mem_dP0_dtcj[3 * aux_0_1 + 3 *
      in2->mem_dP0.mem_dP0_dtcj.size(1) * (static_cast<int32_T>(in3) - 1)] +
      in1[3 * aux_1_1];
    b_in2[3 * i + 1] = in2->mem_dP0.mem_dP0_dtcj[(3 * aux_0_1 + 3 *
      in2->mem_dP0.mem_dP0_dtcj.size(1) * (static_cast<int32_T>(in3) - 1)) + 1]
      + in1[3 * aux_1_1 + 1];
    b_in2[3 * i + 2] = in2->mem_dP0.mem_dP0_dtcj[(3 * aux_0_1 + 3 *
      in2->mem_dP0.mem_dP0_dtcj.size(1) * (static_cast<int32_T>(in3) - 1)) + 2]
      + in1[3 * aux_1_1 + 2];
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  in1.set_size(&hd_emlrtRTEI, &sp, 3, b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[3 * i] = b_in2[3 * i];
    in1[3 * i + 1] = b_in2[3 * i + 1];
    in1[3 * i + 2] = b_in2[3 * i + 2];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
  const MemDerivPropagLow *in2, const coder::array<real_T, 1U> &in3, int32_T in4,
  real_T in5)
{
  coder::array<real_T, 2U> b_in2;
  int32_T b_in3;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_in3 = static_cast<int32_T>(in3[in4]);
  if (in1.size(1) == 1) {
    i = in2->mem_dti.mem_dti_dtcj.size(1);
  } else {
    i = in1.size(1);
  }

  b_in2.set_size(&uc_emlrtRTEI, &sp, 1, i);
  stride_0_1 = (in2->mem_dti.mem_dti_dtcj.size(1) != 1);
  stride_1_1 = (in1.size(1) != 1);
  if (in1.size(1) == 1) {
    loop_ub = in2->mem_dti.mem_dti_dtcj.size(1);
  } else {
    loop_ub = in1.size(1);
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2[i] = in2->mem_dti.mem_dti_dtcj[((b_in3 +
      in2->mem_dti.mem_dti_dtcj.size(0) * (i * stride_0_1)) +
      in2->mem_dti.mem_dti_dtcj.size(0) * in2->mem_dti.mem_dti_dtcj.size(1) * (
      static_cast<int32_T>(in5) - 1)) - 1] + in1[i * stride_1_1];
  }

  in1.set_size(&uc_emlrtRTEI, &sp, 1, b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
  const MemDerivPropagLow *in2, int32_T in3, real_T in4)
{
  coder::array<real_T, 2U> b_in2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in1.size(1) == 1) {
    i = in2->mem_dti.mem_dti_dbcj.size(1);
  } else {
    i = in1.size(1);
  }

  b_in2.set_size(&wc_emlrtRTEI, &sp, 1, i);
  stride_0_1 = (in2->mem_dti.mem_dti_dbcj.size(1) != 1);
  stride_1_1 = (in1.size(1) != 1);
  if (in1.size(1) == 1) {
    loop_ub = in2->mem_dti.mem_dti_dbcj.size(1);
  } else {
    loop_ub = in1.size(1);
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2[i] = in2->mem_dti.mem_dti_dbcj[(in3 + in2->mem_dti.mem_dti_dbcj.size(0)
      * (i * stride_0_1)) + in2->mem_dti.mem_dti_dbcj.size(0) *
      in2->mem_dti.mem_dti_dbcj.size(1) * (static_cast<int32_T>(in4) - 1)] +
      in1[i * stride_1_1];
  }

  in1.set_size(&wc_emlrtRTEI, &sp, 1, b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
  const MemDerivPropagLow *in2, real_T in3)
{
  coder::array<real_T, 2U> b_in2;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in1.size(1) == 1) {
    i = in2->mem_dP0.mem_dP0_dbcj.size(1);
  } else {
    i = in1.size(1);
  }

  b_in2.set_size(&jd_emlrtRTEI, &sp, 3, i);
  stride_0_1 = (in2->mem_dP0.mem_dP0_dbcj.size(1) != 1);
  stride_1_1 = (in1.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in1.size(1) == 1) {
    loop_ub = in2->mem_dP0.mem_dP0_dbcj.size(1);
  } else {
    loop_ub = in1.size(1);
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2[3 * i] = in2->mem_dP0.mem_dP0_dbcj[3 * aux_0_1 + 3 *
      in2->mem_dP0.mem_dP0_dbcj.size(1) * (static_cast<int32_T>(in3) - 1)] +
      in1[3 * aux_1_1];
    b_in2[3 * i + 1] = in2->mem_dP0.mem_dP0_dbcj[(3 * aux_0_1 + 3 *
      in2->mem_dP0.mem_dP0_dbcj.size(1) * (static_cast<int32_T>(in3) - 1)) + 1]
      + in1[3 * aux_1_1 + 1];
    b_in2[3 * i + 2] = in2->mem_dP0.mem_dP0_dbcj[(3 * aux_0_1 + 3 *
      in2->mem_dP0.mem_dP0_dbcj.size(1) * (static_cast<int32_T>(in3) - 1)) + 2]
      + in1[3 * aux_1_1 + 2];
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  in1.set_size(&jd_emlrtRTEI, &sp, 3, b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[3 * i] = b_in2[3 * i];
    in1[3 * i + 1] = b_in2[3 * i + 1];
    in1[3 * i + 2] = b_in2[3 * i + 2];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 3U> &in1,
  const MemDerivPropagLow *in2, real_T in3)
{
  coder::array<real_T, 3U> b_in2;
  int32_T aux_0_2;
  int32_T aux_1_2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_2;
  int32_T stride_1_2;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in1.size(2) == 1) {
    i = in2->mem_dR0.mem_dR0_dtcj.size(2);
  } else {
    i = in1.size(2);
  }

  b_in2.set_size(&fd_emlrtRTEI, &sp, 3, 3, i);
  stride_0_2 = (in2->mem_dR0.mem_dR0_dtcj.size(2) != 1);
  stride_1_2 = (in1.size(2) != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  if (in1.size(2) == 1) {
    loop_ub = in2->mem_dR0.mem_dR0_dtcj.size(2);
  } else {
    loop_ub = in1.size(2);
  }

  for (i = 0; i < loop_ub; i++) {
    for (int32_T i1{0}; i1 < 3; i1++) {
      b_in2[3 * i1 + 9 * i] = in2->mem_dR0.mem_dR0_dtcj[(3 * i1 + 9 * aux_0_2) +
        9 * in2->mem_dR0.mem_dR0_dtcj.size(2) * (static_cast<int32_T>(in3) - 1)]
        + in1[3 * i1 + 9 * aux_1_2];
      b_in2[(3 * i1 + 9 * i) + 1] = in2->mem_dR0.mem_dR0_dtcj[((3 * i1 + 9 *
        aux_0_2) + 9 * in2->mem_dR0.mem_dR0_dtcj.size(2) * (static_cast<int32_T>
        (in3) - 1)) + 1] + in1[(3 * i1 + 9 * aux_1_2) + 1];
      b_in2[(3 * i1 + 9 * i) + 2] = in2->mem_dR0.mem_dR0_dtcj[((3 * i1 + 9 *
        aux_0_2) + 9 * in2->mem_dR0.mem_dR0_dtcj.size(2) * (static_cast<int32_T>
        (in3) - 1)) + 2] + in1[(3 * i1 + 9 * aux_1_2) + 2];
    }

    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }

  in1.set_size(&fd_emlrtRTEI, &sp, 3, 3, b_in2.size(2));
  loop_ub = b_in2.size(2);
  for (i = 0; i < loop_ub; i++) {
    for (int32_T i1{0}; i1 < 3; i1++) {
      in1[3 * i1 + 9 * i] = b_in2[3 * i1 + 9 * i];
      in1[(3 * i1 + 9 * i) + 1] = b_in2[(3 * i1 + 9 * i) + 1];
      in1[(3 * i1 + 9 * i) + 2] = b_in2[(3 * i1 + 9 * i) + 2];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void c_binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const MemDerivPropagLow *in2, real_T in3)
{
  coder::array<real_T, 2U> b_in2;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in1.size(1) == 1) {
    i = in2->mem_dn0.mem_dn0_dtcj.size(1);
  } else {
    i = in1.size(1);
  }

  b_in2.set_size(&dd_emlrtRTEI, &sp, 3, i);
  stride_0_1 = (in2->mem_dn0.mem_dn0_dtcj.size(1) != 1);
  stride_1_1 = (in1.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in1.size(1) == 1) {
    loop_ub = in2->mem_dn0.mem_dn0_dtcj.size(1);
  } else {
    loop_ub = in1.size(1);
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2[3 * i] = in2->mem_dn0.mem_dn0_dtcj[3 * aux_0_1 + 3 *
      in2->mem_dn0.mem_dn0_dtcj.size(1) * (static_cast<int32_T>(in3) - 1)] +
      in1[3 * aux_1_1];
    b_in2[3 * i + 1] = in2->mem_dn0.mem_dn0_dtcj[(3 * aux_0_1 + 3 *
      in2->mem_dn0.mem_dn0_dtcj.size(1) * (static_cast<int32_T>(in3) - 1)) + 1]
      + in1[3 * aux_1_1 + 1];
    b_in2[3 * i + 2] = in2->mem_dn0.mem_dn0_dtcj[(3 * aux_0_1 + 3 *
      in2->mem_dn0.mem_dn0_dtcj.size(1) * (static_cast<int32_T>(in3) - 1)) + 2]
      + in1[3 * aux_1_1 + 2];
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  in1.set_size(&dd_emlrtRTEI, &sp, 3, b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[3 * i] = b_in2[3 * i];
    in1[3 * i + 1] = b_in2[3 * i + 1];
    in1[3 * i + 2] = b_in2[3 * i + 2];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void d_binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U>
  &in1, const MemDerivPropagLow *in2, real_T in3)
{
  coder::array<real_T, 2U> b_in2;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in1.size(1) == 1) {
    i = in2->mem_dm0.mem_dm0_dtcj.size(1);
  } else {
    i = in1.size(1);
  }

  b_in2.set_size(&bd_emlrtRTEI, &sp, 3, i);
  stride_0_1 = (in2->mem_dm0.mem_dm0_dtcj.size(1) != 1);
  stride_1_1 = (in1.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in1.size(1) == 1) {
    loop_ub = in2->mem_dm0.mem_dm0_dtcj.size(1);
  } else {
    loop_ub = in1.size(1);
  }

  for (i = 0; i < loop_ub; i++) {
    b_in2[3 * i] = in2->mem_dm0.mem_dm0_dtcj[3 * aux_0_1 + 3 *
      in2->mem_dm0.mem_dm0_dtcj.size(1) * (static_cast<int32_T>(in3) - 1)] +
      in1[3 * aux_1_1];
    b_in2[3 * i + 1] = in2->mem_dm0.mem_dm0_dtcj[(3 * aux_0_1 + 3 *
      in2->mem_dm0.mem_dm0_dtcj.size(1) * (static_cast<int32_T>(in3) - 1)) + 1]
      + in1[3 * aux_1_1 + 1];
    b_in2[3 * i + 2] = in2->mem_dm0.mem_dm0_dtcj[(3 * aux_0_1 + 3 *
      in2->mem_dm0.mem_dm0_dtcj.size(1) * (static_cast<int32_T>(in3) - 1)) + 2]
      + in1[3 * aux_1_1 + 2];
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  in1.set_size(&bd_emlrtRTEI, &sp, 3, b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[3 * i] = b_in2[3 * i];
    in1[3 * i + 1] = b_in2[3 * i + 1];
    in1[3 * i + 2] = b_in2[3 * i + 2];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void Deriv_Propag_MaJ_Mem(const emlrtStack &sp, real_T is, const CTCRCarac
  *ctcr_carac, const CTCRConstruc *ctcr_construc, const MemBVP *mem_bvp,
  MemDerivPropagLow *mem_deriv_propag_low, const SimulationParam
  *simulation_param)
{
  coder::array<real_T, 3U> r4;
  coder::array<real_T, 2U> r2;
  coder::array<real_T, 2U> r3;
  coder::array<real_T, 1U> curr_vectT;
  coder::array<real_T, 1U> next_vectT;
  coder::array<real_T, 1U> vectT_first_outside_pt;
  coder::array<int32_T, 2U> r1;
  coder::array<int32_T, 1U> ii;
  coder::array<boolean_T, 1U> b_is;
  coder::array<boolean_T, 1U> r;
  emlrtStack b_st;
  emlrtStack st;
  real_T b_ctcr_construc;
  real_T c_ctcr_construc;
  real_T nbP;
  real_T nbT;
  int32_T iv1[3];
  int32_T c_iv[2];
  int32_T c_is;
  int32_T d_is;
  int32_T e_is;
  int32_T f_is;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);

  //  ======================================================================= %
  //
  //  This function integrates the Low-Level derivatives using a manual
  //  first order linearization
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  is                    : (int ∊ [1 , nbP]) Index of the current curvilinear abscissa
  //  ctcr_carac            : (class) Robot features
  //  ctcr_construc         : (class) Robot features related to the model settings
  //  mem_bvp               : (class) Memory of the BVP variables
  //  mem_deriv_propag_low  : (class) Memory of the low-level derivatives
  //  simulation_param      : (class) Model settings
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  mem_deriv_propag_low  : (class) Memory of the low-level partial derivatives
  //
  //  ======================================================================= %
  //  ========================================================== %
  //  ================== Getting input values ================== %
  nbP = ctcr_construc->nbP;
  nbT = ctcr_carac->nbT;

  //  ========================================================== %
  if (!(is == ctcr_construc->nbP)) {
    int32_T i;
    int32_T i1;
    int32_T i2;
    int32_T loop_ub;
    boolean_T tf;

    //  Vectors of the tubes index involved or not at the current discretization point
    b_is.set_size(&lc_emlrtRTEI, &sp, ctcr_construc->vect_ind_iT.size(0));
    loop_ub = ctcr_construc->vect_ind_iT.size(0);
    r.set_size(&mc_emlrtRTEI, &sp, ctcr_construc->vect_ind_iT.size(0));
    for (i = 0; i < loop_ub; i++) {
      b_is[i] = (ctcr_construc->vect_ind_iT[i] <= is);
      r[i] = (is <= ctcr_construc->vect_ind_iT[i +
              ctcr_construc->vect_ind_iT.size(0) * 2]);
    }

    if (b_is.size(0) != r.size(0)) {
      emlrtSizeEqCheck1DR2012b(b_is.size(0), r.size(0), &j_emlrtECI,
        (emlrtConstCTX)&sp);
    }

    st.site = &bb_emlrtRSI;
    loop_ub = b_is.size(0);
    for (i = 0; i < loop_ub; i++) {
      b_is[i] = (b_is[i] && r[i]);
    }

    b_st.site = &p_emlrtRSI;
    coder::eml_find(b_st, b_is, ii);
    curr_vectT.set_size(&nc_emlrtRTEI, &st, ii.size(0));
    loop_ub = ii.size(0);
    for (i = 0; i < loop_ub; i++) {
      curr_vectT[i] = ii[i];
    }

    b_is.set_size(&oc_emlrtRTEI, &sp, ctcr_construc->vect_ind_iT.size(0));
    loop_ub = ctcr_construc->vect_ind_iT.size(0);
    r.set_size(&pc_emlrtRTEI, &sp, ctcr_construc->vect_ind_iT.size(0));
    for (i = 0; i < loop_ub; i++) {
      b_is[i] = (ctcr_construc->vect_ind_iT[i] <= is + 1.0);
      r[i] = (is + 1.0 <= ctcr_construc->vect_ind_iT[i +
              ctcr_construc->vect_ind_iT.size(0) * 2]);
    }

    if (b_is.size(0) != r.size(0)) {
      emlrtSizeEqCheck1DR2012b(b_is.size(0), r.size(0), &k_emlrtECI,
        (emlrtConstCTX)&sp);
    }

    st.site = &cb_emlrtRSI;
    loop_ub = b_is.size(0);
    for (i = 0; i < loop_ub; i++) {
      b_is[i] = (b_is[i] && r[i]);
    }

    b_st.site = &p_emlrtRSI;
    coder::eml_find(b_st, b_is, ii);
    next_vectT.set_size(&qc_emlrtRTEI, &st, ii.size(0));
    loop_ub = ii.size(0);
    for (i = 0; i < loop_ub; i++) {
      next_vectT[i] = ii[i];
    }

    st.site = &db_emlrtRSI;
    b_is.set_size(&rc_emlrtRTEI, &st, ctcr_construc->vect_ind_iT.size(0));
    loop_ub = ctcr_construc->vect_ind_iT.size(0);
    for (i = 0; i < loop_ub; i++) {
      b_is[i] = (is + 1.0 == ctcr_construc->vect_ind_iT[i +
                 ctcr_construc->vect_ind_iT.size(0) * 2] + 1.0);
    }

    b_st.site = &p_emlrtRSI;
    coder::eml_find(b_st, b_is, ii);
    vectT_first_outside_pt.set_size(&sc_emlrtRTEI, &st, ii.size(0));
    loop_ub = ii.size(0);
    for (i = 0; i < loop_ub; i++) {
      vectT_first_outside_pt[i] = ii[i];
    }

    //  ============================== %
    //  ======== mem_dti_dtcj ======== %
    i = next_vectT.size(0);
    if (next_vectT.size(0) - 1 >= 0) {
      c_is = static_cast<int32_T>(is);
      b_ctcr_construc = ctcr_construc->vect_res[static_cast<int32_T>(is) - 1];
      c_iv[0] = 1;
      d_is = static_cast<int32_T>(is + 1.0);
    }

    for (int32_T b_iv{0}; b_iv < i; b_iv++) {
      if (b_iv + 1 > next_vectT.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_iv + 1, 1, next_vectT.size(0),
          &no_emlrtBCI, (emlrtConstCTX)&sp);
      }

      i1 = mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(0);
      i2 = static_cast<int32_T>(next_vectT[b_iv]);
      if ((i2 < 1) || (i2 > i1)) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &oo_emlrtBCI, (emlrtConstCTX)&
          sp);
      }

      i1 = mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
          &po_emlrtBCI, (emlrtConstCTX)&sp);
      }

      i1 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(0);
      if (i2 > i1) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &qo_emlrtBCI, (emlrtConstCTX)&
          sp);
      }

      i1 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
          &ro_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
           ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
          ctcr_construc->vect_res.size(1), &so_emlrtBCI, (emlrtConstCTX)&sp);
      }

      loop_ub = mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(1);
      r2.set_size(&tc_emlrtRTEI, &sp, 1, loop_ub);
      for (i1 = 0; i1 < loop_ub; i1++) {
        r2[i1] = mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds[((i2 +
          mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(0) * i1) +
          mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(0) *
          mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(1) * (c_is - 1))
          - 1] * b_ctcr_construc;
      }

      loop_ub = mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(1);
      if ((loop_ub != r2.size(1)) && ((loop_ub != 1) && (r2.size(1) != 1))) {
        emlrtDimSizeImpxCheckR2021b(loop_ub, r2.size(1), &l_emlrtECI,
          (emlrtConstCTX)&sp);
      }

      i1 = mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(0);
      if (i2 > i1) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &to_emlrtBCI, (emlrtConstCTX)&
          sp);
      }

      i1 = mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(2);
      if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is + 1.0)
           > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, i1,
          &uo_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (loop_ub == r2.size(1)) {
        r2.set_size(&uc_emlrtRTEI, &sp, 1, loop_ub);
        for (i1 = 0; i1 < loop_ub; i1++) {
          r2[i1] = mem_deriv_propag_low->mem_dti.mem_dti_dtcj[((i2 +
            mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(0) * i1) +
            mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(0) *
            mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(1) *
            (static_cast<int32_T>(is) - 1)) - 1] + r2[i1];
        }
      } else {
        st.site = &jd_emlrtRSI;
        binary_expand_op(st, r2, mem_deriv_propag_low, next_vectT, b_iv, is);
      }

      c_iv[1] = mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(1);
      emlrtSubAssignSizeCheckR2012b(&c_iv[0], 2, r2.size(), 2, &m_emlrtECI,
        (emlrtCTX)&sp);
      loop_ub = r2.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        mem_deriv_propag_low->mem_dti.mem_dti_dtcj[((static_cast<int32_T>
          (next_vectT[b_iv]) + mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(0)
          * i1) + mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(0) *
          mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(1) * (d_is - 1)) - 1] =
          r2[i1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }

    //  ============================== %
    //  ======== mem_dti_dbcj ======== %
    i = static_cast<int32_T>(ctcr_carac->nbT);
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
      static_cast<int32_T>(ctcr_carac->nbT), &n_emlrtRTEI, (emlrtConstCTX)&sp);
    for (c_is = 0; c_is < i; c_is++) {
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, nbT, mxDOUBLE_CLASS,
        static_cast<int32_T>(nbT), &o_emlrtRTEI, (emlrtConstCTX)&sp);
      for (int32_T b_iv{0}; b_iv < i; b_iv++) {
        st.site = &eb_emlrtRSI;
        b_st.site = &jb_emlrtRSI;
        tf = coder::isMember(b_st, static_cast<real_T>(c_is) + 1.0,
                             vectT_first_outside_pt);
        if (tf) {
          i1 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0);
          if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(c_is) + 1U), 1, i1, &mv_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1);
          if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(c_is) + 1U), 1, i1, &nv_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &ov_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) >
               mem_bvp->mem_y.mem_t.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(c_is) + 1U), 1, mem_bvp->mem_y.mem_t.size(0),
              &pv_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
               mem_bvp->mem_y.mem_t.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
              mem_bvp->mem_y.mem_t.size(1), &qv_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
               ctcr_construc->vect_res.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
              ctcr_construc->vect_res.size(1), &rv_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0);
          if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(c_is) + 1U), 1, i1, &sv_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1);
          if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(c_is) + 1U), 1, i1, &tv_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(2);
          if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is +
                1.0) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, i1,
              &uv_emlrtBCI, (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_low->mem_dti.mem_dti_dbcj[(c_is +
            mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0) * c_is) +
            mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0) *
            mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1) *
            (static_cast<int32_T>(is + 1.0) - 1)] =
            mem_deriv_propag_low->mem_dti.mem_dti_dbcj[(c_is +
            mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0) * c_is) +
            mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0) *
            mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1) *
            (static_cast<int32_T>(is) - 1)] + mem_bvp->mem_y.mem_t[c_is +
            mem_bvp->mem_y.mem_t.size(0) * (static_cast<int32_T>(is) - 1)] /
            ctcr_construc->vect_res[static_cast<int32_T>(is) - 1];
        } else {
          st.site = &fb_emlrtRSI;
          b_st.site = &jb_emlrtRSI;
          tf = coder::isMember(b_st, static_cast<real_T>(b_iv) + 1.0, next_vectT);
          if (tf) {
            i1 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0);
            if ((b_iv + 1 < 1) || (b_iv + 1 > i1)) {
              emlrtDynamicBoundsCheckR2012b(b_iv + 1, 1, i1, &vo_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &wo_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(0);
            if ((b_iv + 1 < 1) || (b_iv + 1 > i1)) {
              emlrtDynamicBoundsCheckR2012b(b_iv + 1, 1, i1, &xo_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &yo_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->vect_res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->vect_res.size(1), &ap_emlrtBCI, (emlrtConstCTX)&
                sp);
            }

            b_ctcr_construc = ctcr_construc->vect_res[static_cast<int32_T>(is) -
              1];
            r2.set_size(&vc_emlrtRTEI, &sp, 1,
                        mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(1));
            loop_ub = mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(1);
            for (i1 = 0; i1 < loop_ub; i1++) {
              r2[i1] = mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds[(b_iv +
                mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(0) * i1) +
                mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(0) *
                mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(1) * (
                static_cast<int32_T>(is) - 1)] * b_ctcr_construc;
            }

            i1 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1);
            if ((i1 != r2.size(1)) && ((i1 != 1) && (r2.size(1) != 1))) {
              emlrtDimSizeImpxCheckR2021b(i1, r2.size(1), &n_emlrtECI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0);
            if ((b_iv + 1 < 1) || (b_iv + 1 > i1)) {
              emlrtDynamicBoundsCheckR2012b(b_iv + 1, 1, i1, &bp_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(2);
            if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is
                  + 1.0) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                i1, &cp_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1) == r2.size(1))
            {
              r2.set_size(&wc_emlrtRTEI, &sp, 1,
                          mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1));
              loop_ub = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1);
              for (i1 = 0; i1 < loop_ub; i1++) {
                r2[i1] = mem_deriv_propag_low->mem_dti.mem_dti_dbcj[(b_iv +
                  mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0) * i1) +
                  mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0) *
                  mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1) * (
                  static_cast<int32_T>(is) - 1)] + r2[i1];
              }
            } else {
              st.site = &kd_emlrtRSI;
              binary_expand_op(st, r2, mem_deriv_propag_low, b_iv, is);
            }

            c_iv[0] = 1;
            c_iv[1] = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1);
            emlrtSubAssignSizeCheckR2012b(&c_iv[0], 2, r2.size(), 2, &o_emlrtECI,
              (emlrtCTX)&sp);
            loop_ub = r2.size(1);
            for (i1 = 0; i1 < loop_ub; i1++) {
              mem_deriv_propag_low->mem_dti.mem_dti_dbcj[(b_iv +
                mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0) * i1) +
                mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0) *
                mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1) * (
                static_cast<int32_T>(is + 1.0) - 1)] = r2[i1];
            }
          }
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }

    if (is >= ctcr_construc->ind_origin) {
      real_T b_mem_deriv_propag_low[9];
      real_T ctcr_construc_tmp;
      real_T mem_deriv_propag_low_idx_2;
      if (simulation_param->bool_J) {
        //  =============================== %
        //  ======== mem_duzi_dtcj ======== %
        i1 = next_vectT.size(0);
        if (next_vectT.size(0) - 1 >= 0) {
          e_is = static_cast<int32_T>(is);
          c_ctcr_construc = ctcr_construc->vect_res[static_cast<int32_T>(is) - 1];
          c_iv[0] = 1;
          f_is = static_cast<int32_T>(is + 1.0);
        }

        for (int32_T b_iv{0}; b_iv < i1; b_iv++) {
          if (b_iv + 1 > next_vectT.size(0)) {
            emlrtDynamicBoundsCheckR2012b(b_iv + 1, 1, next_vectT.size(0),
              &dp_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0);
          d_is = static_cast<int32_T>(next_vectT[b_iv]);
          if ((d_is < 1) || (d_is > i2)) {
            emlrtDynamicBoundsCheckR2012b(d_is, 1, i2, &ep_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &fp_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(0);
          if (d_is > i2) {
            emlrtDynamicBoundsCheckR2012b(d_is, 1, i2, &gp_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
              &hp_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
               ctcr_construc->vect_res.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
              ctcr_construc->vect_res.size(1), &ip_emlrtBCI, (emlrtConstCTX)&sp);
          }

          loop_ub = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(1);
          r2.set_size(&xc_emlrtRTEI, &sp, 1, loop_ub);
          for (i2 = 0; i2 < loop_ub; i2++) {
            r2[i2] = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds[((d_is +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(0) * i2) +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(0) *
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(1) * (e_is
              - 1)) - 1] * c_ctcr_construc;
          }

          loop_ub = mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(1);
          if ((loop_ub != r2.size(1)) && ((loop_ub != 1) && (r2.size(1) != 1)))
          {
            emlrtDimSizeImpxCheckR2021b(loop_ub, r2.size(1), &p_emlrtECI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0);
          if (d_is > i2) {
            emlrtDynamicBoundsCheckR2012b(d_is, 1, i2, &jp_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(2);
          if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is +
                1.0) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, i2,
              &kp_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (loop_ub == r2.size(1)) {
            r2.set_size(&yc_emlrtRTEI, &sp, 1, loop_ub);
            for (i2 = 0; i2 < loop_ub; i2++) {
              r2[i2] = mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj[((d_is +
                mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0) * i2) +
                mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0) *
                mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(1) * (
                static_cast<int32_T>(is) - 1)) - 1] + r2[i2];
            }
          } else {
            st.site = &ld_emlrtRSI;
            b_binary_expand_op(st, r2, mem_deriv_propag_low, next_vectT, b_iv,
                               is);
          }

          c_iv[1] = mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(1);
          emlrtSubAssignSizeCheckR2012b(&c_iv[0], 2, r2.size(), 2, &q_emlrtECI,
            (emlrtCTX)&sp);
          loop_ub = r2.size(1);
          for (i2 = 0; i2 < loop_ub; i2++) {
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj[((static_cast<int32_T>
              (next_vectT[b_iv]) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0) * i2) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0) *
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(1) * (f_is - 1))
              - 1] = r2[i2];
          }

          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }

        //  =============================== %
        //  ======== mem_duzi_dbcj ======== %
        emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
          static_cast<int32_T>(ctcr_carac->nbT), &p_emlrtRTEI, (emlrtConstCTX)&
          sp);
        for (c_is = 0; c_is < i; c_is++) {
          emlrtForLoopVectorCheckR2021a(1.0, 1.0, nbT, mxDOUBLE_CLASS,
            static_cast<int32_T>(nbT), &q_emlrtRTEI, (emlrtConstCTX)&sp);
          for (int32_T b_iv{0}; b_iv < i; b_iv++) {
            boolean_T guard1;
            boolean_T guard2;
            boolean_T guard3;
            guard1 = false;
            guard2 = false;
            guard3 = false;
            if (is + 1.0 == nbP) {
              st.site = &gb_emlrtRSI;
              b_st.site = &jb_emlrtRSI;
              tf = coder::isMember(b_st, static_cast<real_T>(b_iv) + 1.0,
                                   curr_vectT);
              if (tf && ((!(static_cast<real_T>(c_is) + 1.0 == nbT)) || (
                    static_cast<uint32_T>(b_iv) + 1U != static_cast<uint32_T>
                    (nbT)))) {
                i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0);
                if ((static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) < 1)
                    || (static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) >
                        i1)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                    static_cast<uint32_T>(b_iv) + 1U), 1, i1, &wv_emlrtBCI,
                    (emlrtConstCTX)&sp);
                }

                i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1);
                if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1)
                    || (static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) >
                        i1)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                    static_cast<uint32_T>(c_is) + 1U), 1, i1, &xv_emlrtBCI,
                    (emlrtConstCTX)&sp);
                }

                i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2);
                if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                     i1)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                    &yv_emlrtBCI, (emlrtConstCTX)&sp);
                }

                i1 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(0);
                if ((static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) < 1)
                    || (static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) >
                        i1)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                    static_cast<uint32_T>(b_iv) + 1U), 1, i1, &aw_emlrtBCI,
                    (emlrtConstCTX)&sp);
                }

                i1 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(1);
                if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1)
                    || (static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) >
                        i1)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                    static_cast<uint32_T>(c_is) + 1U), 1, i1, &bw_emlrtBCI,
                    (emlrtConstCTX)&sp);
                }

                i1 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(2);
                if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                     i1)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                    &cw_emlrtBCI, (emlrtConstCTX)&sp);
                }

                if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                     ctcr_construc->vect_res.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                    ctcr_construc->vect_res.size(1), &dw_emlrtBCI,
                    (emlrtConstCTX)&sp);
                }

                i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0);
                if ((static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) < 1)
                    || (static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) >
                        i1)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                    static_cast<uint32_T>(b_iv) + 1U), 1, i1, &ew_emlrtBCI,
                    (emlrtConstCTX)&sp);
                }

                i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1);
                if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1)
                    || (static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) >
                        i1)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                    static_cast<uint32_T>(c_is) + 1U), 1, i1, &fw_emlrtBCI,
                    (emlrtConstCTX)&sp);
                }

                i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2);
                if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>
                     (is + 1.0) > i1)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0),
                    1, i1, &gw_emlrtBCI, (emlrtConstCTX)&sp);
                }

                mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj[(b_iv +
                  mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) * c_is) +
                  mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) *
                  mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1) * (
                  static_cast<int32_T>(is + 1.0) - 1)] =
                  mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj[(b_iv +
                  mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) * c_is) +
                  mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) *
                  mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1) * (
                  static_cast<int32_T>(is) - 1)] +
                  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds[(b_iv +
                  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(0) *
                  c_is) +
                  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(0) *
                  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(1) * (
                  static_cast<int32_T>(is) - 1)] * ctcr_construc->vect_res[
                  static_cast<int32_T>(is) - 1];
              } else {
                guard3 = true;
              }
            } else {
              guard3 = true;
            }

            if (guard3) {
              st.site = &hb_emlrtRSI;
              b_st.site = &jb_emlrtRSI;
              tf = coder::isMember(b_st, static_cast<real_T>(b_iv) + 1.0,
                                   next_vectT);
              if (tf) {
                if ((c_is + 1 < 1) || (c_is + 1 >
                                       ctcr_construc->vect_ind_iT.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(c_is + 1, 1,
                    ctcr_construc->vect_ind_iT.size(0), &lp_emlrtBCI,
                    (emlrtConstCTX)&sp);
                }

                if (!(is + 1.0 == ctcr_construc->vect_ind_iT[c_is +
                      ctcr_construc->vect_ind_iT.size(0) * 2] + 1.0)) {
                  i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0);
                  if ((static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) <
                       1) || (static_cast<int32_T>(static_cast<uint32_T>(b_iv) +
                        1U) > i1)) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                      static_cast<uint32_T>(b_iv) + 1U), 1, i1, &nw_emlrtBCI,
                      (emlrtConstCTX)&sp);
                  }

                  i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1);
                  if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) <
                       1) || (static_cast<int32_T>(static_cast<uint32_T>(c_is) +
                        1U) > i1)) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                      static_cast<uint32_T>(c_is) + 1U), 1, i1, &ow_emlrtBCI,
                      (emlrtConstCTX)&sp);
                  }

                  i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2);
                  if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is)
                       > i1)) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                      i1, &pw_emlrtBCI, (emlrtConstCTX)&sp);
                  }

                  i1 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(0);
                  if ((static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) <
                       1) || (static_cast<int32_T>(static_cast<uint32_T>(b_iv) +
                        1U) > i1)) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                      static_cast<uint32_T>(b_iv) + 1U), 1, i1, &qw_emlrtBCI,
                      (emlrtConstCTX)&sp);
                  }

                  i1 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(1);
                  if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) <
                       1) || (static_cast<int32_T>(static_cast<uint32_T>(c_is) +
                        1U) > i1)) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                      static_cast<uint32_T>(c_is) + 1U), 1, i1, &rw_emlrtBCI,
                      (emlrtConstCTX)&sp);
                  }

                  i1 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(2);
                  if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is)
                       > i1)) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                      i1, &sw_emlrtBCI, (emlrtConstCTX)&sp);
                  }

                  if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is)
                       > ctcr_construc->vect_res.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                      ctcr_construc->vect_res.size(1), &tw_emlrtBCI,
                      (emlrtConstCTX)&sp);
                  }

                  i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0);
                  if ((static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) <
                       1) || (static_cast<int32_T>(static_cast<uint32_T>(b_iv) +
                        1U) > i1)) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                      static_cast<uint32_T>(b_iv) + 1U), 1, i1, &uw_emlrtBCI,
                      (emlrtConstCTX)&sp);
                  }

                  i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1);
                  if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) <
                       1) || (static_cast<int32_T>(static_cast<uint32_T>(c_is) +
                        1U) > i1)) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                      static_cast<uint32_T>(c_is) + 1U), 1, i1, &vw_emlrtBCI,
                      (emlrtConstCTX)&sp);
                  }

                  i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2);
                  if ((static_cast<int32_T>(is + 1.0) < 1) ||
                      (static_cast<int32_T>(is + 1.0) > i1)) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0),
                      1, i1, &ww_emlrtBCI, (emlrtConstCTX)&sp);
                  }

                  mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj[(b_iv +
                    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) * c_is)
                    + mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) *
                    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1) * (
                    static_cast<int32_T>(is + 1.0) - 1)] =
                    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj[(b_iv +
                    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) * c_is)
                    + mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) *
                    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1) * (
                    static_cast<int32_T>(is) - 1)] +
                    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds[(b_iv +
                    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(0) *
                    c_is) +
                    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(0) *
                    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(1) *
                    (static_cast<int32_T>(is) - 1)] * ctcr_construc->vect_res[
                    static_cast<int32_T>(is) - 1];
                } else {
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }
            }

            if (guard2) {
              st.site = &ib_emlrtRSI;
              b_st.site = &jb_emlrtRSI;
              tf = coder::isMember(b_st, static_cast<real_T>(c_is) + 1.0,
                                   vectT_first_outside_pt);
              if (tf) {
                st.site = &ib_emlrtRSI;
                b_st.site = &jb_emlrtRSI;
                tf = coder::isMember(b_st, static_cast<real_T>(b_iv) + 1.0,
                                     vectT_first_outside_pt);
                if (tf) {
                  if ((static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) <
                       1) || (static_cast<int32_T>(static_cast<uint32_T>(b_iv) +
                        1U) > mem_bvp->mem_ys.mem_uzs.size(0))) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                      static_cast<uint32_T>(b_iv) + 1U), 1,
                      mem_bvp->mem_ys.mem_uzs.size(0), &xw_emlrtBCI,
                      (emlrtConstCTX)&sp);
                  }

                  if ((static_cast<int32_T>(is - 1.0) < 1) ||
                      (static_cast<int32_T>(is - 1.0) >
                       mem_bvp->mem_ys.mem_uzs.size(1))) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is - 1.0),
                      1, mem_bvp->mem_ys.mem_uzs.size(1), &yw_emlrtBCI,
                      (emlrtConstCTX)&sp);
                  }

                  i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0);
                  if ((static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) <
                       1) || (static_cast<int32_T>(static_cast<uint32_T>(b_iv) +
                        1U) > i1)) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                      static_cast<uint32_T>(b_iv) + 1U), 1, i1, &ax_emlrtBCI,
                      (emlrtConstCTX)&sp);
                  }

                  i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1);
                  if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) <
                       1) || (static_cast<int32_T>(static_cast<uint32_T>(c_is) +
                        1U) > i1)) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                      static_cast<uint32_T>(c_is) + 1U), 1, i1, &bx_emlrtBCI,
                      (emlrtConstCTX)&sp);
                  }

                  i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2);
                  if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is)
                       > i1)) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                      i1, &cx_emlrtBCI, (emlrtConstCTX)&sp);
                  }

                  i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0);
                  if ((static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) <
                       1) || (static_cast<int32_T>(static_cast<uint32_T>(b_iv) +
                        1U) > i1)) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                      static_cast<uint32_T>(b_iv) + 1U), 1, i1, &dx_emlrtBCI,
                      (emlrtConstCTX)&sp);
                  }

                  i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1);
                  if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) <
                       1) || (static_cast<int32_T>(static_cast<uint32_T>(c_is) +
                        1U) > i1)) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(
                      static_cast<uint32_T>(c_is) + 1U), 1, i1, &ex_emlrtBCI,
                      (emlrtConstCTX)&sp);
                  }

                  i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2);
                  if ((static_cast<int32_T>(is + 1.0) < 1) ||
                      (static_cast<int32_T>(is + 1.0) > i1)) {
                    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0),
                      1, i1, &fx_emlrtBCI, (emlrtConstCTX)&sp);
                  }

                  mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj[(b_iv +
                    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) * c_is)
                    + mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) *
                    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1) * (
                    static_cast<int32_T>(is + 1.0) - 1)] =
                    mem_bvp->mem_ys.mem_uzs[b_iv + mem_bvp->mem_ys.mem_uzs.size
                    (0) * (static_cast<int32_T>(is - 1.0) - 1)] +
                    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj[(b_iv +
                    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) * c_is)
                    + mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) *
                    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1) * (
                    static_cast<int32_T>(is) - 1)];
                } else {
                  guard1 = true;
                }
              } else {
                guard1 = true;
              }
            }

            if (guard1 && (static_cast<uint32_T>(b_iv) != static_cast<uint32_T>
                           (c_is))) {
              i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0);
              if ((static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) > i1))
              {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                  (static_cast<uint32_T>(b_iv) + 1U), 1, i1, &hw_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1);
              if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) > i1))
              {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                  (static_cast<uint32_T>(c_is) + 1U), 1, i1, &iw_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2);
              if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                   i1)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                  &jw_emlrtBCI, (emlrtConstCTX)&sp);
              }

              i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0);
              if ((static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(b_iv) + 1U) > i1))
              {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                  (static_cast<uint32_T>(b_iv) + 1U), 1, i1, &kw_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1);
              if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) > i1))
              {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                  (static_cast<uint32_T>(c_is) + 1U), 1, i1, &lw_emlrtBCI,
                  (emlrtConstCTX)&sp);
              }

              i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2);
              if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>
                   (is + 1.0) > i1)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                  i1, &mw_emlrtBCI, (emlrtConstCTX)&sp);
              }

              mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj[(b_iv +
                mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) * c_is) +
                mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) *
                mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1) * (
                static_cast<int32_T>(is + 1.0) - 1)] =
                mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj[(b_iv +
                mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) * c_is) +
                mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) *
                mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1) * (
                static_cast<int32_T>(is) - 1)];
            }

            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
            }
          }

          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }

        //  =========================================================================== %
        //  ======== mem_dm0_dtcj, mem_dn0_dtcj, mem_dR0_dtcj and mem_dp0_dtcj ======== %
        i1 = mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(2);
        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
            &mp_emlrtBCI, (emlrtConstCTX)&sp);
        }

        i1 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(2);
        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
            &np_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
             ctcr_construc->vect_res.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
            ctcr_construc->vect_res.size(1), &op_emlrtBCI, (emlrtConstCTX)&sp);
        }

        ctcr_construc_tmp = ctcr_construc->vect_res[static_cast<int32_T>(is) - 1];
        r3.set_size(&ad_emlrtRTEI, &sp, 3,
                    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(1));
        loop_ub = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          r3[3 * i1] = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds[3 * i1 +
            3 * mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(1) * (
            static_cast<int32_T>(is) - 1)] * ctcr_construc_tmp;
          r3[3 * i1 + 1] = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds[(3 *
            i1 + 3 * mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(1) *
            (static_cast<int32_T>(is) - 1)) + 1] * ctcr_construc_tmp;
          r3[3 * i1 + 2] = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds[(3 *
            i1 + 3 * mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(1) *
            (static_cast<int32_T>(is) - 1)) + 2] * ctcr_construc_tmp;
        }

        i1 = mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1);
        if ((i1 != r3.size(1)) && ((i1 != 1) && (r3.size(1) != 1))) {
          emlrtDimSizeImpxCheckR2021b(i1, r3.size(1), &r_emlrtECI,
            (emlrtConstCTX)&sp);
        }

        i1 = mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(2);
        if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is +
              1.0) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, i1,
            &pp_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if (mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) == r3.size(1)) {
          r3.set_size(&bd_emlrtRTEI, &sp, 3,
                      mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1));
          loop_ub = mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            r3[3 * i1] = mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj[3 * i1 + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) *
              (static_cast<int32_T>(is) - 1)] + r3[3 * i1];
            r3[3 * i1 + 1] = mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj[(3 * i1
              + 3 * mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) * (
              static_cast<int32_T>(is) - 1)) + 1] + r3[3 * i1 + 1];
            r3[3 * i1 + 2] = mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj[(3 * i1
              + 3 * mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) * (
              static_cast<int32_T>(is) - 1)) + 2] + r3[3 * i1 + 2];
          }
        } else {
          st.site = &qd_emlrtRSI;
          d_binary_expand_op(st, r3, mem_deriv_propag_low, is);
        }

        c_iv[0] = 3;
        c_iv[1] = mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1);
        emlrtSubAssignSizeCheckR2012b(&c_iv[0], 2, r3.size(), 2, &s_emlrtECI,
          (emlrtCTX)&sp);
        loop_ub = r3.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj[3 * i1 + 3 *
            mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) *
            (static_cast<int32_T>(is + 1.0) - 1)] = r3[3 * i1];
          mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj[(3 * i1 + 3 *
            mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) *
            (static_cast<int32_T>(is + 1.0) - 1)) + 1] = r3[3 * i1 + 1];
          mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj[(3 * i1 + 3 *
            mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) *
            (static_cast<int32_T>(is + 1.0) - 1)) + 2] = r3[3 * i1 + 2];
        }

        i1 = mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(2);
        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
            &qp_emlrtBCI, (emlrtConstCTX)&sp);
        }

        i1 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.size(2);
        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
            &rp_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
             ctcr_construc->vect_res.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
            ctcr_construc->vect_res.size(1), &sp_emlrtBCI, (emlrtConstCTX)&sp);
        }

        r3.set_size(&cd_emlrtRTEI, &sp, 3,
                    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.size(1));
        loop_ub = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          r3[3 * i1] = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds[3 * i1 +
            3 * mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.size(1) * (
            static_cast<int32_T>(is) - 1)] * ctcr_construc_tmp;
          r3[3 * i1 + 1] = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds[(3 *
            i1 + 3 * mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.size(1) *
            (static_cast<int32_T>(is) - 1)) + 1] * ctcr_construc_tmp;
          r3[3 * i1 + 2] = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds[(3 *
            i1 + 3 * mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.size(1) *
            (static_cast<int32_T>(is) - 1)) + 2] * ctcr_construc_tmp;
        }

        i1 = mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1);
        if ((i1 != r3.size(1)) && ((i1 != 1) && (r3.size(1) != 1))) {
          emlrtDimSizeImpxCheckR2021b(i1, r3.size(1), &t_emlrtECI,
            (emlrtConstCTX)&sp);
        }

        i1 = mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(2);
        if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is +
              1.0) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, i1,
            &tp_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if (mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) == r3.size(1)) {
          r3.set_size(&dd_emlrtRTEI, &sp, 3,
                      mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1));
          loop_ub = mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            r3[3 * i1] = mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[3 * i1 + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) *
              (static_cast<int32_T>(is) - 1)] + r3[3 * i1];
            r3[3 * i1 + 1] = mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[(3 * i1
              + 3 * mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) * (
              static_cast<int32_T>(is) - 1)) + 1] + r3[3 * i1 + 1];
            r3[3 * i1 + 2] = mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[(3 * i1
              + 3 * mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) * (
              static_cast<int32_T>(is) - 1)) + 2] + r3[3 * i1 + 2];
          }
        } else {
          st.site = &pd_emlrtRSI;
          c_binary_expand_op(st, r3, mem_deriv_propag_low, is);
        }

        c_iv[0] = 3;
        c_iv[1] = mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1);
        emlrtSubAssignSizeCheckR2012b(&c_iv[0], 2, r3.size(), 2, &u_emlrtECI,
          (emlrtCTX)&sp);
        loop_ub = r3.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[3 * i1 + 3 *
            mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) *
            (static_cast<int32_T>(is + 1.0) - 1)] = r3[3 * i1];
          mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[(3 * i1 + 3 *
            mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) *
            (static_cast<int32_T>(is + 1.0) - 1)) + 1] = r3[3 * i1 + 1];
          mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[(3 * i1 + 3 *
            mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) *
            (static_cast<int32_T>(is + 1.0) - 1)) + 2] = r3[3 * i1 + 2];
        }

        i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(3);
        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
            &up_emlrtBCI, (emlrtConstCTX)&sp);
        }

        i1 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(3);
        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
            &vp_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
             ctcr_construc->vect_res.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
            ctcr_construc->vect_res.size(1), &wp_emlrtBCI, (emlrtConstCTX)&sp);
        }

        r4.set_size(&ed_emlrtRTEI, &sp, 3, 3,
                    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(2));
        loop_ub = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(2);
        for (i1 = 0; i1 < loop_ub; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            r4[3 * i2 + 9 * i1] =
              mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds[(3 * i2 + 9 * i1)
              + 9 * mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(2) * (
              static_cast<int32_T>(is) - 1)] * ctcr_construc_tmp;
            r4[(3 * i2 + 9 * i1) + 1] =
              mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds[((3 * i2 + 9 * i1)
              + 9 * mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(2) * (
              static_cast<int32_T>(is) - 1)) + 1] * ctcr_construc_tmp;
            r4[(3 * i2 + 9 * i1) + 2] =
              mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds[((3 * i2 + 9 * i1)
              + 9 * mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(2) * (
              static_cast<int32_T>(is) - 1)) + 2] * ctcr_construc_tmp;
          }
        }

        i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2);
        if ((i1 != r4.size(2)) && ((i1 != 1) && (r4.size(2) != 1))) {
          emlrtDimSizeImpxCheckR2021b(i1, r4.size(2), &v_emlrtECI,
            (emlrtConstCTX)&sp);
        }

        i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(3);
        if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is +
              1.0) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, i1,
            &xp_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if (mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) == r4.size(2)) {
          r4.set_size(&fd_emlrtRTEI, &sp, 3, 3,
                      mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2));
          loop_ub = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2);
          for (i1 = 0; i1 < loop_ub; i1++) {
            for (i2 = 0; i2 < 3; i2++) {
              r4[3 * i2 + 9 * i1] = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj
                [(3 * i2 + 9 * i1) + 9 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (
                static_cast<int32_T>(is) - 1)] + r4[3 * i2 + 9 * i1];
              r4[(3 * i2 + 9 * i1) + 1] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((3 * i2 + 9 * i1) +
                9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (
                static_cast<int32_T>(is) - 1)) + 1] + r4[(3 * i2 + 9 * i1) + 1];
              r4[(3 * i2 + 9 * i1) + 2] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((3 * i2 + 9 * i1) +
                9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (
                static_cast<int32_T>(is) - 1)) + 2] + r4[(3 * i2 + 9 * i1) + 2];
            }
          }
        } else {
          st.site = &od_emlrtRSI;
          binary_expand_op(st, r4, mem_deriv_propag_low, is);
        }

        iv1[0] = 3;
        iv1[1] = 3;
        iv1[2] = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2);
        emlrtSubAssignSizeCheckR2012b(&iv1[0], 3, r4.size(), 3, &w_emlrtECI,
          (emlrtCTX)&sp);
        loop_ub = r4.size(2);
        for (i1 = 0; i1 < loop_ub; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[(3 * i2 + 9 * i1) + 9 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) *
              (static_cast<int32_T>(is + 1.0) - 1)] = r4[3 * i2 + 9 * i1];
            mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((3 * i2 + 9 * i1) + 9 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (static_cast<
              int32_T>(is + 1.0) - 1)) + 1] = r4[(3 * i2 + 9 * i1) + 1];
            mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((3 * i2 + 9 * i1) + 9 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (static_cast<
              int32_T>(is + 1.0) - 1)) + 2] = r4[(3 * i2 + 9 * i1) + 2];
          }
        }

        i1 = mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(2);
        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
            &yp_emlrtBCI, (emlrtConstCTX)&sp);
        }

        i1 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(2);
        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
            &aq_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
             ctcr_construc->vect_res.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
            ctcr_construc->vect_res.size(1), &bq_emlrtBCI, (emlrtConstCTX)&sp);
        }

        r3.set_size(&gd_emlrtRTEI, &sp, 3,
                    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(1));
        loop_ub = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          r3[3 * i1] = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds[3 * i1 +
            3 * mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(1) * (
            static_cast<int32_T>(is) - 1)] * ctcr_construc_tmp;
          r3[3 * i1 + 1] = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds[(3 *
            i1 + 3 * mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(1) *
            (static_cast<int32_T>(is) - 1)) + 1] * ctcr_construc_tmp;
          r3[3 * i1 + 2] = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds[(3 *
            i1 + 3 * mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(1) *
            (static_cast<int32_T>(is) - 1)) + 2] * ctcr_construc_tmp;
        }

        i1 = mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(1);
        if ((i1 != r3.size(1)) && ((i1 != 1) && (r3.size(1) != 1))) {
          emlrtDimSizeImpxCheckR2021b(i1, r3.size(1), &x_emlrtECI,
            (emlrtConstCTX)&sp);
        }

        i1 = mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(2);
        if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is +
              1.0) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, i1,
            &cq_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if (mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(1) == r3.size(1)) {
          r3.set_size(&hd_emlrtRTEI, &sp, 3,
                      mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(1));
          loop_ub = mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            r3[3 * i1] = mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj[3 * i1 + 3 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(1) *
              (static_cast<int32_T>(is) - 1)] + r3[3 * i1];
            r3[3 * i1 + 1] = mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj[(3 * i1
              + 3 * mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(1) * (
              static_cast<int32_T>(is) - 1)) + 1] + r3[3 * i1 + 1];
            r3[3 * i1 + 2] = mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj[(3 * i1
              + 3 * mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(1) * (
              static_cast<int32_T>(is) - 1)) + 2] + r3[3 * i1 + 2];
          }
        } else {
          st.site = &nd_emlrtRSI;
          b_binary_expand_op(st, r3, mem_deriv_propag_low, is);
        }

        c_iv[0] = 3;
        c_iv[1] = mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(1);
        emlrtSubAssignSizeCheckR2012b(&c_iv[0], 2, r3.size(), 2, &y_emlrtECI,
          (emlrtCTX)&sp);
        loop_ub = r3.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj[3 * i1 + 3 *
            mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(1) *
            (static_cast<int32_T>(is + 1.0) - 1)] = r3[3 * i1];
          mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj[(3 * i1 + 3 *
            mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(1) *
            (static_cast<int32_T>(is + 1.0) - 1)) + 1] = r3[3 * i1 + 1];
          mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj[(3 * i1 + 3 *
            mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(1) *
            (static_cast<int32_T>(is + 1.0) - 1)) + 2] = r3[3 * i1 + 2];
        }

        emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
          static_cast<int32_T>(ctcr_carac->nbT), &r_emlrtRTEI, (emlrtConstCTX)&
          sp);
        for (c_is = 0; c_is < i; c_is++) {
          //  =========================================================================== %
          //  ======== mem_dm0_dbcj, mem_dn0_dbcj, mem_dR0_dbcj and mem_dp0_dbcj ======== %
          if (is + 1.0 == nbP) {
            i1 = mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1);
            if ((i < 1) || (i > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i1,
                &dq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &eq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 mem_bvp->mem_y.mem_m0.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                mem_bvp->mem_y.mem_m0.size(1), &fq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->vect_res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->vect_res.size(1), &gx_emlrtBCI, (emlrtConstCTX)&
                sp);
            }

            if (nbT != static_cast<int32_T>(muDoubleScalarFloor(nbT))) {
              emlrtIntegerCheckR2012b(nbT, &k_emlrtDCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is
                  + 1.0) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                i1, &gq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_ctcr_construc = mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[(3 * (i
              - 1) + 3 * mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) * (
              static_cast<int32_T>(is) - 1)) + 1] + mem_bvp->mem_y.mem_m0[3 * (
              static_cast<int32_T>(is) - 1) + 1] / ctcr_construc_tmp;
            mem_deriv_propag_low_idx_2 =
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[(3 * (i - 1) + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) * (static_cast<
              int32_T>(is) - 1)) + 2] + mem_bvp->mem_y.mem_m0[3 *
              (static_cast<int32_T>(is) - 1) + 2] / ctcr_construc_tmp;
            mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[3 * (i - 1) + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) *
              (static_cast<int32_T>(is + 1.0) - 1)] =
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[3 * (i - 1) + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) *
              (static_cast<int32_T>(is) - 1)] + mem_bvp->mem_y.mem_m0[3 * (
              static_cast<int32_T>(is) - 1)] / ctcr_construc_tmp;
            mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[(3 * (i - 1) + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) *
              (static_cast<int32_T>(is + 1.0) - 1)) + 1] = c_ctcr_construc;
            mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[(3 * (i - 1) + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) *
              (static_cast<int32_T>(is + 1.0) - 1)) + 2] =
              mem_deriv_propag_low_idx_2;
            i1 = mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1);
            if ((i < 1) || (i > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i1,
                &hq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &iq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 mem_bvp->mem_y.mem_n0.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                mem_bvp->mem_y.mem_n0.size(1), &jq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->vect_res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->vect_res.size(1), &hx_emlrtBCI, (emlrtConstCTX)&
                sp);
            }

            if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is
                  + 1.0) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                i1, &kq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_ctcr_construc = mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[(3 * (i
              - 1) + 3 * mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) * (
              static_cast<int32_T>(is) - 1)) + 1] + mem_bvp->mem_y.mem_n0[3 * (
              static_cast<int32_T>(is) - 1) + 1] / ctcr_construc_tmp;
            mem_deriv_propag_low_idx_2 =
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[(3 * (i - 1) + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) * (static_cast<
              int32_T>(is) - 1)) + 2] + mem_bvp->mem_y.mem_n0[3 *
              (static_cast<int32_T>(is) - 1) + 2] / ctcr_construc_tmp;
            mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[3 * (i - 1) + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) *
              (static_cast<int32_T>(is + 1.0) - 1)] =
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[3 * (i - 1) + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) *
              (static_cast<int32_T>(is) - 1)] + mem_bvp->mem_y.mem_n0[3 * (
              static_cast<int32_T>(is) - 1)] / ctcr_construc_tmp;
            mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[(3 * (i - 1) + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) *
              (static_cast<int32_T>(is + 1.0) - 1)) + 1] = c_ctcr_construc;
            mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[(3 * (i - 1) + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) *
              (static_cast<int32_T>(is + 1.0) - 1)) + 2] =
              mem_deriv_propag_low_idx_2;
            i1 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(2);
            if ((c_is + 1 < 1) || (c_is + 1 > i1)) {
              emlrtDynamicBoundsCheckR2012b(c_is + 1, 1, i1, &nq_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(3);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &oq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is - 1.0) < 1) || (static_cast<int32_T>(is
                  - 1.0) > ctcr_construc->vect_res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is - 1.0), 1,
                ctcr_construc->vect_res.size(1), &pq_emlrtBCI, (emlrtConstCTX)&
                sp);
            }

            i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2);
            if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(c_is) + 1U), 1, i1, &lq_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &mq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            b_ctcr_construc = ctcr_construc->vect_res[static_cast<int32_T>(is -
              1.0) - 1];
            i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2);
            if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(c_is) + 1U), 1, i1, &qq_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3);
            if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is
                  + 1.0) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                i1, &rq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            for (i1 = 0; i1 < 3; i1++) {
              b_mem_deriv_propag_low[3 * i1] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[(3 * i1 + 9 * c_is) +
                9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                static_cast<int32_T>(is) - 1)] +
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds[(3 * i1 + 9 *
                c_is) + 9 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(2) * (
                static_cast<int32_T>(is) - 1)] * b_ctcr_construc;
              b_mem_deriv_propag_low[3 * i1 + 1] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i1 + 9 * c_is)
                + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                static_cast<int32_T>(is) - 1)) + 1] +
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds[((3 * i1 + 9 *
                c_is) + 9 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(2) * (
                static_cast<int32_T>(is) - 1)) + 1] * b_ctcr_construc;
              b_mem_deriv_propag_low[3 * i1 + 2] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i1 + 9 * c_is)
                + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                static_cast<int32_T>(is) - 1)) + 2] +
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds[((3 * i1 + 9 *
                c_is) + 9 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(2) * (
                static_cast<int32_T>(is) - 1)) + 2] * b_ctcr_construc;
            }

            for (i1 = 0; i1 < 3; i1++) {
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[(3 * i1 + 9 * c_is) + 9
                * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                static_cast<int32_T>(is + 1.0) - 1)] = b_mem_deriv_propag_low[3 *
                i1];
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i1 + 9 * c_is) +
                9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                static_cast<int32_T>(is + 1.0) - 1)) + 1] =
                b_mem_deriv_propag_low[3 * i1 + 1];
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i1 + 9 * c_is) +
                9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                static_cast<int32_T>(is + 1.0) - 1)) + 2] =
                b_mem_deriv_propag_low[3 * i1 + 2];
            }

            i1 = mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &sq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &tq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is - 1.0) < 1) || (static_cast<int32_T>(is
                  - 1.0) > ctcr_construc->vect_res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is - 1.0), 1,
                ctcr_construc->vect_res.size(1), &uq_emlrtBCI, (emlrtConstCTX)&
                sp);
            }

            loop_ub = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1);
            r3.set_size(&id_emlrtRTEI, &sp, 3, loop_ub);
            for (i1 = 0; i1 < loop_ub; i1++) {
              r3[3 * i1] = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds[3 *
                i1 + 3 * mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1)
                * (static_cast<int32_T>(is) - 1)] * b_ctcr_construc;
              r3[3 * i1 + 1] = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds
                [(3 * i1 + 3 *
                  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1) * (
                   static_cast<int32_T>(is) - 1)) + 1] * b_ctcr_construc;
              r3[3 * i1 + 2] = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds
                [(3 * i1 + 3 *
                  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1) * (
                   static_cast<int32_T>(is) - 1)) + 2] * b_ctcr_construc;
            }

            loop_ub = mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1);
            if ((loop_ub != r3.size(1)) && ((loop_ub != 1) && (r3.size(1) != 1)))
            {
              emlrtDimSizeImpxCheckR2021b(loop_ub, r3.size(1), &ab_emlrtECI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(2);
            if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is
                  + 1.0) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                i1, &vq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (loop_ub == r3.size(1)) {
              r3.set_size(&jd_emlrtRTEI, &sp, 3, loop_ub);
              for (i1 = 0; i1 < loop_ub; i1++) {
                r3[3 * i1] = mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj[3 * i1 +
                  3 * mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1) * (
                  static_cast<int32_T>(is) - 1)] + r3[3 * i1];
                r3[3 * i1 + 1] = mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj[(3 *
                  i1 + 3 * mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1) *
                  (static_cast<int32_T>(is) - 1)) + 1] + r3[3 * i1 + 1];
                r3[3 * i1 + 2] = mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj[(3 *
                  i1 + 3 * mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1) *
                  (static_cast<int32_T>(is) - 1)) + 2] + r3[3 * i1 + 2];
              }
            } else {
              st.site = &md_emlrtRSI;
              binary_expand_op(st, r3, mem_deriv_propag_low, is);
            }

            c_iv[0] = 3;
            c_iv[1] = mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1);
            emlrtSubAssignSizeCheckR2012b(&c_iv[0], 2, r3.size(), 2,
              &bb_emlrtECI, (emlrtCTX)&sp);
            loop_ub = r3.size(1);
            for (i1 = 0; i1 < loop_ub; i1++) {
              mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj[3 * i1 + 3 *
                mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1) * (
                static_cast<int32_T>(is + 1.0) - 1)] = r3[3 * i1];
              mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj[(3 * i1 + 3 *
                mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1) * (
                static_cast<int32_T>(is + 1.0) - 1)) + 1] = r3[3 * i1 + 1];
              mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj[(3 * i1 + 3 *
                mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1) * (
                static_cast<int32_T>(is + 1.0) - 1)) + 2] = r3[3 * i1 + 2];
            }
          } else {
            i1 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(1);
            if ((c_is + 1 < 1) || (c_is + 1 > i1)) {
              emlrtDynamicBoundsCheckR2012b(c_is + 1, 1, i1, &yq_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &ar_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->vect_res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->vect_res.size(1), &br_emlrtBCI, (emlrtConstCTX)&
                sp);
            }

            i1 = mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1);
            if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(c_is) + 1U), 1, i1, &wq_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &xq_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is
                  + 1.0) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                i1, &cr_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_ctcr_construc = mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[(3 *
              c_is + 3 * mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) * (
              static_cast<int32_T>(is) - 1)) + 1] +
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds[(3 * c_is + 3 *
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)) + 1] * ctcr_construc_tmp;
            mem_deriv_propag_low_idx_2 =
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[(3 * c_is + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) * (static_cast<
              int32_T>(is) - 1)) + 2] +
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds[(3 * c_is + 3 *
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)) + 2] * ctcr_construc_tmp;
            mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[3 * c_is + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) *
              (static_cast<int32_T>(is + 1.0) - 1)] =
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[3 * c_is + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) *
              (static_cast<int32_T>(is) - 1)] +
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds[3 * c_is + 3 *
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] * ctcr_construc_tmp;
            mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[(3 * c_is + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) *
              (static_cast<int32_T>(is + 1.0) - 1)) + 1] = c_ctcr_construc;
            mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[(3 * c_is + 3 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) *
              (static_cast<int32_T>(is + 1.0) - 1)) + 2] =
              mem_deriv_propag_low_idx_2;
            i1 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.size(1);
            if ((c_is + 1 < 1) || (c_is + 1 > i1)) {
              emlrtDynamicBoundsCheckR2012b(c_is + 1, 1, i1, &fr_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &gr_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->vect_res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->vect_res.size(1), &hr_emlrtBCI, (emlrtConstCTX)&
                sp);
            }

            i1 = mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1);
            if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(c_is) + 1U), 1, i1, &dr_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &er_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is
                  + 1.0) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                i1, &ir_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_ctcr_construc = mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[(3 *
              c_is + 3 * mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) * (
              static_cast<int32_T>(is) - 1)) + 1] +
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds[(3 * c_is + 3 *
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)) + 1] * ctcr_construc_tmp;
            mem_deriv_propag_low_idx_2 =
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[(3 * c_is + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) * (static_cast<
              int32_T>(is) - 1)) + 2] +
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds[(3 * c_is + 3 *
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)) + 2] * ctcr_construc_tmp;
            mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[3 * c_is + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) *
              (static_cast<int32_T>(is + 1.0) - 1)] =
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[3 * c_is + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) *
              (static_cast<int32_T>(is) - 1)] +
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds[3 * c_is + 3 *
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] * ctcr_construc_tmp;
            mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[(3 * c_is + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) *
              (static_cast<int32_T>(is + 1.0) - 1)) + 1] = c_ctcr_construc;
            mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[(3 * c_is + 3 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) *
              (static_cast<int32_T>(is + 1.0) - 1)) + 2] =
              mem_deriv_propag_low_idx_2;
            i1 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(2);
            if ((c_is + 1 < 1) || (c_is + 1 > i1)) {
              emlrtDynamicBoundsCheckR2012b(c_is + 1, 1, i1, &lr_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(3);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &mr_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->vect_res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->vect_res.size(1), &nr_emlrtBCI, (emlrtConstCTX)&
                sp);
            }

            i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2);
            if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(c_is) + 1U), 1, i1, &jr_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &kr_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2);
            if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(c_is) + 1U), 1, i1, &or_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3);
            if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is
                  + 1.0) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                i1, &pr_emlrtBCI, (emlrtConstCTX)&sp);
            }

            for (i1 = 0; i1 < 3; i1++) {
              b_mem_deriv_propag_low[3 * i1] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[(3 * i1 + 9 * c_is) +
                9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                static_cast<int32_T>(is) - 1)] +
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds[(3 * i1 + 9 *
                c_is) + 9 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(2) * (
                static_cast<int32_T>(is) - 1)] * ctcr_construc_tmp;
              b_mem_deriv_propag_low[3 * i1 + 1] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i1 + 9 * c_is)
                + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                static_cast<int32_T>(is) - 1)) + 1] +
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds[((3 * i1 + 9 *
                c_is) + 9 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(2) * (
                static_cast<int32_T>(is) - 1)) + 1] * ctcr_construc_tmp;
              b_mem_deriv_propag_low[3 * i1 + 2] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i1 + 9 * c_is)
                + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                static_cast<int32_T>(is) - 1)) + 2] +
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds[((3 * i1 + 9 *
                c_is) + 9 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(2) * (
                static_cast<int32_T>(is) - 1)) + 2] * ctcr_construc_tmp;
            }

            for (i1 = 0; i1 < 3; i1++) {
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[(3 * i1 + 9 * c_is) + 9
                * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                static_cast<int32_T>(is + 1.0) - 1)] = b_mem_deriv_propag_low[3 *
                i1];
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i1 + 9 * c_is) +
                9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                static_cast<int32_T>(is + 1.0) - 1)) + 1] =
                b_mem_deriv_propag_low[3 * i1 + 1];
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i1 + 9 * c_is) +
                9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
                static_cast<int32_T>(is + 1.0) - 1)) + 2] =
                b_mem_deriv_propag_low[3 * i1 + 2];
            }

            i1 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1);
            if ((c_is + 1 < 1) || (c_is + 1 > i1)) {
              emlrtDynamicBoundsCheckR2012b(c_is + 1, 1, i1, &sr_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &tr_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->vect_res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->vect_res.size(1), &ur_emlrtBCI, (emlrtConstCTX)&
                sp);
            }

            i1 = mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1);
            if ((static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(c_is) + 1U) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(c_is) + 1U), 1, i1, &qr_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i1 = mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                &rr_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is
                  + 1.0) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                i1, &vr_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_ctcr_construc = mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj[(3 *
              c_is + 3 * mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1) * (
              static_cast<int32_T>(is) - 1)) + 1] +
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds[(3 * c_is + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)) + 1] * ctcr_construc_tmp;
            mem_deriv_propag_low_idx_2 =
              mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj[(3 * c_is + 3 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1) * (static_cast<
              int32_T>(is) - 1)) + 2] +
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds[(3 * c_is + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)) + 2] * ctcr_construc_tmp;
            mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj[3 * c_is + 3 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1) *
              (static_cast<int32_T>(is + 1.0) - 1)] =
              mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj[3 * c_is + 3 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1) *
              (static_cast<int32_T>(is) - 1)] +
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds[3 * c_is + 3 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1) * (
              static_cast<int32_T>(is) - 1)] * ctcr_construc_tmp;
            mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj[(3 * c_is + 3 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1) *
              (static_cast<int32_T>(is + 1.0) - 1)) + 1] = c_ctcr_construc;
            mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj[(3 * c_is + 3 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1) *
              (static_cast<int32_T>(is + 1.0) - 1)) + 2] =
              mem_deriv_propag_low_idx_2;
          }

          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
      }

      if (simulation_param->bool_Cs0) {
        d_is = simulation_param->pt_s0_LIT.size(1) - 1;
        c_is = 0;
        for (int32_T b_iv{0}; b_iv <= d_is; b_iv++) {
          if (simulation_param->pt_s0_LIT[b_iv] <= is) {
            c_is++;
          }
        }

        r1.set_size(&kd_emlrtRTEI, &sp, 1, c_is);
        c_is = 0;
        for (int32_T b_iv{0}; b_iv <= d_is; b_iv++) {
          if (simulation_param->pt_s0_LIT[b_iv] <= is) {
            r1[c_is] = b_iv;
            c_is++;
          }
        }

        loop_ub = r1.size(1);
        for (i = 0; i < loop_ub; i++) {
          if (r1[i] > d_is) {
            emlrtDynamicBoundsCheckR2012b(r1[i], 0, d_is, &vv_emlrtBCI,
              (emlrtConstCTX)&sp);
          }
        }

        i = r1.size(1);
        for (e_is = 0; e_is < i; e_is++) {
          real_T c_mem_deriv_propag_low[27];
          if (e_is + 1 > r1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(e_is + 1, 1, r1.size(1), &wr_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          b_ctcr_construc = simulation_param->pt_s0_LIT[r1[e_is]];

          //  =================================================================================== %
          //  ======== mem_dti0_dtaus0, mem_dti0_dfs0, mem_duzi_dtaus0 and mem_duzi_dfs0 ======== %
          i1 = next_vectT.size(0);
          for (int32_T b_iv{0}; b_iv < i1; b_iv++) {
            if (b_iv + 1 > next_vectT.size(0)) {
              emlrtDynamicBoundsCheckR2012b(b_iv + 1, 1, next_vectT.size(0),
                &xr_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(0);
            d_is = static_cast<int32_T>(next_vectT[b_iv]);
            if ((d_is < 1) || (d_is > i2)) {
              emlrtDynamicBoundsCheckR2012b(d_is, 1, i2, &cs_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &ds_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(3);
            if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
                (static_cast<int32_T>(b_ctcr_construc) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
                1, i2, &es_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->vect_res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->vect_res.size(1), &fs_emlrtBCI, (emlrtConstCTX)&
                sp);
            }

            i2 = mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0);
            if (d_is > i2) {
              emlrtDynamicBoundsCheckR2012b(d_is, 1, i2, &yr_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &as_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_is = mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(3);
            if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
                (static_cast<int32_T>(b_ctcr_construc) > c_is)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
                1, c_is, &bs_emlrtBCI, (emlrtConstCTX)&sp);
            }

            ctcr_construc_tmp = ctcr_construc->vect_res[static_cast<int32_T>(is)
              - 1];
            if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is
                  + 1.0) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                i2, &gs_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if (b_ctcr_construc != static_cast<int32_T>(muDoubleScalarFloor
                 (b_ctcr_construc))) {
              emlrtIntegerCheckR2012b(b_ctcr_construc, &l_emlrtDCI,
                (emlrtConstCTX)&sp);
            }

            c_ctcr_construc = mem_deriv_propag_low->mem_dti.mem_dti_dtaus0
              [(((d_is + mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0)) +
                 mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 3 * (
                  static_cast<int32_T>(is) - 1)) +
                mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 3 *
                mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(2) * (
                 static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds[(((d_is +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(0)) +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(0) * 3 *
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] *
              ctcr_construc_tmp;
            mem_deriv_propag_low_idx_2 =
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0[(((d_is +
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 2) +
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 3 *
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds[(((d_is +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(0) * 2) +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(0) * 3 *
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] *
              ctcr_construc_tmp;
            mem_deriv_propag_low->mem_dti.mem_dti_dtaus0[((d_is +
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 3 * (
              static_cast<int32_T>(is + 1.0) - 1)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 3 *
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] =
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0[((d_is +
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 3 *
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds[((d_is +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(0) * 3 *
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] *
              ctcr_construc_tmp;
            mem_deriv_propag_low->mem_dti.mem_dti_dtaus0[(((d_is +
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 3 * (
              static_cast<int32_T>(is + 1.0) - 1)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 3 *
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] = c_ctcr_construc;
            mem_deriv_propag_low->mem_dti.mem_dti_dtaus0[(((d_is +
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 2) +
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 3 * (
              static_cast<int32_T>(is + 1.0) - 1)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 3 *
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] =
              mem_deriv_propag_low_idx_2;
            i2 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(0);
            if (d_is > i2) {
              emlrtDynamicBoundsCheckR2012b(d_is, 1, i2, &ks_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &ls_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(3);
            if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
                (static_cast<int32_T>(b_ctcr_construc) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
                1, i2, &ms_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->vect_res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->vect_res.size(1), &ns_emlrtBCI, (emlrtConstCTX)&
                sp);
            }

            i2 = mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0);
            if (d_is > i2) {
              emlrtDynamicBoundsCheckR2012b(d_is, 1, i2, &hs_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &is_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_is = mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(3);
            if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
                (static_cast<int32_T>(b_ctcr_construc) > c_is)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
                1, c_is, &js_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is
                  + 1.0) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                i2, &os_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_ctcr_construc = mem_deriv_propag_low->mem_dti.mem_dti_dfs0[(((d_is
              + mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 *
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(2) *
              (static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds[(((d_is +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(0)) +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(0) * 3 *
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] *
              ctcr_construc_tmp;
            mem_deriv_propag_low_idx_2 =
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0[(((d_is +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 2) +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 *
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(2) *
              (static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds[(((d_is +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(0) * 2) +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(0) * 3 *
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] *
              ctcr_construc_tmp;
            mem_deriv_propag_low->mem_dti.mem_dti_dfs0[((d_is +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 * (
              static_cast<int32_T>(is + 1.0) - 1)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 *
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(2) *
              (static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] =
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0[((d_is +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 *
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(2) *
              (static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds[((d_is +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(0) * 3 *
              mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] *
              ctcr_construc_tmp;
            mem_deriv_propag_low->mem_dti.mem_dti_dfs0[(((d_is +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 * (
              static_cast<int32_T>(is + 1.0) - 1)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 *
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(2) *
              (static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] =
              c_ctcr_construc;
            mem_deriv_propag_low->mem_dti.mem_dti_dfs0[(((d_is +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 2) +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 * (
              static_cast<int32_T>(is + 1.0) - 1)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 *
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(2) *
              (static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] =
              mem_deriv_propag_low_idx_2;
            i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(0);
            if (d_is > i2) {
              emlrtDynamicBoundsCheckR2012b(d_is, 1, i2, &ss_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &ts_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(3);
            if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
                (static_cast<int32_T>(b_ctcr_construc) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
                1, i2, &us_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->vect_res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->vect_res.size(1), &vs_emlrtBCI, (emlrtConstCTX)&
                sp);
            }

            i2 = mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0);
            if (d_is > i2) {
              emlrtDynamicBoundsCheckR2012b(d_is, 1, i2, &ps_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &qs_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_is = mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(3);
            if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
                (static_cast<int32_T>(b_ctcr_construc) > c_is)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
                1, c_is, &rs_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is
                  + 1.0) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                i2, &ws_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_ctcr_construc = mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0
              [(((d_is + mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0))
                 + mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 *
                 (static_cast<int32_T>(is) - 1)) +
                mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 *
                mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2) * (
                 static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds[(((d_is +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(0)) +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(0) * 3 *
              (static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] *
              ctcr_construc_tmp;
            mem_deriv_propag_low_idx_2 =
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0[(((d_is +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 2) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds[(((d_is +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(0) * 2)
              + mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(0) * 3
              * (static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] *
              ctcr_construc_tmp;
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0[((d_is +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 * (
              static_cast<int32_T>(is + 1.0) - 1)) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] =
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0[((d_is +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds[((d_is +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(0) * 3 *
              (static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] *
              ctcr_construc_tmp;
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0[(((d_is +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0)) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 * (
              static_cast<int32_T>(is + 1.0) - 1)) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] = c_ctcr_construc;
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0[(((d_is +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 2) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 * (
              static_cast<int32_T>(is + 1.0) - 1)) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] =
              mem_deriv_propag_low_idx_2;
            i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(0);
            if (d_is > i2) {
              emlrtDynamicBoundsCheckR2012b(d_is, 1, i2, &bt_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &ct_emlrtBCI, (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(3);
            if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
                (static_cast<int32_T>(b_ctcr_construc) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
                1, i2, &dt_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
                 ctcr_construc->vect_res.size(1))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                ctcr_construc->vect_res.size(1), &et_emlrtBCI, (emlrtConstCTX)&
                sp);
            }

            i2 = mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0);
            if (d_is > i2) {
              emlrtDynamicBoundsCheckR2012b(d_is, 1, i2, &xs_emlrtBCI,
                (emlrtConstCTX)&sp);
            }

            i2 = mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2);
            if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2))
            {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                &ys_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_is = mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(3);
            if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
                (static_cast<int32_T>(b_ctcr_construc) > c_is)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
                1, c_is, &at_emlrtBCI, (emlrtConstCTX)&sp);
            }

            if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is
                  + 1.0) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                i2, &ft_emlrtBCI, (emlrtConstCTX)&sp);
            }

            c_ctcr_construc = mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0
              [(((d_is + mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0)) +
                 mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 * (
                  static_cast<int32_T>(is) - 1)) +
                mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 *
                mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2) * (
                 static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds[(((d_is +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(0)) +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] *
              ctcr_construc_tmp;
            mem_deriv_propag_low_idx_2 =
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0[(((d_is +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 2) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds[(((d_is +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(0) * 2) +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] *
              ctcr_construc_tmp;
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0[((d_is +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 * (
              static_cast<int32_T>(is + 1.0) - 1)) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] =
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0[((d_is +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds[((d_is +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(0) * 3 * (
              static_cast<int32_T>(is) - 1)) +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] *
              ctcr_construc_tmp;
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0[(((d_is +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0)) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 * (
              static_cast<int32_T>(is + 1.0) - 1)) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] = c_ctcr_construc;
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0[(((d_is +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 2) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 * (
              static_cast<int32_T>(is + 1.0) - 1)) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 *
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) - 1] =
              mem_deriv_propag_low_idx_2;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
            }
          }

          //  =================================================================================== %
          //  =========== mem_dm0_dtaus0, mem_dm0_dfs0, mem_dn0_dtaus0, mem_dn0_dfs0, =========== %
          //  ========== mem_dR0_dtaus0, mem_dR0_dfs0, mem_dp0_dtaus0 and mem_dp0_dfs0 ========== %
          i1 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &it_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(3);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i1, &jt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
               ctcr_construc->vect_res.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
              ctcr_construc->vect_res.size(1), &kt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &gt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(3);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i2, &ht_emlrtBCI, (emlrtConstCTX)&sp);
          }

          ctcr_construc_tmp = ctcr_construc->vect_res[static_cast<int32_T>(is) -
            1];
          if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is +
                1.0) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, i1,
              &lt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (b_ctcr_construc != static_cast<int32_T>(muDoubleScalarFloor
               (b_ctcr_construc))) {
            emlrtIntegerCheckR2012b(b_ctcr_construc, &m_emlrtDCI, (emlrtConstCTX)
              &sp);
          }

          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i2, &mt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            b_mem_deriv_propag_low[3 * i1] =
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0[(3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)] +
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds[(3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)] * ctcr_construc_tmp;
            b_mem_deriv_propag_low[3 * i1 + 1] =
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] +
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds[((3 * i1 + 9 *
              (static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] *
              ctcr_construc_tmp;
            b_mem_deriv_propag_low[3 * i1 + 2] =
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] +
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds[((3 * i1 + 9 *
              (static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] *
              ctcr_construc_tmp;
          }

          for (i1 = 0; i1 < 3; i1++) {
            mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0[(3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)] =
              b_mem_deriv_propag_low[3 * i1];
            mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0[((3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] =
              b_mem_deriv_propag_low[3 * i1 + 1];
            mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0[((3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] =
              b_mem_deriv_propag_low[3 * i1 + 2];
          }

          i1 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &pt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(3);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i1, &qt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
               ctcr_construc->vect_res.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
              ctcr_construc->vect_res.size(1), &rt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &nt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(3);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i2, &ot_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is +
                1.0) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, i1,
              &st_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i2, &tt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            b_mem_deriv_propag_low[3 * i1] =
              mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0[(3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2) *
              (static_cast<int32_T>(b_ctcr_construc) - 1)] +
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds[(3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)] * ctcr_construc_tmp;
            b_mem_deriv_propag_low[3 * i1 + 1] =
              mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2) *
              (static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] +
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] *
              ctcr_construc_tmp;
            b_mem_deriv_propag_low[3 * i1 + 2] =
              mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2) * (static_cast<
              int32_T>(b_ctcr_construc) - 1)) + 2] +
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] *
              ctcr_construc_tmp;
          }

          for (i1 = 0; i1 < 3; i1++) {
            mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0[(3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2) * (static_cast<
              int32_T>(b_ctcr_construc) - 1)] = b_mem_deriv_propag_low[3 * i1];
            mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0[((3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2) * (static_cast<
              int32_T>(b_ctcr_construc) - 1)) + 1] = b_mem_deriv_propag_low[3 *
              i1 + 1];
            mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0[((3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2) * (static_cast<
              int32_T>(b_ctcr_construc) - 1)) + 2] = b_mem_deriv_propag_low[3 *
              i1 + 2];
          }

          i1 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &wt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(3);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i1, &xt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
               ctcr_construc->vect_res.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
              ctcr_construc->vect_res.size(1), &yt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &ut_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(3);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i2, &vt_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is +
                1.0) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, i1,
              &au_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i2, &bu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            b_mem_deriv_propag_low[3 * i1] =
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0[(3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)] +
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds[(3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)] * ctcr_construc_tmp;
            b_mem_deriv_propag_low[3 * i1 + 1] =
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] +
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds[((3 * i1 + 9 *
              (static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] *
              ctcr_construc_tmp;
            b_mem_deriv_propag_low[3 * i1 + 2] =
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] +
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds[((3 * i1 + 9 *
              (static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] *
              ctcr_construc_tmp;
          }

          for (i1 = 0; i1 < 3; i1++) {
            mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0[(3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)] =
              b_mem_deriv_propag_low[3 * i1];
            mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0[((3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] =
              b_mem_deriv_propag_low[3 * i1 + 1];
            mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0[((3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] =
              b_mem_deriv_propag_low[3 * i1 + 2];
          }

          i1 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &eu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(3);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i1, &fu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
               ctcr_construc->vect_res.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
              ctcr_construc->vect_res.size(1), &gu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &cu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(3);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i2, &du_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is +
                1.0) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, i1,
              &hu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i2, &iu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            b_mem_deriv_propag_low[3 * i1] =
              mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0[(3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2) *
              (static_cast<int32_T>(b_ctcr_construc) - 1)] +
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds[(3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)] * ctcr_construc_tmp;
            b_mem_deriv_propag_low[3 * i1 + 1] =
              mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2) *
              (static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] +
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] *
              ctcr_construc_tmp;
            b_mem_deriv_propag_low[3 * i1 + 2] =
              mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2) * (static_cast<
              int32_T>(b_ctcr_construc) - 1)) + 2] +
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] *
              ctcr_construc_tmp;
          }

          for (i1 = 0; i1 < 3; i1++) {
            mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0[(3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2) * (static_cast<
              int32_T>(b_ctcr_construc) - 1)] = b_mem_deriv_propag_low[3 * i1];
            mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0[((3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2) * (static_cast<
              int32_T>(b_ctcr_construc) - 1)) + 1] = b_mem_deriv_propag_low[3 *
              i1 + 1];
            mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0[((3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2) * (static_cast<
              int32_T>(b_ctcr_construc) - 1)) + 2] = b_mem_deriv_propag_low[3 *
              i1 + 2];
          }

          i1 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(3);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &lu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(4);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i1, &mu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
               ctcr_construc->vect_res.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
              ctcr_construc->vect_res.size(1), &nu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &ju_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(4);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i1, &ku_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3);
          if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is +
                1.0) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, i1,
              &ou_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(4);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i1, &pu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            for (i2 = 0; i2 < 3; i2++) {
              c_is = 3 * i2 + 9 * i1;
              c_mem_deriv_propag_low[c_is] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[((3 * i2 + 9 * i1)
                + 27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)] +
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds[((3 * i2 + 9 *
                i1) + 27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)] * ctcr_construc_tmp;
              c_mem_deriv_propag_low[c_is + 1] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((3 * i2 + 9 * i1)
                + 27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] +
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds[(((3 * i2 + 9
                * i1) + 27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] *
                ctcr_construc_tmp;
              c_mem_deriv_propag_low[c_is + 2] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((3 * i2 + 9 * i1)
                + 27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] +
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds[(((3 * i2 + 9
                * i1) + 27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] *
                ctcr_construc_tmp;
            }
          }

          for (i1 = 0; i1 < 3; i1++) {
            for (i2 = 0; i2 < 3; i2++) {
              d_is = 3 * i2 + 9 * i1;
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[((3 * i2 + 9 * i1) +
                27 * (static_cast<int32_T>(is + 1.0) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)] =
                c_mem_deriv_propag_low[d_is];
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((3 * i2 + 9 * i1) +
                27 * (static_cast<int32_T>(is + 1.0) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] =
                c_mem_deriv_propag_low[d_is + 1];
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((3 * i2 + 9 * i1) +
                27 * (static_cast<int32_T>(is + 1.0) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] =
                c_mem_deriv_propag_low[d_is + 2];
            }
          }

          i1 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(3);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &su_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(4);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i1, &tu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
               ctcr_construc->vect_res.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
              ctcr_construc->vect_res.size(1), &uu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &qu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(4);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i1, &ru_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3);
          if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is +
                1.0) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, i1,
              &vu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(4);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i1, &wu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            for (i2 = 0; i2 < 3; i2++) {
              c_is = 3 * i2 + 9 * i1;
              c_mem_deriv_propag_low[c_is] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[((3 * i2 + 9 * i1) +
                27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)] +
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds[((3 * i2 + 9 *
                i1) + 27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)] * ctcr_construc_tmp;
              c_mem_deriv_propag_low[c_is + 1] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((3 * i2 + 9 * i1) +
                27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] +
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds[(((3 * i2 + 9 *
                i1) + 27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] *
                ctcr_construc_tmp;
              c_mem_deriv_propag_low[c_is + 2] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((3 * i2 + 9 * i1) +
                27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] +
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds[(((3 * i2 + 9 *
                i1) + 27 * (static_cast<int32_T>(is) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] *
                ctcr_construc_tmp;
            }
          }

          for (i1 = 0; i1 < 3; i1++) {
            for (i2 = 0; i2 < 3; i2++) {
              d_is = 3 * i2 + 9 * i1;
              mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[((3 * i2 + 9 * i1) + 27
                * (static_cast<int32_T>(is + 1.0) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)] =
                c_mem_deriv_propag_low[d_is];
              mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((3 * i2 + 9 * i1) +
                27 * (static_cast<int32_T>(is + 1.0) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] =
                c_mem_deriv_propag_low[d_is + 1];
              mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((3 * i2 + 9 * i1) +
                27 * (static_cast<int32_T>(is + 1.0) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] =
                c_mem_deriv_propag_low[d_is + 2];
            }
          }

          i1 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &av_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(3);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i1, &bv_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
               ctcr_construc->vect_res.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
              ctcr_construc->vect_res.size(1), &cv_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &xu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(3);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i2, &yu_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is +
                1.0) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, i1,
              &dv_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i2, &ev_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            b_mem_deriv_propag_low[3 * i1] =
              mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0[(3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)] +
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds[(3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)] * ctcr_construc_tmp;
            b_mem_deriv_propag_low[3 * i1 + 1] =
              mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] +
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds[((3 * i1 + 9 *
              (static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] *
              ctcr_construc_tmp;
            b_mem_deriv_propag_low[3 * i1 + 2] =
              mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] +
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds[((3 * i1 + 9 *
              (static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] *
              ctcr_construc_tmp;
          }

          for (i1 = 0; i1 < 3; i1++) {
            mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0[(3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)] =
              b_mem_deriv_propag_low[3 * i1];
            mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0[((3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] =
              b_mem_deriv_propag_low[3 * i1 + 1];
            mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0[((3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] =
              b_mem_deriv_propag_low[3 * i1 + 2];
          }

          i1 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &hv_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(3);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i1, &iv_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) >
               ctcr_construc->vect_res.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
              ctcr_construc->vect_res.size(1), &jv_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(2);
          if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
              &fv_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(3);
          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i2, &gv_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is + 1.0) < 1) || (static_cast<int32_T>(is +
                1.0) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, i1,
              &kv_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(b_ctcr_construc) < 1) ||
              (static_cast<int32_T>(b_ctcr_construc) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_ctcr_construc),
              1, i2, &lv_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            b_mem_deriv_propag_low[3 * i1] =
              mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0[(3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(2) *
              (static_cast<int32_T>(b_ctcr_construc) - 1)] +
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds[(3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)] * ctcr_construc_tmp;
            b_mem_deriv_propag_low[3 * i1 + 1] =
              mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(2) *
              (static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] +
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 1] *
              ctcr_construc_tmp;
            b_mem_deriv_propag_low[3 * i1 + 2] =
              mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(2) * (static_cast<
              int32_T>(b_ctcr_construc) - 1)) + 2] +
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds[((3 * i1 + 9 * (
              static_cast<int32_T>(is) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(2) * (
              static_cast<int32_T>(b_ctcr_construc) - 1)) + 2] *
              ctcr_construc_tmp;
          }

          for (i1 = 0; i1 < 3; i1++) {
            mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0[(3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(2) * (static_cast<
              int32_T>(b_ctcr_construc) - 1)] = b_mem_deriv_propag_low[3 * i1];
            mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0[((3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(2) * (static_cast<
              int32_T>(b_ctcr_construc) - 1)) + 1] = b_mem_deriv_propag_low[3 *
              i1 + 1];
            mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0[((3 * i1 + 9 * (
              static_cast<int32_T>(is + 1.0) - 1)) + 9 *
              mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(2) * (static_cast<
              int32_T>(b_ctcr_construc) - 1)) + 2] = b_mem_deriv_propag_low[3 *
              i1 + 2];
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

// End of code generation (Deriv_Propag_MaJ_Mem.cpp)
