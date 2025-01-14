//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// IVP_Int.cpp
//
// Code generation for function 'IVP_Int'
//

// Include files
#include "IVP_Int.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCR_Shape_data.h"
#include "IVP_Comp_Low_ODE.h"
#include "IVP_MaJ_Mem.h"
#include "MemBVP.h"
#include "MemDM0.h"
#include "MemDTi.h"
#include "MemDU0.h"
#include "MemDerivPropagLow.h"
#include "MemY.h"
#include "MemYS.h"
#include "find.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo eb_emlrtRSI{
    32,        // lineNo
    "IVP_Int", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Int.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    33,        // lineNo
    "IVP_Int", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Int.m" // pathName
};

static emlrtRSInfo gb_emlrtRSI{
    35,        // lineNo
    "IVP_Int", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Int.m" // pathName
};

static emlrtRSInfo hb_emlrtRSI{
    37,        // lineNo
    "IVP_Int", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Int.m" // pathName
};

static emlrtRSInfo ib_emlrtRSI{
    46,                 // lineNo
    "IVP_MaJ_Mem_curr", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m" // pathName
};

static emlrtRSInfo ob_emlrtRSI{
    44,        // lineNo
    "IVP_ODE", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m" // pathName
};

static emlrtRTEInfo w_emlrtRTEI{
    30,        // lineNo
    14,        // colNo
    "IVP_Int", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_Int.m" // pName
};

static emlrtBCInfo pf_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    39,                     // lineNo
    46,                     // colNo
    "mem_bvp.mem_y.mem_m0", // aName
    "IVP_MaJ_Mem_curr",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtECInfo d_emlrtECI{
    -1,                 // nDims
    46,                 // lineNo
    36,                 // colNo
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m" // pName
};

static emlrtBCInfo qf_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    49,                     // lineNo
    58,                     // colNo
    "mem_bvp.mem_y.mem_R0", // aName
    "IVP_MaJ_Mem_curr",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo rf_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    49,                     // lineNo
    87,                     // colNo
    "mem_bvp.mem_y.mem_p0", // aName
    "IVP_MaJ_Mem_curr",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo sf_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    49,                 // lineNo
    23,                 // colNo
    "mem_bvp.mem_T",    // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo tf_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    66,                 // lineNo
    34,                 // colNo
    "curr_vectT",       // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo uf_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    68,                 // lineNo
    38,                 // colNo
    "K",                // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo vf_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    73,                       // lineNo
    36,                       // colNo
    "mem_bvp.mem_inv_sum_Ki", // aName
    "IVP_MaJ_Mem_curr",       // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo wf_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    78,                 // lineNo
    60,                 // colNo
    "mem_bvp.mem_u0",   // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo xf_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    78,                 // lineNo
    30,                 // colNo
    "mem_bvp.mem_u0",   // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo yf_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    88,                 // lineNo
    42,                 // colNo
    "curr_vectT",       // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ag_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    90,                 // lineNo
    82,                 // colNo
    "K",                // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo bg_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    90,                 // lineNo
    97,                 // colNo
    "ui_init",          // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo cg_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    90,                 // lineNo
    100,                // colNo
    "ui_init",          // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo dg_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    94,                       // lineNo
    67,                       // colNo
    "mem_bvp.mem_inv_sum_Ki", // aName
    "IVP_MaJ_Mem_curr",       // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo eg_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    95,                 // lineNo
    30,                 // colNo
    "mem_bvp.mem_u0",   // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtRTEInfo x_emlrtRTEI{
    100,                // lineNo
    17,                 // colNo
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m" // pName
};

static emlrtBCInfo fg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    107,                                          // lineNo
    115,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_duzj0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo gg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    107,                                          // lineNo
    117,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_duzj0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo hg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    107,                                          // lineNo
    62,                                           // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_duzj0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ig_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    107,                                          // lineNo
    64,                                           // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_duzj0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo jg_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    114,                // lineNo
    36,                 // colNo
    "curr_vectT",       // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo kg_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    117,                // lineNo
    139,                // colNo
    "K",                // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo lg_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    117,                     // lineNo
    166,                     // colNo
    "ctcr_construc.ui_init", // aName
    "IVP_MaJ_Mem_curr",      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo mg_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    117,                     // lineNo
    169,                     // colNo
    "ctcr_construc.ui_init", // aName
    "IVP_MaJ_Mem_curr",      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ng_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    121,                      // lineNo
    62,                       // colNo
    "mem_bvp.mem_inv_sum_Ki", // aName
    "IVP_MaJ_Mem_curr",       // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo og_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    121,                                          // lineNo
    124,                                          // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo pg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    121,                                          // lineNo
    126,                                          // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo qg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    122,                                          // lineNo
    62,                                           // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_duzj0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo rg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    122,                                          // lineNo
    64,                                           // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_duzj0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo sg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    135,                                          // lineNo
    118,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dm0j0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo tg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    135,                                          // lineNo
    64,                                           // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dm0j0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ug_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    141,                                          // lineNo
    118,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dn0j0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo vg_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    141,                                          // lineNo
    64,                                           // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dn0j0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo wg_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    152,                // lineNo
    36,                 // colNo
    "curr_vectT",       // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo xg_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    155,                // lineNo
    139,                // colNo
    "K",                // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo yg_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    155,                     // lineNo
    166,                     // colNo
    "ctcr_construc.ui_init", // aName
    "IVP_MaJ_Mem_curr",      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ah_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    155,                     // lineNo
    169,                     // colNo
    "ctcr_construc.ui_init", // aName
    "IVP_MaJ_Mem_curr",      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo bh_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    159,                      // lineNo
    62,                       // colNo
    "mem_bvp.mem_inv_sum_Ki", // aName
    "IVP_MaJ_Mem_curr",       // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ch_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    159,                                          // lineNo
    126,                                          // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo dh_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    161,                                          // lineNo
    64,                                           // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dm0j0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo eh_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    171,                // lineNo
    36,                 // colNo
    "curr_vectT",       // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo fh_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    174,                // lineNo
    139,                // colNo
    "K",                // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo gh_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    174,                     // lineNo
    166,                     // colNo
    "ctcr_construc.ui_init", // aName
    "IVP_MaJ_Mem_curr",      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo hh_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    174,                     // lineNo
    169,                     // colNo
    "ctcr_construc.ui_init", // aName
    "IVP_MaJ_Mem_curr",      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ih_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    178,                      // lineNo
    62,                       // colNo
    "mem_bvp.mem_inv_sum_Ki", // aName
    "IVP_MaJ_Mem_curr",       // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo jh_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    178,                                          // lineNo
    126,                                          // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo kh_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    180,                                          // lineNo
    64,                                           // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dn0j0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo lh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    30,                     // lineNo
    46,                     // colNo
    "mem_bvp.mem_y.mem_uz", // aName
    "IVP_ODE",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo mh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    31,                     // lineNo
    46,                     // colNo
    "mem_bvp.mem_y.mem_m0", // aName
    "IVP_ODE",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo nh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    32,                     // lineNo
    46,                     // colNo
    "mem_bvp.mem_y.mem_n0", // aName
    "IVP_ODE",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo oh_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    33,               // lineNo
    40,               // colNo
    "mem_bvp.mem_u0", // aName
    "IVP_ODE",        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo ph_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    34,                     // lineNo
    48,                     // colNo
    "mem_bvp.mem_y.mem_R0", // aName
    "IVP_ODE",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtECInfo e_emlrtECI{
    -1,        // nDims
    44,        // lineNo
    18,        // colNo
    "IVP_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m" // pName
};

static emlrtBCInfo qh_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    47,        // lineNo
    20,        // colNo
    "vectT",   // aName
    "IVP_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo rh_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    62,                 // lineNo
    28,                 // colNo
    "mem_bvp.mem_uixy", // aName
    "IVP_ODE",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo sh_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    62,                 // lineNo
    31,                 // colNo
    "mem_bvp.mem_uixy", // aName
    "IVP_ODE",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo th_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    63,                 // lineNo
    83,                 // colNo
    "mem_bvp.mem_uixy", // aName
    "IVP_ODE",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo uh_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    63,                 // lineNo
    86,                 // colNo
    "mem_bvp.mem_uixy", // aName
    "IVP_ODE",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo vh_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    63,        // lineNo
    102,       // colNo
    "ui_init", // aName
    "IVP_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo wh_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    63,        // lineNo
    105,       // colNo
    "ui_init", // aName
    "IVP_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo xh_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    63,        // lineNo
    120,       // colNo
    "ui_init", // aName
    "IVP_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo yh_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    63,        // lineNo
    123,       // colNo
    "ui_init", // aName
    "IVP_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo ai_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    76,                            // lineNo
    79,                            // colNo
    "ctcr_construc.vect_tau_dist", // aName
    "IVP_ODE",                     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo bi_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    74,                       // lineNo
    34,                       // colNo
    "mem_bvp.mem_ys.mem_m0s", // aName
    "IVP_ODE",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo ci_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    84,                          // lineNo
    77,                          // colNo
    "ctcr_construc.vect_f_dist", // aName
    "IVP_ODE",                   // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo di_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    83,                       // lineNo
    34,                       // colNo
    "mem_bvp.mem_ys.mem_n0s", // aName
    "IVP_ODE",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo ei_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    93,                       // lineNo
    32,                       // colNo
    "mem_bvp.mem_ys.mem_R0s", // aName
    "IVP_ODE",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo fi_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    100,                      // lineNo
    30,                       // colNo
    "mem_bvp.mem_ys.mem_p0s", // aName
    "IVP_ODE",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo gi_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    76,                 // lineNo
    30,                 // colNo
    "vect_ind_iT",      // aName
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtDCInfo rq_emlrtDCI{
    76,                 // lineNo
    30,                 // colNo
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    1                            // checkKind
};

