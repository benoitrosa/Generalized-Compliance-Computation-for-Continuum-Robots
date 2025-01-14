//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CTCR_Deriv_Propag.cpp
//
// Code generation for function 'CTCR_Deriv_Propag'
//

// Include files
#include "CTCR_Deriv_Propag.h"
#include "BVPProp.h"
#include "CTCRAct.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCRLoad.h"
#include "CTCR_Deriv_Propag_data.h"
#include "Deriv_Propag_Comp_CJ.h"
#include "Deriv_Propag_Comp_Low_ODE.h"
#include "Deriv_Propag_DBDX_Construc.h"
#include "Deriv_Propag_MaJ_Mem.h"
#include "MemBVP.h"
#include "MemCJ.h"
#include "MemDM0.h"
#include "MemDP0.h"
#include "MemDR0.h"
#include "MemDT0.h"
#include "MemDTi.h"
#include "MemDU0.h"
#include "MemDerivPropagHigh.h"
#include "MemDerivPropagLow.h"
#include "MemY.h"
#include "SimulationParam.h"
#include "cat.h"
#include "duiinitxy_dbcj.h"
#include "duiinitxy_dtcj.h"
#include "find.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include <algorithm>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    39,                  // lineNo
    "CTCR_Deriv_Propag", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/CTCR_Deriv_Propag.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    48,                  // lineNo
    "CTCR_Deriv_Propag", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/CTCR_Deriv_Propag.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    58,                  // lineNo
    "CTCR_Deriv_Propag", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/CTCR_Deriv_Propag.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    67,                  // lineNo
    "CTCR_Deriv_Propag", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/CTCR_Deriv_Propag.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    77,                  // lineNo
    "CTCR_Deriv_Propag", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/CTCR_Deriv_Propag.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    87,                  // lineNo
    "CTCR_Deriv_Propag", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/CTCR_Deriv_Propag.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    97,                  // lineNo
    "CTCR_Deriv_Propag", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/CTCR_Deriv_Propag.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    101,                 // lineNo
    "CTCR_Deriv_Propag", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/CTCR_Deriv_Propag.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    46,                             // lineNo
    "Deriv_Propag_Comp_Low_Direct", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    68,                             // lineNo
    "Deriv_Propag_Comp_Low_Direct", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m" // pathName
};

static emlrtRSInfo o_emlrtRSI{
    89,                             // lineNo
    "Deriv_Propag_Comp_Low_Direct", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m" // pathName
};

static emlrtRSInfo xb_emlrtRSI{
    36,                           // lineNo
    "Deriv_Propag_DEDX_Construc", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m" // pathName
};

static emlrtRTEInfo h_emlrtRTEI{
    41,                  // lineNo
    14,                  // colNo
    "CTCR_Deriv_Propag", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/CTCR_Deriv_Propag.m" // pName
};

static emlrtECInfo emlrtECI{
    -1,                             // nDims
    46,                             // lineNo
    28,                             // colNo
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m" // pName
};

static emlrtRTEInfo i_emlrtRTEI{
    51,                             // lineNo
    17,                             // colNo
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m" // pName
};

static emlrtBCInfo t_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    61,                                          // lineNo
    119,                                         // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    61,                                          // lineNo
    121,                                         // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo v_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    61,                                          // lineNo
    65,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    61,                                          // lineNo
    67,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo x_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    65,                             // lineNo
    40,                             // colNo
    "curr_vectT",                   // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo y_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    67,                             // lineNo
    139,                            // colNo
    "K",                            // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ab_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    67,                             // lineNo
    166,                            // colNo
    "ctcr_construc.ui_init",        // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    67,                             // lineNo
    169,                            // colNo
    "ctcr_construc.ui_init",        // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo cb_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    70,                             // lineNo
    58,                             // colNo
    "mem_bvp.mem_inv_sum_Ki",       // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo db_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    70,                                          // lineNo
    118,                                         // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo eb_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    70,                                          // lineNo
    120,                                         // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo fb_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    71,                                          // lineNo
    65,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo gb_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    71,                                          // lineNo
    67,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo hb_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    82,                             // lineNo
    95,                             // colNo
    "mem_bvp.mem_u0",               // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ib_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    82,                             // lineNo
    116,                            // colNo
    "mem_bvp.mem_u0",               // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo jb_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    82,                                          // lineNo
    65,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo kb_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    82,                                          // lineNo
    67,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo lb_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    86,                             // lineNo
    40,                             // colNo
    "curr_vectT",                   // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo mb_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    88,                             // lineNo
    139,                            // colNo
    "K",                            // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo nb_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    88,                             // lineNo
    166,                            // colNo
    "ctcr_construc.ui_init",        // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ob_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    88,                             // lineNo
    169,                            // colNo
    "ctcr_construc.ui_init",        // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo pb_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    91,                             // lineNo
    58,                             // colNo
    "mem_bvp.mem_inv_sum_Ki",       // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo qb_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    91,                                          // lineNo
    121,                                         // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo rb_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    91,                                          // lineNo
    123,                                         // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo sb_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    92,                                          // lineNo
    65,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo tb_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    92,                                          // lineNo
    67,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ub_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    95,                                          // lineNo
    119,                                         // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo vb_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    95,                                          // lineNo
    121,                                         // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo wb_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    95,                                          // lineNo
    65,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo xb_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    95,                                          // lineNo
    67,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo yb_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    101,                                         // lineNo
    123,                                         // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ac_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    101,                                         // lineNo
    125,                                         // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo bc_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    101,                                         // lineNo
    176,                                         // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo cc_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    101,                                         // lineNo
    178,                                         // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo dc_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    101,                                         // lineNo
    63,                                          // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ec_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    101,                                         // lineNo
    65,                                          // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo fc_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    102,                                         // lineNo
    123,                                         // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo gc_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    102,                                         // lineNo
    125,                                         // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo hc_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    102,                                         // lineNo
    176,                                         // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ic_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    102,                                         // lineNo
    178,                                         // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo jc_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    102,                                         // lineNo
    63,                                          // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo kc_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    102,                                         // lineNo
    65,                                          // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo lc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    109,                                          // lineNo
    124,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "Deriv_Propag_Comp_Low_Direct",               // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo mc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    109,                                          // lineNo
    126,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "Deriv_Propag_Comp_Low_Direct",               // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo nc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    109,                                          // lineNo
    177,                                          // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_duzj0", // aName
    "Deriv_Propag_Comp_Low_Direct",               // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo oc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    109,                                          // lineNo
    179,                                          // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_duzj0", // aName
    "Deriv_Propag_Comp_Low_Direct",               // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo pc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    109,                                          // lineNo
    60,                                           // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_duzj0", // aName
    "Deriv_Propag_Comp_Low_Direct",               // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo qc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    109,                                          // lineNo
    62,                                           // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_duzj0", // aName
    "Deriv_Propag_Comp_Low_Direct",               // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo rc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    118,                                          // lineNo
    126,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0", // aName
    "Deriv_Propag_Comp_Low_Direct",               // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo sc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    118,                                          // lineNo
    180,                                          // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_dm0j0", // aName
    "Deriv_Propag_Comp_Low_Direct",               // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo tc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    118,                                          // lineNo
    62,                                           // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dm0j0", // aName
    "Deriv_Propag_Comp_Low_Direct",               // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo uc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    119,                                          // lineNo
    126,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0", // aName
    "Deriv_Propag_Comp_Low_Direct",               // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo vc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    119,                                          // lineNo
    180,                                          // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_dn0j0", // aName
    "Deriv_Propag_Comp_Low_Direct",               // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo wc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    119,                                          // lineNo
    62,                                           // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dn0j0", // aName
    "Deriv_Propag_Comp_Low_Direct",               // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo xc_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    130,                            // lineNo
    38,                             // colNo
    "pt_s0_LIT_curr",               // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo yc_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    140,                                           // lineNo
    131,                                           // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ad_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    140,                                           // lineNo
    136,                                           // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo bd_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    140,                                           // lineNo
    73,                                            // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    140,                            // lineNo
    76,                             // colNo
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo cd_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    140,                                           // lineNo
    76,                                            // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo dd_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    141,                                         // lineNo
    129,                                         // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ed_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    141,                                         // lineNo
    134,                                         // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo fd_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    141,                                         // lineNo
    71,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo gd_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    141,                                         // lineNo
    74,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo hd_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    148,                            // lineNo
    44,                             // colNo
    "curr_vectT",                   // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo id_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    150,                            // lineNo
    162,                            // colNo
    "K",                            // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo jd_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    150,                            // lineNo
    189,                            // colNo
    "ctcr_construc.ui_init",        // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo kd_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    150,                            // lineNo
    192,                            // colNo
    "ctcr_construc.ui_init",        // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ld_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    151,                            // lineNo
    189,                            // colNo
    "ctcr_construc.ui_init",        // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo md_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    151,                            // lineNo
    192,                            // colNo
    "ctcr_construc.ui_init",        // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo nd_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    154,                            // lineNo
    64,                             // colNo
    "mem_bvp.mem_inv_sum_Ki",       // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo od_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    154,                                           // lineNo
    130,                                           // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    154,                            // lineNo
    133,                            // colNo
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo pd_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    154,                                           // lineNo
    133,                                           // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo qd_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    155,                                           // lineNo
    73,                                            // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo rd_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    155,                                           // lineNo
    76,                                            // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo sd_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    157,                                         // lineNo
    124,                                         // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo td_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    157,                                         // lineNo
    127,                                         // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ud_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    158,                                         // lineNo
    71,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo vd_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    158,                                         // lineNo
    74,                                          // colNo
    "mem_deriv_propag_low.mem_du0.mem_du0_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo wd_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    166,                                           // lineNo
    138,                                           // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo xd_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    166,                                           // lineNo
    141,                                           // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo yd_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    166,                                           // lineNo
    196,                                           // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ae_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    166,                                           // lineNo
    199,                                           // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo be_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    166,                                           // lineNo
    71,                                            // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ce_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    166,                                           // lineNo
    74,                                            // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo de_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    167,                                         // lineNo
    136,                                         // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ee_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    167,                                         // lineNo
    139,                                         // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo fe_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    167,                                         // lineNo
    192,                                         // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ge_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    167,                                         // lineNo
    195,                                         // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo he_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    167,                                         // lineNo
    69,                                          // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ie_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    167,                                         // lineNo
    72,                                          // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtRTEInfo j_emlrtRTEI{
    31,                           // lineNo
    14,                           // colNo
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m" // pName
};

