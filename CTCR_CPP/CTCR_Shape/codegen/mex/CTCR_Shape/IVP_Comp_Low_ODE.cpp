//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// IVP_Comp_Low_ODE.cpp
//
// Code generation for function 'IVP_Comp_Low_ODE'
//

// Include files
#include "IVP_Comp_Low_ODE.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCR_Shape_data.h"
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
#include "find.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo pb_emlrtRSI{
    47,                 // lineNo
    "IVP_Comp_Low_ODE", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m" // pathName
};

static emlrtBCInfo fj_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    38,                    // lineNo
    45,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "IVP_Comp_Low_ODE",    // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo gj_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    39,                 // lineNo
    40,                 // colNo
    "mem_bvp.mem_u0",   // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtECInfo f_emlrtECI{
    -1,                 // nDims
    47,                 // lineNo
    18,                 // colNo
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m" // pName
};

static emlrtRTEInfo y_emlrtRTEI{
    49,                 // lineNo
    13,                 // colNo
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m" // pName
};

static emlrtBCInfo hj_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    56,                                           // lineNo
    128,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ij_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    56,                                           // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo jj_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    56,                     // lineNo
    158,                    // colNo
    "mem_bvp.mem_y.mem_m0", // aName
    "IVP_Comp_Low_ODE",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo kj_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    57,                 // lineNo
    102,                // colNo
    "mem_bvp.mem_u0",   // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo lj_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    57,                                           // lineNo
    152,                                          // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo mj_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    57,                                           // lineNo
    154,                                          // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo nj_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    58,                                           // lineNo
    139,                                          // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo oj_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    58,                                           // lineNo
    141,                                          // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo pj_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    59,                                           // lineNo
    128,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo qj_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    59,                                           // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo rj_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    59,                            // lineNo
    165,                           // colNo
    "ctcr_construc.vect_tau_dist", // aName
    "IVP_Comp_Low_ODE",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo sj_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    56,                                                 // lineNo
    60,                                                 // colNo
    "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_duzj0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo tj_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    56,                                                 // lineNo
    62,                                                 // colNo
    "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_duzj0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo uj_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    66,                                           // lineNo
    128,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo vj_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    66,                                           // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo wj_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    66,                     // lineNo
    158,                    // colNo
    "mem_bvp.mem_y.mem_n0", // aName
    "IVP_Comp_Low_ODE",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo xj_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    67,                 // lineNo
    102,                // colNo
    "mem_bvp.mem_u0",   // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo yj_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    67,                                           // lineNo
    152,                                          // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ak_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    67,                                           // lineNo
    154,                                          // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo bk_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    68,                                           // lineNo
    128,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ck_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    68,                                           // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo dk_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    68,                          // lineNo
    163,                         // colNo
    "ctcr_construc.vect_f_dist", // aName
    "IVP_Comp_Low_ODE",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ek_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    66,                                                 // lineNo
    60,                                                 // colNo
    "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_duzj0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo fk_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    66,                                                 // lineNo
    62,                                                 // colNo
    "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_duzj0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo gk_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    77,                 // lineNo
    23,                 // colNo
    "vectT",            // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo hk_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    79,                                           // lineNo
    141,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ik_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    79,                                           // lineNo
    143,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo jk_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    79,                 // lineNo
    160,                // colNo
    "theta",            // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo kk_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    79,                 // lineNo
    175,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo lk_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    79,                 // lineNo
    178,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo mk_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    79,                 // lineNo
    192,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo nk_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    79,                 // lineNo
    195,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ok_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    79,                 // lineNo
    231,                // colNo
    "theta",            // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo pk_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    79,                 // lineNo
    300,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo qk_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    79,                 // lineNo
    314,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo rk_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    79,                 // lineNo
    317,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo sk_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    88,                                             // lineNo
    126,                                            // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0", // aName
    "IVP_Comp_Low_ODE",                             // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo tk_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    88,                                             // lineNo
    128,                                            // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0", // aName
    "IVP_Comp_Low_ODE",                             // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo uk_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    88,                                                 // lineNo
    60,                                                 // colNo
    "mem_deriv_propag_low.mem_dti_ds.mem_dti_duzj0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo vk_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    88,                                                 // lineNo
    62,                                                 // colNo
    "mem_deriv_propag_low.mem_dti_ds.mem_dti_duzj0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtECInfo g_emlrtECI{
    -1,                 // nDims
    88,                 // lineNo
    9,                  // colNo
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m" // pName
};

static emlrtBCInfo wk_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    95,                                           // lineNo
    122,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo xk_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    95,                                           // lineNo
    124,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo yk_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    96,                 // lineNo
    103,                // colNo
    "mem_bvp.mem_T",    // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo al_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    96,                                           // lineNo
    156,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo bl_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    96,                                           // lineNo
    158,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo cl_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    95,                                                 // lineNo
    62,                                                 // colNo
    "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_duzj0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo dl_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    95,                                                 // lineNo
    64,                                                 // colNo
    "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_duzj0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtRTEInfo ab_emlrtRTEI{
    106,                // lineNo
    17,                 // colNo
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m" // pName
};

static emlrtBCInfo el_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    112,                                          // lineNo
    123,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo fl_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    112,                                          // lineNo
    125,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo gl_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    120,                // lineNo
    27,                 // colNo
    "vectT",            // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo hl_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    126,                                          // lineNo
    147,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dm0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo il_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    126,                // lineNo
    164,                // colNo
    "theta",            // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo jl_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    126,                // lineNo
    179,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo kl_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    126,                // lineNo
    182,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ll_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    126,                // lineNo
    196,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ml_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    126,                // lineNo
    199,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo nl_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    127,                // lineNo
    110,                // colNo
    "theta",            // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ol_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    127,                // lineNo
    179,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo pl_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    127,                // lineNo
    193,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ql_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    127,                // lineNo
    196,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo rl_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    134,                                          // lineNo
    147,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dn0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo sl_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    134,                // lineNo
    164,                // colNo
    "theta",            // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo tl_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    134,                // lineNo
    182,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ul_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    134,                // lineNo
    196,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo vl_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    134,                // lineNo
    199,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo wl_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    135,                // lineNo
    110,                // colNo
    "theta",            // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo xl_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    135,                // lineNo
    179,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo yl_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    135,                // lineNo
    193,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo am_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    135,                // lineNo
    196,                // colNo
    "ui_init",          // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo bm_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    144,                                            // lineNo
    128,                                            // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0", // aName
    "IVP_Comp_Low_ODE",                             // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo cm_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    144,                                                // lineNo
    66,                                                 // colNo
    "mem_deriv_propag_low.mem_dti_ds.mem_dti_dm0j0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtECInfo h_emlrtECI{
    -1,                 // nDims
    144,                // lineNo
    13,                 // colNo
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m" // pName
};

static emlrtBCInfo dm_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    151,                                            // lineNo
    128,                                            // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0", // aName
    "IVP_Comp_Low_ODE",                             // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo em_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    151,                                                // lineNo
    66,                                                 // colNo
    "mem_deriv_propag_low.mem_dti_ds.mem_dti_dn0j0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtECInfo i_emlrtECI{
    -1,                 // nDims
    151,                // lineNo
    13,                 // colNo
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m" // pName
};

static emlrtBCInfo fm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    158,                                          // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dm0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo gm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    158,                    // lineNo
    158,                    // colNo
    "mem_bvp.mem_y.mem_m0", // aName
    "IVP_Comp_Low_ODE",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo hm_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    159,                // lineNo
    102,                // colNo
    "mem_bvp.mem_u0",   // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo im_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    159,                                          // lineNo
    154,                                          // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo jm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    160,                                          // lineNo
    141,                                          // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo km_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    161,                                          // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo lm_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    161,                           // lineNo
    165,                           // colNo
    "ctcr_construc.vect_tau_dist", // aName
    "IVP_Comp_Low_ODE",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo mm_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    158,                                                // lineNo
    66,                                                 // colNo
    "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dm0j0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo nm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    166,                                          // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dn0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo om_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    166,                    // lineNo
    158,                    // colNo
    "mem_bvp.mem_y.mem_m0", // aName
    "IVP_Comp_Low_ODE",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo pm_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    167,                // lineNo
    102,                // colNo
    "mem_bvp.mem_u0",   // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo qm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    167,                                          // lineNo
    154,                                          // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo rm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    168,                                          // lineNo
    141,                                          // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo sm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    169,                                          // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo tm_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    169,                           // lineNo
    165,                           // colNo
    "ctcr_construc.vect_tau_dist", // aName
    "IVP_Comp_Low_ODE",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo um_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    166,                                                // lineNo
    66,                                                 // colNo
    "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dn0j0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo vm_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    175,                                          // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dm0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo wm_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    175,                    // lineNo
    158,                    // colNo
    "mem_bvp.mem_y.mem_n0", // aName
    "IVP_Comp_Low_ODE",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo xm_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    176,                // lineNo
    102,                // colNo
    "mem_bvp.mem_u0",   // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ym_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    176,                                          // lineNo
    154,                                          // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo an_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    177,                                          // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo bn_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    177,                         // lineNo
    163,                         // colNo
    "ctcr_construc.vect_f_dist", // aName
    "IVP_Comp_Low_ODE",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo cn_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    175,                                                // lineNo
    66,                                                 // colNo
    "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dm0j0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo dn_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    183,                                          // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dn0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo en_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    183,                    // lineNo
    158,                    // colNo
    "mem_bvp.mem_y.mem_n0", // aName
    "IVP_Comp_Low_ODE",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo fn_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    184,                // lineNo
    102,                // colNo
    "mem_bvp.mem_u0",   // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo gn_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    184,                                          // lineNo
    154,                                          // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo hn_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    185,                                          // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo in_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    185,                         // lineNo
    163,                         // colNo
    "ctcr_construc.vect_f_dist", // aName
    "IVP_Comp_Low_ODE",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo jn_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    183,                                                // lineNo
    66,                                                 // colNo
    "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dn0j0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo kn_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    192,                                          // lineNo
    124,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ln_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    193,                // lineNo
    103,                // colNo
    "mem_bvp.mem_T",    // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo mn_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    193,                                          // lineNo
    158,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dm0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo nn_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    192,                                                // lineNo
    68,                                                 // colNo
    "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dm0j0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo on_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    200,                                          // lineNo
    124,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo pn_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    201,                // lineNo
    103,                // colNo
    "mem_bvp.mem_T",    // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo qn_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    201,                                          // lineNo
    158,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dn0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo rn_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    200,                                                // lineNo
    68,                                                 // colNo
    "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dn0j0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo sn_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    208,                                          // lineNo
    125,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo tn_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    215,                                          // lineNo
    125,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo un_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    112,                                                // lineNo
    64,                                                 // colNo
    "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_duzj0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo vn_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    112,                                                // lineNo
    66,                                                 // colNo
    "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_duzj0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo wn_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    215,                                                // lineNo
    66,                                                 // colNo
    "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dn0j0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo xn_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    208,                                                // lineNo
    66,                                                 // colNo
    "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dm0j0_ds", // aName
    "IVP_Comp_Low_ODE",                                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo yn_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    127,                                          // lineNo
    157,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dm0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ao_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    127,                                          // lineNo
    161,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dm0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo bo_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    126,                // lineNo
    86,                 // colNo
    "K",                // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo co_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    126,                // lineNo
    95,                 // colNo
    "K",                // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo do_emlrtBCI{
    -1,                                                   // iFirst
    -1,                                                   // iLast
    126,                                                  // lineNo
    68,                                                   // colNo
    "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dm0j0_ds", // aName
    "IVP_Comp_Low_ODE",                                   // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo eo_emlrtBCI{
    -1,                                                   // iFirst
    -1,                                                   // iLast
    126,                                                  // lineNo
    72,                                                   // colNo
    "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dm0j0_ds", // aName
    "IVP_Comp_Low_ODE",                                   // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo fo_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    135,                                          // lineNo
    157,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dn0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo go_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    135,                                          // lineNo
    161,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dn0j0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ho_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    134,                // lineNo
    95,                 // colNo
    "K",                // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo io_emlrtBCI{
    -1,                                                   // iFirst
    -1,                                                   // iLast
    134,                                                  // lineNo
    68,                                                   // colNo
    "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dn0j0_ds", // aName
    "IVP_Comp_Low_ODE",                                   // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo jo_emlrtBCI{
    -1,                                                   // iFirst
    -1,                                                   // iLast
    134,                                                  // lineNo
    72,                                                   // colNo
    "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dn0j0_ds", // aName
    "IVP_Comp_Low_ODE",                                   // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ko_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    79,                                           // lineNo
    278,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo lo_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    79,                                           // lineNo
    280,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo mo_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    79,                                           // lineNo
    282,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_duzj0", // aName
    "IVP_Comp_Low_ODE",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo no_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    79,                 // lineNo
    82,                 // colNo
    "K",                // aName
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo oo_emlrtBCI{
    -1,                                                   // iFirst
    -1,                                                   // iLast
    79,                                                   // lineNo
    64,                                                   // colNo
    "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_duzj0_ds", // aName
    "IVP_Comp_Low_ODE",                                   // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo po_emlrtBCI{
    -1,                                                   // iFirst
    -1,                                                   // iLast
    79,                                                   // lineNo
    66,                                                   // colNo
    "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_duzj0_ds", // aName
    "IVP_Comp_Low_ODE",                                   // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtBCInfo qo_emlrtBCI{
    -1,                                                   // iFirst
    -1,                                                   // iLast
    79,                                                   // lineNo
    68,                                                   // colNo
    "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_duzj0_ds", // aName
    "IVP_Comp_Low_ODE",                                   // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m", // pName
    0                            // checkKind
};