static emlrtBCInfo hi_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    90,                    // lineNo
    68,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "IVP_MaJ_Mem_curr",    // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ii_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    90,                    // lineNo
    71,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "IVP_MaJ_Mem_curr",    // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ji_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    117,                   // lineNo
    75,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "IVP_MaJ_Mem_curr",    // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ki_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    117,                   // lineNo
    77,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "IVP_MaJ_Mem_curr",    // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo li_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    155,                   // lineNo
    75,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "IVP_MaJ_Mem_curr",    // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo mi_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    155,                   // lineNo
    77,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "IVP_MaJ_Mem_curr",    // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ni_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    53,        // lineNo
    46,        // colNo
    "uz",      // aName
    "IVP_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo oi_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    53,                      // lineNo
    31,                      // colNo
    "mem_bvp.mem_ys.mem_ts", // aName
    "IVP_ODE",               // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo pi_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    53,                      // lineNo
    34,                      // colNo
    "mem_bvp.mem_ys.mem_ts", // aName
    "IVP_ODE",               // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo qi_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    174,                   // lineNo
    75,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "IVP_MaJ_Mem_curr",    // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo ri_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    174,                   // lineNo
    77,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "IVP_MaJ_Mem_curr",    // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo si_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    61,                    // lineNo
    68,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "IVP_ODE",             // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo ti_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    61,                    // lineNo
    71,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "IVP_ODE",             // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo ui_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    117,                                          // lineNo
    125,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_duzj0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo vi_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    117,                                          // lineNo
    127,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_duzj0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo wi_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    117,                                          // lineNo
    129,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_duzj0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo xi_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    155,                                          // lineNo
    125,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dm0j0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo yi_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    155,                                          // lineNo
    129,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dm0j0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo aj_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    174,                                          // lineNo
    125,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dn0j0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo bj_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    174,                                          // lineNo
    129,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dn0j0", // aName
    "IVP_MaJ_Mem_curr",                           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m", // pName
    0                            // checkKind
};

static emlrtBCInfo cj_emlrtBCI{
    -1,        // iFirst
    -1,        // iLast
    63,        // lineNo
    49,        // colNo
    "K",       // aName
    "IVP_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo dj_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    63,                       // lineNo
    32,                       // colNo
    "mem_bvp.mem_ys.mem_uzs", // aName
    "IVP_ODE",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtBCInfo ej_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    63,                       // lineNo
    35,                       // colNo
    "mem_bvp.mem_ys.mem_uzs", // aName
    "IVP_ODE",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m", // pName
    0                   // checkKind
};

static emlrtRTEInfo ad_emlrtRTEI{
    46,                 // lineNo
    36,                 // colNo
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m" // pName
};

static emlrtRTEInfo bd_emlrtRTEI{
    46,                 // lineNo
    59,                 // colNo
    "IVP_MaJ_Mem_curr", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem_curr.m" // pName
};

static emlrtRTEInfo cd_emlrtRTEI{
    44,        // lineNo
    18,        // colNo
    "IVP_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m" // pName
};

static emlrtRTEInfo dd_emlrtRTEI{
    44,        // lineNo
    41,        // colNo
    "IVP_ODE", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_ODE.m" // pName
};