static emlrtDCInfo d_emlrtDCI{
    36,                           // lineNo
    74,                           // colNo
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo je_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    36,                                           // lineNo
    74,                                           // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_duzj0", // aName
    "Deriv_Propag_DEDX_Construc",                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ke_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    37,                                           // lineNo
    76,                                           // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dm0j0", // aName
    "Deriv_Propag_DEDX_Construc",                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo le_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    38,                                           // lineNo
    76,                                           // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dn0j0", // aName
    "Deriv_Propag_DEDX_Construc",                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo me_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    39,                                          // lineNo
    75,                                          // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dtcj", // aName
    "Deriv_Propag_DEDX_Construc",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ne_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    40,                                          // lineNo
    75,                                          // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dbcj", // aName
    "Deriv_Propag_DEDX_Construc",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtRTEInfo k_emlrtRTEI{
    47,                           // lineNo
    17,                           // colNo
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m" // pName
};

static emlrtBCInfo oe_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    48,                           // lineNo
    72,                           // colNo
    "mem_dT0",                    // aName
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo pe_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    48,                            // lineNo
    43,                            // colNo
    "mem_deriv_propag_high.mem_E", // aName
    "Deriv_Propag_DEDX_Construc",  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo qe_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    48,                            // lineNo
    45,                            // colNo
    "mem_deriv_propag_high.mem_E", // aName
    "Deriv_Propag_DEDX_Construc",  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtECInfo b_emlrtECI{
    -1,                           // nDims
    48,                           // lineNo
    13,                           // colNo
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m" // pName
};

static emlrtRTEInfo l_emlrtRTEI{
    57,                           // lineNo
    21,                           // colNo
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m" // pName
};

static emlrtBCInfo re_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    58,                           // lineNo
    76,                           // colNo
    "mem_dT0",                    // aName
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo e_emlrtDCI{
    58,                           // lineNo
    47,                           // colNo
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo se_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    58,                            // lineNo
    47,                            // colNo
    "mem_deriv_propag_high.mem_E", // aName
    "Deriv_Propag_DEDX_Construc",  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo te_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    58,                            // lineNo
    49,                            // colNo
    "mem_deriv_propag_high.mem_E", // aName
    "Deriv_Propag_DEDX_Construc",  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtECInfo c_emlrtECI{
    -1,                           // nDims
    58,                           // lineNo
    17,                           // colNo
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m" // pName
};

static emlrtBCInfo ue_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    72,                           // lineNo
    38,                           // colNo
    "pt_s0_LIT_curr",             // aName
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ve_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    74,                                            // lineNo
    87,                                            // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dtaus0", // aName
    "Deriv_Propag_DEDX_Construc",                  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo f_emlrtDCI{
    74,                           // lineNo
    90,                           // colNo
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo we_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    74,                                            // lineNo
    90,                                            // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dtaus0", // aName
    "Deriv_Propag_DEDX_Construc",                  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo xe_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    75,                                          // lineNo
    87,                                          // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dfs0", // aName
    "Deriv_Propag_DEDX_Construc",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ye_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    75,                                          // lineNo
    90,                                          // colNo
    "mem_deriv_propag_low.mem_dT0.mem_dT0_dfs0", // aName
    "Deriv_Propag_DEDX_Construc",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo af_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    78,                               // lineNo
    54,                               // colNo
    "mem_deriv_propag_high.mem_Ews0", // aName
    "Deriv_Propag_DEDX_Construc",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo bf_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    78,                               // lineNo
    56,                               // colNo
    "mem_deriv_propag_high.mem_Ews0", // aName
    "Deriv_Propag_DEDX_Construc",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo cf_emlrtBCI{
    -1,                               // iFirst
    -1,                               // iLast
    78,                               // lineNo
    59,                               // colNo
    "mem_deriv_propag_high.mem_Ews0", // aName
    "Deriv_Propag_DEDX_Construc",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtECInfo d_emlrtECI{
    -1,                           // nDims
    78,                           // lineNo
    21,                           // colNo
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m" // pName
};

static emlrtBCInfo df_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    67,                             // lineNo
    76,                             // colNo
    "mem_bvp.mem_y.mem_t",          // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ef_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    67,                             // lineNo
    78,                             // colNo
    "mem_bvp.mem_y.mem_t",          // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ff_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    127,                            // lineNo
    57,                             // colNo
    "simulation_param.pt_s0_LIT",   // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo gf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    81,                             // lineNo
    67,                             // colNo
    "ctcr_construc.vect_ind_iT",    // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo hf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    83,                             // lineNo
    58,                             // colNo
    "ctcr_construc.vect_ind_iT",    // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo if_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    69,                           // lineNo
    57,                           // colNo
    "simulation_param.pt_s0_LIT", // aName
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo jf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    82,                             // lineNo
    146,                            // colNo
    "ctcr_construc.vect_res",       // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo kf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    88,                             // lineNo
    76,                             // colNo
    "mem_bvp.mem_y.mem_t",          // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo lf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    88,                             // lineNo
    78,                             // colNo
    "mem_bvp.mem_y.mem_t",          // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo mf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    150,                            // lineNo
    93,                             // colNo
    "mem_bvp.mem_y.mem_t",          // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo nf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    150,                            // lineNo
    95,                             // colNo
    "mem_bvp.mem_y.mem_t",          // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo of_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    67,                                          // lineNo
    125,                                         // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo pf_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    67,                                          // lineNo
    127,                                         // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo qf_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    67,                                          // lineNo
    129,                                         // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dtcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo rf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    68,                             // lineNo
    63,                             // colNo
    "mem_bvp.mem_y.mem_t",          // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo sf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    68,                             // lineNo
    65,                             // colNo
    "mem_bvp.mem_y.mem_t",          // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo tf_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    88,                                          // lineNo
    125,                                         // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo uf_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    88,                                          // lineNo
    127,                                         // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo vf_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    88,                                          // lineNo
    129,                                         // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dbcj", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo wf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    89,                             // lineNo
    63,                             // colNo
    "mem_bvp.mem_y.mem_t",          // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo xf_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    89,                             // lineNo
    65,                             // colNo
    "mem_bvp.mem_y.mem_t",          // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo yf_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    150,                                           // lineNo
    144,                                           // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ag_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    150,                                           // lineNo
    148,                                           // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo bg_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    150,                                           // lineNo
    151,                                           // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dtaus0", // aName
    "Deriv_Propag_Comp_Low_Direct",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo g_emlrtDCI{
    150,                            // lineNo
    151,                            // colNo
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo cg_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    151,                            // lineNo
    93,                             // colNo
    "mem_bvp.mem_y.mem_t",          // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo dg_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    151,                            // lineNo
    95,                             // colNo
    "mem_bvp.mem_y.mem_t",          // aName
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo eg_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    151,                                         // lineNo
    142,                                         // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo fg_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    151,                                         // lineNo
    146,                                         // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo gg_emlrtBCI{
    -1,                                          // iFirst
    -1,                                          // iLast
    151,                                         // lineNo
    149,                                         // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dfs0", // aName
    "Deriv_Propag_Comp_Low_Direct",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m", // pName
    0                                               // checkKind
};

static emlrtRTEInfo cc_emlrtRTEI{
    46,                             // lineNo
    28,                             // colNo
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m" // pName
};

static emlrtRTEInfo dc_emlrtRTEI{
    46,                             // lineNo
    51,                             // colNo
    "Deriv_Propag_Comp_Low_Direct", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_Low_Direct.m" // pName
};

static emlrtRTEInfo ec_emlrtRTEI{
    2,                   // lineNo
    7,                   // colNo
    "CTCR_Deriv_Propag", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/CTCR_Deriv_Propag.m" // pName
};

static emlrtRTEInfo fc_emlrtRTEI{
    36,                           // lineNo
    25,                           // colNo
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m" // pName
};

static emlrtRTEInfo gc_emlrtRTEI{
    39,                           // lineNo
    27,                           // colNo
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m" // pName
};

static emlrtRTEInfo hc_emlrtRTEI{
    40,                           // lineNo
    27,                           // colNo
    "Deriv_Propag_DEDX_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_DEDX_Construc.m" // pName
};

// Function Definitions
real_T CTCR_Deriv_Propag(const emlrtStack *sp, const CTCRCarac *ctcr_carac,
                         const CTCRConstruc *ctcr_construc,
                         const CTCRAct *ctcr_act, const CTCRLoad *ctcr_load,
                         const MemBVP *mem_bvp, const BVPProp *bvp_prop,
                         const SimulationParam *simulation_param,
                         MemDerivPropagLow *mem_deriv_propag_low,
                         MemDerivPropagHigh *mem_deriv_propag_high,
                         MemCJ *mem_CJ)
{
  static const int8_T c_iv[3]{0, 0, 1};
  coder::array<real_T, 3U> b_mem_deriv_propag_low;
  coder::array<real_T, 3U> c_mem_deriv_propag_low;
  coder::array<real_T, 3U> d_mem_deriv_propag_low;
  coder::array<real_T, 3U> mem_dT0;
  coder::array<int32_T, 2U> r2;
  coder::array<int32_T, 2U> r3;
  coder::array<int32_T, 1U> ii;
  coder::array<boolean_T, 1U> r;
  coder::array<boolean_T, 1U> r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emlrtTimespec expl_temp;
  real_T dv[48];
  real_T dv1[48];
  real_T sum_dfs0[3];
  real_T b;
  real_T d;
  real_T gamma_tmp;
  real_T time_comp_CJ;
  int32_T b_is;
  int32_T c_is;
  int32_T d_is;
  int32_T e_is;
  int32_T end_tmp;
  int32_T f_is;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  ======================================================================= %
  //
  //  This function computes the Generalized Compliance Matrix and
  //  the Joint Jacobian using the Low-Level Derivative Propagation Method
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  ctcr_carac            : (class) Robot features
  //  ctcr_construc         : (class) Robot features related to the model
  //  settings ctcr_act              : (class) Robot actuation ctcr_load :
  //  (class) Robot loads mem_bvp               : (class) Memory of the BVP
  //  variables bvp_prop              : (class) Results of the BVP resolution
  //  simulation_param      : (class) Model settings
  //  mem_deriv_propag_low  : (class) Memory of the low-level derivatives
  //  mem_deriv_propag_high : (class) Memory of the high-level partial
  //  derivatives mem_CJ                : (class) Memory of the Generalized
  //  Compliance Matrix and the Joint Jacobian
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  mem_CJ                : (class) Memory of the Generalized Compliance
  //  Matrix and the Joint Jacobian mem_deriv_propag_high : (class) Memory of
  //  the high-level partial derivatives mem_deriv_propag_low  : (class) Memory
  //  of the low-level partial derivatives time_comp_CJ          : (float)
  //  Computation time
  //
  //  ======================================================================= %
  st.site = &emlrtRSI;
  expl_temp = coder::tic(st);
  i = static_cast<int32_T>(ctcr_construc->nbP);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_construc->nbP, mxDOUBLE_CLASS,
                                static_cast<int32_T>(ctcr_construc->nbP),
                                &h_emlrtRTEI, (emlrtConstCTX)sp);
  for (int32_T is{0}; is < i; is++) {
    real_T ind_origin;
    real_T nbP;
    real_T nbT;
    //  =========================================================== %
    //  ====== Computation of complementary derivatives du0 ======= %
    //  == and assembly of the dT0 derivatives using dR0 and dp0 == %
    st.site = &b_emlrtRSI;
    //  =======================================================================
    //  %
    //
    //  This function computes the Low-Level partial derivatives of u0 and T0
    //
    //  ====================
    //  ====== INPUTS ======
    //
    //  is                    : (int ∊ [1 , nbP]) Index of the current
    //  curvilinear abscissa ctcr_construc         : (class) Robot features
    //  related to the model settings ctcr_carac            : (class) Robot
    //  features ctcr_act              : (class) Robot actuation
    //  simulation_param      : (class) Model settings
    //  mem_bvp               : (class) Memory of the BVP variables
    //  mem_deriv_propag_low  : (class) Memory of the low-level derivatives
    //
    //  ====================
    //  ===== OUTPUTS ======
    //
    //  mem_deriv_propag_low  : (class) Memory of the low-level derivatives
    //
    //  =======================================================================
    //  %
    //  ========================================================== %
    //  ================== Getting input values ================== %
    nbT = ctcr_carac->nbT;
    ind_origin = ctcr_construc->ind_origin;
    nbP = ctcr_construc->nbP;
    //  ========================================================== %
    loop_ub = ctcr_construc->vect_ind_iT.size(0);
    r.set_size(&cc_emlrtRTEI, &st, ctcr_construc->vect_ind_iT.size(0));
    r1.set_size(&dc_emlrtRTEI, &st, ctcr_construc->vect_ind_iT.size(0));
    for (i1 = 0; i1 < loop_ub; i1++) {
      r[i1] = (ctcr_construc->vect_ind_iT[i1] <= static_cast<real_T>(is) + 1.0);
      r1[i1] = (static_cast<real_T>(is) + 1.0 <=
                ctcr_construc
                    ->vect_ind_iT[i1 + ctcr_construc->vect_ind_iT.size(0) * 2]);
    }
    if (r.size(0) != r1.size(0)) {
      emlrtSizeEqCheck1DR2012b(r.size(0), r1.size(0), &emlrtECI, &st);
    }
    b_st.site = &m_emlrtRSI;
    loop_ub = r.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r[i1] = (r[i1] && r1[i1]);
    }
    c_st.site = &p_emlrtRSI;
    coder::eml_find(c_st, r, ii);
    if (static_cast<real_T>(is) + 1.0 >= ctcr_construc->ind_origin) {
      real_T R_tmp[9];
      real_T a[9];
      real_T sum_dtcj[3];
      real_T R_tmp_tmp;
      real_T b_R_tmp_tmp;
      real_T sum_dtcj_idx_2;
      int32_T i4;
      int32_T i7;
      int8_T i5;
      int8_T i6;
      boolean_T b_b;
      i1 = static_cast<int32_T>(ctcr_carac->nbT);
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
                                    static_cast<int32_T>(ctcr_carac->nbT),
                                    &i_emlrtRTEI, &st);
      for (int32_T j{0}; j < i1; j++) {
        if (simulation_param->bool_J) {
          real_T b_a[9];
          real_T dv2[2];
          boolean_T guard1;
          //  ============================= %
          //  ======== du0(s)_dtcj ======== %
          //  (eq 32a)
          if (static_cast<real_T>(is) + 1.0 == nbP) {
            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1);
            if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
                  &t_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(2);
            if ((is < 1) || (is > i2)) {
              emlrtDynamicBoundsCheckR2012b(is, 1, i2, &u_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1);
            if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
                  &v_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(2);
            if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                  &w_emlrtBCI, &st);
            }
            b = mem_deriv_propag_low->mem_du0.mem_du0_dtcj
                    [(3 * j +
                      3 * mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
                          (is - 1)) +
                     1];
            sum_dtcj_idx_2 =
                mem_deriv_propag_low->mem_du0.mem_du0_dtcj
                    [(3 * j +
                      3 * mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
                          (is - 1)) +
                     2];
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj
                [3 * j +
                 3 * mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) * is] =
                mem_deriv_propag_low->mem_du0.mem_du0_dtcj
                    [3 * j +
                     3 * mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) *
                         (is - 1)];
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj
                [(3 * j +
                  3 * mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) * is) +
                 1] = b;
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj
                [(3 * j +
                  3 * mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) * is) +
                 2] = sum_dtcj_idx_2;
          } else {
            sum_dtcj[0] = 0.0;
            sum_dtcj[1] = 0.0;
            sum_dtcj[2] = 0.0;
            i2 = ii.size(0);
            for (int32_T b_iv{0}; b_iv < i2; b_iv++) {
              if (b_iv + 1 > ii.size(0)) {
                emlrtDynamicBoundsCheckR2012b(b_iv + 1, 1, ii.size(0),
                                              &x_emlrtBCI, &st);
              }
              if ((ii[b_iv] < 1) || (ii[b_iv] > mem_bvp->mem_y.mem_t.size(0))) {
                emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1,
                                              mem_bvp->mem_y.mem_t.size(0),
                                              &df_emlrtBCI, &st);
              }
              if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) >
                   mem_bvp->mem_y.mem_t.size(1))) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1,
                    mem_bvp->mem_y.mem_t.size(1), &ef_emlrtBCI, &st);
              }
              gamma_tmp =
                  mem_bvp->mem_y
                      .mem_t[(ii[b_iv] + mem_bvp->mem_y.mem_t.size(0) * is) -
                             1];
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
              R_tmp_tmp = muDoubleScalarSin(gamma_tmp);
              b_R_tmp_tmp = muDoubleScalarCos(gamma_tmp);
              i4 = mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(0);
              if ((ii[b_iv] < 1) || (ii[b_iv] > i4)) {
                emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1, i4, &of_emlrtBCI,
                                              &st);
              }
              i4 = mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(1);
              if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i4)) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i4,
                    &pf_emlrtBCI, &st);
              }
              i4 = mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(2);
              if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i4)) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i4,
                    &qf_emlrtBCI, &st);
              }
              b = mem_deriv_propag_low->mem_dti.mem_dti_dtcj
                      [((ii[b_iv] +
                         mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(0) *
                             j) +
                        mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(0) *
                            mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(1) *
                            is) -
                       1];
              i4 = ii[b_iv];
              b_b = ((i4 < 1) || (i4 > ctcr_construc->K.size(2)));
              if (b_b) {
                emlrtDynamicBoundsCheckR2012b(i4, 1, ctcr_construc->K.size(2),
                                              &y_emlrtBCI, &st);
              }
              if ((is + 1 < 1) || (is + 1 > ctcr_construc->ui_init.size(1))) {
                emlrtDynamicBoundsCheckR2012b(is + 1, 1,
                                              ctcr_construc->ui_init.size(1),
                                              &ab_emlrtBCI, &st);
              }
              i4 = ii[b_iv];
              if ((i4 < 1) || (i4 > ctcr_construc->ui_init.size(2))) {
                emlrtDynamicBoundsCheckR2012b(
                    i4, 1, ctcr_construc->ui_init.size(2), &bb_emlrtBCI, &st);
              }
              if ((ii[b_iv] < 1) || (ii[b_iv] > mem_bvp->mem_y.mem_t.size(0))) {
                emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1,
                                              mem_bvp->mem_y.mem_t.size(0),
                                              &rf_emlrtBCI, &st);
              }
              if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) >
                   mem_bvp->mem_y.mem_t.size(1))) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1,
                    mem_bvp->mem_y.mem_t.size(1), &sf_emlrtBCI, &st);
              }
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
              b_st.site = &n_emlrtRSI;
              duiinitxy_dtcj(b_st, static_cast<real_T>(is) + 1.0,
                             ctcr_carac->Rc, static_cast<real_T>(ii[b_iv]),
                             static_cast<real_T>(j) + 1.0, ctcr_act->theta_c,
                             ctcr_construc->vect_ind_iT, ind_origin, dv2);
              sum_dfs0[0] = dv2[0];
              sum_dfs0[1] = dv2[1];
              R_tmp[0] = b_R_tmp_tmp;
              R_tmp[3] = -R_tmp_tmp;
              R_tmp[6] = 0.0;
              R_tmp[1] = R_tmp_tmp;
              R_tmp[4] = b_R_tmp_tmp;
              R_tmp[7] = 0.0;
              R_tmp[2] = 0.0;
              R_tmp[5] = 0.0;
              R_tmp[8] = 1.0;
              for (i4 = 0; i4 < 3; i4++) {
                i5 = iv[i4];
                i6 = iv[i4 + 3];
                for (i7 = 0; i7 < 3; i7++) {
                  a[i4 + 3 * i7] =
                      (static_cast<real_T>(i5) * R_tmp[3 * i7] +
                       static_cast<real_T>(i6) * R_tmp[3 * i7 + 1]) +
                      0.0 * R_tmp[3 * i7 + 2];
                }
              }
              for (i4 = 0; i4 < 9; i4++) {
                a[i4] *= b;
              }
              R_tmp[0] = b_R_tmp_tmp;
              R_tmp[3] = -R_tmp_tmp;
              R_tmp[6] = 0.0;
              R_tmp[1] = R_tmp_tmp;
              R_tmp[4] = b_R_tmp_tmp;
              R_tmp[7] = 0.0;
              for (i4 = 0; i4 < 3; i4++) {
                d = a[i4];
                b = a[i4 + 3];
                sum_dtcj_idx_2 = a[i4 + 6];
                for (i7 = 0; i7 < 3; i7++) {
                  b_a[i4 + 3 * i7] =
                      (d * ctcr_construc->K[3 * i7 + 9 * (ii[b_iv] - 1)] +
                       b * ctcr_construc
                               ->K[(3 * i7 + 9 * (ii[b_iv] - 1)) + 1]) +
                      sum_dtcj_idx_2 *
                          ctcr_construc->K[(3 * i7 + 9 * (ii[b_iv] - 1)) + 2];
                }
                R_tmp[3 * i4 + 2] = c_iv[i4];
              }
              for (i4 = 0; i4 < 3; i4++) {
                d = 0.0;
                b = R_tmp[i4];
                sum_dtcj_idx_2 = R_tmp[i4 + 3];
                i7 = static_cast<int32_T>(R_tmp[i4 + 6]);
                for (end_tmp = 0; end_tmp < 3; end_tmp++) {
                  loop_ub = i4 + 3 * end_tmp;
                  a[loop_ub] =
                      (b * ctcr_construc->K[3 * end_tmp + 9 * (ii[b_iv] - 1)] +
                       sum_dtcj_idx_2 *
                           ctcr_construc
                               ->K[(3 * end_tmp + 9 * (ii[b_iv] - 1)) + 1]) +
                      static_cast<real_T>(i7) *
                          ctcr_construc
                              ->K[(3 * end_tmp + 9 * (ii[b_iv] - 1)) + 2];
                  d += b_a[loop_ub] *
                       ctcr_construc
                           ->ui_init[(end_tmp + 3 * is) +
                                     3 * ctcr_construc->ui_init.size(1) *
                                         (ii[b_iv] - 1)];
                }
                sum_dtcj[i4] =
                    (sum_dtcj[i4] + d) +
                    ((a[i4] * sum_dfs0[0] + a[i4 + 3] * sum_dfs0[1]) +
                     a[i4 + 6] * 0.0);
              }
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(&st);
              }
            }
            if ((is + 1 < 1) || (is + 1 > mem_bvp->mem_inv_sum_Ki.size(2))) {
              emlrtDynamicBoundsCheckR2012b(is + 1, 1,
                                            mem_bvp->mem_inv_sum_Ki.size(2),
                                            &cb_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1);
            if ((j + 1 < 1) || (j + 1 > i2)) {
              emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &db_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(2);
            if ((is + 1 < 1) || (is + 1 > i2)) {
              emlrtDynamicBoundsCheckR2012b(is + 1, 1, i2, &eb_emlrtBCI, &st);
            }
            gamma_tmp =
                sum_dtcj[0] +
                mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj
                    [3 * j +
                     3 * mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) *
                         is];
            b = sum_dtcj[1] +
                mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj
                    [(3 * j +
                      3 * mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) *
                          is) +
                     1];
            sum_dtcj_idx_2 =
                sum_dtcj[2] +
                mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj
                    [(3 * j +
                      3 * mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) *
                          is) +
                     2];
            for (i2 = 0; i2 < 3; i2++) {
              sum_dtcj[i2] =
                  (mem_bvp->mem_inv_sum_Ki[i2 + 9 * is] * gamma_tmp +
                   mem_bvp->mem_inv_sum_Ki[(i2 + 9 * is) + 3] * b) +
                  mem_bvp->mem_inv_sum_Ki[(i2 + 9 * is) + 6] * sum_dtcj_idx_2;
            }
            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1);
            if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
                  &fb_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(2);
            if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                  &gb_emlrtBCI, &st);
            }
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj
                [3 * j +
                 3 * mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) * is] =
                sum_dtcj[0];
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj
                [(3 * j +
                  3 * mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) * is) +
                 1] = sum_dtcj[1];
            mem_deriv_propag_low->mem_du0.mem_du0_dtcj
                [(3 * j +
                  3 * mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1) * is) +
                 2] = 0.0;
          }
          //  ============================= %
          //  ======== du0(s)_dbcj ======== %
          //  (eq 32a)
          guard1 = false;
          if (!(static_cast<real_T>(j) + 1.0 == nbT)) {
            if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
                 ctcr_construc->vect_ind_iT.size(0))) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1,
                  ctcr_construc->vect_ind_iT.size(0), &gf_emlrtBCI, &st);
            }
            if (static_cast<real_T>(is) + 1.0 ==
                ctcr_construc
                        ->vect_ind_iT[j +
                                      ctcr_construc->vect_ind_iT.size(0) * 2] +
                    1.0) {
              if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) >
                   mem_bvp->mem_u0.size(1))) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1,
                    mem_bvp->mem_u0.size(1), &hb_emlrtBCI, &st);
              }
              if ((is < 1) || (is > mem_bvp->mem_u0.size(1))) {
                emlrtDynamicBoundsCheckR2012b(is, 1, mem_bvp->mem_u0.size(1),
                                              &ib_emlrtBCI, &st);
              }
              if (is > ctcr_construc->vect_res.size(1)) {
                emlrtDynamicBoundsCheckR2012b(
                    is, 1, ctcr_construc->vect_res.size(1), &jf_emlrtBCI, &st);
              }
              gamma_tmp = ctcr_construc->vect_res[is - 1];
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1);
              if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
                    &jb_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(2);
              if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                    &kb_emlrtBCI, &st);
              }
              mem_deriv_propag_low->mem_du0.mem_du0_dbcj
                  [3 * j +
                   3 * mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
                       is] =
                  -(mem_bvp->mem_u0[3 * is] - mem_bvp->mem_u0[3 * (is - 1)]) /
                  gamma_tmp;
              mem_deriv_propag_low->mem_du0.mem_du0_dbcj
                  [(3 * j +
                    3 * mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
                        is) +
                   1] = -(mem_bvp->mem_u0[3 * is + 1] -
                          mem_bvp->mem_u0[3 * (is - 1) + 1]) /
                        gamma_tmp;
              mem_deriv_propag_low->mem_du0.mem_du0_dbcj
                  [(3 * j +
                    3 * mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
                        is) +
                   2] = -(mem_bvp->mem_u0[3 * is + 2] -
                          mem_bvp->mem_u0[3 * (is - 1) + 2]) /
                        gamma_tmp;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }
          if (guard1) {
            b_b = ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
                   (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
                    ctcr_construc->vect_ind_iT.size(0)));
            if (b_b) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1,
                  ctcr_construc->vect_ind_iT.size(0), &hf_emlrtBCI, &st);
            }
            d = ctcr_construc
                    ->vect_ind_iT[j + ctcr_construc->vect_ind_iT.size(0) * 2];
            if (!(static_cast<real_T>(is) + 1.0 == d)) {
              sum_dtcj[0] = 0.0;
              sum_dtcj[1] = 0.0;
              sum_dtcj[2] = 0.0;
              i2 = ii.size(0);
              for (int32_T b_iv{0}; b_iv < i2; b_iv++) {
                if (b_iv + 1 > ii.size(0)) {
                  emlrtDynamicBoundsCheckR2012b(b_iv + 1, 1, ii.size(0),
                                                &lb_emlrtBCI, &st);
                }
                if ((ii[b_iv] < 1) ||
                    (ii[b_iv] > mem_bvp->mem_y.mem_t.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1,
                                                mem_bvp->mem_y.mem_t.size(0),
                                                &kf_emlrtBCI, &st);
                }
                if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) <
                     1) ||
                    (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) >
                     mem_bvp->mem_y.mem_t.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(
                      static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1,
                      mem_bvp->mem_y.mem_t.size(1), &lf_emlrtBCI, &st);
                }
                gamma_tmp =
                    mem_bvp->mem_y
                        .mem_t[(ii[b_iv] + mem_bvp->mem_y.mem_t.size(0) * is) -
                               1];
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
                R_tmp_tmp = muDoubleScalarSin(gamma_tmp);
                b_R_tmp_tmp = muDoubleScalarCos(gamma_tmp);
                i4 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0);
                if ((ii[b_iv] < 1) || (ii[b_iv] > i4)) {
                  emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1, i4, &tf_emlrtBCI,
                                                &st);
                }
                i4 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1);
                if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
                    (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
                     i4)) {
                  emlrtDynamicBoundsCheckR2012b(
                      static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1,
                      i4, &uf_emlrtBCI, &st);
                }
                i4 = mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(2);
                if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) <
                     1) ||
                    (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) >
                     i4)) {
                  emlrtDynamicBoundsCheckR2012b(
                      static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1,
                      i4, &vf_emlrtBCI, &st);
                }
                b = mem_deriv_propag_low->mem_dti.mem_dti_dbcj
                        [((ii[b_iv] +
                           mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0) *
                               j) +
                          mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0) *
                              mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(
                                  1) *
                              is) -
                         1];
                i4 = ii[b_iv];
                b_b = ((i4 < 1) || (i4 > ctcr_construc->K.size(2)));
                if (b_b) {
                  emlrtDynamicBoundsCheckR2012b(i4, 1, ctcr_construc->K.size(2),
                                                &mb_emlrtBCI, &st);
                }
                if ((is + 1 < 1) || (is + 1 > ctcr_construc->ui_init.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(is + 1, 1,
                                                ctcr_construc->ui_init.size(1),
                                                &nb_emlrtBCI, &st);
                }
                i4 = ii[b_iv];
                if ((i4 < 1) || (i4 > ctcr_construc->ui_init.size(2))) {
                  emlrtDynamicBoundsCheckR2012b(
                      i4, 1, ctcr_construc->ui_init.size(2), &ob_emlrtBCI, &st);
                }
                if ((ii[b_iv] < 1) ||
                    (ii[b_iv] > mem_bvp->mem_y.mem_t.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1,
                                                mem_bvp->mem_y.mem_t.size(0),
                                                &wf_emlrtBCI, &st);
                }
                if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) <
                     1) ||
                    (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) >
                     mem_bvp->mem_y.mem_t.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(
                      static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1,
                      mem_bvp->mem_y.mem_t.size(1), &xf_emlrtBCI, &st);
                }
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
                b_st.site = &o_emlrtRSI;
                duiinitxy_dbcj(b_st, static_cast<real_T>(is) + 1.0,
                               ctcr_construc->vect_res, ctcr_carac->Rc,
                               static_cast<real_T>(ii[b_iv]),
                               static_cast<real_T>(j) + 1.0, ctcr_act->theta_c,
                               ctcr_construc->vect_ind_iT, ind_origin, nbT,
                               dv2);
                sum_dfs0[0] = dv2[0];
                sum_dfs0[1] = dv2[1];
                R_tmp[0] = b_R_tmp_tmp;
                R_tmp[3] = -R_tmp_tmp;
                R_tmp[6] = 0.0;
                R_tmp[1] = R_tmp_tmp;
                R_tmp[4] = b_R_tmp_tmp;
                R_tmp[7] = 0.0;
                R_tmp[2] = 0.0;
                R_tmp[5] = 0.0;
                R_tmp[8] = 1.0;
                for (i4 = 0; i4 < 3; i4++) {
                  i5 = iv[i4];
                  i6 = iv[i4 + 3];
                  for (i7 = 0; i7 < 3; i7++) {
                    a[i4 + 3 * i7] =
                        (static_cast<real_T>(i5) * R_tmp[3 * i7] +
                         static_cast<real_T>(i6) * R_tmp[3 * i7 + 1]) +
                        0.0 * R_tmp[3 * i7 + 2];
                  }
                }
                for (i4 = 0; i4 < 9; i4++) {
                  a[i4] *= b;
                }
                R_tmp[0] = b_R_tmp_tmp;
                R_tmp[3] = -R_tmp_tmp;
                R_tmp[6] = 0.0;
                R_tmp[1] = R_tmp_tmp;
                R_tmp[4] = b_R_tmp_tmp;
                R_tmp[7] = 0.0;
                for (i4 = 0; i4 < 3; i4++) {
                  d = a[i4];
                  b = a[i4 + 3];
                  sum_dtcj_idx_2 = a[i4 + 6];
                  for (i7 = 0; i7 < 3; i7++) {
                    b_a[i4 + 3 * i7] =
                        (d * ctcr_construc->K[3 * i7 + 9 * (ii[b_iv] - 1)] +
                         b * ctcr_construc
                                 ->K[(3 * i7 + 9 * (ii[b_iv] - 1)) + 1]) +
                        sum_dtcj_idx_2 *
                            ctcr_construc->K[(3 * i7 + 9 * (ii[b_iv] - 1)) + 2];
                  }
                  R_tmp[3 * i4 + 2] = c_iv[i4];
                }
                for (i4 = 0; i4 < 3; i4++) {
                  d = 0.0;
                  b = R_tmp[i4];
                  sum_dtcj_idx_2 = R_tmp[i4 + 3];
                  i7 = static_cast<int32_T>(R_tmp[i4 + 6]);
                  for (end_tmp = 0; end_tmp < 3; end_tmp++) {
                    loop_ub = i4 + 3 * end_tmp;
                    a[loop_ub] =
                        (b * ctcr_construc
                                 ->K[3 * end_tmp + 9 * (ii[b_iv] - 1)] +
                         sum_dtcj_idx_2 *
                             ctcr_construc
                                 ->K[(3 * end_tmp + 9 * (ii[b_iv] - 1)) + 1]) +
                        static_cast<real_T>(i7) *
                            ctcr_construc
                                ->K[(3 * end_tmp + 9 * (ii[b_iv] - 1)) + 2];
                    d += b_a[loop_ub] *
                         ctcr_construc
                             ->ui_init[(end_tmp + 3 * is) +
                                       3 * ctcr_construc->ui_init.size(1) *
                                           (ii[b_iv] - 1)];
                  }
                  sum_dtcj[i4] =
                      (sum_dtcj[i4] + d) +
                      ((a[i4] * sum_dfs0[0] + a[i4 + 3] * sum_dfs0[1]) +
                       a[i4 + 6] * 0.0);
                }
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(&st);
                }
              }
              if ((is + 1 < 1) || (is + 1 > mem_bvp->mem_inv_sum_Ki.size(2))) {
                emlrtDynamicBoundsCheckR2012b(is + 1, 1,
                                              mem_bvp->mem_inv_sum_Ki.size(2),
                                              &pb_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1);
              if ((j + 1 < 1) || (j + 1 > i2)) {
                emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &qb_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(2);
              if ((is + 1 < 1) || (is + 1 > i2)) {
                emlrtDynamicBoundsCheckR2012b(is + 1, 1, i2, &rb_emlrtBCI, &st);
              }
              gamma_tmp =
                  sum_dtcj[0] +
                  mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj
                      [3 * j +
                       3 * mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) *
                           is];
              b = sum_dtcj[1] +
                  mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj
                      [(3 * j +
                        3 * mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) *
                            is) +
                       1];
              sum_dtcj_idx_2 =
                  sum_dtcj[2] +
                  mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj
                      [(3 * j +
                        3 * mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) *
                            is) +
                       2];
              for (i2 = 0; i2 < 3; i2++) {
                sum_dtcj[i2] =
                    (mem_bvp->mem_inv_sum_Ki[i2 + 9 * is] * gamma_tmp +
                     mem_bvp->mem_inv_sum_Ki[(i2 + 9 * is) + 3] * b) +
                    mem_bvp->mem_inv_sum_Ki[(i2 + 9 * is) + 6] * sum_dtcj_idx_2;
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1);
              if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
                    &sb_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(2);
              if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                    &tb_emlrtBCI, &st);
              }
              mem_deriv_propag_low->mem_du0.mem_du0_dbcj
                  [3 * j +
                   3 * mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
                       is] = sum_dtcj[0];
              mem_deriv_propag_low->mem_du0.mem_du0_dbcj
                  [(3 * j +
                    3 * mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
                        is) +
                   1] = sum_dtcj[1];
              mem_deriv_propag_low->mem_du0.mem_du0_dbcj
                  [(3 * j +
                    3 * mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
                        is) +
                   2] = 0.0;
            } else if (static_cast<uint32_T>(is) + 1U ==
                       static_cast<uint32_T>(d)) {
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1);
              if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
                    &ub_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(2);
              if ((is < 1) || (is > i2)) {
                emlrtDynamicBoundsCheckR2012b(is, 1, i2, &vb_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1);
              if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
                    &wb_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(2);
              if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                    &xb_emlrtBCI, &st);
              }
              b = mem_deriv_propag_low->mem_du0.mem_du0_dbcj
                      [(3 * j +
                        3 * mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
                            (is - 1)) +
                       1];
              sum_dtcj_idx_2 =
                  mem_deriv_propag_low->mem_du0.mem_du0_dbcj
                      [(3 * j +
                        3 * mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
                            (is - 1)) +
                       2];
              mem_deriv_propag_low->mem_du0.mem_du0_dbcj
                  [3 * j +
                   3 * mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
                       is] =
                  mem_deriv_propag_low->mem_du0.mem_du0_dbcj
                      [3 * j +
                       3 * mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
                           (is - 1)];
              mem_deriv_propag_low->mem_du0.mem_du0_dbcj
                  [(3 * j +
                    3 * mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
                        is) +
                   1] = b;
              mem_deriv_propag_low->mem_du0.mem_du0_dbcj
                  [(3 * j +
                    3 * mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1) *
                        is) +
                   2] = sum_dtcj_idx_2;
            }
          }
          //  ========================================= %
          //  ====== dT0(s)_dtcj and dT0(s)_dbcj ====== %
          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2);
          if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
                &yb_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(3);
          if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                &ac_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(1);
          if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
                &bc_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(2);
          if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                &cc_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2);
          if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
                &dc_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(3);
          if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                &ec_emlrtBCI, &st);
          }
          for (i2 = 0; i2 < 3; i2++) {
            mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj
                [(4 * i2 + 16 * j) +
                 16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2) * is] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj
                    [(3 * i2 + 9 * j) +
                     9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) *
                         is];
            mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj
                [((4 * i2 + 16 * j) +
                  16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2) *
                      is) +
                 1] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj
                    [((3 * i2 + 9 * j) +
                      9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) *
                          is) +
                     1];
            mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj
                [((4 * i2 + 16 * j) +
                  16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2) *
                      is) +
                 2] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj
                    [((3 * i2 + 9 * j) +
                      9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) *
                          is) +
                     2];
            mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj
                [((i2 + 16 * j) +
                  16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2) *
                      is) +
                 12] =
                mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj
                    [(i2 + 3 * j) +
                     3 * mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(1) *
                         is];
          }
          mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj
              [(16 * j +
                16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2) * is) +
               3] = 0.0;
          mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj
              [(16 * j +
                16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2) * is) +
               7] = 0.0;
          mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj
              [(16 * j +
                16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2) * is) +
               11] = 0.0;
          mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj
              [(16 * j +
                16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2) * is) +
               15] = 0.0;
          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2);
          if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
                &fc_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3);
          if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                &gc_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1);
          if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
                &hc_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(2);
          if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                &ic_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2);
          if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
                &jc_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(3);
          if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(
                static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                &kc_emlrtBCI, &st);
          }
          for (i2 = 0; i2 < 3; i2++) {
            mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj
                [(4 * i2 + 16 * j) +
                 16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2) * is] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj
                    [(3 * i2 + 9 * j) +
                     9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) *
                         is];
            mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj
                [((4 * i2 + 16 * j) +
                  16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2) *
                      is) +
                 1] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj
                    [((3 * i2 + 9 * j) +
                      9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) *
                          is) +
                     1];
            mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj
                [((4 * i2 + 16 * j) +
                  16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2) *
                      is) +
                 2] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj
                    [((3 * i2 + 9 * j) +
                      9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) *
                          is) +
                     2];
            mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj
                [((i2 + 16 * j) +
                  16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2) *
                      is) +
                 12] =
                mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj
                    [(i2 + 3 * j) +
                     3 * mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1) *
                         is];
          }
          mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj
              [(16 * j +
                16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2) * is) +
               3] = 0.0;
          mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj
              [(16 * j +
                16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2) * is) +
               7] = 0.0;
          mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj
              [(16 * j +
                16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2) * is) +
               11] = 0.0;
          mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj
              [(16 * j +
                16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2) * is) +
               15] = 0.0;
        }
        //  =========================== %
        //  ======= dT0(s)_duz ======== %
        i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2);
        if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
            (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
              &lc_emlrtBCI, &st);
        }
        i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(3);
        if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
            (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
              &mc_emlrtBCI, &st);
        }
        i2 = mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(1);
        if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
            (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
              &nc_emlrtBCI, &st);
        }
        i2 = mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(2);
        if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
            (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
              &oc_emlrtBCI, &st);
        }
        i2 = mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2);
        if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
            (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i2)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, i2,
              &pc_emlrtBCI, &st);
        }
        i2 = mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(3);
        if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
            (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
              &qc_emlrtBCI, &st);
        }
        for (i2 = 0; i2 < 3; i2++) {
          mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0
              [(4 * i2 + 16 * j) +
               16 * mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2) * is] =
              mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                  [(3 * i2 + 9 * j) +
                   9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                       is];
          mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0
              [((4 * i2 + 16 * j) +
                16 * mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2) * is) +
               1] =
              mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                  [((3 * i2 + 9 * j) +
                    9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                        is) +
                   1];
          mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0
              [((4 * i2 + 16 * j) +
                16 * mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2) * is) +
               2] =
              mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                  [((3 * i2 + 9 * j) +
                    9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                        is) +
                   2];
          mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0
              [((i2 + 16 * j) +
                16 * mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2) * is) +
               12] =
              mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0
                  [(i2 + 3 * j) +
                   3 * mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(1) *
                       is];
        }
        mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0
            [(16 * j +
              16 * mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2) * is) +
             3] = 0.0;
        mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0
            [(16 * j +
              16 * mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2) * is) +
             7] = 0.0;
        mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0
            [(16 * j +
              16 * mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2) * is) +
             11] = 0.0;
        mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0
            [(16 * j +
              16 * mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2) * is) +
             15] = 0.0;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (int32_T j{0}; j < 3; j++) {
        //  ======================================= %
        //  ====== dT0(s)_dm0 and dT0(s)_dn0 ====== %
        i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(3);
        if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
            (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
              &rc_emlrtBCI, &st);
        }
        i1 = mem_deriv_propag_low->mem_dP0.mem_dP0_dm0j0.size(2);
        if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
            (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
              &sc_emlrtBCI, &st);
        }
        i1 = mem_deriv_propag_low->mem_dT0.mem_dT0_dm0j0.size(3);
        if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
            (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
              &tc_emlrtBCI, &st);
        }
        for (i1 = 0; i1 < 3; i1++) {
          mem_deriv_propag_low->mem_dT0
              .mem_dT0_dm0j0[(4 * i1 + 16 * j) + 48 * is] =
              mem_deriv_propag_low->mem_dR0
                  .mem_dR0_dm0j0[(3 * i1 + 9 * j) + 27 * is];
          mem_deriv_propag_low->mem_dT0
              .mem_dT0_dm0j0[((4 * i1 + 16 * j) + 48 * is) + 1] =
              mem_deriv_propag_low->mem_dR0
                  .mem_dR0_dm0j0[((3 * i1 + 9 * j) + 27 * is) + 1];
          mem_deriv_propag_low->mem_dT0
              .mem_dT0_dm0j0[((4 * i1 + 16 * j) + 48 * is) + 2] =
              mem_deriv_propag_low->mem_dR0
                  .mem_dR0_dm0j0[((3 * i1 + 9 * j) + 27 * is) + 2];
          mem_deriv_propag_low->mem_dT0
              .mem_dT0_dm0j0[((i1 + 16 * j) + 48 * is) + 12] =
              mem_deriv_propag_low->mem_dP0
                  .mem_dP0_dm0j0[(i1 + 3 * j) + 9 * is];
        }
        mem_deriv_propag_low->mem_dT0.mem_dT0_dm0j0[(16 * j + 48 * is) + 3] =
            0.0;
        mem_deriv_propag_low->mem_dT0.mem_dT0_dm0j0[(16 * j + 48 * is) + 7] =
            0.0;
        mem_deriv_propag_low->mem_dT0.mem_dT0_dm0j0[(16 * j + 48 * is) + 11] =
            0.0;
        mem_deriv_propag_low->mem_dT0.mem_dT0_dm0j0[(16 * j + 48 * is) + 15] =
            0.0;
        i1 = mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(3);
        if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
            (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
              &uc_emlrtBCI, &st);
        }
        i1 = mem_deriv_propag_low->mem_dP0.mem_dP0_dn0j0.size(2);
        if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
            (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
              &vc_emlrtBCI, &st);
        }
        i1 = mem_deriv_propag_low->mem_dT0.mem_dT0_dn0j0.size(3);
        if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
            (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i1)) {
          emlrtDynamicBoundsCheckR2012b(
              static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i1,
              &wc_emlrtBCI, &st);
        }
        for (i1 = 0; i1 < 3; i1++) {
          mem_deriv_propag_low->mem_dT0
              .mem_dT0_dn0j0[(4 * i1 + 16 * j) + 48 * is] =
              mem_deriv_propag_low->mem_dR0
                  .mem_dR0_dn0j0[(3 * i1 + 9 * j) + 27 * is];
          mem_deriv_propag_low->mem_dT0
              .mem_dT0_dn0j0[((4 * i1 + 16 * j) + 48 * is) + 1] =
              mem_deriv_propag_low->mem_dR0
                  .mem_dR0_dn0j0[((3 * i1 + 9 * j) + 27 * is) + 1];
          mem_deriv_propag_low->mem_dT0
              .mem_dT0_dn0j0[((4 * i1 + 16 * j) + 48 * is) + 2] =
              mem_deriv_propag_low->mem_dR0
                  .mem_dR0_dn0j0[((3 * i1 + 9 * j) + 27 * is) + 2];
          mem_deriv_propag_low->mem_dT0
              .mem_dT0_dn0j0[((i1 + 16 * j) + 48 * is) + 12] =
              mem_deriv_propag_low->mem_dP0
                  .mem_dP0_dn0j0[(i1 + 3 * j) + 9 * is];
        }
        mem_deriv_propag_low->mem_dT0.mem_dT0_dn0j0[(16 * j + 48 * is) + 3] =
            0.0;
        mem_deriv_propag_low->mem_dT0.mem_dT0_dn0j0[(16 * j + 48 * is) + 7] =
            0.0;
        mem_deriv_propag_low->mem_dT0.mem_dT0_dn0j0[(16 * j + 48 * is) + 11] =
            0.0;
        mem_deriv_propag_low->mem_dT0.mem_dT0_dn0j0[(16 * j + 48 * is) + 15] =
            0.0;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      if (simulation_param->bool_Cs0) {
        end_tmp = simulation_param->pt_s0_LIT.size(1) - 1;
        loop_ub = 0;
        for (int32_T j{0}; j <= end_tmp; j++) {
          if (simulation_param->pt_s0_LIT[j] <= static_cast<real_T>(is) + 1.0) {
            loop_ub++;
          }
        }
        r2.set_size(&ec_emlrtRTEI, &st, 1, loop_ub);
        loop_ub = 0;
        for (int32_T j{0}; j <= end_tmp; j++) {
          if (simulation_param->pt_s0_LIT[j] <= static_cast<real_T>(is) + 1.0) {
            r2[loop_ub] = j;
            loop_ub++;
          }
        }
        loop_ub = r2.size(1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          if ((r2[i1] < 0) || (r2[i1] > end_tmp)) {
            emlrtDynamicBoundsCheckR2012b(r2[i1], 0, end_tmp, &ff_emlrtBCI,
                                          &st);
          }
        }
        i1 = r2.size(1);
        for (loop_ub = 0; loop_ub < i1; loop_ub++) {
          if (loop_ub + 1 > r2.size(1)) {
            emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, r2.size(1),
                                          &xc_emlrtBCI, &st);
          }
          nbT = simulation_param->pt_s0_LIT[r2[loop_ub]];
          for (int32_T j{0}; j < 3; j++) {
            //  ============================================= %
            //  ==== du0(s)_dtau0(s0) and du0(s)_df0(s0) ==== %
            //  (eq 32a)
            if (static_cast<real_T>(is) + 1.0 == nbP) {
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2);
              if ((is < 1) || (is > i2)) {
                emlrtDynamicBoundsCheckR2012b(is, 1, i2, &yc_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(3);
              if ((static_cast<int32_T>(nbT) < 1) ||
                  (static_cast<int32_T>(nbT) > i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
                                              &ad_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2);
              if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                    &bd_emlrtBCI, &st);
              }
              if (nbT != static_cast<int32_T>(muDoubleScalarFloor(nbT))) {
                emlrtIntegerCheckR2012b(nbT, &b_emlrtDCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(3);
              if ((static_cast<int32_T>(nbT) < 1) ||
                  (static_cast<int32_T>(nbT) > i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
                                              &cd_emlrtBCI, &st);
              }
              b = mem_deriv_propag_low->mem_du0
                      .mem_du0_dtaus0[((3 * j + 9 * (is - 1)) +
                                       9 *
                                           mem_deriv_propag_low->mem_du0
                                               .mem_du0_dtaus0.size(2) *
                                           (static_cast<int32_T>(nbT) - 1)) +
                                      1];
              sum_dtcj_idx_2 =
                  mem_deriv_propag_low->mem_du0
                      .mem_du0_dtaus0[((3 * j + 9 * (is - 1)) +
                                       9 *
                                           mem_deriv_propag_low->mem_du0
                                               .mem_du0_dtaus0.size(2) *
                                           (static_cast<int32_T>(nbT) - 1)) +
                                      2];
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0
                  [(3 * j + 9 * is) +
                   9 * mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) *
                       (static_cast<int32_T>(nbT) - 1)] =
                  mem_deriv_propag_low->mem_du0
                      .mem_du0_dtaus0[(3 * j + 9 * (is - 1)) +
                                      9 *
                                          mem_deriv_propag_low->mem_du0
                                              .mem_du0_dtaus0.size(2) *
                                          (static_cast<int32_T>(nbT) - 1)];
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0
                  [((3 * j + 9 * is) +
                    9 * mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) *
                        (static_cast<int32_T>(nbT) - 1)) +
                   1] = b;
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0
                  [((3 * j + 9 * is) +
                    9 * mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) *
                        (static_cast<int32_T>(nbT) - 1)) +
                   2] = sum_dtcj_idx_2;
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2);
              if (is > i2) {
                emlrtDynamicBoundsCheckR2012b(is, 1, i2, &dd_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(3);
              if ((static_cast<int32_T>(nbT) < 1) ||
                  (static_cast<int32_T>(nbT) > i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
                                              &ed_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2);
              if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                    &fd_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(3);
              if ((static_cast<int32_T>(nbT) < 1) ||
                  (static_cast<int32_T>(nbT) > i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
                                              &gd_emlrtBCI, &st);
              }
              b = mem_deriv_propag_low->mem_du0.mem_du0_dfs0
                      [((3 * j + 9 * (is - 1)) +
                        9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2) *
                            (static_cast<int32_T>(nbT) - 1)) +
                       1];
              sum_dtcj_idx_2 =
                  mem_deriv_propag_low->mem_du0.mem_du0_dfs0
                      [((3 * j + 9 * (is - 1)) +
                        9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2) *
                            (static_cast<int32_T>(nbT) - 1)) +
                       2];
              mem_deriv_propag_low->mem_du0.mem_du0_dfs0
                  [(3 * j + 9 * is) +
                   9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2) *
                       (static_cast<int32_T>(nbT) - 1)] =
                  mem_deriv_propag_low->mem_du0.mem_du0_dfs0
                      [(3 * j + 9 * (is - 1)) +
                       9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2) *
                           (static_cast<int32_T>(nbT) - 1)];
              mem_deriv_propag_low->mem_du0.mem_du0_dfs0
                  [((3 * j + 9 * is) +
                    9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2) *
                        (static_cast<int32_T>(nbT) - 1)) +
                   1] = b;
              mem_deriv_propag_low->mem_du0.mem_du0_dfs0
                  [((3 * j + 9 * is) +
                    9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2) *
                        (static_cast<int32_T>(nbT) - 1)) +
                   2] = sum_dtcj_idx_2;
            } else {
              sum_dtcj[0] = 0.0;
              sum_dfs0[0] = 0.0;
              sum_dtcj[1] = 0.0;
              sum_dfs0[1] = 0.0;
              sum_dtcj[2] = 0.0;
              sum_dfs0[2] = 0.0;
              i2 = ii.size(0);
              for (int32_T b_iv{0}; b_iv < i2; b_iv++) {
                if (b_iv + 1 > ii.size(0)) {
                  emlrtDynamicBoundsCheckR2012b(b_iv + 1, 1, ii.size(0),
                                                &hd_emlrtBCI, &st);
                }
                if ((ii[b_iv] < 1) ||
                    (ii[b_iv] > mem_bvp->mem_y.mem_t.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1,
                                                mem_bvp->mem_y.mem_t.size(0),
                                                &mf_emlrtBCI, &st);
                }
                if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) <
                     1) ||
                    (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) >
                     mem_bvp->mem_y.mem_t.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(
                      static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1,
                      mem_bvp->mem_y.mem_t.size(1), &nf_emlrtBCI, &st);
                }
                gamma_tmp =
                    mem_bvp->mem_y
                        .mem_t[(ii[b_iv] + mem_bvp->mem_y.mem_t.size(0) * is) -
                               1];
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
                R_tmp_tmp = muDoubleScalarSin(gamma_tmp);
                b_R_tmp_tmp = muDoubleScalarCos(gamma_tmp);
                i4 = mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0);
                if ((ii[b_iv] < 1) || (ii[b_iv] > i4)) {
                  emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1, i4, &yf_emlrtBCI,
                                                &st);
                }
                i4 = mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(2);
                if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) <
                     1) ||
                    (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) >
                     i4)) {
                  emlrtDynamicBoundsCheckR2012b(
                      static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1,
                      i4, &ag_emlrtBCI, &st);
                }
                i4 = mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(3);
                if (nbT != static_cast<int32_T>(muDoubleScalarFloor(nbT))) {
                  emlrtIntegerCheckR2012b(nbT, &g_emlrtDCI, &st);
                }
                if ((static_cast<int32_T>(nbT) < 1) ||
                    (static_cast<int32_T>(nbT) > i4)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
                                                i4, &bg_emlrtBCI, &st);
                }
                b = mem_deriv_propag_low->mem_dti.mem_dti_dtaus0
                        [(((ii[b_iv] + mem_deriv_propag_low->mem_dti
                                               .mem_dti_dtaus0.size(0) *
                                           j) +
                           mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(
                               0) *
                               3 * is) +
                          mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) *
                              3 *
                              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(
                                  2) *
                              (static_cast<int32_T>(nbT) - 1)) -
                         1];
                i4 = ii[b_iv];
                b_b = ((i4 < 1) || (i4 > ctcr_construc->K.size(2)));
                if (b_b) {
                  emlrtDynamicBoundsCheckR2012b(i4, 1, ctcr_construc->K.size(2),
                                                &id_emlrtBCI, &st);
                }
                if ((is + 1 < 1) || (is + 1 > ctcr_construc->ui_init.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(is + 1, 1,
                                                ctcr_construc->ui_init.size(1),
                                                &jd_emlrtBCI, &st);
                }
                i4 = ii[b_iv];
                if ((i4 < 1) || (i4 > ctcr_construc->ui_init.size(2))) {
                  emlrtDynamicBoundsCheckR2012b(
                      i4, 1, ctcr_construc->ui_init.size(2), &kd_emlrtBCI, &st);
                }
                R_tmp[0] = b_R_tmp_tmp;
                R_tmp[3] = -R_tmp_tmp;
                R_tmp[6] = 0.0;
                R_tmp[1] = R_tmp_tmp;
                R_tmp[4] = b_R_tmp_tmp;
                R_tmp[7] = 0.0;
                R_tmp[2] = 0.0;
                R_tmp[5] = 0.0;
                R_tmp[8] = 1.0;
                for (i4 = 0; i4 < 3; i4++) {
                  i5 = iv[i4];
                  i6 = iv[i4 + 3];
                  for (i7 = 0; i7 < 3; i7++) {
                    a[i4 + 3 * i7] =
                        (static_cast<real_T>(i5) * R_tmp[3 * i7] +
                         static_cast<real_T>(i6) * R_tmp[3 * i7 + 1]) +
                        0.0 * R_tmp[3 * i7 + 2];
                  }
                }
                for (i4 = 0; i4 < 9; i4++) {
                  a[i4] *= b;
                }
                for (i4 = 0; i4 < 3; i4++) {
                  d = 0.0;
                  b = a[i4];
                  sum_dtcj_idx_2 = a[i4 + 3];
                  gamma_tmp = a[i4 + 6];
                  for (i7 = 0; i7 < 3; i7++) {
                    d += ((b * ctcr_construc->K[3 * i7 + 9 * (ii[b_iv] - 1)] +
                           sum_dtcj_idx_2 *
                               ctcr_construc
                                   ->K[(3 * i7 + 9 * (ii[b_iv] - 1)) + 1]) +
                          gamma_tmp *
                              ctcr_construc
                                  ->K[(3 * i7 + 9 * (ii[b_iv] - 1)) + 2]) *
                         ctcr_construc
                             ->ui_init[(i7 + 3 * is) +
                                       3 * ctcr_construc->ui_init.size(1) *
                                           (ii[b_iv] - 1)];
                  }
                  sum_dtcj[i4] += d;
                }
                if ((ii[b_iv] < 1) ||
                    (ii[b_iv] > mem_bvp->mem_y.mem_t.size(0))) {
                  emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1,
                                                mem_bvp->mem_y.mem_t.size(0),
                                                &cg_emlrtBCI, &st);
                }
                if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) <
                     1) ||
                    (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) >
                     mem_bvp->mem_y.mem_t.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(
                      static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1,
                      mem_bvp->mem_y.mem_t.size(1), &dg_emlrtBCI, &st);
                }
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
                i4 = mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0);
                if ((ii[b_iv] < 1) || (ii[b_iv] > i4)) {
                  emlrtDynamicBoundsCheckR2012b(ii[b_iv], 1, i4, &eg_emlrtBCI,
                                                &st);
                }
                i4 = mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(2);
                if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) <
                     1) ||
                    (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) >
                     i4)) {
                  emlrtDynamicBoundsCheckR2012b(
                      static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1,
                      i4, &fg_emlrtBCI, &st);
                }
                i4 = mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(3);
                if ((static_cast<int32_T>(nbT) < 1) ||
                    (static_cast<int32_T>(nbT) > i4)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
                                                i4, &gg_emlrtBCI, &st);
                }
                b = mem_deriv_propag_low->mem_dti.mem_dti_dfs0
                        [(((ii[b_iv] +
                            mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) *
                                j) +
                           mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) *
                               3 * is) +
                          mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) *
                              3 *
                              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(
                                  2) *
                              (static_cast<int32_T>(nbT) - 1)) -
                         1];
                if ((is + 1 < 1) || (is + 1 > ctcr_construc->ui_init.size(1))) {
                  emlrtDynamicBoundsCheckR2012b(is + 1, 1,
                                                ctcr_construc->ui_init.size(1),
                                                &ld_emlrtBCI, &st);
                }
                i4 = ii[b_iv];
                if ((i4 < 1) || (i4 > ctcr_construc->ui_init.size(2))) {
                  emlrtDynamicBoundsCheckR2012b(
                      i4, 1, ctcr_construc->ui_init.size(2), &md_emlrtBCI, &st);
                }
                R_tmp[0] = b_R_tmp_tmp;
                R_tmp[3] = -R_tmp_tmp;
                R_tmp[6] = 0.0;
                R_tmp[1] = R_tmp_tmp;
                R_tmp[4] = b_R_tmp_tmp;
                R_tmp[7] = 0.0;
                R_tmp[2] = 0.0;
                R_tmp[5] = 0.0;
                R_tmp[8] = 1.0;
                for (i4 = 0; i4 < 3; i4++) {
                  i5 = iv[i4];
                  i6 = iv[i4 + 3];
                  for (i7 = 0; i7 < 3; i7++) {
                    a[i4 + 3 * i7] =
                        (static_cast<real_T>(i5) * R_tmp[3 * i7] +
                         static_cast<real_T>(i6) * R_tmp[3 * i7 + 1]) +
                        0.0 * R_tmp[3 * i7 + 2];
                  }
                }
                for (i4 = 0; i4 < 9; i4++) {
                  a[i4] *= b;
                }
                for (i4 = 0; i4 < 3; i4++) {
                  d = 0.0;
                  b = a[i4];
                  sum_dtcj_idx_2 = a[i4 + 3];
                  gamma_tmp = a[i4 + 6];
                  for (i7 = 0; i7 < 3; i7++) {
                    d += ((b * ctcr_construc->K[3 * i7 + 9 * (ii[b_iv] - 1)] +
                           sum_dtcj_idx_2 *
                               ctcr_construc
                                   ->K[(3 * i7 + 9 * (ii[b_iv] - 1)) + 1]) +
                          gamma_tmp *
                              ctcr_construc
                                  ->K[(3 * i7 + 9 * (ii[b_iv] - 1)) + 2]) *
                         ctcr_construc
                             ->ui_init[(i7 + 3 * is) +
                                       3 * ctcr_construc->ui_init.size(1) *
                                           (ii[b_iv] - 1)];
                  }
                  sum_dfs0[i4] += d;
                }
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(&st);
                }
              }
              b_b =
                  ((is + 1 < 1) || (is + 1 > mem_bvp->mem_inv_sum_Ki.size(2)));
              if (b_b) {
                emlrtDynamicBoundsCheckR2012b(is + 1, 1,
                                              mem_bvp->mem_inv_sum_Ki.size(2),
                                              &nd_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2);
              if ((is + 1 < 1) || (is + 1 > i2)) {
                emlrtDynamicBoundsCheckR2012b(is + 1, 1, i2, &od_emlrtBCI, &st);
              }
              if (nbT != static_cast<int32_T>(muDoubleScalarFloor(nbT))) {
                emlrtIntegerCheckR2012b(nbT, &c_emlrtDCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(3);
              if ((static_cast<int32_T>(nbT) < 1) ||
                  (static_cast<int32_T>(nbT) > i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
                                              &pd_emlrtBCI, &st);
              }
              gamma_tmp =
                  sum_dtcj[0] +
                  mem_deriv_propag_low->mem_dm0
                      .mem_dm0_dtaus0[(3 * j + 9 * is) +
                                      9 *
                                          mem_deriv_propag_low->mem_dm0
                                              .mem_dm0_dtaus0.size(2) *
                                          (static_cast<int32_T>(nbT) - 1)];
              b = sum_dtcj[1] +
                  mem_deriv_propag_low->mem_dm0
                      .mem_dm0_dtaus0[((3 * j + 9 * is) +
                                       9 *
                                           mem_deriv_propag_low->mem_dm0
                                               .mem_dm0_dtaus0.size(2) *
                                           (static_cast<int32_T>(nbT) - 1)) +
                                      1];
              sum_dtcj_idx_2 =
                  sum_dtcj[2] +
                  mem_deriv_propag_low->mem_dm0
                      .mem_dm0_dtaus0[((3 * j + 9 * is) +
                                       9 *
                                           mem_deriv_propag_low->mem_dm0
                                               .mem_dm0_dtaus0.size(2) *
                                           (static_cast<int32_T>(nbT) - 1)) +
                                      2];
              for (i2 = 0; i2 < 3; i2++) {
                sum_dtcj[i2] =
                    (mem_bvp->mem_inv_sum_Ki[i2 + 9 * is] * gamma_tmp +
                     mem_bvp->mem_inv_sum_Ki[(i2 + 9 * is) + 3] * b) +
                    mem_bvp->mem_inv_sum_Ki[(i2 + 9 * is) + 6] * sum_dtcj_idx_2;
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2);
              if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                    &qd_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(3);
              if ((static_cast<int32_T>(nbT) < 1) ||
                  (static_cast<int32_T>(nbT) > i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
                                              &rd_emlrtBCI, &st);
              }
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0
                  [(3 * j + 9 * is) +
                   9 * mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) *
                       (static_cast<int32_T>(nbT) - 1)] = sum_dtcj[0];
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0
                  [((3 * j + 9 * is) +
                    9 * mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) *
                        (static_cast<int32_T>(nbT) - 1)) +
                   1] = sum_dtcj[1];
              mem_deriv_propag_low->mem_du0.mem_du0_dtaus0
                  [((3 * j + 9 * is) +
                    9 * mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2) *
                        (static_cast<int32_T>(nbT) - 1)) +
                   2] = 0.0;
              i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2);
              if ((is + 1 < 1) || (is + 1 > i2)) {
                emlrtDynamicBoundsCheckR2012b(is + 1, 1, i2, &sd_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(3);
              if ((static_cast<int32_T>(nbT) < 1) ||
                  (static_cast<int32_T>(nbT) > i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
                                              &td_emlrtBCI, &st);
              }
              gamma_tmp =
                  sum_dfs0[0] +
                  mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0
                      [(3 * j + 9 * is) +
                       9 * mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2) *
                           (static_cast<int32_T>(nbT) - 1)];
              b = sum_dfs0[1] +
                  mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0
                      [((3 * j + 9 * is) +
                        9 * mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2) *
                            (static_cast<int32_T>(nbT) - 1)) +
                       1];
              sum_dtcj_idx_2 =
                  sum_dfs0[2] +
                  mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0
                      [((3 * j + 9 * is) +
                        9 * mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2) *
                            (static_cast<int32_T>(nbT) - 1)) +
                       2];
              for (i2 = 0; i2 < 3; i2++) {
                sum_dtcj[i2] =
                    (mem_bvp->mem_inv_sum_Ki[i2 + 9 * is] * gamma_tmp +
                     mem_bvp->mem_inv_sum_Ki[(i2 + 9 * is) + 3] * b) +
                    mem_bvp->mem_inv_sum_Ki[(i2 + 9 * is) + 6] * sum_dtcj_idx_2;
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2);
              if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                  (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
                emlrtDynamicBoundsCheckR2012b(
                    static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                    &ud_emlrtBCI, &st);
              }
              i2 = mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(3);
              if ((static_cast<int32_T>(nbT) < 1) ||
                  (static_cast<int32_T>(nbT) > i2)) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
                                              &vd_emlrtBCI, &st);
              }
              mem_deriv_propag_low->mem_du0.mem_du0_dfs0
                  [(3 * j + 9 * is) +
                   9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2) *
                       (static_cast<int32_T>(nbT) - 1)] = sum_dtcj[0];
              mem_deriv_propag_low->mem_du0.mem_du0_dfs0
                  [((3 * j + 9 * is) +
                    9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2) *
                        (static_cast<int32_T>(nbT) - 1)) +
                   1] = sum_dtcj[1];
              mem_deriv_propag_low->mem_du0.mem_du0_dfs0
                  [((3 * j + 9 * is) +
                    9 * mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2) *
                        (static_cast<int32_T>(nbT) - 1)) +
                   2] = 0.0;
            }
            //  ============================================= %
            //  ==== dT0(s)_dtau0(s0) and dT0(s)_df0(s0) ==== %
            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3);
            if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                  &wd_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(4);
            if ((static_cast<int32_T>(nbT) < 1) ||
                (static_cast<int32_T>(nbT) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
                                            &xd_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(2);
            if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                  &yd_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(3);
            if ((static_cast<int32_T>(nbT) < 1) ||
                (static_cast<int32_T>(nbT) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
                                            &ae_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(3);
            if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                  &be_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(4);
            if ((static_cast<int32_T>(nbT) < 1) ||
                (static_cast<int32_T>(nbT) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
                                            &ce_emlrtBCI, &st);
            }
            for (i2 = 0; i2 < 3; i2++) {
              mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0
                  [((4 * i2 + 16 * j) + 48 * is) +
                   48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(3) *
                       (static_cast<int32_T>(nbT) - 1)] =
                  mem_deriv_propag_low->mem_dR0
                      .mem_dR0_dtaus0[((3 * i2 + 9 * j) + 27 * is) +
                                      27 *
                                          mem_deriv_propag_low->mem_dR0
                                              .mem_dR0_dtaus0.size(3) *
                                          (static_cast<int32_T>(nbT) - 1)];
              mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0
                  [(((4 * i2 + 16 * j) + 48 * is) +
                    48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(3) *
                        (static_cast<int32_T>(nbT) - 1)) +
                   1] =
                  mem_deriv_propag_low->mem_dR0
                      .mem_dR0_dtaus0[(((3 * i2 + 9 * j) + 27 * is) +
                                       27 *
                                           mem_deriv_propag_low->mem_dR0
                                               .mem_dR0_dtaus0.size(3) *
                                           (static_cast<int32_T>(nbT) - 1)) +
                                      1];
              mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0
                  [(((4 * i2 + 16 * j) + 48 * is) +
                    48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(3) *
                        (static_cast<int32_T>(nbT) - 1)) +
                   2] =
                  mem_deriv_propag_low->mem_dR0
                      .mem_dR0_dtaus0[(((3 * i2 + 9 * j) + 27 * is) +
                                       27 *
                                           mem_deriv_propag_low->mem_dR0
                                               .mem_dR0_dtaus0.size(3) *
                                           (static_cast<int32_T>(nbT) - 1)) +
                                      2];
              mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0
                  [(((i2 + 16 * j) + 48 * is) +
                    48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(3) *
                        (static_cast<int32_T>(nbT) - 1)) +
                   12] =
                  mem_deriv_propag_low->mem_dP0
                      .mem_dP0_dtaus0[((i2 + 3 * j) + 9 * is) +
                                      9 *
                                          mem_deriv_propag_low->mem_dP0
                                              .mem_dP0_dtaus0.size(2) *
                                          (static_cast<int32_T>(nbT) - 1)];
            }
            mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0
                [((16 * j + 48 * is) +
                  48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(3) *
                      (static_cast<int32_T>(nbT) - 1)) +
                 3] = 0.0;
            mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0
                [((16 * j + 48 * is) +
                  48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(3) *
                      (static_cast<int32_T>(nbT) - 1)) +
                 7] = 0.0;
            mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0
                [((16 * j + 48 * is) +
                  48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(3) *
                      (static_cast<int32_T>(nbT) - 1)) +
                 11] = 0.0;
            mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0
                [((16 * j + 48 * is) +
                  48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(3) *
                      (static_cast<int32_T>(nbT) - 1)) +
                 15] = 0.0;
            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3);
            if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                  &de_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(4);
            if ((static_cast<int32_T>(nbT) < 1) ||
                (static_cast<int32_T>(nbT) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
                                            &ee_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(2);
            if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                  &fe_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(3);
            if ((static_cast<int32_T>(nbT) < 1) ||
                (static_cast<int32_T>(nbT) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
                                            &ge_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(3);
            if ((static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) < 1) ||
                (static_cast<int32_T>(static_cast<uint32_T>(is) + 1U) > i2)) {
              emlrtDynamicBoundsCheckR2012b(
                  static_cast<int32_T>(static_cast<uint32_T>(is) + 1U), 1, i2,
                  &he_emlrtBCI, &st);
            }
            i2 = mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(4);
            if ((static_cast<int32_T>(nbT) < 1) ||
                (static_cast<int32_T>(nbT) > i2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
                                            &ie_emlrtBCI, &st);
            }
            for (i2 = 0; i2 < 3; i2++) {
              mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0
                  [((4 * i2 + 16 * j) + 48 * is) +
                   48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(3) *
                       (static_cast<int32_T>(nbT) - 1)] =
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0
                      [((3 * i2 + 9 * j) + 27 * is) +
                       27 * mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) *
                           (static_cast<int32_T>(nbT) - 1)];
              mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0
                  [(((4 * i2 + 16 * j) + 48 * is) +
                    48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(3) *
                        (static_cast<int32_T>(nbT) - 1)) +
                   1] =
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0
                      [(((3 * i2 + 9 * j) + 27 * is) +
                        27 *
                            mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) *
                            (static_cast<int32_T>(nbT) - 1)) +
                       1];
              mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0
                  [(((4 * i2 + 16 * j) + 48 * is) +
                    48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(3) *
                        (static_cast<int32_T>(nbT) - 1)) +
                   2] =
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0
                      [(((3 * i2 + 9 * j) + 27 * is) +
                        27 *
                            mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) *
                            (static_cast<int32_T>(nbT) - 1)) +
                       2];
              mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0
                  [(((i2 + 16 * j) + 48 * is) +
                    48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(3) *
                        (static_cast<int32_T>(nbT) - 1)) +
                   12] =
                  mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0
                      [((i2 + 3 * j) + 9 * is) +
                       9 * mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(2) *
                           (static_cast<int32_T>(nbT) - 1)];
            }
            mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0
                [((16 * j + 48 * is) +
                  48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(3) *
                      (static_cast<int32_T>(nbT) - 1)) +
                 3] = 0.0;
            mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0
                [((16 * j + 48 * is) +
                  48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(3) *
                      (static_cast<int32_T>(nbT) - 1)) +
                 7] = 0.0;
            mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0
                [((16 * j + 48 * is) +
                  48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(3) *
                      (static_cast<int32_T>(nbT) - 1)) +
                 11] = 0.0;
            mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0
                [((16 * j + 48 * is) +
                  48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(3) *
                      (static_cast<int32_T>(nbT) - 1)) +
                 15] = 0.0;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
      }
    }
    //  =========================================================== %
    //  ====== Computation of Low-Level partial derivatives ======= %
    st.site = &c_emlrtRSI;
    Deriv_Propag_Comp_Low_ODE(st, static_cast<real_T>(is) + 1.0, mem_bvp,
                              ctcr_carac, ctcr_act, ctcr_construc,
                              simulation_param, mem_deriv_propag_low);
    //  ========================================== %
    //  ============ Memories updating =========== %
    st.site = &d_emlrtRSI;
    Deriv_Propag_MaJ_Mem(st, static_cast<real_T>(is) + 1.0, ctcr_carac,
                         ctcr_construc, mem_bvp, mem_deriv_propag_low,
                         simulation_param);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  ========================================== %
  //  ============== B computation ============= %
  st.site = &e_emlrtRSI;
  Deriv_Propag_DBDX_Construc(st, mem_bvp, ctcr_construc, ctcr_carac, ctcr_load,
                             bvp_prop, simulation_param, mem_deriv_propag_low,
                             mem_deriv_propag_high);
  //  ========================================== %
  //  ============== E computation ============= %
  st.site = &f_emlrtRSI;
  //  ======================================================================= %
  //
  //  This function computes the high-level partial derivatives Ex
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  ctcr_construc         : (class) Robot features related to the model
  //  settings ctcr_carac            : (class) Robot features simulation_param
  //  : (class) Model settings mem_deriv_propag_low  : (class) Memory of the
  //  low-level derivatives mem_deriv_propag_high : (class) Memory of the
  //  high-level partial derivatives
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  mem_deriv_propag_high : (class) Memory of the High-Level partial
  //  derivatives
  //
  //  ======================================================================= %
  i = static_cast<int32_T>(ctcr_construc->nbP +
                           (1.0 - ctcr_construc->ind_origin));
  emlrtForLoopVectorCheckR2021a(ctcr_construc->ind_origin, 1.0,
                                ctcr_construc->nbP, mxDOUBLE_CLASS, i,
                                &j_emlrtRTEI, &st);
  for (int32_T is{0}; is < i; is++) {
    b = ctcr_construc->ind_origin + static_cast<real_T>(is);
    //  =========================== %
    //  ======== dT0(s)_dx ======== %
    if (b != static_cast<int32_T>(muDoubleScalarFloor(b))) {
      emlrtIntegerCheckR2012b(b, &d_emlrtDCI, &st);
    }
    i1 = mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(3);
    if ((static_cast<int32_T>(b) < 1) || (static_cast<int32_T>(b) > i1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b), 1, i1,
                                    &je_emlrtBCI, &st);
    }
    i1 = mem_deriv_propag_low->mem_dT0.mem_dT0_dm0j0.size(3);
    if ((static_cast<int32_T>(b) < 1) || (static_cast<int32_T>(b) > i1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b), 1, i1,
                                    &ke_emlrtBCI, &st);
    }
    i1 = mem_deriv_propag_low->mem_dT0.mem_dT0_dn0j0.size(3);
    if ((static_cast<int32_T>(b) < 1) || (static_cast<int32_T>(b) > i1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b), 1, i1,
                                    &le_emlrtBCI, &st);
    }
    i1 = mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(3);
    if ((static_cast<int32_T>(b) < 1) || (static_cast<int32_T>(b) > i1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b), 1, i1,
                                    &me_emlrtBCI, &st);
    }
    i1 = mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(3);
    if ((static_cast<int32_T>(b) < 1) || (static_cast<int32_T>(b) > i1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b), 1, i1,
                                    &ne_emlrtBCI, &st);
    }
    b_mem_deriv_propag_low.set_size(
        &fc_emlrtRTEI, &st, 4, 4,
        mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2));
    loop_ub = mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2);
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i2 = 0; i2 < 4; i2++) {
        b_mem_deriv_propag_low[4 * i2 + 16 * i1] =
            mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0
                [(4 * i2 + 16 * i1) +
                 16 * mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2) *
                     (static_cast<int32_T>(b) - 1)];
        b_mem_deriv_propag_low[(4 * i2 + 16 * i1) + 1] =
            mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0
                [((4 * i2 + 16 * i1) +
                  16 * mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2) *
                      (static_cast<int32_T>(b) - 1)) +
                 1];
        b_mem_deriv_propag_low[(4 * i2 + 16 * i1) + 2] =
            mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0
                [((4 * i2 + 16 * i1) +
                  16 * mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2) *
                      (static_cast<int32_T>(b) - 1)) +
                 2];
        b_mem_deriv_propag_low[(4 * i2 + 16 * i1) + 3] =
            mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0
                [((4 * i2 + 16 * i1) +
                  16 * mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2) *
                      (static_cast<int32_T>(b) - 1)) +
                 3];
      }
    }
    c_mem_deriv_propag_low.set_size(
        &gc_emlrtRTEI, &st, 4, 4,
        mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2));
    loop_ub = mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2);
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i2 = 0; i2 < 4; i2++) {
        c_mem_deriv_propag_low[4 * i2 + 16 * i1] =
            mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj
                [(4 * i2 + 16 * i1) +
                 16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2) *
                     (static_cast<int32_T>(b) - 1)];
        c_mem_deriv_propag_low[(4 * i2 + 16 * i1) + 1] =
            mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj
                [((4 * i2 + 16 * i1) +
                  16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2) *
                      (static_cast<int32_T>(b) - 1)) +
                 1];
        c_mem_deriv_propag_low[(4 * i2 + 16 * i1) + 2] =
            mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj
                [((4 * i2 + 16 * i1) +
                  16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2) *
                      (static_cast<int32_T>(b) - 1)) +
                 2];
        c_mem_deriv_propag_low[(4 * i2 + 16 * i1) + 3] =
            mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj
                [((4 * i2 + 16 * i1) +
                  16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2) *
                      (static_cast<int32_T>(b) - 1)) +
                 3];
      }
    }
    d_mem_deriv_propag_low.set_size(
        &hc_emlrtRTEI, &st, 4, 4,
        mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2));
    loop_ub = mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2);
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (i2 = 0; i2 < 4; i2++) {
        d_mem_deriv_propag_low[4 * i2 + 16 * i1] =
            mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj
                [(4 * i2 + 16 * i1) +
                 16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2) *
                     (static_cast<int32_T>(b) - 1)];
        d_mem_deriv_propag_low[(4 * i2 + 16 * i1) + 1] =
            mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj
                [((4 * i2 + 16 * i1) +
                  16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2) *
                      (static_cast<int32_T>(b) - 1)) +
                 1];
        d_mem_deriv_propag_low[(4 * i2 + 16 * i1) + 2] =
            mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj
                [((4 * i2 + 16 * i1) +
                  16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2) *
                      (static_cast<int32_T>(b) - 1)) +
                 2];
        d_mem_deriv_propag_low[(4 * i2 + 16 * i1) + 3] =
            mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj
                [((4 * i2 + 16 * i1) +
                  16 * mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2) *
                      (static_cast<int32_T>(b) - 1)) +
                 3];
      }
    }
    std::copy(&(*(real_T(*)[48]) &
                mem_deriv_propag_low->mem_dT0
                    .mem_dT0_dm0j0[48 * (static_cast<int32_T>(b) - 1)])[0],
              &(*(real_T(*)[48]) &
                mem_deriv_propag_low->mem_dT0
                    .mem_dT0_dm0j0[48 * (static_cast<int32_T>(b) - 1)])[48],
              &dv[0]);
    std::copy(&(*(real_T(*)[48]) &
                mem_deriv_propag_low->mem_dT0
                    .mem_dT0_dn0j0[48 * (static_cast<int32_T>(b) - 1)])[0],
              &(*(real_T(*)[48]) &
                mem_deriv_propag_low->mem_dT0
                    .mem_dT0_dn0j0[48 * (static_cast<int32_T>(b) - 1)])[48],
              &dv1[0]);
    b_st.site = &xb_emlrtRSI;
    coder::cat(b_st, b_mem_deriv_propag_low, dv, dv1, c_mem_deriv_propag_low,
               d_mem_deriv_propag_low, mem_dT0);
    //  ============================= %
    //  ======== dT0(s)_dyu0 ======== %
    //  (eq 34)
    i1 = static_cast<int32_T>(ctcr_carac->nbT + 6.0);
    emlrtForLoopVectorCheckR2021a(
        1.0, 1.0, ctcr_carac->nbT + 6.0, mxDOUBLE_CLASS,
        static_cast<int32_T>(ctcr_carac->nbT + 6.0), &k_emlrtRTEI, &st);
    if (i1 - 1 >= 0) {
      i3 = 6;
      b_is = static_cast<int32_T>(b) - 1;
    }
    for (int32_T j{0}; j < i1; j++) {
      i2 = mem_deriv_propag_high->mem_E.size(1);
      if ((j + 1 < 1) || (j + 1 > i2)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &pe_emlrtBCI, &st);
      }
      i2 = mem_deriv_propag_high->mem_E.size(2);
      if ((static_cast<int32_T>(b) < 1) || (static_cast<int32_T>(b) > i2)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b), 1, i2,
                                      &qe_emlrtBCI, &st);
      }
      emlrtSubAssignSizeCheckR2012b(mem_deriv_propag_high->mem_E.size(), 1, &i3,
                                    1, &b_emlrtECI, &st);
      if ((j + 1 < 1) || (j + 1 > mem_dT0.size(2))) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, mem_dT0.size(2), &oe_emlrtBCI,
                                      &st);
      }
      //  =======================================================================
      //  %
      //
      //  This function extract the 6x1 vector V associated to the
      //  skew-symmetric matrix M formed from initially formed thanks to the
      //  skew-symmetric operation
      //
      //  ====================
      //  ====== INPUTS ======
      //
      //  M     : (4x4) Matrix
      //
      //  ====================
      //  ===== OUTPUTS ======
      //
      //  V     : (6x1) Vector
      //
      //  =======================================================================
      //  %
      mem_deriv_propag_high
          ->mem_E[mem_deriv_propag_high->mem_E.size(0) * j +
                  mem_deriv_propag_high->mem_E.size(0) *
                      mem_deriv_propag_high->mem_E.size(1) * b_is] =
          mem_dT0[16 * j + 12];
      mem_deriv_propag_high
          ->mem_E[(mem_deriv_propag_high->mem_E.size(0) * j +
                   mem_deriv_propag_high->mem_E.size(0) *
                       mem_deriv_propag_high->mem_E.size(1) * b_is) +
                  1] = mem_dT0[16 * j + 13];
      mem_deriv_propag_high
          ->mem_E[(mem_deriv_propag_high->mem_E.size(0) * j +
                   mem_deriv_propag_high->mem_E.size(0) *
                       mem_deriv_propag_high->mem_E.size(1) * b_is) +
                  2] = mem_dT0[16 * j + 14];
      mem_deriv_propag_high
          ->mem_E[(mem_deriv_propag_high->mem_E.size(0) * j +
                   mem_deriv_propag_high->mem_E.size(0) *
                       mem_deriv_propag_high->mem_E.size(1) * b_is) +
                  3] = mem_dT0[16 * j + 6];
      mem_deriv_propag_high
          ->mem_E[(mem_deriv_propag_high->mem_E.size(0) * j +
                   mem_deriv_propag_high->mem_E.size(0) *
                       mem_deriv_propag_high->mem_E.size(1) * b_is) +
                  4] = mem_dT0[16 * j + 8];
      mem_deriv_propag_high
          ->mem_E[(mem_deriv_propag_high->mem_E.size(0) * j +
                   mem_deriv_propag_high->mem_E.size(0) *
                       mem_deriv_propag_high->mem_E.size(1) * b_is) +
                  5] = mem_dT0[16 * j + 1];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    //  ============================= %
    //  ========= dT0(s)_dq ========= %
    //  (eq 34)
    if (simulation_param->bool_J) {
      d = 3.0 * ctcr_carac->nbT + 6.0;
      i1 = static_cast<int32_T>(d + (1.0 - (ctcr_carac->nbT + 7.0)));
      emlrtForLoopVectorCheckR2021a(ctcr_carac->nbT + 7.0, 1.0, d,
                                    mxDOUBLE_CLASS, i1, &l_emlrtRTEI, &st);
      if (i1 - 1 >= 0) {
        i3 = 6;
        c_is = static_cast<int32_T>(b) - 1;
      }
      for (int32_T j{0}; j < i1; j++) {
        gamma_tmp = (ctcr_carac->nbT + 7.0) + static_cast<real_T>(j);
        if (gamma_tmp != static_cast<int32_T>(muDoubleScalarFloor(gamma_tmp))) {
          emlrtIntegerCheckR2012b(gamma_tmp, &e_emlrtDCI, &st);
        }
        i2 = mem_deriv_propag_high->mem_E.size(1);
        if ((static_cast<int32_T>(gamma_tmp) < 1) ||
            (static_cast<int32_T>(gamma_tmp) > i2)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(gamma_tmp), 1, i2,
                                        &se_emlrtBCI, &st);
        }
        i2 = mem_deriv_propag_high->mem_E.size(2);
        if ((static_cast<int32_T>(b) < 1) || (static_cast<int32_T>(b) > i2)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b), 1, i2,
                                        &te_emlrtBCI, &st);
        }
        emlrtSubAssignSizeCheckR2012b(mem_deriv_propag_high->mem_E.size(), 1,
                                      &i3, 1, &c_emlrtECI, &st);
        if ((static_cast<int32_T>(gamma_tmp) < 1) ||
            (static_cast<int32_T>(gamma_tmp) > mem_dT0.size(2))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(gamma_tmp), 1,
                                        mem_dT0.size(2), &re_emlrtBCI, &st);
        }
        //  =======================================================================
        //  %
        //
        //  This function extract the 6x1 vector V associated to the
        //  skew-symmetric matrix M formed from initially formed thanks to the
        //  skew-symmetric operation
        //
        //  ====================
        //  ====== INPUTS ======
        //
        //  M     : (4x4) Matrix
        //
        //  ====================
        //  ===== OUTPUTS ======
        //
        //  V     : (6x1) Vector
        //
        //  =======================================================================
        //  %
        mem_deriv_propag_high
            ->mem_E[mem_deriv_propag_high->mem_E.size(0) *
                        (static_cast<int32_T>(gamma_tmp) - 1) +
                    mem_deriv_propag_high->mem_E.size(0) *
                        mem_deriv_propag_high->mem_E.size(1) * c_is] =
            mem_dT0[16 * (static_cast<int32_T>(gamma_tmp) - 1) + 12];
        mem_deriv_propag_high
            ->mem_E[(mem_deriv_propag_high->mem_E.size(0) *
                         (static_cast<int32_T>(gamma_tmp) - 1) +
                     mem_deriv_propag_high->mem_E.size(0) *
                         mem_deriv_propag_high->mem_E.size(1) * c_is) +
                    1] =
            mem_dT0[16 * (static_cast<int32_T>(gamma_tmp) - 1) + 13];
        mem_deriv_propag_high
            ->mem_E[(mem_deriv_propag_high->mem_E.size(0) *
                         (static_cast<int32_T>(gamma_tmp) - 1) +
                     mem_deriv_propag_high->mem_E.size(0) *
                         mem_deriv_propag_high->mem_E.size(1) * c_is) +
                    2] =
            mem_dT0[16 * (static_cast<int32_T>(gamma_tmp) - 1) + 14];
        mem_deriv_propag_high
            ->mem_E[(mem_deriv_propag_high->mem_E.size(0) *
                         (static_cast<int32_T>(gamma_tmp) - 1) +
                     mem_deriv_propag_high->mem_E.size(0) *
                         mem_deriv_propag_high->mem_E.size(1) * c_is) +
                    3] =
            mem_dT0[16 * (static_cast<int32_T>(gamma_tmp) - 1) + 6];
        mem_deriv_propag_high
            ->mem_E[(mem_deriv_propag_high->mem_E.size(0) *
                         (static_cast<int32_T>(gamma_tmp) - 1) +
                     mem_deriv_propag_high->mem_E.size(0) *
                         mem_deriv_propag_high->mem_E.size(1) * c_is) +
                    4] =
            mem_dT0[16 * (static_cast<int32_T>(gamma_tmp) - 1) + 8];
        mem_deriv_propag_high
            ->mem_E[(mem_deriv_propag_high->mem_E.size(0) *
                         (static_cast<int32_T>(gamma_tmp) - 1) +
                     mem_deriv_propag_high->mem_E.size(0) *
                         mem_deriv_propag_high->mem_E.size(1) * c_is) +
                    5] =
            mem_dT0[16 * (static_cast<int32_T>(gamma_tmp) - 1) + 1];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
    }
    //  ============================== %
    //  ======= dT0(s)_dw0(s0) ======= %
    //  (eq 34)
    if (simulation_param->bool_Cs0) {
      end_tmp = simulation_param->pt_s0_LIT.size(1) - 1;
      loop_ub = 0;
      for (int32_T j{0}; j <= end_tmp; j++) {
        if (simulation_param->pt_s0_LIT[j] <= b) {
          loop_ub++;
        }
      }
      r3.set_size(&ec_emlrtRTEI, &st, 1, loop_ub);
      loop_ub = 0;
      for (int32_T j{0}; j <= end_tmp; j++) {
        if (simulation_param->pt_s0_LIT[j] <= b) {
          r3[loop_ub] = j;
          loop_ub++;
        }
      }
      loop_ub = r3.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        if ((r3[i1] < 0) || (r3[i1] > end_tmp)) {
          emlrtDynamicBoundsCheckR2012b(r3[i1], 0, end_tmp, &if_emlrtBCI, &st);
        }
      }
      i1 = r3.size(1);
      if (r3.size(1) - 1 >= 0) {
        d_is = static_cast<int32_T>(b);
        e_is = static_cast<int32_T>(b);
        i3 = 6;
        f_is = static_cast<int32_T>(b) - 1;
      }
      for (loop_ub = 0; loop_ub < i1; loop_ub++) {
        real_T mem_dT0_ws0[96];
        if (loop_ub + 1 > r3.size(1)) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, r3.size(1),
                                        &ue_emlrtBCI, &st);
        }
        gamma_tmp = simulation_param->pt_s0_LIT[r3[loop_ub]];
        i2 = mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(3);
        if ((static_cast<int32_T>(b) < 1) || (static_cast<int32_T>(b) > i2)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b), 1, i2,
                                        &ve_emlrtBCI, &st);
        }
        if (gamma_tmp != static_cast<int32_T>(muDoubleScalarFloor(gamma_tmp))) {
          emlrtIntegerCheckR2012b(gamma_tmp, &f_emlrtDCI, &st);
        }
        i2 = mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(4);
        if ((static_cast<int32_T>(gamma_tmp) < 1) ||
            (static_cast<int32_T>(gamma_tmp) > i2)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(gamma_tmp), 1, i2,
                                        &we_emlrtBCI, &st);
        }
        i2 = mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(3);
        if ((static_cast<int32_T>(b) < 1) || (static_cast<int32_T>(b) > i2)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b), 1, i2,
                                        &xe_emlrtBCI, &st);
        }
        i2 = mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(4);
        if ((static_cast<int32_T>(gamma_tmp) < 1) ||
            (static_cast<int32_T>(gamma_tmp) > i2)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(gamma_tmp), 1, i2,
                                        &ye_emlrtBCI, &st);
        }
        for (int32_T j{0}; j < 48; j++) {
          mem_dT0_ws0[j] =
              mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0
                  [(((j % 4 + 4 * (j / 4 % 4)) + 16 * (j / 16)) +
                    48 * (d_is - 1)) +
                   48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(3) *
                       (static_cast<int32_T>(gamma_tmp) - 1)];
        }
        for (int32_T j{0}; j < 48; j++) {
          mem_dT0_ws0[j + 48] =
              mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0
                  [(((j % 4 + 4 * (j / 4 % 4)) + 16 * (j / 16)) +
                    48 * (e_is - 1)) +
                   48 * mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(3) *
                       (static_cast<int32_T>(gamma_tmp) - 1)];
        }
        for (int32_T j{0}; j < 6; j++) {
          i2 = mem_deriv_propag_high->mem_Ews0.size(1);
          if (j + 1 > i2) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, i2, &af_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_high->mem_Ews0.size(2);
          if ((static_cast<int32_T>(b) < 1) || (static_cast<int32_T>(b) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b), 1, i2,
                                          &bf_emlrtBCI, &st);
          }
          i2 = mem_deriv_propag_high->mem_Ews0.size(3);
          if ((static_cast<int32_T>(gamma_tmp) < 1) ||
              (static_cast<int32_T>(gamma_tmp) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(gamma_tmp), 1,
                                          i2, &cf_emlrtBCI, &st);
          }
          emlrtSubAssignSizeCheckR2012b(mem_deriv_propag_high->mem_Ews0.size(),
                                        1, &i3, 1, &d_emlrtECI, &st);
          //  =======================================================================
          //  %
          //
          //  This function extract the 6x1 vector V associated to the
          //  skew-symmetric matrix M formed from initially formed thanks to the
          //  skew-symmetric operation
          //
          //  ====================
          //  ====== INPUTS ======
          //
          //  M     : (4x4) Matrix
          //
          //  ====================
          //  ===== OUTPUTS ======
          //
          //  V     : (6x1) Vector
          //
          //  =======================================================================
          //  %
          i2 = j << 4;
          mem_deriv_propag_high
              ->mem_Ews0[(mem_deriv_propag_high->mem_Ews0.size(0) * j +
                          mem_deriv_propag_high->mem_Ews0.size(0) *
                              mem_deriv_propag_high->mem_Ews0.size(1) * f_is) +
                         mem_deriv_propag_high->mem_Ews0.size(0) *
                             mem_deriv_propag_high->mem_Ews0.size(1) *
                             mem_deriv_propag_high->mem_Ews0.size(2) *
                             (static_cast<int32_T>(gamma_tmp) - 1)] =
              mem_dT0_ws0[i2 + 12];
          mem_deriv_propag_high
              ->mem_Ews0[((mem_deriv_propag_high->mem_Ews0.size(0) * j +
                           mem_deriv_propag_high->mem_Ews0.size(0) *
                               mem_deriv_propag_high->mem_Ews0.size(1) * f_is) +
                          mem_deriv_propag_high->mem_Ews0.size(0) *
                              mem_deriv_propag_high->mem_Ews0.size(1) *
                              mem_deriv_propag_high->mem_Ews0.size(2) *
                              (static_cast<int32_T>(gamma_tmp) - 1)) +
                         1] = mem_dT0_ws0[i2 + 13];
          mem_deriv_propag_high
              ->mem_Ews0[((mem_deriv_propag_high->mem_Ews0.size(0) * j +
                           mem_deriv_propag_high->mem_Ews0.size(0) *
                               mem_deriv_propag_high->mem_Ews0.size(1) * f_is) +
                          mem_deriv_propag_high->mem_Ews0.size(0) *
                              mem_deriv_propag_high->mem_Ews0.size(1) *
                              mem_deriv_propag_high->mem_Ews0.size(2) *
                              (static_cast<int32_T>(gamma_tmp) - 1)) +
                         2] = mem_dT0_ws0[i2 + 14];
          mem_deriv_propag_high
              ->mem_Ews0[((mem_deriv_propag_high->mem_Ews0.size(0) * j +
                           mem_deriv_propag_high->mem_Ews0.size(0) *
                               mem_deriv_propag_high->mem_Ews0.size(1) * f_is) +
                          mem_deriv_propag_high->mem_Ews0.size(0) *
                              mem_deriv_propag_high->mem_Ews0.size(1) *
                              mem_deriv_propag_high->mem_Ews0.size(2) *
                              (static_cast<int32_T>(gamma_tmp) - 1)) +
                         3] = mem_dT0_ws0[i2 + 6];
          mem_deriv_propag_high
              ->mem_Ews0[((mem_deriv_propag_high->mem_Ews0.size(0) * j +
                           mem_deriv_propag_high->mem_Ews0.size(0) *
                               mem_deriv_propag_high->mem_Ews0.size(1) * f_is) +
                          mem_deriv_propag_high->mem_Ews0.size(0) *
                              mem_deriv_propag_high->mem_Ews0.size(1) *
                              mem_deriv_propag_high->mem_Ews0.size(2) *
                              (static_cast<int32_T>(gamma_tmp) - 1)) +
                         4] = mem_dT0_ws0[i2 + 8];
          mem_deriv_propag_high
              ->mem_Ews0[((mem_deriv_propag_high->mem_Ews0.size(0) * j +
                           mem_deriv_propag_high->mem_Ews0.size(0) *
                               mem_deriv_propag_high->mem_Ews0.size(1) * f_is) +
                          mem_deriv_propag_high->mem_Ews0.size(0) *
                              mem_deriv_propag_high->mem_Ews0.size(1) *
                              mem_deriv_propag_high->mem_Ews0.size(2) *
                              (static_cast<int32_T>(gamma_tmp) - 1)) +
                         5] = mem_dT0_ws0[i2 + 1];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  //  ========================================== %
  //  =========== C and J computation ========== %
  st.site = &g_emlrtRSI;
  Deriv_Propag_Comp_CJ(st, ctcr_construc, ctcr_carac, simulation_param,
                       bvp_prop, mem_CJ, mem_deriv_propag_high);
  st.site = &h_emlrtRSI;
  time_comp_CJ = coder::toc(st, expl_temp.tv_sec, expl_temp.tv_nsec);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return time_comp_CJ;
}

// End of code generation (CTCR_Deriv_Propag.cpp)