static emlrtRTEInfo ed_emlrtRTEI{
    47,                 // lineNo
    18,                 // colNo
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m" // pName
};

static emlrtRTEInfo fd_emlrtRTEI{
    47,                 // lineNo
    41,                 // colNo
    "IVP_Comp_Low_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Comp_Low_ODE.m" // pName
};

// Function Definitions
void IVP_Comp_Low_ODE(const emlrtStack &sp, real_T is, const MemBVP *mem_bvp,
                      const CTCRCarac *ctcr_carac,
                      const CTCRConstruc *ctcr_construc,
                      MemDerivPropagLow *mem_deriv_propag_low)
{
  static const int8_T c_iv[3]{0, 0, 1};
  coder::array<int32_T, 1U> ii;
  coder::array<boolean_T, 1U> r;
  coder::array<boolean_T, 1U> r1;
  emlrtStack b_st;
  emlrtStack st;
  real_T R_tmp[9];
  real_T b_mem_bvp[9];
  real_T dv[9];
  real_T f_mem_deriv_propag_low[9];
  real_T b_mem_deriv_propag_low[3];
  real_T c_mem_deriv_propag_low[3];
  real_T R_tmp_tmp;
  real_T b_R_tmp_tmp;
  real_T b_b;
  real_T b_mem_deriv_propag_low_tmp;
  real_T d;
  real_T d1;
  real_T d2;
  real_T g_mem_deriv_propag_low;
  real_T mem_deriv_propag_low_tmp;
  int32_T d_mem_deriv_propag_low[2];
  int32_T e_mem_deriv_propag_low[2];
  int32_T b_iv;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  boolean_T b;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  //  ======================================================================= %
  //
  //  This function computes the derivative (w.r.t the current is) of the
  //  Low-Level partial derivatives involved in the optimization Jacobian
  //  computation only. Here, there is no derivation w.r.t. the external loads
  //  and/or the actuation.
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  is                    : (int ∊ [1 , nbP]) Index of the current curvilinear
  //  abscissa mem_bvp               : (class)           Memory of the BVP
  //  variables ctcr_carac            : (class)           Robot features
  //  ctcr_construc         : (class)           Robot features related to the
  //  model settings mem_deriv_propag_low  : (class)           Memory of the
  //  Low-Level derivatives
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  mem_deriv_propag_low  : (class)           Memory of the Low-Level
  //  derivatives
  //
  //  ======================================================================= %
  //  ========================================================== %
  //  ================== Getting input values ================== %
  if ((static_cast<int32_T>(is) < 1) ||
      (static_cast<int32_T>(is) > mem_bvp->mem_y.mem_t.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                  mem_bvp->mem_y.mem_t.size(1), &fj_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(is) < 1) ||
      (static_cast<int32_T>(is) > mem_bvp->mem_u0.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                  mem_bvp->mem_u0.size(1), &gj_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  //  ========================================================== %
  //  Vector of the tubes involved on the current discretization point
  r.set_size(&ed_emlrtRTEI, &sp, ctcr_construc->vect_ind_iT.size(0));
  loop_ub = ctcr_construc->vect_ind_iT.size(0);
  r1.set_size(&fd_emlrtRTEI, &sp, ctcr_construc->vect_ind_iT.size(0));
  for (i = 0; i < loop_ub; i++) {
    r[i] = (ctcr_construc->vect_ind_iT[i] <= is);
    r1[i] =
        (is <= ctcr_construc
                   ->vect_ind_iT[i + ctcr_construc->vect_ind_iT.size(0) * 2]);
  }
  if (r.size(0) != r1.size(0)) {
    emlrtSizeEqCheck1DR2012b(r.size(0), r1.size(0), &f_emlrtECI,
                             (emlrtConstCTX)&sp);
  }
  st.site = &pb_emlrtRSI;
  loop_ub = r.size(0);
  for (i = 0; i < loop_ub; i++) {
    r[i] = (r[i] && r1[i]);
  }
  b_st.site = &jb_emlrtRSI;
  coder::eml_find(b_st, r, ii);
  i = static_cast<int32_T>(ctcr_carac->nbT);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
                                static_cast<int32_T>(ctcr_carac->nbT),
                                &y_emlrtRTEI, (emlrtConstCTX)&sp);
  if (i - 1 >= 0) {
    i1 = ii.size(0);
  }
  for (int32_T j{0}; j < i; j++) {
    int32_T c_R_tmp_tmp;
    //  ======================== %
    //  ===== ddm0(s)ds_duz ==== %
    //  (eq 31c)
    i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2);
    if ((j + 1 < 1) || (j + 1 > i2)) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &pj_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(3);
    if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                    &qj_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1);
    if ((j + 1 < 1) || (j + 1 > i2)) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &hj_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(2);
    if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                    &ij_emlrtBCI, (emlrtConstCTX)&sp);
    }
    //  =======================================================================
    //  %
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
    //  =======================================================================
    //  %
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > mem_bvp->mem_y.mem_m0.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    mem_bvp->mem_y.mem_m0.size(1), &jj_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > mem_bvp->mem_u0.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    mem_bvp->mem_u0.size(1), &kj_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    //  =======================================================================
    //  %
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
    //  =======================================================================
    //  %
    i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1);
    if ((j + 1 < 1) || (j + 1 > i2)) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &lj_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(2);
    if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                    &mj_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1);
    if ((j + 1 < 1) || (j + 1 > i2)) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &nj_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(2);
    if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                    &oj_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > ctcr_construc->vect_tau_dist.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    ctcr_construc->vect_tau_dist.size(1),
                                    &rj_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp[0] = 0.0;
    R_tmp[3] =
        -mem_deriv_propag_low->mem_du0.mem_du0_duzj0
             [(3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                           (static_cast<int32_T>(is) - 1)) +
              2];
    R_tmp[6] =
        mem_deriv_propag_low->mem_du0.mem_du0_duzj0
            [(3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                          (static_cast<int32_T>(is) - 1)) +
             1];
    R_tmp[1] =
        mem_deriv_propag_low->mem_du0.mem_du0_duzj0
            [(3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                          (static_cast<int32_T>(is) - 1)) +
             2];
    R_tmp[4] = 0.0;
    R_tmp[7] =
        -mem_deriv_propag_low->mem_du0.mem_du0_duzj0
             [3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                          (static_cast<int32_T>(is) - 1)];
    R_tmp[2] =
        -mem_deriv_propag_low->mem_du0.mem_du0_duzj0
             [(3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                           (static_cast<int32_T>(is) - 1)) +
              1];
    R_tmp[5] =
        mem_deriv_propag_low->mem_du0.mem_du0_duzj0
            [3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                         (static_cast<int32_T>(is) - 1)];
    R_tmp[8] = 0.0;
    dv[0] = 0.0;
    d = mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1) + 2];
    dv[3] = -d;
    d1 = mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1) + 1];
    dv[6] = d1;
    dv[1] = d;
    dv[4] = 0.0;
    d2 = mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1)];
    dv[7] = -d2;
    dv[2] = -d1;
    dv[5] = d2;
    dv[8] = 0.0;
    for (i2 = 0; i2 < 3; i2++) {
      b_mem_deriv_propag_low[i2] =
          (((R_tmp[i2] *
                 mem_bvp->mem_y.mem_m0[3 * (static_cast<int32_T>(is) - 1)] +
             R_tmp[i2 + 3] *
                 mem_bvp->mem_y
                     .mem_m0[3 * (static_cast<int32_T>(is) - 1) + 1]) +
            R_tmp[i2 + 6] *
                mem_bvp->mem_y.mem_m0[3 * (static_cast<int32_T>(is) - 1) + 2]) +
           ((dv[i2] *
                 mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0
                     [3 * j +
                      3 * mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) *
                          (static_cast<int32_T>(is) - 1)] +
             dv[i2 + 3] *
                 mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0
                     [(3 * j +
                       3 * mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) *
                           (static_cast<int32_T>(is) - 1)) +
                      1]) +
            dv[i2 + 6] *
                mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0
                    [(3 * j +
                      3 * mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) *
                          (static_cast<int32_T>(is) - 1)) +
                     2])) -
          ((static_cast<real_T>(iv[i2]) *
                mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0
                    [3 * j +
                     3 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) *
                         (static_cast<int32_T>(is) - 1)] +
            static_cast<real_T>(iv[i2 + 3]) *
                mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0
                    [(3 * j +
                      3 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) *
                          (static_cast<int32_T>(is) - 1)) +
                     1]) +
           0.0 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0
                     [(3 * j +
                       3 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) *
                           (static_cast<int32_T>(is) - 1)) +
                      2]);
      c_mem_deriv_propag_low[i2] =
          (mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                   [(3 * i2 + 9 * j) +
                    9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                        (static_cast<int32_T>(is) - 1)] *
               ctcr_construc
                   ->vect_tau_dist[3 * (static_cast<int32_T>(is) - 1)] +
           mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                   [((3 * i2 + 9 * j) +
                     9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                         (static_cast<int32_T>(is) - 1)) +
                    1] *
               ctcr_construc
                   ->vect_tau_dist[3 * (static_cast<int32_T>(is) - 1) + 1]) +
          mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                  [((3 * i2 + 9 * j) +
                    9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                        (static_cast<int32_T>(is) - 1)) +
                   2] *
              ctcr_construc
                  ->vect_tau_dist[3 * (static_cast<int32_T>(is) - 1) + 2];
    }
    i2 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.size(1);
    if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
          &sj_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.size(2);
    if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                    &tj_emlrtBCI, (emlrtConstCTX)&sp);
    }
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds
        [3 * j + 3 * mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.size(1) *
                     (static_cast<int32_T>(is) - 1)] =
        b_mem_deriv_propag_low[0] - c_mem_deriv_propag_low[0];
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds
        [(3 * j +
          3 * mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.size(1) *
              (static_cast<int32_T>(is) - 1)) +
         1] = b_mem_deriv_propag_low[1] - c_mem_deriv_propag_low[1];
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds
        [(3 * j +
          3 * mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.size(1) *
              (static_cast<int32_T>(is) - 1)) +
         2] = b_mem_deriv_propag_low[2] - c_mem_deriv_propag_low[2];
    //  ======================== %
    //  ==== ddn0(s)ds_duz ===== %
    //  (eq 31d)
    i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2);
    if ((j + 1 < 1) || (j + 1 > i2)) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &bk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(3);
    if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                    &ck_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1);
    if ((j + 1 < 1) || (j + 1 > i2)) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &uj_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(2);
    if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                    &vj_emlrtBCI, (emlrtConstCTX)&sp);
    }
    //  =======================================================================
    //  %
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
    //  =======================================================================
    //  %
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > mem_bvp->mem_y.mem_n0.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    mem_bvp->mem_y.mem_n0.size(1), &wj_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > mem_bvp->mem_u0.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    mem_bvp->mem_u0.size(1), &xj_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    //  =======================================================================
    //  %
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
    //  =======================================================================
    //  %
    i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1);
    if ((j + 1 < 1) || (j + 1 > i2)) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &yj_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(2);
    if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                    &ak_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > ctcr_construc->vect_f_dist.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    ctcr_construc->vect_f_dist.size(1),
                                    &dk_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp[0] = 0.0;
    R_tmp[3] =
        -mem_deriv_propag_low->mem_du0.mem_du0_duzj0
             [(3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                           (static_cast<int32_T>(is) - 1)) +
              2];
    R_tmp[6] =
        mem_deriv_propag_low->mem_du0.mem_du0_duzj0
            [(3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                          (static_cast<int32_T>(is) - 1)) +
             1];
    R_tmp[1] =
        mem_deriv_propag_low->mem_du0.mem_du0_duzj0
            [(3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                          (static_cast<int32_T>(is) - 1)) +
             2];
    R_tmp[4] = 0.0;
    R_tmp[7] =
        -mem_deriv_propag_low->mem_du0.mem_du0_duzj0
             [3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                          (static_cast<int32_T>(is) - 1)];
    R_tmp[2] =
        -mem_deriv_propag_low->mem_du0.mem_du0_duzj0
             [(3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                           (static_cast<int32_T>(is) - 1)) +
              1];
    R_tmp[5] =
        mem_deriv_propag_low->mem_du0.mem_du0_duzj0
            [3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                         (static_cast<int32_T>(is) - 1)];
    R_tmp[8] = 0.0;
    dv[0] = 0.0;
    dv[3] = -d;
    dv[6] = d1;
    dv[1] = d;
    dv[4] = 0.0;
    dv[7] = -d2;
    dv[2] = -d1;
    dv[5] = d2;
    dv[8] = 0.0;
    for (i2 = 0; i2 < 3; i2++) {
      b_mem_deriv_propag_low[i2] =
          (dv[i2] *
               mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0
                   [3 * j +
                    3 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) *
                        (static_cast<int32_T>(is) - 1)] +
           dv[i2 + 3] *
               mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0
                   [(3 * j +
                     3 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) *
                         (static_cast<int32_T>(is) - 1)) +
                    1]) +
          dv[i2 + 6] *
              mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0
                  [(3 * j +
                    3 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) *
                        (static_cast<int32_T>(is) - 1)) +
                   2];
      c_mem_deriv_propag_low[i2] =
          (R_tmp[i2] *
               mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(is) - 1)] +
           R_tmp[i2 + 3] *
               mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(is) - 1) + 1]) +
          R_tmp[i2 + 6] *
              mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(is) - 1) + 2];
    }
    i2 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.size(1);
    if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
          &ek_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.size(2);
    if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                    &fk_emlrtBCI, (emlrtConstCTX)&sp);
    }
    for (i2 = 0; i2 < 3; i2++) {
      mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds
          [(i2 + 3 * j) +
           3 * mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.size(1) *
               (static_cast<int32_T>(is) - 1)] =
          (c_mem_deriv_propag_low[i2] + b_mem_deriv_propag_low[i2]) -
          ((mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                    [(3 * i2 + 9 * j) +
                     9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                         (static_cast<int32_T>(is) - 1)] *
                ctcr_construc->vect_f_dist[3 * (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                    [((3 * i2 + 9 * j) +
                      9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                          (static_cast<int32_T>(is) - 1)) +
                     1] *
                ctcr_construc
                    ->vect_f_dist[3 * (static_cast<int32_T>(is) - 1) + 1]) +
           mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                   [((3 * i2 + 9 * j) +
                     9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                         (static_cast<int32_T>(is) - 1)) +
                    2] *
               ctcr_construc
                   ->vect_f_dist[3 * (static_cast<int32_T>(is) - 1) + 2]);
    }
    //  ======================== %
    //  ==== dduzi(s)ds_duz ==== %
    //  (eq 31b)
    for (b_iv = 0; b_iv < i1; b_iv++) {
      if (b_iv + 1 > ii.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_iv + 1, 1, ii.size(0), &gk_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i2 = mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1);
      if ((j + 1 < 1) || (j + 1 > i2)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &hk_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i2 = mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                      &ik_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i2 = ii[b_iv];
      if ((i2 < 1) || (i2 > mem_bvp->mem_y.mem_t.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, mem_bvp->mem_y.mem_t.size(0),
                                      &jk_emlrtBCI, (emlrtConstCTX)&sp);
      }
      //  =======================================================================
      //  %
      //
      //  This function produces a rotation matrix R, associated to an angle
      //  gamma, around the Z-direction
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
      //  =======================================================================
      //  %
      R_tmp_tmp =
          mem_bvp->mem_y.mem_t[(ii[b_iv] + mem_bvp->mem_y.mem_t.size(0) *
                                               (static_cast<int32_T>(is) - 1)) -
                               1];
      b_R_tmp_tmp = muDoubleScalarSin(R_tmp_tmp);
      R_tmp_tmp = muDoubleScalarCos(R_tmp_tmp);
      b = ((static_cast<int32_T>(is) < 1) ||
           (static_cast<int32_T>(is) > ctcr_construc->ui_init.size(1)));
      if (b) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->ui_init.size(1),
                                      &kk_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i2 = ii[b_iv];
      if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size(2),
                                      &lk_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->ui_init.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->ui_init.size(1),
                                      &mk_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i2 = ii[b_iv];
      if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size(2),
                                      &nk_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i2 = ii[b_iv];
      if ((i2 < 1) || (i2 > mem_bvp->mem_y.mem_t.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, mem_bvp->mem_y.mem_t.size(0),
                                      &ok_emlrtBCI, (emlrtConstCTX)&sp);
      }
      //  =======================================================================
      //  %
      //
      //  This function produces a rotation matrix R, associated to an angle
      //  gamma, around the Z-direction
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
      //  =======================================================================
      //  %
      i2 = mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0);
      if ((ii[b_iv] < 1) || (ii[b_iv] > i2)) {
        emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1, i2, &ko_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i2 = mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1);
      if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
            &lo_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i2 = mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                      &mo_emlrtBCI, (emlrtConstCTX)&sp);
      }
      b_b = mem_deriv_propag_low->mem_dti.mem_dti_duzj0
                [((ii[b_iv] +
                   mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0) * j) +
                  mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0) *
                      mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1) *
                      (static_cast<int32_T>(is) - 1)) -
                 1];
      i2 = ii[b_iv];
      if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size(2),
                                      &pk_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->ui_init.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->ui_init.size(1),
                                      &qk_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i2 = ii[b_iv];
      if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size(2),
                                      &rk_emlrtBCI, (emlrtConstCTX)&sp);
      }
      R_tmp[0] = R_tmp_tmp;
      R_tmp[3] = -b_R_tmp_tmp;
      R_tmp[6] = 0.0;
      R_tmp[1] = b_R_tmp_tmp;
      R_tmp[4] = R_tmp_tmp;
      R_tmp[7] = 0.0;
      mem_deriv_propag_low_tmp =
          ctcr_construc
              ->ui_init[(3 * (static_cast<int32_T>(is) - 1) +
                         3 * ctcr_construc->ui_init.size(1) * (ii[b_iv] - 1)) +
                        1];
      c_mem_deriv_propag_low[0] = mem_deriv_propag_low_tmp;
      b_mem_deriv_propag_low_tmp =
          -ctcr_construc
               ->ui_init[3 * (static_cast<int32_T>(is) - 1) +
                         3 * ctcr_construc->ui_init.size(1) * (ii[b_iv] - 1)];
      c_mem_deriv_propag_low[1] = b_mem_deriv_propag_low_tmp;
      c_mem_deriv_propag_low[2] = 0.0;
      g_mem_deriv_propag_low = 0.0;
      for (i2 = 0; i2 < 3; i2++) {
        loop_ub = 3 * i2 + 2;
        c_R_tmp_tmp = c_iv[i2];
        i3 = 3 * i2 + 1;
        g_mem_deriv_propag_low +=
            ((mem_deriv_propag_low->mem_du0.mem_du0_duzj0
                      [3 * j +
                       3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                           (static_cast<int32_T>(is) - 1)] *
                  R_tmp[3 * i2] +
              mem_deriv_propag_low->mem_du0
                      .mem_du0_duzj0[(3 * j +
                                      3 *
                                          mem_deriv_propag_low->mem_du0
                                              .mem_du0_duzj0.size(1) *
                                          (static_cast<int32_T>(is) - 1)) +
                                     1] *
                  R_tmp[i3]) +
             mem_deriv_propag_low->mem_du0.mem_du0_duzj0
                     [(3 * j +
                       3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                           (static_cast<int32_T>(is) - 1)) +
                      2] *
                 static_cast<real_T>(c_R_tmp_tmp)) *
            c_mem_deriv_propag_low[i2];
        b_mem_deriv_propag_low[i2] = (d2 * static_cast<real_T>(iv[3 * i2]) +
                                      d1 * static_cast<real_T>(iv[i3])) +
                                     d * static_cast<real_T>(iv[loop_ub]);
        R_tmp[loop_ub] = c_R_tmp_tmp;
      }
      R_tmp[0] = R_tmp_tmp;
      R_tmp[3] = -b_R_tmp_tmp;
      R_tmp[6] = 0.0;
      R_tmp[1] = b_R_tmp_tmp;
      R_tmp[4] = R_tmp_tmp;
      R_tmp[7] = 0.0;
      c_mem_deriv_propag_low[0] = mem_deriv_propag_low_tmp;
      c_mem_deriv_propag_low[1] = b_mem_deriv_propag_low_tmp;
      c_mem_deriv_propag_low[2] = 0.0;
      R_tmp_tmp = 0.0;
      b_mem_deriv_propag_low_tmp = b_mem_deriv_propag_low[0];
      b_R_tmp_tmp = b_mem_deriv_propag_low[1];
      mem_deriv_propag_low_tmp = b_mem_deriv_propag_low[2];
      for (i2 = 0; i2 < 3; i2++) {
        R_tmp_tmp += ((b_mem_deriv_propag_low_tmp * R_tmp[3 * i2] +
                       b_R_tmp_tmp * R_tmp[3 * i2 + 1]) +
                      mem_deriv_propag_low_tmp * R_tmp[3 * i2 + 2]) *
                     b_b * c_mem_deriv_propag_low[i2];
      }
      if ((ii[b_iv] < 1) || (ii[b_iv] > ctcr_construc->K.size(2))) {
        emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1, ctcr_construc->K.size(2),
                                      &no_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(0);
      if ((ii[b_iv] < 1) || (ii[b_iv] > i2)) {
        emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1, i2, &oo_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(1);
      if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
            &po_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i2 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                      &qo_emlrtBCI, (emlrtConstCTX)&sp);
      }
      mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds
          [((ii[b_iv] +
             mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(0) * j) +
            mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(0) *
                mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(1) *
                (static_cast<int32_T>(is) - 1)) -
           1] = ctcr_construc->K[9 * (ii[b_iv] - 1)] /
                ctcr_construc->K[9 * (ii[b_iv] - 1) + 8] *
                (g_mem_deriv_propag_low + R_tmp_tmp);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
    //  ======================== %
    //  ===== ddti(s)ds_duz ==== %
    //  (eq 31a)
    i2 = mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(1);
    if ((j + 1 < 1) || (j + 1 > i2)) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &uk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(2);
    if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                    &vk_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(1);
    if ((j + 1 < 1) || (j + 1 > i2)) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &sk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(2);
    if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                    &tk_emlrtBCI, (emlrtConstCTX)&sp);
    }
    emlrtSubAssignSizeCheckR2012b(
        mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(), 1,
        mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(), 1, &g_emlrtECI,
        (emlrtCTX)&sp);
    loop_ub = mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0);
    for (i2 = 0; i2 < loop_ub; i2++) {
      mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds
          [(i2 +
            mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(0) * j) +
           mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(0) *
               mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(1) *
               (static_cast<int32_T>(is) - 1)] =
          mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0
              [(i2 +
                mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0) * j) +
               mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0) *
                   mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(1) *
                   (static_cast<int32_T>(is) - 1)];
    }
    //  ======================== %
    //  ===== ddR0(s)ds_duz ==== %
    //  (eq 31e)
    i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2);
    if ((j + 1 < 1) || (j + 1 > i2)) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &wk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(3);
    if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                    &xk_emlrtBCI, (emlrtConstCTX)&sp);
    }
    //  =======================================================================
    //  %
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
    //  =======================================================================
    //  %
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > mem_bvp->mem_T.size(2))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    mem_bvp->mem_T.size(2), &yk_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1);
    if ((j + 1 < 1) || (j + 1 > i2)) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &al_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(2);
    if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                    &bl_emlrtBCI, (emlrtConstCTX)&sp);
    }
    //  =======================================================================
    //  %
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
    //  =======================================================================
    //  %
    R_tmp[0] = 0.0;
    R_tmp[3] = -d;
    R_tmp[6] = d1;
    R_tmp[1] = d;
    R_tmp[4] = 0.0;
    R_tmp[7] = -d2;
    R_tmp[2] = -d1;
    R_tmp[5] = d2;
    R_tmp[8] = 0.0;
    dv[0] = 0.0;
    dv[3] =
        -mem_deriv_propag_low->mem_du0.mem_du0_duzj0
             [(3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                           (static_cast<int32_T>(is) - 1)) +
              2];
    dv[6] =
        mem_deriv_propag_low->mem_du0.mem_du0_duzj0
            [(3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                          (static_cast<int32_T>(is) - 1)) +
             1];
    dv[1] =
        mem_deriv_propag_low->mem_du0.mem_du0_duzj0
            [(3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                          (static_cast<int32_T>(is) - 1)) +
             2];
    dv[4] = 0.0;
    dv[7] =
        -mem_deriv_propag_low->mem_du0.mem_du0_duzj0
             [3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                          (static_cast<int32_T>(is) - 1)];
    dv[2] =
        -mem_deriv_propag_low->mem_du0.mem_du0_duzj0
             [(3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                           (static_cast<int32_T>(is) - 1)) +
              1];
    dv[5] =
        mem_deriv_propag_low->mem_du0.mem_du0_duzj0
            [3 * j + 3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                         (static_cast<int32_T>(is) - 1)];
    dv[8] = 0.0;
    for (i2 = 0; i2 < 3; i2++) {
      for (i3 = 0; i3 < 3; i3++) {
        loop_ub = 3 * i3 + 1;
        c_R_tmp_tmp = 3 * i3 + 2;
        b_iv = i2 + 3 * i3;
        b_mem_bvp[b_iv] =
            (mem_bvp->mem_T[i2 + 16 * (static_cast<int32_T>(is) - 1)] *
                 dv[3 * i3] +
             mem_bvp->mem_T[(i2 + 16 * (static_cast<int32_T>(is) - 1)) + 4] *
                 dv[loop_ub]) +
            mem_bvp->mem_T[(i2 + 16 * (static_cast<int32_T>(is) - 1)) + 8] *
                dv[c_R_tmp_tmp];
        f_mem_deriv_propag_low[b_iv] =
            (mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                     [(i2 + 9 * j) +
                      9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                          (static_cast<int32_T>(is) - 1)] *
                 R_tmp[3 * i3] +
             mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                     [((i2 + 9 * j) +
                       9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                           (static_cast<int32_T>(is) - 1)) +
                      3] *
                 R_tmp[loop_ub]) +
            mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                    [((i2 + 9 * j) +
                      9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                          (static_cast<int32_T>(is) - 1)) +
                     6] *
                R_tmp[c_R_tmp_tmp];
      }
    }
    i2 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(2);
    if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
          &cl_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i2 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(3);
    if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i2)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i2,
                                    &dl_emlrtBCI, (emlrtConstCTX)&sp);
    }
    for (i2 = 0; i2 < 3; i2++) {
      mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds
          [(3 * i2 + 9 * j) +
           9 * mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(2) *
               (static_cast<int32_T>(is) - 1)] =
          f_mem_deriv_propag_low[3 * i2] + b_mem_bvp[3 * i2];
      i3 = 3 * i2 + 1;
      mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds
          [((3 * i2 + 9 * j) +
            9 * mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(2) *
                (static_cast<int32_T>(is) - 1)) +
           1] = f_mem_deriv_propag_low[i3] + b_mem_bvp[i3];
      i3 = 3 * i2 + 2;
      mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds
          [((3 * i2 + 9 * j) +
            9 * mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(2) *
                (static_cast<int32_T>(is) - 1)) +
           2] = f_mem_deriv_propag_low[i3] + b_mem_bvp[i3];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  if (is >= ctcr_construc->ind_origin) {
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(ctcr_carac->nbT),
                                  &ab_emlrtRTEI, (emlrtConstCTX)&sp);
    for (int32_T j{0}; j < i; j++) {
      //  ======================== %
      //  ===== ddp0(s)ds_duz ==== %
      //  (eq 31f)
      i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2);
      if ((j + 1 < 1) || (j + 1 > i1)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, i1, &el_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(3);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &fl_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(1);
      if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i1)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i1,
            &un_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &vn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      for (i1 = 0; i1 < 3; i1++) {
        mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds
            [(i1 + 3 * j) +
             3 * mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(1) *
                 (static_cast<int32_T>(is) - 1)] = 0.0;
        mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds
            [(i1 + 3 * j) +
             3 * mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(1) *
                 (static_cast<int32_T>(is) - 1)] =
            mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds
                [(i1 + 3 * j) +
                 3 * mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(1) *
                     (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                    [(i1 + 9 * j) +
                     9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                         (static_cast<int32_T>(is) - 1)] *
                0.0;
        mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds
            [(i1 + 3 * j) +
             3 * mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(1) *
                 (static_cast<int32_T>(is) - 1)] =
            mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds
                [(i1 + 3 * j) +
                 3 * mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(1) *
                     (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                    [((i1 + 9 * j) +
                      9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                          (static_cast<int32_T>(is) - 1)) +
                     3] *
                0.0;
        mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds
            [(i1 + 3 * j) +
             3 * mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(1) *
                 (static_cast<int32_T>(is) - 1)] =
            mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds
                [(i1 + 3 * j) +
                 3 * mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(1) *
                     (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                [((i1 + 9 * j) +
                  9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                      (static_cast<int32_T>(is) - 1)) +
                 6];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
    i = ii.size(0);
    for (int32_T j{0}; j < 3; j++) {
      for (b_iv = 0; b_iv < i; b_iv++) {
        real_T h_mem_deriv_propag_low;
        if (b_iv + 1 > ii.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_iv + 1, 1, ii.size(0), &gl_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        //  ======================== %
        //  ===== dduz(s)ds_dm0 ==== %
        //  (eq 31b)
        i1 = mem_deriv_propag_low->mem_du0.mem_du0_dm0j0.size(2);
        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                        &hl_emlrtBCI, (emlrtConstCTX)&sp);
        }
        for (i1 = 0; i1 < 3; i1++) {
          b_mem_deriv_propag_low[i1] =
              (mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1)] *
                   static_cast<real_T>(iv[3 * i1]) +
               mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1) + 1] *
                   static_cast<real_T>(iv[3 * i1 + 1])) +
              mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1) + 2] *
                  static_cast<real_T>(iv[3 * i1 + 2]);
        }
        i1 = ii[b_iv];
        if ((i1 < 1) || (i1 > mem_bvp->mem_y.mem_t.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, mem_bvp->mem_y.mem_t.size(0),
                                        &il_emlrtBCI, (emlrtConstCTX)&sp);
        }
        //  =======================================================================
        //  %
        //
        //  This function produces a rotation matrix R, associated to an angle
        //  gamma, around the Z-direction
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
        //  =======================================================================
        //  %
        R_tmp_tmp = mem_bvp->mem_y
                        .mem_t[(ii[b_iv] + mem_bvp->mem_y.mem_t.size(0) *
                                               (static_cast<int32_T>(is) - 1)) -
                               1];
        b_R_tmp_tmp = muDoubleScalarSin(R_tmp_tmp);
        R_tmp_tmp = muDoubleScalarCos(R_tmp_tmp);
        b = ((static_cast<int32_T>(is) < 1) ||
             (static_cast<int32_T>(is) > ctcr_construc->ui_init.size(1)));
        if (b) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                        ctcr_construc->ui_init.size(1),
                                        &jl_emlrtBCI, (emlrtConstCTX)&sp);
        }
        i1 = ii[b_iv];
        if ((i1 < 1) || (i1 > ctcr_construc->ui_init.size(2))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->ui_init.size(2),
                                        &kl_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > ctcr_construc->ui_init.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                        ctcr_construc->ui_init.size(1),
                                        &ll_emlrtBCI, (emlrtConstCTX)&sp);
        }
        i1 = ii[b_iv];
        if ((i1 < 1) || (i1 > ctcr_construc->ui_init.size(2))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->ui_init.size(2),
                                        &ml_emlrtBCI, (emlrtConstCTX)&sp);
        }
        i1 = ii[b_iv];
        if ((i1 < 1) || (i1 > mem_bvp->mem_y.mem_t.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, mem_bvp->mem_y.mem_t.size(0),
                                        &nl_emlrtBCI, (emlrtConstCTX)&sp);
        }
        //  =======================================================================
        //  %
        //
        //  This function produces a rotation matrix R, associated to an angle
        //  gamma, around the Z-direction
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
        //  =======================================================================
        //  %
        i1 = mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0);
        if ((ii[b_iv] < 1) || (ii[b_iv] > i1)) {
          emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1, i1, &yn_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        i1 = mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(2);
        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                        &ao_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_b = mem_deriv_propag_low->mem_dti.mem_dti_dm0j0
                  [((ii[b_iv] +
                     mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0) * j) +
                    mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0) * 3 *
                        (static_cast<int32_T>(is) - 1)) -
                   1];
        i1 = ii[b_iv];
        if ((i1 < 1) || (i1 > ctcr_construc->ui_init.size(2))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->ui_init.size(2),
                                        &ol_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > ctcr_construc->ui_init.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                        ctcr_construc->ui_init.size(1),
                                        &pl_emlrtBCI, (emlrtConstCTX)&sp);
        }
        i1 = ii[b_iv];
        if ((i1 < 1) || (i1 > ctcr_construc->ui_init.size(2))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->ui_init.size(2),
                                        &ql_emlrtBCI, (emlrtConstCTX)&sp);
        }
        R_tmp[0] = R_tmp_tmp;
        R_tmp[3] = -b_R_tmp_tmp;
        R_tmp[6] = 0.0;
        R_tmp[1] = b_R_tmp_tmp;
        R_tmp[4] = R_tmp_tmp;
        R_tmp[7] = 0.0;
        mem_deriv_propag_low_tmp =
            ctcr_construc->ui_init[(3 * (static_cast<int32_T>(is) - 1) +
                                    3 * ctcr_construc->ui_init.size(1) *
                                        (ii[b_iv] - 1)) +
                                   1];
        c_mem_deriv_propag_low[0] = mem_deriv_propag_low_tmp;
        b_mem_deriv_propag_low_tmp =
            -ctcr_construc
                 ->ui_init[3 * (static_cast<int32_T>(is) - 1) +
                           3 * ctcr_construc->ui_init.size(1) * (ii[b_iv] - 1)];
        c_mem_deriv_propag_low[1] = b_mem_deriv_propag_low_tmp;
        c_mem_deriv_propag_low[2] = 0.0;
        g_mem_deriv_propag_low = 0.0;
        for (i1 = 0; i1 < 3; i1++) {
          loop_ub = c_iv[i1];
          g_mem_deriv_propag_low +=
              ((mem_deriv_propag_low->mem_du0
                        .mem_du0_dm0j0[3 * j +
                                       9 * (static_cast<int32_T>(is) - 1)] *
                    R_tmp[3 * i1] +
                mem_deriv_propag_low->mem_du0.mem_du0_dm0j0
                        [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1] *
                    R_tmp[3 * i1 + 1]) +
               mem_deriv_propag_low->mem_du0.mem_du0_dm0j0
                       [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2] *
                   static_cast<real_T>(loop_ub)) *
              c_mem_deriv_propag_low[i1];
          R_tmp[3 * i1 + 2] = loop_ub;
        }
        R_tmp[0] = R_tmp_tmp;
        R_tmp[3] = -b_R_tmp_tmp;
        R_tmp[6] = 0.0;
        R_tmp[1] = b_R_tmp_tmp;
        R_tmp[4] = R_tmp_tmp;
        R_tmp[7] = 0.0;
        c_mem_deriv_propag_low[0] = mem_deriv_propag_low_tmp;
        c_mem_deriv_propag_low[1] = b_mem_deriv_propag_low_tmp;
        c_mem_deriv_propag_low[2] = 0.0;
        h_mem_deriv_propag_low = 0.0;
        d = b_mem_deriv_propag_low[0];
        d1 = b_mem_deriv_propag_low[1];
        d2 = b_mem_deriv_propag_low[2];
        for (i1 = 0; i1 < 3; i1++) {
          h_mem_deriv_propag_low +=
              ((d * R_tmp[3 * i1] + d1 * R_tmp[3 * i1 + 1]) +
               d2 * R_tmp[3 * i1 + 2]) *
              b_b * c_mem_deriv_propag_low[i1];
        }
        b = ((ii[b_iv] < 1) || (ii[b_iv] > ctcr_construc->K.size(2)));
        if (b) {
          emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1, ctcr_construc->K.size(2),
                                        &bo_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((ii[b_iv] < 1) || (ii[b_iv] > ctcr_construc->K.size(2))) {
          emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1, ctcr_construc->K.size(2),
                                        &co_emlrtBCI, (emlrtConstCTX)&sp);
        }
        i1 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds.size(0);
        if ((ii[b_iv] < 1) || (ii[b_iv] > i1)) {
          emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1, i1, &do_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        i1 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds.size(2);
        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                        &eo_emlrtBCI, (emlrtConstCTX)&sp);
        }
        d = ctcr_construc->K[9 * (ii[b_iv] - 1)] /
            ctcr_construc->K[9 * (ii[b_iv] - 1) + 8];
        mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds
            [((ii[b_iv] +
               mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds.size(0) *
                   j) +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds.size(0) * 3 *
                  (static_cast<int32_T>(is) - 1)) -
             1] = d * (g_mem_deriv_propag_low + h_mem_deriv_propag_low);
        //  ======================== %
        //  ===== dduz(s)ds_dn0 ==== %
        //  (eq 31b)
        i1 = mem_deriv_propag_low->mem_du0.mem_du0_dn0j0.size(2);
        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                        &rl_emlrtBCI, (emlrtConstCTX)&sp);
        }
        i1 = ii[b_iv];
        if ((i1 < 1) || (i1 > mem_bvp->mem_y.mem_t.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, mem_bvp->mem_y.mem_t.size(0),
                                        &sl_emlrtBCI, (emlrtConstCTX)&sp);
        }
        //  =======================================================================
        //  %
        //
        //  This function produces a rotation matrix R, associated to an angle
        //  gamma, around the Z-direction
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
        //  =======================================================================
        //  %
        i1 = ii[b_iv];
        if ((i1 < 1) || (i1 > ctcr_construc->ui_init.size(2))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->ui_init.size(2),
                                        &tl_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > ctcr_construc->ui_init.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                        ctcr_construc->ui_init.size(1),
                                        &ul_emlrtBCI, (emlrtConstCTX)&sp);
        }
        i1 = ii[b_iv];
        if ((i1 < 1) || (i1 > ctcr_construc->ui_init.size(2))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->ui_init.size(2),
                                        &vl_emlrtBCI, (emlrtConstCTX)&sp);
        }
        i1 = ii[b_iv];
        if ((i1 < 1) || (i1 > mem_bvp->mem_y.mem_t.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, mem_bvp->mem_y.mem_t.size(0),
                                        &wl_emlrtBCI, (emlrtConstCTX)&sp);
        }
        //  =======================================================================
        //  %
        //
        //  This function produces a rotation matrix R, associated to an angle
        //  gamma, around the Z-direction
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
        //  =======================================================================
        //  %
        i1 = mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0);
        if ((ii[b_iv] < 1) || (ii[b_iv] > i1)) {
          emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1, i1, &fo_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        i1 = mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(2);
        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                        &go_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_b = mem_deriv_propag_low->mem_dti.mem_dti_dn0j0
                  [((ii[b_iv] +
                     mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0) * j) +
                    mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0) * 3 *
                        (static_cast<int32_T>(is) - 1)) -
                   1];
        i1 = ii[b_iv];
        if ((i1 < 1) || (i1 > ctcr_construc->ui_init.size(2))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->ui_init.size(2),
                                        &xl_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > ctcr_construc->ui_init.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                        ctcr_construc->ui_init.size(1),
                                        &yl_emlrtBCI, (emlrtConstCTX)&sp);
        }
        i1 = ii[b_iv];
        if ((i1 < 1) || (i1 > ctcr_construc->ui_init.size(2))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->ui_init.size(2),
                                        &am_emlrtBCI, (emlrtConstCTX)&sp);
        }
        R_tmp[0] = R_tmp_tmp;
        R_tmp[3] = -b_R_tmp_tmp;
        R_tmp[6] = 0.0;
        R_tmp[1] = b_R_tmp_tmp;
        R_tmp[4] = R_tmp_tmp;
        R_tmp[7] = 0.0;
        c_mem_deriv_propag_low[0] = mem_deriv_propag_low_tmp;
        c_mem_deriv_propag_low[1] = b_mem_deriv_propag_low_tmp;
        c_mem_deriv_propag_low[2] = 0.0;
        g_mem_deriv_propag_low = 0.0;
        for (i1 = 0; i1 < 3; i1++) {
          loop_ub = c_iv[i1];
          g_mem_deriv_propag_low +=
              ((mem_deriv_propag_low->mem_du0
                        .mem_du0_dn0j0[3 * j +
                                       9 * (static_cast<int32_T>(is) - 1)] *
                    R_tmp[3 * i1] +
                mem_deriv_propag_low->mem_du0.mem_du0_dn0j0
                        [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1] *
                    R_tmp[3 * i1 + 1]) +
               mem_deriv_propag_low->mem_du0.mem_du0_dn0j0
                       [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2] *
                   static_cast<real_T>(loop_ub)) *
              c_mem_deriv_propag_low[i1];
          R_tmp[3 * i1 + 2] = loop_ub;
        }
        R_tmp[0] = R_tmp_tmp;
        R_tmp[3] = -b_R_tmp_tmp;
        R_tmp[6] = 0.0;
        R_tmp[1] = b_R_tmp_tmp;
        R_tmp[4] = R_tmp_tmp;
        R_tmp[7] = 0.0;
        c_mem_deriv_propag_low[0] = mem_deriv_propag_low_tmp;
        c_mem_deriv_propag_low[1] = b_mem_deriv_propag_low_tmp;
        c_mem_deriv_propag_low[2] = 0.0;
        h_mem_deriv_propag_low = 0.0;
        d1 = b_mem_deriv_propag_low[0];
        d2 = b_mem_deriv_propag_low[1];
        b_mem_deriv_propag_low_tmp = b_mem_deriv_propag_low[2];
        for (i1 = 0; i1 < 3; i1++) {
          h_mem_deriv_propag_low +=
              ((d1 * R_tmp[3 * i1] + d2 * R_tmp[3 * i1 + 1]) +
               b_mem_deriv_propag_low_tmp * R_tmp[3 * i1 + 2]) *
              b_b * c_mem_deriv_propag_low[i1];
        }
        if ((ii[b_iv] < 1) || (ii[b_iv] > ctcr_construc->K.size(2))) {
          emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1, ctcr_construc->K.size(2),
                                        &ho_emlrtBCI, (emlrtConstCTX)&sp);
        }
        i1 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds.size(0);
        if ((ii[b_iv] < 1) || (ii[b_iv] > i1)) {
          emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1, i1, &io_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        i1 = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds.size(2);
        if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                        &jo_emlrtBCI, (emlrtConstCTX)&sp);
        }
        mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds
            [((ii[b_iv] +
               mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds.size(0) *
                   j) +
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds.size(0) * 3 *
                  (static_cast<int32_T>(is) - 1)) -
             1] = d * (g_mem_deriv_propag_low + h_mem_deriv_propag_low);
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
      //  ======================== %
      //  ===== ddti(s)ds_dm0 ==== %
      //  (eq 31a)
      i1 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &cm_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &bm_emlrtBCI, (emlrtConstCTX)&sp);
      }
      d_mem_deriv_propag_low[0] =
          mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds.size(0);
      d_mem_deriv_propag_low[1] = 3;
      e_mem_deriv_propag_low[0] =
          mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0);
      e_mem_deriv_propag_low[1] = 3;
      emlrtSubAssignSizeCheckR2012b(&d_mem_deriv_propag_low[0], 2,
                                    &e_mem_deriv_propag_low[0], 2, &h_emlrtECI,
                                    (emlrtCTX)&sp);
      for (i1 = 0; i1 < 3; i1++) {
        loop_ub = mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0);
        for (i2 = 0; i2 < loop_ub; i2++) {
          mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds
              [(i2 + mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds.size(0) *
                         i1) +
               mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds.size(0) * 3 *
                   (static_cast<int32_T>(is) - 1)] =
              mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0
                  [(i2 + mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0) *
                             i1) +
                   mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0) * 3 *
                       (static_cast<int32_T>(is) - 1)];
        }
      }
      //  ======================== %
      //  ===== ddti(s)ds_dn0 ==== %
      //  (eq 31a)
      i1 = mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &em_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &dm_emlrtBCI, (emlrtConstCTX)&sp);
      }
      d_mem_deriv_propag_low[0] =
          mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds.size(0);
      d_mem_deriv_propag_low[1] = 3;
      e_mem_deriv_propag_low[0] =
          mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0);
      e_mem_deriv_propag_low[1] = 3;
      emlrtSubAssignSizeCheckR2012b(&d_mem_deriv_propag_low[0], 2,
                                    &e_mem_deriv_propag_low[0], 2, &i_emlrtECI,
                                    (emlrtCTX)&sp);
      for (i1 = 0; i1 < 3; i1++) {
        loop_ub = mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0);
        for (i2 = 0; i2 < loop_ub; i2++) {
          mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds
              [(i2 + mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds.size(0) *
                         i1) +
               mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds.size(0) * 3 *
                   (static_cast<int32_T>(is) - 1)] =
              mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0
                  [(i2 + mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0) *
                             i1) +
                   mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0) * 3 *
                       (static_cast<int32_T>(is) - 1)];
        }
      }
      //  ======================== %
      //  ===== ddm0(s)ds_dm0 ==== %
      //  (eq 31c)
      i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(3);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &km_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = mem_deriv_propag_low->mem_du0.mem_du0_dm0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &fm_emlrtBCI, (emlrtConstCTX)&sp);
      }
      //  =======================================================================
      //  %
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
      //  =======================================================================
      //  %
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > mem_bvp->mem_y.mem_m0.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      mem_bvp->mem_y.mem_m0.size(1),
                                      &gm_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > mem_bvp->mem_u0.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      mem_bvp->mem_u0.size(1), &hm_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      //  =======================================================================
      //  %
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
      //  =======================================================================
      //  %
      i1 = mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &im_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &jm_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_tau_dist.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_tau_dist.size(1),
                                      &lm_emlrtBCI, (emlrtConstCTX)&sp);
      }
      R_tmp[0] = 0.0;
      R_tmp[3] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2];
      R_tmp[6] =
          mem_deriv_propag_low->mem_du0
              .mem_du0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1];
      R_tmp[1] =
          mem_deriv_propag_low->mem_du0
              .mem_du0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2];
      R_tmp[4] = 0.0;
      R_tmp[7] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dm0j0[3 * j + 9 * (static_cast<int32_T>(is) - 1)];
      R_tmp[2] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1];
      R_tmp[5] = mem_deriv_propag_low->mem_du0
                     .mem_du0_dm0j0[3 * j + 9 * (static_cast<int32_T>(is) - 1)];
      R_tmp[8] = 0.0;
      dv[0] = 0.0;
      d = mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1) + 2];
      dv[3] = -d;
      d1 = mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1) + 1];
      dv[6] = d1;
      dv[1] = d;
      dv[4] = 0.0;
      d2 = mem_bvp->mem_u0[3 * (static_cast<int32_T>(is) - 1)];
      dv[7] = -d2;
      dv[2] = -d1;
      dv[5] = d2;
      dv[8] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        b_mem_deriv_propag_low[i1] =
            (((R_tmp[i1] *
                   mem_bvp->mem_y.mem_m0[3 * (static_cast<int32_T>(is) - 1)] +
               R_tmp[i1 + 3] *
                   mem_bvp->mem_y
                       .mem_m0[3 * (static_cast<int32_T>(is) - 1) + 1]) +
              R_tmp[i1 + 6] *
                  mem_bvp->mem_y
                      .mem_m0[3 * (static_cast<int32_T>(is) - 1) + 2]) +
             ((dv[i1] * mem_deriv_propag_low->mem_dm0
                            .mem_dm0_dm0j0[3 * j +
                                           9 * (static_cast<int32_T>(is) - 1)] +
               dv[i1 + 3] *
                   mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0
                       [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1]) +
              dv[i1 + 6] *
                  mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0
                      [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2])) -
            ((static_cast<real_T>(iv[i1]) *
                  mem_deriv_propag_low->mem_dn0
                      .mem_dn0_dm0j0[3 * j +
                                     9 * (static_cast<int32_T>(is) - 1)] +
              static_cast<real_T>(iv[i1 + 3]) *
                  mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0
                      [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1]) +
             0.0 * mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0
                       [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2]);
        c_mem_deriv_propag_low[i1] =
            (mem_deriv_propag_low->mem_dR0
                     .mem_dR0_dm0j0[(3 * i1 + 9 * j) +
                                    27 * (static_cast<int32_T>(is) - 1)] *
                 ctcr_construc
                     ->vect_tau_dist[3 * (static_cast<int32_T>(is) - 1)] +
             mem_deriv_propag_low->mem_dR0
                     .mem_dR0_dm0j0[((3 * i1 + 9 * j) +
                                     27 * (static_cast<int32_T>(is) - 1)) +
                                    1] *
                 ctcr_construc
                     ->vect_tau_dist[3 * (static_cast<int32_T>(is) - 1) + 1]) +
            mem_deriv_propag_low->mem_dR0
                    .mem_dR0_dm0j0[((3 * i1 + 9 * j) +
                                    27 * (static_cast<int32_T>(is) - 1)) +
                                   2] *
                ctcr_construc
                    ->vect_tau_dist[3 * (static_cast<int32_T>(is) - 1) + 2];
      }
      i1 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dm0j0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &mm_emlrtBCI, (emlrtConstCTX)&sp);
      }
      mem_deriv_propag_low->mem_dm0_ds
          .mem_dm0_dm0j0_ds[3 * j + 9 * (static_cast<int32_T>(is) - 1)] =
          b_mem_deriv_propag_low[0] - c_mem_deriv_propag_low[0];
      mem_deriv_propag_low->mem_dm0_ds
          .mem_dm0_dm0j0_ds[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1] =
          b_mem_deriv_propag_low[1] - c_mem_deriv_propag_low[1];
      mem_deriv_propag_low->mem_dm0_ds
          .mem_dm0_dm0j0_ds[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2] =
          b_mem_deriv_propag_low[2] - c_mem_deriv_propag_low[2];
      //  ======================== %
      //  ===== ddm0(s)ds_dn0 ==== %
      //  (eq 31c)
      i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(3);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &sm_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = mem_deriv_propag_low->mem_du0.mem_du0_dn0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &nm_emlrtBCI, (emlrtConstCTX)&sp);
      }
      //  =======================================================================
      //  %
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
      //  =======================================================================
      //  %
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > mem_bvp->mem_y.mem_m0.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      mem_bvp->mem_y.mem_m0.size(1),
                                      &om_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > mem_bvp->mem_u0.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      mem_bvp->mem_u0.size(1), &pm_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      //  =======================================================================
      //  %
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
      //  =======================================================================
      //  %
      i1 = mem_deriv_propag_low->mem_dm0.mem_dm0_dn0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &qm_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &rm_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_tau_dist.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_tau_dist.size(1),
                                      &tm_emlrtBCI, (emlrtConstCTX)&sp);
      }
      R_tmp[0] = 0.0;
      R_tmp[3] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2];
      R_tmp[6] =
          mem_deriv_propag_low->mem_du0
              .mem_du0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1];
      R_tmp[1] =
          mem_deriv_propag_low->mem_du0
              .mem_du0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2];
      R_tmp[4] = 0.0;
      R_tmp[7] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dn0j0[3 * j + 9 * (static_cast<int32_T>(is) - 1)];
      R_tmp[2] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1];
      R_tmp[5] = mem_deriv_propag_low->mem_du0
                     .mem_du0_dn0j0[3 * j + 9 * (static_cast<int32_T>(is) - 1)];
      R_tmp[8] = 0.0;
      dv[0] = 0.0;
      dv[3] = -d;
      dv[6] = d1;
      dv[1] = d;
      dv[4] = 0.0;
      dv[7] = -d2;
      dv[2] = -d1;
      dv[5] = d2;
      dv[8] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        b_mem_deriv_propag_low[i1] =
            (((R_tmp[i1] *
                   mem_bvp->mem_y.mem_m0[3 * (static_cast<int32_T>(is) - 1)] +
               R_tmp[i1 + 3] *
                   mem_bvp->mem_y
                       .mem_m0[3 * (static_cast<int32_T>(is) - 1) + 1]) +
              R_tmp[i1 + 6] *
                  mem_bvp->mem_y
                      .mem_m0[3 * (static_cast<int32_T>(is) - 1) + 2]) +
             ((dv[i1] * mem_deriv_propag_low->mem_dm0
                            .mem_dm0_dn0j0[3 * j +
                                           9 * (static_cast<int32_T>(is) - 1)] +
               dv[i1 + 3] *
                   mem_deriv_propag_low->mem_dm0.mem_dm0_dn0j0
                       [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1]) +
              dv[i1 + 6] *
                  mem_deriv_propag_low->mem_dm0.mem_dm0_dn0j0
                      [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2])) -
            ((static_cast<real_T>(iv[i1]) *
                  mem_deriv_propag_low->mem_dn0
                      .mem_dn0_dn0j0[3 * j +
                                     9 * (static_cast<int32_T>(is) - 1)] +
              static_cast<real_T>(iv[i1 + 3]) *
                  mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0
                      [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1]) +
             0.0 * mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0
                       [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2]);
        c_mem_deriv_propag_low[i1] =
            (mem_deriv_propag_low->mem_dR0
                     .mem_dR0_dn0j0[(3 * i1 + 9 * j) +
                                    27 * (static_cast<int32_T>(is) - 1)] *
                 ctcr_construc
                     ->vect_tau_dist[3 * (static_cast<int32_T>(is) - 1)] +
             mem_deriv_propag_low->mem_dR0
                     .mem_dR0_dn0j0[((3 * i1 + 9 * j) +
                                     27 * (static_cast<int32_T>(is) - 1)) +
                                    1] *
                 ctcr_construc
                     ->vect_tau_dist[3 * (static_cast<int32_T>(is) - 1) + 1]) +
            mem_deriv_propag_low->mem_dR0
                    .mem_dR0_dn0j0[((3 * i1 + 9 * j) +
                                    27 * (static_cast<int32_T>(is) - 1)) +
                                   2] *
                ctcr_construc
                    ->vect_tau_dist[3 * (static_cast<int32_T>(is) - 1) + 2];
      }
      i1 = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dn0j0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &um_emlrtBCI, (emlrtConstCTX)&sp);
      }
      mem_deriv_propag_low->mem_dm0_ds
          .mem_dm0_dn0j0_ds[3 * j + 9 * (static_cast<int32_T>(is) - 1)] =
          b_mem_deriv_propag_low[0] - c_mem_deriv_propag_low[0];
      mem_deriv_propag_low->mem_dm0_ds
          .mem_dm0_dn0j0_ds[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1] =
          b_mem_deriv_propag_low[1] - c_mem_deriv_propag_low[1];
      mem_deriv_propag_low->mem_dm0_ds
          .mem_dm0_dn0j0_ds[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2] =
          b_mem_deriv_propag_low[2] - c_mem_deriv_propag_low[2];
      //  ======================== %
      //  ===== ddn0(s)ds_dm0 ==== %
      //  (eq 31d)
      i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(3);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &an_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = mem_deriv_propag_low->mem_du0.mem_du0_dm0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &vm_emlrtBCI, (emlrtConstCTX)&sp);
      }
      //  =======================================================================
      //  %
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
      //  =======================================================================
      //  %
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > mem_bvp->mem_y.mem_n0.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      mem_bvp->mem_y.mem_n0.size(1),
                                      &wm_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > mem_bvp->mem_u0.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      mem_bvp->mem_u0.size(1), &xm_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      //  =======================================================================
      //  %
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
      //  =======================================================================
      //  %
      i1 = mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &ym_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_f_dist.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_f_dist.size(1),
                                      &bn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      R_tmp[0] = 0.0;
      R_tmp[3] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2];
      R_tmp[6] =
          mem_deriv_propag_low->mem_du0
              .mem_du0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1];
      R_tmp[1] =
          mem_deriv_propag_low->mem_du0
              .mem_du0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2];
      R_tmp[4] = 0.0;
      R_tmp[7] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dm0j0[3 * j + 9 * (static_cast<int32_T>(is) - 1)];
      R_tmp[2] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1];
      R_tmp[5] = mem_deriv_propag_low->mem_du0
                     .mem_du0_dm0j0[3 * j + 9 * (static_cast<int32_T>(is) - 1)];
      R_tmp[8] = 0.0;
      dv[0] = 0.0;
      dv[3] = -d;
      dv[6] = d1;
      dv[1] = d;
      dv[4] = 0.0;
      dv[7] = -d2;
      dv[2] = -d1;
      dv[5] = d2;
      dv[8] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        b_mem_deriv_propag_low[i1] =
            (dv[i1] * mem_deriv_propag_low->mem_dn0
                          .mem_dn0_dm0j0[3 * j +
                                         9 * (static_cast<int32_T>(is) - 1)] +
             dv[i1 + 3] *
                 mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0
                     [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1]) +
            dv[i1 + 6] * mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0
                             [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2];
        c_mem_deriv_propag_low[i1] =
            (R_tmp[i1] *
                 mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(is) - 1)] +
             R_tmp[i1 + 3] *
                 mem_bvp->mem_y
                     .mem_n0[3 * (static_cast<int32_T>(is) - 1) + 1]) +
            R_tmp[i1 + 6] *
                mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(is) - 1) + 2];
      }
      i1 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dm0j0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &cn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      for (i1 = 0; i1 < 3; i1++) {
        mem_deriv_propag_low->mem_dn0_ds
            .mem_dn0_dm0j0_ds[(i1 + 3 * j) +
                              9 * (static_cast<int32_T>(is) - 1)] =
            (c_mem_deriv_propag_low[i1] + b_mem_deriv_propag_low[i1]) -
            ((mem_deriv_propag_low->mem_dR0
                      .mem_dR0_dm0j0[(3 * i1 + 9 * j) +
                                     27 * (static_cast<int32_T>(is) - 1)] *
                  ctcr_construc
                      ->vect_f_dist[3 * (static_cast<int32_T>(is) - 1)] +
              mem_deriv_propag_low->mem_dR0
                      .mem_dR0_dm0j0[((3 * i1 + 9 * j) +
                                      27 * (static_cast<int32_T>(is) - 1)) +
                                     1] *
                  ctcr_construc
                      ->vect_f_dist[3 * (static_cast<int32_T>(is) - 1) + 1]) +
             mem_deriv_propag_low->mem_dR0
                     .mem_dR0_dm0j0[((3 * i1 + 9 * j) +
                                     27 * (static_cast<int32_T>(is) - 1)) +
                                    2] *
                 ctcr_construc
                     ->vect_f_dist[3 * (static_cast<int32_T>(is) - 1) + 2]);
      }
      //  ======================== %
      //  ===== ddn0(s)ds_dn0 ==== %
      //  (eq 31d)
      i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(3);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &hn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = mem_deriv_propag_low->mem_du0.mem_du0_dn0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &dn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      //  =======================================================================
      //  %
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
      //  =======================================================================
      //  %
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > mem_bvp->mem_y.mem_n0.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      mem_bvp->mem_y.mem_n0.size(1),
                                      &en_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > mem_bvp->mem_u0.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      mem_bvp->mem_u0.size(1), &fn_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      //  =======================================================================
      //  %
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
      //  =======================================================================
      //  %
      i1 = mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &gn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_f_dist.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_f_dist.size(1),
                                      &in_emlrtBCI, (emlrtConstCTX)&sp);
      }
      R_tmp[0] = 0.0;
      R_tmp[3] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2];
      R_tmp[6] =
          mem_deriv_propag_low->mem_du0
              .mem_du0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1];
      R_tmp[1] =
          mem_deriv_propag_low->mem_du0
              .mem_du0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2];
      R_tmp[4] = 0.0;
      R_tmp[7] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dn0j0[3 * j + 9 * (static_cast<int32_T>(is) - 1)];
      R_tmp[2] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1];
      R_tmp[5] = mem_deriv_propag_low->mem_du0
                     .mem_du0_dn0j0[3 * j + 9 * (static_cast<int32_T>(is) - 1)];
      R_tmp[8] = 0.0;
      dv[0] = 0.0;
      dv[3] = -d;
      dv[6] = d1;
      dv[1] = d;
      dv[4] = 0.0;
      dv[7] = -d2;
      dv[2] = -d1;
      dv[5] = d2;
      dv[8] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        b_mem_deriv_propag_low[i1] =
            (dv[i1] * mem_deriv_propag_low->mem_dn0
                          .mem_dn0_dn0j0[3 * j +
                                         9 * (static_cast<int32_T>(is) - 1)] +
             dv[i1 + 3] *
                 mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0
                     [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1]) +
            dv[i1 + 6] * mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0
                             [(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2];
        c_mem_deriv_propag_low[i1] =
            (R_tmp[i1] *
                 mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(is) - 1)] +
             R_tmp[i1 + 3] *
                 mem_bvp->mem_y
                     .mem_n0[3 * (static_cast<int32_T>(is) - 1) + 1]) +
            R_tmp[i1 + 6] *
                mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(is) - 1) + 2];
      }
      i1 = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dn0j0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &jn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      for (i1 = 0; i1 < 3; i1++) {
        mem_deriv_propag_low->mem_dn0_ds
            .mem_dn0_dn0j0_ds[(i1 + 3 * j) +
                              9 * (static_cast<int32_T>(is) - 1)] =
            (c_mem_deriv_propag_low[i1] + b_mem_deriv_propag_low[i1]) -
            ((mem_deriv_propag_low->mem_dR0
                      .mem_dR0_dn0j0[(3 * i1 + 9 * j) +
                                     27 * (static_cast<int32_T>(is) - 1)] *
                  ctcr_construc
                      ->vect_f_dist[3 * (static_cast<int32_T>(is) - 1)] +
              mem_deriv_propag_low->mem_dR0
                      .mem_dR0_dn0j0[((3 * i1 + 9 * j) +
                                      27 * (static_cast<int32_T>(is) - 1)) +
                                     1] *
                  ctcr_construc
                      ->vect_f_dist[3 * (static_cast<int32_T>(is) - 1) + 1]) +
             mem_deriv_propag_low->mem_dR0
                     .mem_dR0_dn0j0[((3 * i1 + 9 * j) +
                                     27 * (static_cast<int32_T>(is) - 1)) +
                                    2] *
                 ctcr_construc
                     ->vect_f_dist[3 * (static_cast<int32_T>(is) - 1) + 2]);
      }
      //  ======================== %
      //  ===== ddR0(s)ds_dm0 ==== %
      //  (eq 31e)
      //  =======================================================================
      //  %
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
      //  =======================================================================
      //  %
      R_tmp[0] = 0.0;
      R_tmp[3] = -d;
      R_tmp[6] = d1;
      R_tmp[1] = d;
      R_tmp[4] = 0.0;
      R_tmp[7] = -d2;
      R_tmp[2] = -d1;
      R_tmp[5] = d2;
      R_tmp[8] = 0.0;
      i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(3);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &kn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > mem_bvp->mem_T.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      mem_bvp->mem_T.size(2), &ln_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i1 = mem_deriv_propag_low->mem_du0.mem_du0_dm0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &mn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      //  =======================================================================
      //  %
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
      //  =======================================================================
      //  %
      dv[0] = 0.0;
      dv[3] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2];
      dv[6] =
          mem_deriv_propag_low->mem_du0
              .mem_du0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1];
      dv[1] =
          mem_deriv_propag_low->mem_du0
              .mem_du0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2];
      dv[4] = 0.0;
      dv[7] = -mem_deriv_propag_low->mem_du0
                   .mem_du0_dm0j0[3 * j + 9 * (static_cast<int32_T>(is) - 1)];
      dv[2] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1];
      dv[5] = mem_deriv_propag_low->mem_du0
                  .mem_du0_dm0j0[3 * j + 9 * (static_cast<int32_T>(is) - 1)];
      dv[8] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          i3 = 3 * i2 + 1;
          loop_ub = 3 * i2 + 2;
          b_iv = i1 + 3 * i2;
          b_mem_bvp[b_iv] =
              (mem_bvp->mem_T[i1 + 16 * (static_cast<int32_T>(is) - 1)] *
                   dv[3 * i2] +
               mem_bvp->mem_T[(i1 + 16 * (static_cast<int32_T>(is) - 1)) + 4] *
                   dv[i3]) +
              mem_bvp->mem_T[(i1 + 16 * (static_cast<int32_T>(is) - 1)) + 8] *
                  dv[loop_ub];
          f_mem_deriv_propag_low[b_iv] =
              (mem_deriv_propag_low->mem_dR0
                       .mem_dR0_dm0j0[(i1 + 9 * j) +
                                      27 * (static_cast<int32_T>(is) - 1)] *
                   R_tmp[3 * i2] +
               mem_deriv_propag_low->mem_dR0
                       .mem_dR0_dm0j0[((i1 + 9 * j) +
                                       27 * (static_cast<int32_T>(is) - 1)) +
                                      3] *
                   R_tmp[i3]) +
              mem_deriv_propag_low->mem_dR0
                      .mem_dR0_dm0j0[((i1 + 9 * j) +
                                      27 * (static_cast<int32_T>(is) - 1)) +
                                     6] *
                  R_tmp[loop_ub];
        }
      }
      i1 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dm0j0_ds.size(3);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &nn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      for (i1 = 0; i1 < 3; i1++) {
        mem_deriv_propag_low->mem_dR0_ds
            .mem_dR0_dm0j0_ds[(3 * i1 + 9 * j) +
                              27 * (static_cast<int32_T>(is) - 1)] =
            f_mem_deriv_propag_low[3 * i1] + b_mem_bvp[3 * i1];
        i2 = 3 * i1 + 1;
        mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dm0j0_ds
            [((3 * i1 + 9 * j) + 27 * (static_cast<int32_T>(is) - 1)) + 1] =
            f_mem_deriv_propag_low[i2] + b_mem_bvp[i2];
        i2 = 3 * i1 + 2;
        mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dm0j0_ds
            [((3 * i1 + 9 * j) + 27 * (static_cast<int32_T>(is) - 1)) + 2] =
            f_mem_deriv_propag_low[i2] + b_mem_bvp[i2];
      }
      //  ======================== %
      //  ===== ddR0(s)ds_dn0 ==== %
      //  (eq 31e)
      i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(3);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &on_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > mem_bvp->mem_T.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      mem_bvp->mem_T.size(2), &pn_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i1 = mem_deriv_propag_low->mem_du0.mem_du0_dn0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &qn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      //  =======================================================================
      //  %
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
      //  =======================================================================
      //  %
      dv[0] = 0.0;
      dv[3] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2];
      dv[6] =
          mem_deriv_propag_low->mem_du0
              .mem_du0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1];
      dv[1] =
          mem_deriv_propag_low->mem_du0
              .mem_du0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 2];
      dv[4] = 0.0;
      dv[7] = -mem_deriv_propag_low->mem_du0
                   .mem_du0_dn0j0[3 * j + 9 * (static_cast<int32_T>(is) - 1)];
      dv[2] =
          -mem_deriv_propag_low->mem_du0
               .mem_du0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(is) - 1)) + 1];
      dv[5] = mem_deriv_propag_low->mem_du0
                  .mem_du0_dn0j0[3 * j + 9 * (static_cast<int32_T>(is) - 1)];
      dv[8] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          i3 = 3 * i2 + 1;
          loop_ub = 3 * i2 + 2;
          b_iv = i1 + 3 * i2;
          b_mem_bvp[b_iv] =
              (mem_bvp->mem_T[i1 + 16 * (static_cast<int32_T>(is) - 1)] *
                   dv[3 * i2] +
               mem_bvp->mem_T[(i1 + 16 * (static_cast<int32_T>(is) - 1)) + 4] *
                   dv[i3]) +
              mem_bvp->mem_T[(i1 + 16 * (static_cast<int32_T>(is) - 1)) + 8] *
                  dv[loop_ub];
          f_mem_deriv_propag_low[b_iv] =
              (mem_deriv_propag_low->mem_dR0
                       .mem_dR0_dn0j0[(i1 + 9 * j) +
                                      27 * (static_cast<int32_T>(is) - 1)] *
                   R_tmp[3 * i2] +
               mem_deriv_propag_low->mem_dR0
                       .mem_dR0_dn0j0[((i1 + 9 * j) +
                                       27 * (static_cast<int32_T>(is) - 1)) +
                                      3] *
                   R_tmp[i3]) +
              mem_deriv_propag_low->mem_dR0
                      .mem_dR0_dn0j0[((i1 + 9 * j) +
                                      27 * (static_cast<int32_T>(is) - 1)) +
                                     6] *
                  R_tmp[loop_ub];
        }
      }
      i1 = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dn0j0_ds.size(3);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &rn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      for (i1 = 0; i1 < 3; i1++) {
        mem_deriv_propag_low->mem_dR0_ds
            .mem_dR0_dn0j0_ds[(3 * i1 + 9 * j) +
                              27 * (static_cast<int32_T>(is) - 1)] =
            f_mem_deriv_propag_low[3 * i1] + b_mem_bvp[3 * i1];
        i2 = 3 * i1 + 1;
        mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dn0j0_ds
            [((3 * i1 + 9 * j) + 27 * (static_cast<int32_T>(is) - 1)) + 1] =
            f_mem_deriv_propag_low[i2] + b_mem_bvp[i2];
        i2 = 3 * i1 + 2;
        mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dn0j0_ds
            [((3 * i1 + 9 * j) + 27 * (static_cast<int32_T>(is) - 1)) + 2] =
            f_mem_deriv_propag_low[i2] + b_mem_bvp[i2];
      }
      //  ======================== %
      //  ===== ddp0(s)ds_dm0 ==== %
      //  (eq 31f)
      i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(3);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &sn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dm0j0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &xn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      for (i1 = 0; i1 < 3; i1++) {
        mem_deriv_propag_low->mem_dP0_ds
            .mem_dP0_dm0j0_ds[(i1 + 3 * j) +
                              9 * (static_cast<int32_T>(is) - 1)] = 0.0;
        mem_deriv_propag_low->mem_dP0_ds
            .mem_dP0_dm0j0_ds[(i1 + 3 * j) +
                              9 * (static_cast<int32_T>(is) - 1)] =
            mem_deriv_propag_low->mem_dP0_ds
                .mem_dP0_dm0j0_ds[(i1 + 3 * j) +
                                  9 * (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dR0
                    .mem_dR0_dm0j0[(i1 + 9 * j) +
                                   27 * (static_cast<int32_T>(is) - 1)] *
                0.0;
        mem_deriv_propag_low->mem_dP0_ds
            .mem_dP0_dm0j0_ds[(i1 + 3 * j) +
                              9 * (static_cast<int32_T>(is) - 1)] =
            mem_deriv_propag_low->mem_dP0_ds
                .mem_dP0_dm0j0_ds[(i1 + 3 * j) +
                                  9 * (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0
                    [((i1 + 9 * j) + 27 * (static_cast<int32_T>(is) - 1)) + 3] *
                0.0;
        mem_deriv_propag_low->mem_dP0_ds
            .mem_dP0_dm0j0_ds[(i1 + 3 * j) +
                              9 * (static_cast<int32_T>(is) - 1)] =
            mem_deriv_propag_low->mem_dP0_ds
                .mem_dP0_dm0j0_ds[(i1 + 3 * j) +
                                  9 * (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0
                [((i1 + 9 * j) + 27 * (static_cast<int32_T>(is) - 1)) + 6];
      }
      //  ======================== %
      //  ===== ddp0(s)ds_dn0 ==== %
      //  (eq 31f)
      i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(3);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &tn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dn0j0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > i1)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, i1,
                                      &wn_emlrtBCI, (emlrtConstCTX)&sp);
      }
      for (i1 = 0; i1 < 3; i1++) {
        mem_deriv_propag_low->mem_dP0_ds
            .mem_dP0_dn0j0_ds[(i1 + 3 * j) +
                              9 * (static_cast<int32_T>(is) - 1)] = 0.0;
        mem_deriv_propag_low->mem_dP0_ds
            .mem_dP0_dn0j0_ds[(i1 + 3 * j) +
                              9 * (static_cast<int32_T>(is) - 1)] =
            mem_deriv_propag_low->mem_dP0_ds
                .mem_dP0_dn0j0_ds[(i1 + 3 * j) +
                                  9 * (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dR0
                    .mem_dR0_dn0j0[(i1 + 9 * j) +
                                   27 * (static_cast<int32_T>(is) - 1)] *
                0.0;
        mem_deriv_propag_low->mem_dP0_ds
            .mem_dP0_dn0j0_ds[(i1 + 3 * j) +
                              9 * (static_cast<int32_T>(is) - 1)] =
            mem_deriv_propag_low->mem_dP0_ds
                .mem_dP0_dn0j0_ds[(i1 + 3 * j) +
                                  9 * (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0
                    [((i1 + 9 * j) + 27 * (static_cast<int32_T>(is) - 1)) + 3] *
                0.0;
        mem_deriv_propag_low->mem_dP0_ds
            .mem_dP0_dn0j0_ds[(i1 + 3 * j) +
                              9 * (static_cast<int32_T>(is) - 1)] =
            mem_deriv_propag_low->mem_dP0_ds
                .mem_dP0_dn0j0_ds[(i1 + 3 * j) +
                                  9 * (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0
                [((i1 + 9 * j) + 27 * (static_cast<int32_T>(is) - 1)) + 6];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (IVP_Comp_Low_ODE.cpp)