// Function Definitions
void IVP_Int(const emlrtStack &sp, const CTCRConstruc *ctcr_construc,
             const CTCRCarac *ctcr_carac, MemBVP *mem_bvp,
             MemDerivPropagLow *mem_deriv_propag_low)
{
  static const int8_T b_iv[3]{0, 0, 1};
  coder::array<int32_T, 1U> ii;
  coder::array<boolean_T, 1U> r;
  coder::array<boolean_T, 1U> r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T R_tmp[9];
  real_T sum_Ki[9];
  int32_T i;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  //  ======================================================================= %
  //
  //  This function integrates the differential equations
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  ctcr_construc         : (class)   Robot features related to the model
  //  settings ctcr_carac            : (class)   Robot features simulation_param
  //  : (class)   Model settings mem_bvp               : (class)   Memory of the
  //  BVP variables mem_deriv_propag_low  : (class)   Memory of the low-level
  //  derivatives
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  mem_bvp               : (class)   Memory of the BVP variables
  //  mem_deriv_propag_low  : (class)   Memory of the low-level derivatives
  //
  //  ======================================================================= %
  i = static_cast<int32_T>(ctcr_construc->nbP);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_construc->nbP, mxDOUBLE_CLASS,
                                static_cast<int32_T>(ctcr_construc->nbP),
                                &w_emlrtRTEI, (emlrtConstCTX)&sp);
  for (int32_T is{0}; is < i; is++) {
    real_T b_sum_R_Kzi[3];
    real_T sum_R_Kzi[3];
    real_T b_R_tmp;
    real_T b_gamma;
    int32_T i1;
    int32_T i2;
    int32_T i3;
    int32_T loop_ub;
    st.site = &eb_emlrtRSI;
    //  =======================================================================
    //  %
    //
    //  This function computes the u0(s) values for the current is and the
    //  partial derivatives of u0(s) involved in the optimization Jacobian
    //  computation
    //
    //  ====================
    //  ====== INPUTS ======
    //
    //  is                    : (int ∊ [1 , nbP]) Index of the current
    //  curvilinear abscissa mem_bvp               : (class)           Memory of
    //  the BVP variables ctcr_carac            : (class)           Robot
    //  features ctcr_construc         : (class)           Robot features
    //  related to the model settings mem_deriv_propag_low  : (class) Memory of
    //  the low-level derivatives
    //
    //  ====================
    //  ===== OUTPUTS ======
    //
    //  mem_bvp               : (class)           Memory of the BVP variables
    //  mem_deriv_propag_low  : (class)           Memory of the low-level
    //  derivatives
    //
    //  =======================================================================
    //  %
    //  ========================================================== %
    //  ================== Getting input values ================== %
    i1 = mem_bvp->mem_y.mem_m0.size(1);
    if ((is + 1 < 1) || (is + 1 > i1)) {
      emlrtDynamicBoundsCheckR2012b(is + 1, 1, i1, &pf_emlrtBCI, &st);
    }
    //  ========================================================== %
    //  Vector of the tubes involved on the current discretization point
    loop_ub = ctcr_construc->vect_ind_iT.size(0);
    r.set_size(&ad_emlrtRTEI, &st, ctcr_construc->vect_ind_iT.size(0));
    r1.set_size(&bd_emlrtRTEI, &st, ctcr_construc->vect_ind_iT.size(0));
    for (i1 = 0; i1 < loop_ub; i1++) {
      r[i1] = (ctcr_construc->vect_ind_iT[i1] <= static_cast<real_T>(is) + 1.0);
      r1[i1] = (static_cast<real_T>(is) + 1.0 <=
                ctcr_construc
                    ->vect_ind_iT[i1 + ctcr_construc->vect_ind_iT.size(0) * 2]);
    }
    if (r.size(0) != r1.size(0)) {
      emlrtSizeEqCheck1DR2012b(r.size(0), r1.size(0), &d_emlrtECI, &st);
    }
    b_st.site = &ib_emlrtRSI;
    loop_ub = r.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r[i1] = (r[i1] && r1[i1]);
    }
    c_st.site = &jb_emlrtRSI;
    coder::eml_find(c_st, r, ii);
    //  Assembly of the rigid transform matrix
    i1 = mem_bvp->mem_y.mem_R0.size(2);
    if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
          &qf_emlrtBCI, &st);
    }
    i1 = mem_bvp->mem_y.mem_p0.size(1);
    if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
          &rf_emlrtBCI, &st);
    }
    i1 = mem_bvp->mem_T.size(2);
    if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
          &sf_emlrtBCI, &st);
    }
    for (i1 = 0; i1 < 3; i1++) {
      mem_bvp->mem_T[4 * i1 + 16 * is] = mem_bvp->mem_y.mem_R0[3 * i1 + 9 * is];
      mem_bvp->mem_T[(4 * i1 + 16 * is) + 1] =
          mem_bvp->mem_y.mem_R0[(3 * i1 + 9 * is) + 1];
      mem_bvp->mem_T[(4 * i1 + 16 * is) + 2] =
          mem_bvp->mem_y.mem_R0[(3 * i1 + 9 * is) + 2];
      mem_bvp->mem_T[(i1 + 16 * is) + 12] = mem_bvp->mem_y.mem_p0[i1 + 3 * is];
    }
    mem_bvp->mem_T[16 * is + 3] = 0.0;
    mem_bvp->mem_T[16 * is + 7] = 0.0;
    mem_bvp->mem_T[16 * is + 11] = 0.0;
    mem_bvp->mem_T[16 * is + 15] = 1.0;
    if (static_cast<real_T>(is) + 1.0 >= ctcr_construc->ind_origin) {
      real_T b;
      real_T d;
      int32_T i4;
      int8_T i5;
      int8_T i6;
      //  =================== u0(s) computation =================== %
      //  Equation (9)
      //  ======================================= %
      //  ========== Preparing Ki sum =========== %
      std::memset(&sum_Ki[0], 0, 9U * sizeof(real_T));
      i1 = ii.size(0);
      for (int32_T b_i{0}; b_i < i1; b_i++) {
        if (b_i + 1 > ii.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ii.size(0), &tf_emlrtBCI,
                                        &st);
        }
        if ((ii[b_i] < 1) || (ii[b_i] > ctcr_construc->K.size(2))) {
          emlrtDynamicBoundsCheckR2012b(ii[b_i], 1, ctcr_construc->K.size(2),
                                        &uf_emlrtBCI, &st);
        }
        for (i2 = 0; i2 < 3; i2++) {
          sum_Ki[3 * i2] += ctcr_construc->K[3 * i2 + 9 * (ii[b_i] - 1)];
          loop_ub = 3 * i2 + 1;
          sum_Ki[loop_ub] += ctcr_construc->K[(3 * i2 + 9 * (ii[b_i] - 1)) + 1];
          loop_ub = 3 * i2 + 2;
          sum_Ki[loop_ub] += ctcr_construc->K[(3 * i2 + 9 * (ii[b_i] - 1)) + 2];
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      sum_R_Kzi[0] = 1.0 / sum_Ki[0];
      sum_R_Kzi[1] = 1.0 / sum_Ki[4];
      sum_R_Kzi[2] = 1.0 / sum_Ki[8];
      std::memset(&sum_Ki[0], 0, 9U * sizeof(real_T));
      sum_Ki[0] = sum_R_Kzi[0];
      sum_Ki[4] = sum_R_Kzi[1];
      sum_Ki[8] = sum_R_Kzi[2];
      i1 = mem_bvp->mem_inv_sum_Ki.size(2);
      if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
            &vf_emlrtBCI, &st);
      }
      for (i1 = 0; i1 < 3; i1++) {
        mem_bvp->mem_inv_sum_Ki[3 * i1 + 9 * is] = sum_Ki[3 * i1];
        mem_bvp->mem_inv_sum_Ki[(3 * i1 + 9 * is) + 1] = sum_Ki[3 * i1 + 1];
        mem_bvp->mem_inv_sum_Ki[(3 * i1 + 9 * is) + 2] = sum_Ki[3 * i1 + 2];
      }
      if (ctcr_carac->nbT !=
          static_cast<int32_T>(muDoubleScalarFloor(ctcr_carac->nbT))) {
        emlrtIntegerCheckR2012b(ctcr_carac->nbT, &rq_emlrtDCI, &st);
      }
      i1 = static_cast<int32_T>(ctcr_carac->nbT);
      if ((i1 < 1) || (i1 > ctcr_construc->vect_ind_iT.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ctcr_carac->nbT), 1,
                                      ctcr_construc->vect_ind_iT.size(0),
                                      &gi_emlrtBCI, &st);
      }
      if (static_cast<real_T>(is) + 1.0 >=
          ctcr_construc->vect_ind_iT[(static_cast<int32_T>(ctcr_carac->nbT) +
                                      ctcr_construc->vect_ind_iT.size(0) * 2) -
                                     1]) {
        i2 = mem_bvp->mem_u0.size(1);
        if ((is < 1) || (is > i2)) {
          emlrtDynamicBoundsCheckR2012b(is, 1, i2, &wf_emlrtBCI, &st);
        }
        i2 = mem_bvp->mem_u0.size(1);
        if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
            (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
              &xf_emlrtBCI, &st);
        }
        sum_R_Kzi[1] = mem_bvp->mem_u0[3 * (is - 1) + 1];
        sum_R_Kzi[2] = mem_bvp->mem_u0[3 * (is - 1) + 2];
        mem_bvp->mem_u0[3 * is] = mem_bvp->mem_u0[3 * (is - 1)];
        mem_bvp->mem_u0[3 * is + 1] = sum_R_Kzi[1];
        mem_bvp->mem_u0[3 * is + 2] = sum_R_Kzi[2];
      } else {
        //  ======================================= %
        //  ====== Preparing the sum RziKiu* ====== %
        sum_R_Kzi[0] = 0.0;
        sum_R_Kzi[1] = 0.0;
        sum_R_Kzi[2] = 0.0;
        i2 = ii.size(0);
        if (i2 - 1 >= 0) {
          R_tmp[6] = 0.0;
          R_tmp[7] = 0.0;
          R_tmp[2] = 0.0;
          R_tmp[5] = 0.0;
          R_tmp[8] = 1.0;
        }
        for (int32_T b_i{0}; b_i < i2; b_i++) {
          if (b_i + 1 > ii.size(0)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ii.size(0), &yf_emlrtBCI,
                                          &st);
          }
          i3 = mem_bvp->mem_y.mem_t.size(0);
          if ((ii[b_i] < 1) || (ii[b_i] > i3)) {
            emlrtDynamicBoundsCheckR2012b(ii[b_i], 1, i3, &hi_emlrtBCI, &st);
          }
          i3 = mem_bvp->mem_y.mem_t.size(1);
          if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i3)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i3,
                &ii_emlrtBCI, &st);
          }
          b_gamma =
              mem_bvp->mem_y
                  .mem_t[(ii[b_i] + mem_bvp->mem_y.mem_t.size(0) * is) - 1];
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
          b_R_tmp = muDoubleScalarSin(b_gamma);
          b_gamma = muDoubleScalarCos(b_gamma);
          i3 = ii[b_i];
          if ((i3 < 1) || (i3 > ctcr_construc->K.size(2))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, ctcr_construc->K.size(2),
                                          &ag_emlrtBCI, &st);
          }
          if ((is + 1 < 1) || (is + 1 > ctcr_construc->ui_init.size(1))) {
            emlrtDynamicBoundsCheckR2012b(
                is + 1, 1, ctcr_construc->ui_init.size(1), &bg_emlrtBCI, &st);
          }
          i3 = ii[b_i];
          if ((i3 < 1) || (i3 > ctcr_construc->ui_init.size(2))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, ctcr_construc->ui_init.size(2),
                                          &cg_emlrtBCI, &st);
          }
          R_tmp[0] = b_gamma;
          R_tmp[3] = -b_R_tmp;
          R_tmp[1] = b_R_tmp;
          R_tmp[4] = b_gamma;
          for (i3 = 0; i3 < 3; i3++) {
            b_gamma = 0.0;
            b = R_tmp[i3];
            b_R_tmp = R_tmp[i3 + 3];
            i4 = static_cast<int32_T>(R_tmp[i3 + 6]);
            for (loop_ub = 0; loop_ub < 3; loop_ub++) {
              b_gamma +=
                  ((b * ctcr_construc->K[3 * loop_ub + 9 * (ii[b_i] - 1)] +
                    b_R_tmp * ctcr_construc
                                  ->K[(3 * loop_ub + 9 * (ii[b_i] - 1)) + 1]) +
                   static_cast<real_T>(i4) *
                       ctcr_construc
                           ->K[(3 * loop_ub + 9 * (ii[b_i] - 1)) + 2]) *
                  ctcr_construc->ui_init[(loop_ub + 3 * is) +
                                         3 * ctcr_construc->ui_init.size(1) *
                                             (ii[b_i] - 1)];
            }
            sum_R_Kzi[i3] += b_gamma;
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        i2 = mem_bvp->mem_inv_sum_Ki.size(2);
        if ((is + 1 < 1) || (is + 1 > i2)) {
          emlrtDynamicBoundsCheckR2012b(is + 1, 1, i2, &dg_emlrtBCI, &st);
        }
        b_sum_R_Kzi[0] = sum_R_Kzi[0] + mem_bvp->mem_y.mem_m0[3 * is];
        b_sum_R_Kzi[1] = sum_R_Kzi[1] + mem_bvp->mem_y.mem_m0[3 * is + 1];
        b_sum_R_Kzi[2] = sum_R_Kzi[2] + mem_bvp->mem_y.mem_m0[3 * is + 2];
        b_gamma = b_sum_R_Kzi[0];
        b = b_sum_R_Kzi[1];
        b_R_tmp = b_sum_R_Kzi[2];
        for (i2 = 0; i2 < 3; i2++) {
          sum_R_Kzi[i2] = (mem_bvp->mem_inv_sum_Ki[i2 + 9 * is] * b_gamma +
                           mem_bvp->mem_inv_sum_Ki[(i2 + 9 * is) + 3] * b) +
                          mem_bvp->mem_inv_sum_Ki[(i2 + 9 * is) + 6] * b_R_tmp;
        }
        i2 = mem_bvp->mem_u0.size(1);
        if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
            (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
              &eg_emlrtBCI, &st);
        }
        mem_bvp->mem_u0[3 * is] = sum_R_Kzi[0];
        mem_bvp->mem_u0[3 * is + 1] = sum_R_Kzi[1];
        mem_bvp->mem_u0[3 * is + 2] = 0.0;
      }
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
                                    static_cast<int32_T>(ctcr_carac->nbT),
                                    &x_emlrtRTEI, &st);
      for (loop_ub = 0; loop_ub < i1; loop_ub++) {
        //  ============================ %
        //  ======= du0(s)_duz(0) ====== %
        if (static_cast<real_T>(is) + 1.0 == ctcr_construc->nbP) {
          i2 = mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1);
          if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
               i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U), 1,
                i2, &fg_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(2);
          if ((is < 1) || (is > i2)) {
            emlrtDynamicBoundsCheckR2012b(is, 1, i2, &gg_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1);
          if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
               i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U), 1,
                i2, &hg_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(2);
          if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                &ig_emlrtBCI, &st);
          }
          b_sum_R_Kzi[1] =
              mem_deriv_propag_low->mem_du0.mem_du0_duzj0
                  [(3 * loop_ub +
                    3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                        (is - 1)) +
                   1];
          b_sum_R_Kzi[2] =
              mem_deriv_propag_low->mem_du0.mem_du0_duzj0
                  [(3 * loop_ub +
                    3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                        (is - 1)) +
                   2];
          mem_deriv_propag_low->mem_du0.mem_du0_duzj0
              [3 * loop_ub +
               3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) * is] =
              mem_deriv_propag_low->mem_du0.mem_du0_duzj0
                  [3 * loop_ub +
                   3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) *
                       (is - 1)];
          mem_deriv_propag_low->mem_du0.mem_du0_duzj0
              [(3 * loop_ub +
                3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) * is) +
               1] = b_sum_R_Kzi[1];
          mem_deriv_propag_low->mem_du0.mem_du0_duzj0
              [(3 * loop_ub +
                3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) * is) +
               2] = b_sum_R_Kzi[2];
        } else {
          sum_R_Kzi[0] = 0.0;
          sum_R_Kzi[1] = 0.0;
          sum_R_Kzi[2] = 0.0;
          i2 = ii.size(0);
          if (i2 - 1 >= 0) {
            R_tmp[6] = 0.0;
            R_tmp[7] = 0.0;
            R_tmp[2] = 0.0;
            R_tmp[5] = 0.0;
            R_tmp[8] = 1.0;
          }
          for (int32_T b_i{0}; b_i < i2; b_i++) {
            if (b_i + 1 > ii.size(0)) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ii.size(0),
                                            &jg_emlrtBCI, &st);
            }
            i3 = mem_bvp->mem_y.mem_t.size(0);
            if ((ii[b_i] < 1) || (ii[b_i] > i3)) {
              emlrtDynamicBoundsCheckR2012b(ii[b_i], 1, i3, &ji_emlrtBCI, &st);
            }
            i3 = mem_bvp->mem_y.mem_t.size(1);
            if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i3)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i3,
                  &ki_emlrtBCI, &st);
            }
            b_gamma =
                mem_bvp->mem_y
                    .mem_t[(ii[b_i] + mem_bvp->mem_y.mem_t.size(0) * is) - 1];
            //  =======================================================================
            //  %
            //
            //  This function produces a rotation matrix R, associated to an
            //  angle gamma, around the Z-direction
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
            b_R_tmp = muDoubleScalarSin(b_gamma);
            b_gamma = muDoubleScalarCos(b_gamma);
            i3 = mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0);
            if ((ii[b_i] < 1) || (ii[b_i] > i3)) {
              emlrtDynamicBoundsCheckR2012b(ii[b_i], 1, i3, &ui_emlrtBCI, &st);
            }
            i3 = mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1);
            if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) <
                 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
                 i3)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U), 1,
                  i3, &vi_emlrtBCI, &st);
            }
            i3 = mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2);
            if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i3)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i3,
                  &wi_emlrtBCI, &st);
            }
            b = mem_deriv_propag_low->mem_dti.mem_dti_duzj0
                    [((ii[b_i] +
                       mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0) *
                           loop_ub) +
                      mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0) *
                          mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1) *
                          is) -
                     1];
            i3 = ii[b_i];
            if ((i3 < 1) || (i3 > ctcr_construc->K.size(2))) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, ctcr_construc->K.size(2),
                                            &kg_emlrtBCI, &st);
            }
            if ((is + 1 < 1) || (is + 1 > ctcr_construc->ui_init.size(1))) {
              emlrtDynamicBoundsCheckR2012b(
                  is + 1, 1, ctcr_construc->ui_init.size(1), &lg_emlrtBCI, &st);
            }
            i3 = ii[b_i];
            if ((i3 < 1) || (i3 > ctcr_construc->ui_init.size(2))) {
              emlrtDynamicBoundsCheckR2012b(
                  i3, 1, ctcr_construc->ui_init.size(2), &mg_emlrtBCI, &st);
            }
            R_tmp[0] = b_gamma;
            R_tmp[3] = -b_R_tmp;
            R_tmp[1] = b_R_tmp;
            R_tmp[4] = b_gamma;
            for (i3 = 0; i3 < 3; i3++) {
              i5 = iv[i3];
              i6 = iv[i3 + 3];
              for (i4 = 0; i4 < 3; i4++) {
                sum_Ki[i3 + 3 * i4] =
                    (static_cast<real_T>(i5) * R_tmp[3 * i4] +
                     static_cast<real_T>(i6) * R_tmp[3 * i4 + 1]) +
                    0.0 * R_tmp[3 * i4 + 2];
              }
            }
            for (i3 = 0; i3 < 9; i3++) {
              sum_Ki[i3] *= b;
            }
            for (i3 = 0; i3 < 3; i3++) {
              b_gamma = 0.0;
              b = sum_Ki[i3];
              b_R_tmp = sum_Ki[i3 + 3];
              d = sum_Ki[i3 + 6];
              for (i4 = 0; i4 < 3; i4++) {
                b_gamma +=
                    ((b * ctcr_construc->K[3 * i4 + 9 * (ii[b_i] - 1)] +
                      b_R_tmp *
                          ctcr_construc->K[(3 * i4 + 9 * (ii[b_i] - 1)) + 1]) +
                     d * ctcr_construc->K[(3 * i4 + 9 * (ii[b_i] - 1)) + 2]) *
                    ctcr_construc->ui_init[(i4 + 3 * is) +
                                           3 * ctcr_construc->ui_init.size(1) *
                                               (ii[b_i] - 1)];
              }
              sum_R_Kzi[i3] += b_gamma;
            }
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
          i2 = mem_bvp->mem_inv_sum_Ki.size(2);
          if ((is + 1 < 1) || (is + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(is + 1, 1, i2, &ng_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1);
          if ((loop_ub + 1 < 1) || (loop_ub + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, i2, &og_emlrtBCI,
                                          &st);
          }
          i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(2);
          if ((is + 1 < 1) || (is + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(is + 1, 1, i2, &pg_emlrtBCI, &st);
          }
          b_sum_R_Kzi[0] =
              sum_R_Kzi[0] +
              mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0
                  [3 * loop_ub +
                   3 * mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) *
                       is];
          b_sum_R_Kzi[1] =
              sum_R_Kzi[1] +
              mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0
                  [(3 * loop_ub +
                    3 * mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) *
                        is) +
                   1];
          b_sum_R_Kzi[2] =
              sum_R_Kzi[2] +
              mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0
                  [(3 * loop_ub +
                    3 * mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) *
                        is) +
                   2];
          b_gamma = b_sum_R_Kzi[0];
          b = b_sum_R_Kzi[1];
          b_R_tmp = b_sum_R_Kzi[2];
          for (i2 = 0; i2 < 3; i2++) {
            sum_R_Kzi[i2] =
                (mem_bvp->mem_inv_sum_Ki[i2 + 9 * is] * b_gamma +
                 mem_bvp->mem_inv_sum_Ki[(i2 + 9 * is) + 3] * b) +
                mem_bvp->mem_inv_sum_Ki[(i2 + 9 * is) + 6] * b_R_tmp;
          }
          i2 = mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1);
          if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
               i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U), 1,
                i2, &qg_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(2);
          if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                &rg_emlrtBCI, &st);
          }
          mem_deriv_propag_low->mem_du0.mem_du0_duzj0
              [3 * loop_ub +
               3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) * is] =
              sum_R_Kzi[0];
          mem_deriv_propag_low->mem_du0.mem_du0_duzj0
              [(3 * loop_ub +
                3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) * is) +
               1] = sum_R_Kzi[1];
          mem_deriv_propag_low->mem_du0.mem_du0_duzj0
              [(3 * loop_ub +
                3 * mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1) * is) +
               2] = 0.0;
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        if (static_cast<real_T>(is) + 1.0 == ctcr_construc->nbP) {
          //  ============================ %
          //  ====== du0(s)_dm0(0) ======= %
          i1 = mem_deriv_propag_low->mem_du0.mem_du0_dm0j0.size(2);
          if ((is < 1) || (is > i1)) {
            emlrtDynamicBoundsCheckR2012b(is, 1, i1, &sg_emlrtBCI, &st);
          }
          i1 = mem_deriv_propag_low->mem_du0.mem_du0_dm0j0.size(2);
          if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
                &tg_emlrtBCI, &st);
          }
          b_sum_R_Kzi[1] = mem_deriv_propag_low->mem_du0
                               .mem_du0_dm0j0[(3 * loop_ub + 9 * (is - 1)) + 1];
          b_sum_R_Kzi[2] = mem_deriv_propag_low->mem_du0
                               .mem_du0_dm0j0[(3 * loop_ub + 9 * (is - 1)) + 2];
          mem_deriv_propag_low->mem_du0.mem_du0_dm0j0[3 * loop_ub + 9 * is] =
              mem_deriv_propag_low->mem_du0
                  .mem_du0_dm0j0[3 * loop_ub + 9 * (is - 1)];
          mem_deriv_propag_low->mem_du0
              .mem_du0_dm0j0[(3 * loop_ub + 9 * is) + 1] = b_sum_R_Kzi[1];
          mem_deriv_propag_low->mem_du0
              .mem_du0_dm0j0[(3 * loop_ub + 9 * is) + 2] = b_sum_R_Kzi[2];
          //  ============================ %
          //  ====== du0(s)_dn0(0) ======= %
          i1 = mem_deriv_propag_low->mem_du0.mem_du0_dn0j0.size(2);
          if (is > i1) {
            emlrtDynamicBoundsCheckR2012b(is, 1, i1, &ug_emlrtBCI, &st);
          }
          i1 = mem_deriv_propag_low->mem_du0.mem_du0_dn0j0.size(2);
          if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
                &vg_emlrtBCI, &st);
          }
          b_sum_R_Kzi[1] = mem_deriv_propag_low->mem_du0
                               .mem_du0_dn0j0[(3 * loop_ub + 9 * (is - 1)) + 1];
          b_sum_R_Kzi[2] = mem_deriv_propag_low->mem_du0
                               .mem_du0_dn0j0[(3 * loop_ub + 9 * (is - 1)) + 2];
          mem_deriv_propag_low->mem_du0.mem_du0_dn0j0[3 * loop_ub + 9 * is] =
              mem_deriv_propag_low->mem_du0
                  .mem_du0_dn0j0[3 * loop_ub + 9 * (is - 1)];
          mem_deriv_propag_low->mem_du0
              .mem_du0_dn0j0[(3 * loop_ub + 9 * is) + 1] = b_sum_R_Kzi[1];
          mem_deriv_propag_low->mem_du0
              .mem_du0_dn0j0[(3 * loop_ub + 9 * is) + 2] = b_sum_R_Kzi[2];
        } else {
          //  ============================ %
          //  ====== du0(s)_dm0(0) ======= %
          sum_R_Kzi[0] = 0.0;
          sum_R_Kzi[1] = 0.0;
          sum_R_Kzi[2] = 0.0;
          i1 = ii.size(0);
          if (i1 - 1 >= 0) {
            R_tmp[6] = 0.0;
            R_tmp[7] = 0.0;
            R_tmp[2] = 0.0;
            R_tmp[5] = 0.0;
            R_tmp[8] = 1.0;
          }
          for (int32_T b_i{0}; b_i < i1; b_i++) {
            if (b_i + 1 > ii.size(0)) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ii.size(0),
                                            &wg_emlrtBCI, &st);
            }
            i2 = mem_bvp->mem_y.mem_t.size(0);
            if ((ii[b_i] < 1) || (ii[b_i] > i2)) {
              emlrtDynamicBoundsCheckR2012b(ii[b_i], 1, i2, &li_emlrtBCI, &st);
            }
            i2 = mem_bvp->mem_y.mem_t.size(1);
            if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                  &mi_emlrtBCI, &st);
            }
            b_gamma =
                mem_bvp->mem_y
                    .mem_t[(ii[b_i] + mem_bvp->mem_y.mem_t.size(0) * is) - 1];
            //  =======================================================================
            //  %
            //
            //  This function produces a rotation matrix R, associated to an
            //  angle gamma, around the Z-direction
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
            b_R_tmp = muDoubleScalarSin(b_gamma);
            b_gamma = muDoubleScalarCos(b_gamma);
            i2 = mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0);
            if ((ii[b_i] < 1) || (ii[b_i] > i2)) {
              emlrtDynamicBoundsCheckR2012b(ii[b_i], 1, i2, &xi_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(2);
            if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                  &yi_emlrtBCI, &st);
            }
            b = mem_deriv_propag_low->mem_dti.mem_dti_dm0j0
                    [((ii[b_i] +
                       mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0) *
                           loop_ub) +
                      mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0) * 3 *
                          is) -
                     1];
            i2 = ii[b_i];
            if ((i2 < 1) || (i2 > ctcr_construc->K.size(2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->K.size(2),
                                            &xg_emlrtBCI, &st);
            }
            if ((is + 1 < 1) || (is + 1 > ctcr_construc->ui_init.size(1))) {
              emlrtDynamicBoundsCheckR2012b(
                  is + 1, 1, ctcr_construc->ui_init.size(1), &yg_emlrtBCI, &st);
            }
            i2 = ii[b_i];
            if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
              emlrtDynamicBoundsCheckR2012b(
                  i2, 1, ctcr_construc->ui_init.size(2), &ah_emlrtBCI, &st);
            }
            R_tmp[0] = b_gamma;
            R_tmp[3] = -b_R_tmp;
            R_tmp[1] = b_R_tmp;
            R_tmp[4] = b_gamma;
            for (i2 = 0; i2 < 3; i2++) {
              i5 = iv[i2];
              i6 = iv[i2 + 3];
              for (i3 = 0; i3 < 3; i3++) {
                sum_Ki[i2 + 3 * i3] =
                    (static_cast<real_T>(i5) * R_tmp[3 * i3] +
                     static_cast<real_T>(i6) * R_tmp[3 * i3 + 1]) +
                    0.0 * R_tmp[3 * i3 + 2];
              }
            }
            for (i2 = 0; i2 < 9; i2++) {
              sum_Ki[i2] *= b;
            }
            for (i2 = 0; i2 < 3; i2++) {
              b_gamma = 0.0;
              b = sum_Ki[i2];
              b_R_tmp = sum_Ki[i2 + 3];
              d = sum_Ki[i2 + 6];
              for (i3 = 0; i3 < 3; i3++) {
                b_gamma +=
                    ((b * ctcr_construc->K[3 * i3 + 9 * (ii[b_i] - 1)] +
                      b_R_tmp *
                          ctcr_construc->K[(3 * i3 + 9 * (ii[b_i] - 1)) + 1]) +
                     d * ctcr_construc->K[(3 * i3 + 9 * (ii[b_i] - 1)) + 2]) *
                    ctcr_construc->ui_init[(i3 + 3 * is) +
                                           3 * ctcr_construc->ui_init.size(1) *
                                               (ii[b_i] - 1)];
              }
              sum_R_Kzi[i2] += b_gamma;
            }
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
          i1 = mem_bvp->mem_inv_sum_Ki.size(2);
          if ((is + 1 < 1) || (is + 1 > i1)) {
            emlrtDynamicBoundsCheckR2012b(is + 1, 1, i1, &bh_emlrtBCI, &st);
          }
          i1 = mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0.size(2);
          if ((is + 1 < 1) || (is + 1 > i1)) {
            emlrtDynamicBoundsCheckR2012b(is + 1, 1, i1, &ch_emlrtBCI, &st);
          }
          b_sum_R_Kzi[0] =
              sum_R_Kzi[0] +
              mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0[3 * loop_ub + 9 * is];
          b_sum_R_Kzi[1] =
              sum_R_Kzi[1] + mem_deriv_propag_low->mem_dm0
                                 .mem_dm0_dm0j0[(3 * loop_ub + 9 * is) + 1];
          b_sum_R_Kzi[2] =
              sum_R_Kzi[2] + mem_deriv_propag_low->mem_dm0
                                 .mem_dm0_dm0j0[(3 * loop_ub + 9 * is) + 2];
          b_gamma = b_sum_R_Kzi[0];
          b = b_sum_R_Kzi[1];
          b_R_tmp = b_sum_R_Kzi[2];
          for (i1 = 0; i1 < 3; i1++) {
            sum_R_Kzi[i1] =
                (mem_bvp->mem_inv_sum_Ki[i1 + 9 * is] * b_gamma +
                 mem_bvp->mem_inv_sum_Ki[(i1 + 9 * is) + 3] * b) +
                mem_bvp->mem_inv_sum_Ki[(i1 + 9 * is) + 6] * b_R_tmp;
          }
          i1 = mem_deriv_propag_low->mem_du0.mem_du0_dm0j0.size(2);
          if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
                &dh_emlrtBCI, &st);
          }
          mem_deriv_propag_low->mem_du0.mem_du0_dm0j0[3 * loop_ub + 9 * is] =
              sum_R_Kzi[0];
          mem_deriv_propag_low->mem_du0
              .mem_du0_dm0j0[(3 * loop_ub + 9 * is) + 1] = sum_R_Kzi[1];
          mem_deriv_propag_low->mem_du0
              .mem_du0_dm0j0[(3 * loop_ub + 9 * is) + 2] = 0.0;
          //  ============================ %
          //  ====== du0(s)_dn0(0) ======= %
          sum_R_Kzi[0] = 0.0;
          sum_R_Kzi[1] = 0.0;
          sum_R_Kzi[2] = 0.0;
          i1 = ii.size(0);
          if (i1 - 1 >= 0) {
            R_tmp[6] = 0.0;
            R_tmp[7] = 0.0;
            R_tmp[2] = 0.0;
            R_tmp[5] = 0.0;
            R_tmp[8] = 1.0;
          }
          for (int32_T b_i{0}; b_i < i1; b_i++) {
            if (b_i + 1 > ii.size(0)) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ii.size(0),
                                            &eh_emlrtBCI, &st);
            }
            i2 = mem_bvp->mem_y.mem_t.size(0);
            if ((ii[b_i] < 1) || (ii[b_i] > i2)) {
              emlrtDynamicBoundsCheckR2012b(ii[b_i], 1, i2, &qi_emlrtBCI, &st);
            }
            i2 = mem_bvp->mem_y.mem_t.size(1);
            if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                  &ri_emlrtBCI, &st);
            }
            b_gamma =
                mem_bvp->mem_y
                    .mem_t[(ii[b_i] + mem_bvp->mem_y.mem_t.size(0) * is) - 1];
            //  =======================================================================
            //  %
            //
            //  This function produces a rotation matrix R, associated to an
            //  angle gamma, around the Z-direction
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
            b_R_tmp = muDoubleScalarSin(b_gamma);
            b_gamma = muDoubleScalarCos(b_gamma);
            i2 = mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0);
            if ((ii[b_i] < 1) || (ii[b_i] > i2)) {
              emlrtDynamicBoundsCheckR2012b(ii[b_i], 1, i2, &aj_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(2);
            if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                  &bj_emlrtBCI, &st);
            }
            b = mem_deriv_propag_low->mem_dti.mem_dti_dn0j0
                    [((ii[b_i] +
                       mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0) *
                           loop_ub) +
                      mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0) * 3 *
                          is) -
                     1];
            i2 = ii[b_i];
            if ((i2 < 1) || (i2 > ctcr_construc->K.size(2))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->K.size(2),
                                            &fh_emlrtBCI, &st);
            }
            if ((is + 1 < 1) || (is + 1 > ctcr_construc->ui_init.size(1))) {
              emlrtDynamicBoundsCheckR2012b(
                  is + 1, 1, ctcr_construc->ui_init.size(1), &gh_emlrtBCI, &st);
            }
            i2 = ii[b_i];
            if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
              emlrtDynamicBoundsCheckR2012b(
                  i2, 1, ctcr_construc->ui_init.size(2), &hh_emlrtBCI, &st);
            }
            R_tmp[0] = b_gamma;
            R_tmp[3] = -b_R_tmp;
            R_tmp[1] = b_R_tmp;
            R_tmp[4] = b_gamma;
            for (i2 = 0; i2 < 3; i2++) {
              i5 = iv[i2];
              i6 = iv[i2 + 3];
              for (i3 = 0; i3 < 3; i3++) {
                sum_Ki[i2 + 3 * i3] =
                    (static_cast<real_T>(i5) * R_tmp[3 * i3] +
                     static_cast<real_T>(i6) * R_tmp[3 * i3 + 1]) +
                    0.0 * R_tmp[3 * i3 + 2];
              }
            }
            for (i2 = 0; i2 < 9; i2++) {
              sum_Ki[i2] *= b;
            }
            for (i2 = 0; i2 < 3; i2++) {
              b_gamma = 0.0;
              b = sum_Ki[i2];
              b_R_tmp = sum_Ki[i2 + 3];
              d = sum_Ki[i2 + 6];
              for (i3 = 0; i3 < 3; i3++) {
                b_gamma +=
                    ((b * ctcr_construc->K[3 * i3 + 9 * (ii[b_i] - 1)] +
                      b_R_tmp *
                          ctcr_construc->K[(3 * i3 + 9 * (ii[b_i] - 1)) + 1]) +
                     d * ctcr_construc->K[(3 * i3 + 9 * (ii[b_i] - 1)) + 2]) *
                    ctcr_construc->ui_init[(i3 + 3 * is) +
                                           3 * ctcr_construc->ui_init.size(1) *
                                               (ii[b_i] - 1)];
              }
              sum_R_Kzi[i2] += b_gamma;
            }
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
          i1 = mem_bvp->mem_inv_sum_Ki.size(2);
          if ((is + 1 < 1) || (is + 1 > i1)) {
            emlrtDynamicBoundsCheckR2012b(is + 1, 1, i1, &ih_emlrtBCI, &st);
          }
          i1 = mem_deriv_propag_low->mem_dm0.mem_dm0_dn0j0.size(2);
          if ((is + 1 < 1) || (is + 1 > i1)) {
            emlrtDynamicBoundsCheckR2012b(is + 1, 1, i1, &jh_emlrtBCI, &st);
          }
          b_sum_R_Kzi[0] =
              sum_R_Kzi[0] +
              mem_deriv_propag_low->mem_dm0.mem_dm0_dn0j0[3 * loop_ub + 9 * is];
          b_sum_R_Kzi[1] =
              sum_R_Kzi[1] + mem_deriv_propag_low->mem_dm0
                                 .mem_dm0_dn0j0[(3 * loop_ub + 9 * is) + 1];
          b_sum_R_Kzi[2] =
              sum_R_Kzi[2] + mem_deriv_propag_low->mem_dm0
                                 .mem_dm0_dn0j0[(3 * loop_ub + 9 * is) + 2];
          b_gamma = b_sum_R_Kzi[0];
          b = b_sum_R_Kzi[1];
          b_R_tmp = b_sum_R_Kzi[2];
          for (i1 = 0; i1 < 3; i1++) {
            sum_R_Kzi[i1] =
                (mem_bvp->mem_inv_sum_Ki[i1 + 9 * is] * b_gamma +
                 mem_bvp->mem_inv_sum_Ki[(i1 + 9 * is) + 3] * b) +
                mem_bvp->mem_inv_sum_Ki[(i1 + 9 * is) + 6] * b_R_tmp;
          }
          i1 = mem_deriv_propag_low->mem_du0.mem_du0_dn0j0.size(2);
          if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
                &kh_emlrtBCI, &st);
          }
          mem_deriv_propag_low->mem_du0.mem_du0_dn0j0[3 * loop_ub + 9 * is] =
              sum_R_Kzi[0];
          mem_deriv_propag_low->mem_du0
              .mem_du0_dn0j0[(3 * loop_ub + 9 * is) + 1] = sum_R_Kzi[1];
          mem_deriv_propag_low->mem_du0
              .mem_du0_dn0j0[(3 * loop_ub + 9 * is) + 2] = 0.0;
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
    }
    st.site = &fb_emlrtRSI;
    //  =======================================================================
    //  %
    //
    //  This function computes the state vector ODE
    //
    //  ====================
    //  ====== INPUTS ======
    //
    //  is                    : (int ∊ [1 , nbP])   Index of the current
    //  curvilinear abscissa ctcr_construc         : (class)             Robot
    //  features related to the model settings mem_bvp               : (class)
    //  Memory of the BVP variables
    //
    //  ====================
    //  ===== OUTPUTS ======
    //
    //  mem_bvp               : (class)             Memory of the BVP variables
    //
    //  =======================================================================
    //  %
    //  ========================================================== %
    //  ================== Getting input values ================== %
    i1 = mem_bvp->mem_y.mem_uz.size(1);
    if ((is + 1 < 1) || (is + 1 > i1)) {
      emlrtDynamicBoundsCheckR2012b(is + 1, 1, i1, &lh_emlrtBCI, &st);
    }
    i1 = mem_bvp->mem_y.mem_m0.size(1);
    if ((is + 1 < 1) || (is + 1 > i1)) {
      emlrtDynamicBoundsCheckR2012b(is + 1, 1, i1, &mh_emlrtBCI, &st);
    }
    i1 = mem_bvp->mem_y.mem_n0.size(1);
    if ((is + 1 < 1) || (is + 1 > i1)) {
      emlrtDynamicBoundsCheckR2012b(is + 1, 1, i1, &nh_emlrtBCI, &st);
    }
    i1 = mem_bvp->mem_u0.size(1);
    if ((is + 1 < 1) || (is + 1 > i1)) {
      emlrtDynamicBoundsCheckR2012b(is + 1, 1, i1, &oh_emlrtBCI, &st);
    }
    i1 = mem_bvp->mem_y.mem_R0.size(2);
    if ((is + 1 < 1) || (is + 1 > i1)) {
      emlrtDynamicBoundsCheckR2012b(is + 1, 1, i1, &ph_emlrtBCI, &st);
    }
    //  ========================================================== %
    //  Vector of the tubes involved on the current discretization point
    loop_ub = ctcr_construc->vect_ind_iT.size(0);
    r.set_size(&cd_emlrtRTEI, &st, ctcr_construc->vect_ind_iT.size(0));
    r1.set_size(&dd_emlrtRTEI, &st, ctcr_construc->vect_ind_iT.size(0));
    for (i1 = 0; i1 < loop_ub; i1++) {
      r[i1] = (ctcr_construc->vect_ind_iT[i1] <= static_cast<real_T>(is) + 1.0);
      r1[i1] = (static_cast<real_T>(is) + 1.0 <=
                ctcr_construc
                    ->vect_ind_iT[i1 + ctcr_construc->vect_ind_iT.size(0) * 2]);
    }
    if (r.size(0) != r1.size(0)) {
      emlrtSizeEqCheck1DR2012b(r.size(0), r1.size(0), &e_emlrtECI, &st);
    }
    b_st.site = &ob_emlrtRSI;
    loop_ub = r.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r[i1] = (r[i1] && r1[i1]);
    }
    c_st.site = &jb_emlrtRSI;
    coder::eml_find(c_st, r, ii);
    i1 = ii.size(0);
    for (int32_T b_i{0}; b_i < i1; b_i++) {
      if (b_i + 1 > ii.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ii.size(0), &qh_emlrtBCI,
                                      &st);
      }
      //  ================== %
      //  ===== dti_ds ===== %
      //  (eq 26a)
      i2 = mem_bvp->mem_y.mem_uz.size(0);
      if ((ii[b_i] < 1) || (ii[b_i] > i2)) {
        emlrtDynamicBoundsCheckR2012b(ii[b_i], 1, i2, &ni_emlrtBCI, &st);
      }
      i2 = mem_bvp->mem_ys.mem_ts.size(0);
      if ((ii[b_i] < 1) || (ii[b_i] > i2)) {
        emlrtDynamicBoundsCheckR2012b(ii[b_i], 1, i2, &oi_emlrtBCI, &st);
      }
      i2 = mem_bvp->mem_ys.mem_ts.size(1);
      if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
            &pi_emlrtBCI, &st);
      }
      mem_bvp->mem_ys
          .mem_ts[(ii[b_i] + mem_bvp->mem_ys.mem_ts.size(0) * is) - 1] =
          mem_bvp->mem_y
              .mem_uz[(ii[b_i] + mem_bvp->mem_y.mem_uz.size(0) * is) - 1];
      //  ================== %
      //  ===== duzi_ds ==== %
      //  (eq 26b)
      i2 = mem_bvp->mem_y.mem_t.size(0);
      if ((ii[b_i] < 1) || (ii[b_i] > i2)) {
        emlrtDynamicBoundsCheckR2012b(ii[b_i], 1, i2, &si_emlrtBCI, &st);
      }
      i2 = mem_bvp->mem_y.mem_t.size(1);
      if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
            &ti_emlrtBCI, &st);
      }
      b_gamma = mem_bvp->mem_y
                    .mem_t[(ii[b_i] + mem_bvp->mem_y.mem_t.size(0) * is) - 1];
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
      b_R_tmp = muDoubleScalarSin(b_gamma);
      b_gamma = muDoubleScalarCos(b_gamma);
      R_tmp[0] = b_gamma;
      R_tmp[1] = -b_R_tmp;
      R_tmp[2] = 0.0;
      R_tmp[3] = b_R_tmp;
      R_tmp[4] = b_gamma;
      R_tmp[5] = 0.0;
      for (i2 = 0; i2 < 3; i2++) {
        i3 = b_iv[i2];
        R_tmp[i2 + 6] = i3;
        b_sum_R_Kzi[i2] = (R_tmp[i2] * mem_bvp->mem_u0[3 * is] +
                           R_tmp[i2 + 3] * mem_bvp->mem_u0[3 * is + 1]) +
                          static_cast<real_T>(i3) * mem_bvp->mem_u0[3 * is + 2];
      }
      i2 = mem_bvp->mem_uixy.size(1);
      if ((ii[b_i] < 1) || (ii[b_i] > i2)) {
        emlrtDynamicBoundsCheckR2012b(ii[b_i], 1, i2, &rh_emlrtBCI, &st);
      }
      i2 = mem_bvp->mem_uixy.size(2);
      if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
            &sh_emlrtBCI, &st);
      }
      mem_bvp
          ->mem_uixy[2 * (ii[b_i] - 1) + 2 * mem_bvp->mem_uixy.size(1) * is] =
          b_sum_R_Kzi[0];
      mem_bvp
          ->mem_uixy[(2 * (ii[b_i] - 1) + 2 * mem_bvp->mem_uixy.size(1) * is) +
                     1] = b_sum_R_Kzi[1];
      i2 = mem_bvp->mem_uixy.size(1);
      i3 = ii[b_i];
      if ((i3 < 1) || (i3 > i2)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &th_emlrtBCI, &st);
      }
      i2 = mem_bvp->mem_uixy.size(2);
      if ((is + 1 < 1) || (is + 1 > i2)) {
        emlrtDynamicBoundsCheckR2012b(is + 1, 1, i2, &uh_emlrtBCI, &st);
      }
      if ((is + 1 < 1) || (is + 1 > ctcr_construc->ui_init.size(1))) {
        emlrtDynamicBoundsCheckR2012b(is + 1, 1, ctcr_construc->ui_init.size(1),
                                      &vh_emlrtBCI, &st);
      }
      i2 = ii[b_i];
      if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size(2),
                                      &wh_emlrtBCI, &st);
      }
      if ((is + 1 < 1) || (is + 1 > ctcr_construc->ui_init.size(1))) {
        emlrtDynamicBoundsCheckR2012b(is + 1, 1, ctcr_construc->ui_init.size(1),
                                      &xh_emlrtBCI, &st);
      }
      i2 = ii[b_i];
      if ((i2 < 1) || (i2 > ctcr_construc->ui_init.size(2))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, ctcr_construc->ui_init.size(2),
                                      &yh_emlrtBCI, &st);
      }
      if ((ii[b_i] < 1) || (ii[b_i] > ctcr_construc->K.size(2))) {
        emlrtDynamicBoundsCheckR2012b(ii[b_i], 1, ctcr_construc->K.size(2),
                                      &cj_emlrtBCI, &st);
      }
      i2 = mem_bvp->mem_ys.mem_uzs.size(0);
      if ((ii[b_i] < 1) || (ii[b_i] > i2)) {
        emlrtDynamicBoundsCheckR2012b(ii[b_i], 1, i2, &dj_emlrtBCI, &st);
      }
      i2 = mem_bvp->mem_ys.mem_uzs.size(1);
      if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
            &ej_emlrtBCI, &st);
      }
      mem_bvp->mem_ys
          .mem_uzs[(ii[b_i] + mem_bvp->mem_ys.mem_uzs.size(0) * is) - 1] =
          ctcr_construc->K[9 * (ii[b_i] - 1)] /
          ctcr_construc->K[9 * (ii[b_i] - 1) + 8] *
          (mem_bvp->mem_uixy[2 * (ii[b_i] - 1) +
                             2 * mem_bvp->mem_uixy.size(1) * is] *
               ctcr_construc
                   ->ui_init[(3 * is + 3 * ctcr_construc->ui_init.size(1) *
                                           (ii[b_i] - 1)) +
                             1] +
           mem_bvp->mem_uixy[(2 * (ii[b_i] - 1) +
                              2 * mem_bvp->mem_uixy.size(1) * is) +
                             1] *
               -ctcr_construc
                    ->ui_init[3 * is + 3 * ctcr_construc->ui_init.size(1) *
                                           (ii[b_i] - 1)]);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    if ((static_cast<real_T>(is) + 1.0 >= ctcr_construc->ind_origin) &&
        (!(static_cast<real_T>(is) + 1.0 == ctcr_construc->nbP))) {
      //  ================== %
      //  ===== dm0_ds ===== %
      //  (eq 26c)
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
      sum_Ki[0] = 0.0;
      sum_Ki[3] = -mem_bvp->mem_u0[3 * is + 2];
      sum_Ki[6] = mem_bvp->mem_u0[3 * is + 1];
      sum_Ki[1] = mem_bvp->mem_u0[3 * is + 2];
      sum_Ki[4] = 0.0;
      sum_Ki[7] = -mem_bvp->mem_u0[3 * is];
      sum_Ki[2] = -mem_bvp->mem_u0[3 * is + 1];
      sum_Ki[5] = mem_bvp->mem_u0[3 * is];
      sum_Ki[8] = 0.0;
      if ((is + 1 < 1) || (is + 1 > ctcr_construc->vect_tau_dist.size(1))) {
        emlrtDynamicBoundsCheckR2012b(
            is + 1, 1, ctcr_construc->vect_tau_dist.size(1), &ai_emlrtBCI, &st);
      }
      for (i1 = 0; i1 < 3; i1++) {
        R_tmp[3 * i1] = mem_bvp->mem_y.mem_R0[i1 + 9 * is];
        R_tmp[3 * i1 + 1] = mem_bvp->mem_y.mem_R0[(i1 + 9 * is) + 3];
        R_tmp[3 * i1 + 2] = mem_bvp->mem_y.mem_R0[(i1 + 9 * is) + 6];
        b_sum_R_Kzi[i1] =
            (static_cast<real_T>(iv[i1]) * mem_bvp->mem_y.mem_n0[3 * is] +
             static_cast<real_T>(iv[i1 + 3]) *
                 mem_bvp->mem_y.mem_n0[3 * is + 1]) +
            0.0 * mem_bvp->mem_y.mem_n0[3 * is + 2];
        sum_R_Kzi[i1] = (sum_Ki[i1] * mem_bvp->mem_y.mem_m0[3 * is] +
                         sum_Ki[i1 + 3] * mem_bvp->mem_y.mem_m0[3 * is + 1]) +
                        sum_Ki[i1 + 6] * mem_bvp->mem_y.mem_m0[3 * is + 2];
      }
      i1 = mem_bvp->mem_ys.mem_m0s.size(1);
      if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
            &bi_emlrtBCI, &st);
      }
      for (i1 = 0; i1 < 3; i1++) {
        mem_bvp->mem_ys.mem_m0s[i1 + 3 * is] =
            (sum_R_Kzi[i1] - b_sum_R_Kzi[i1]) -
            ((R_tmp[i1] * ctcr_construc->vect_tau_dist[3 * is] +
              R_tmp[i1 + 3] * ctcr_construc->vect_tau_dist[3 * is + 1]) +
             R_tmp[i1 + 6] * ctcr_construc->vect_tau_dist[3 * is + 2]);
      }
      //  ================== %
      //  ===== dn0_ds ===== %
      //  (eq 26d)
      if ((is + 1 < 1) || (is + 1 > ctcr_construc->vect_f_dist.size(1))) {
        emlrtDynamicBoundsCheckR2012b(
            is + 1, 1, ctcr_construc->vect_f_dist.size(1), &ci_emlrtBCI, &st);
      }
      for (i1 = 0; i1 < 3; i1++) {
        b_sum_R_Kzi[i1] =
            (R_tmp[i1] * ctcr_construc->vect_f_dist[3 * is] +
             R_tmp[i1 + 3] * ctcr_construc->vect_f_dist[3 * is + 1]) +
            R_tmp[i1 + 6] * ctcr_construc->vect_f_dist[3 * is + 2];
        sum_R_Kzi[i1] = (sum_Ki[i1] * mem_bvp->mem_y.mem_n0[3 * is] +
                         sum_Ki[i1 + 3] * mem_bvp->mem_y.mem_n0[3 * is + 1]) +
                        sum_Ki[i1 + 6] * mem_bvp->mem_y.mem_n0[3 * is + 2];
      }
      i1 = mem_bvp->mem_ys.mem_n0s.size(1);
      if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
            &di_emlrtBCI, &st);
      }
      mem_bvp->mem_ys.mem_n0s[3 * is] = sum_R_Kzi[0] - b_sum_R_Kzi[0];
      mem_bvp->mem_ys.mem_n0s[3 * is + 1] = sum_R_Kzi[1] - b_sum_R_Kzi[1];
      mem_bvp->mem_ys.mem_n0s[3 * is + 2] = sum_R_Kzi[2] - b_sum_R_Kzi[2];
    }
    //  ================== %
    //  ===== dR0_ds ===== %
    //  (eq 26e)
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
    sum_Ki[0] = 0.0;
    sum_Ki[3] = -mem_bvp->mem_u0[3 * is + 2];
    sum_Ki[6] = mem_bvp->mem_u0[3 * is + 1];
    sum_Ki[1] = mem_bvp->mem_u0[3 * is + 2];
    sum_Ki[4] = 0.0;
    sum_Ki[7] = -mem_bvp->mem_u0[3 * is];
    sum_Ki[2] = -mem_bvp->mem_u0[3 * is + 1];
    sum_Ki[5] = mem_bvp->mem_u0[3 * is];
    sum_Ki[8] = 0.0;
    i1 = mem_bvp->mem_ys.mem_R0s.size(2);
    if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
          &ei_emlrtBCI, &st);
    }
    for (i1 = 0; i1 < 3; i1++) {
      for (i2 = 0; i2 < 3; i2++) {
        mem_bvp->mem_ys.mem_R0s[(i1 + 3 * i2) + 9 * is] = 0.0;
        mem_bvp->mem_ys.mem_R0s[(i1 + 3 * i2) + 9 * is] =
            mem_bvp->mem_ys.mem_R0s[(i1 + 3 * i2) + 9 * is] +
            mem_bvp->mem_y.mem_R0[i1 + 9 * is] * sum_Ki[3 * i2];
        mem_bvp->mem_ys.mem_R0s[(i1 + 3 * i2) + 9 * is] =
            mem_bvp->mem_ys.mem_R0s[(i1 + 3 * i2) + 9 * is] +
            mem_bvp->mem_y.mem_R0[(i1 + 9 * is) + 3] * sum_Ki[3 * i2 + 1];
        mem_bvp->mem_ys.mem_R0s[(i1 + 3 * i2) + 9 * is] =
            mem_bvp->mem_ys.mem_R0s[(i1 + 3 * i2) + 9 * is] +
            mem_bvp->mem_y.mem_R0[(i1 + 9 * is) + 6] * sum_Ki[3 * i2 + 2];
      }
    }
    //  ===================== %
    //  ===== dp0(s)_ds ===== %
    //  (eq 26f)
    i1 = mem_bvp->mem_ys.mem_p0s.size(1);
    if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
          &fi_emlrtBCI, &st);
    }
    for (i1 = 0; i1 < 3; i1++) {
      mem_bvp->mem_ys.mem_p0s[i1 + 3 * is] = 0.0;
      mem_bvp->mem_ys.mem_p0s[i1 + 3 * is] =
          mem_bvp->mem_ys.mem_p0s[i1 + 3 * is] +
          mem_bvp->mem_y.mem_R0[i1 + 9 * is] * 0.0;
      mem_bvp->mem_ys.mem_p0s[i1 + 3 * is] =
          mem_bvp->mem_ys.mem_p0s[i1 + 3 * is] +
          mem_bvp->mem_y.mem_R0[(i1 + 9 * is) + 3] * 0.0;
      mem_bvp->mem_ys.mem_p0s[i1 + 3 * is] =
          mem_bvp->mem_ys.mem_p0s[i1 + 3 * is] +
          mem_bvp->mem_y.mem_R0[(i1 + 9 * is) + 6];
    }
    st.site = &gb_emlrtRSI;
    IVP_Comp_Low_ODE(st, static_cast<real_T>(is) + 1.0, mem_bvp, ctcr_carac,
                     ctcr_construc, mem_deriv_propag_low);
    st.site = &hb_emlrtRSI;
    IVP_MaJ_Mem(st, static_cast<real_T>(is) + 1.0, mem_bvp, ctcr_construc,
                mem_deriv_propag_low);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (IVP_Int.cpp)
