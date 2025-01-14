//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// BVP_Bu_Construc.cpp
//
// Code generation for function 'BVP_Bu_Construc'
//

// Include files
#include "BVP_Bu_Construc.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCRLoad.h"
#include "CTCR_Shape_data.h"
#include "MemBVP.h"
#include "MemDM0.h"
#include "MemDN0.h"
#include "MemDR0.h"
#include "MemDTi.h"
#include "MemDUZi.h"
#include "MemDerivPropagLow.h"
#include "MemY.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo sb_emlrtRSI{
    94,                // lineNo
    "BVP_Bu_Construc", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m" // pathName
};

static emlrtRSInfo tb_emlrtRSI{
    100,               // lineNo
    "BVP_Bu_Construc", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m" // pathName
};

static emlrtRSInfo ub_emlrtRSI{
    106,               // lineNo
    "BVP_Bu_Construc", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m" // pathName
};

static emlrtRTEInfo k_emlrtRTEI{
    75,                // lineNo
    13,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m" // pName
};

static emlrtBCInfo gb_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    76,                                             // lineNo
    68,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0", // aName
    "BVP_Bu_Construc",                              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo lo_emlrtDCI{
    76,                // lineNo
    72,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo hb_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    76,                                             // lineNo
    72,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0", // aName
    "BVP_Bu_Construc",                              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtRTEInfo l_emlrtRTEI{
    80,                // lineNo
    13,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m" // pName
};

static emlrtBCInfo ib_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    81,                                             // lineNo
    74,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0", // aName
    "BVP_Bu_Construc",                              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo mo_emlrtDCI{
    81,                // lineNo
    78,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo jb_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    81,                                             // lineNo
    78,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0", // aName
    "BVP_Bu_Construc",                              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtRTEInfo m_emlrtRTEI{
    85,                // lineNo
    13,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m" // pName
};

static emlrtBCInfo kb_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    86,                                             // lineNo
    74,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0", // aName
    "BVP_Bu_Construc",                              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo no_emlrtDCI{
    86,                // lineNo
    78,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo lb_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    86,                                             // lineNo
    78,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0", // aName
    "BVP_Bu_Construc",                              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtRTEInfo n_emlrtRTEI{
    92,                // lineNo
    13,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m" // pName
};

static emlrtBCInfo mb_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    94,                // lineNo
    37,                // colNo
    "K",               // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo nb_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    100,               // lineNo
    41,                // colNo
    "K",               // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo ob_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    106,               // lineNo
    43,                // colNo
    "K",               // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtRTEInfo o_emlrtRTEI{
    112,               // lineNo
    13,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m" // pName
};

static emlrtBCInfo pb_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    113,                                          // lineNo
    74,                                           // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo oo_emlrtDCI{
    113,               // lineNo
    76,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo qb_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    113,                                          // lineNo
    76,                                           // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo rb_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    114,                                          // lineNo
    78,                                           // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo po_emlrtDCI{
    114,               // lineNo
    80,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo sb_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    114,                                          // lineNo
    80,                                           // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo qo_emlrtDCI{
    119,               // lineNo
    80,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo tb_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    119,                                          // lineNo
    80,                                           // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo ro_emlrtDCI{
    120,               // lineNo
    84,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo ub_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    120,                                          // lineNo
    84,                                           // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo so_emlrtDCI{
    125,               // lineNo
    82,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo vb_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    125,                                          // lineNo
    82,                                           // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo to_emlrtDCI{
    126,               // lineNo
    86,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo wb_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    126,                                          // lineNo
    86,                                           // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtRTEInfo p_emlrtRTEI{
    133,               // lineNo
    13,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m" // pName
};

static emlrtBCInfo xb_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    134,                                          // lineNo
    74,                                           // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo uo_emlrtDCI{
    134,               // lineNo
    76,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo yb_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    134,                                          // lineNo
    76,                                           // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo ac_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    135,                                          // lineNo
    78,                                           // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo vo_emlrtDCI{
    135,               // lineNo
    80,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo bc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    135,                                          // lineNo
    80,                                           // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo wo_emlrtDCI{
    140,               // lineNo
    80,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo cc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    140,                                          // lineNo
    80,                                           // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo xo_emlrtDCI{
    141,               // lineNo
    84,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo dc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    141,                                          // lineNo
    84,                                           // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo yo_emlrtDCI{
    146,               // lineNo
    82,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo ec_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    146,                                          // lineNo
    82,                                           // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo ap_emlrtDCI{
    147,               // lineNo
    86,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo fc_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    147,                                          // lineNo
    86,                                           // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0", // aName
    "BVP_Bu_Construc",                            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo gc_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    76,                // lineNo
    12,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo hc_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    76,                // lineNo
    14,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo bp_emlrtDCI{
    76,                // lineNo
    16,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo ic_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    76,                // lineNo
    16,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtECInfo c_emlrtECI{
    -1,                // nDims
    76,                // lineNo
    9,                 // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m" // pName
};

static emlrtBCInfo jc_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    81,                // lineNo
    12,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo kc_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    86,                // lineNo
    12,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo lc_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    113,               // lineNo
    24,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo cp_emlrtDCI{
    119,               // lineNo
    24,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo mc_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    119,               // lineNo
    24,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo dp_emlrtDCI{
    125,               // lineNo
    24,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo nc_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    125,               // lineNo
    24,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo oc_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    134,               // lineNo
    24,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo ep_emlrtDCI{
    140,               // lineNo
    24,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo pc_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    140,               // lineNo
    24,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo fp_emlrtDCI{
    146,               // lineNo
    24,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo qc_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    146,               // lineNo
    24,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo rc_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    29,               // lineNo
    39,               // colNo
    "mem_dR0_duzj0",  // aName
    "dB0nbTRs_duzj0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_duzj0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo sc_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    29,               // lineNo
    41,               // colNo
    "mem_dR0_duzj0",  // aName
    "dB0nbTRs_duzj0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_duzj0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo tc_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    30,               // lineNo
    37,               // colNo
    "mem_T",          // aName
    "dB0nbTRs_duzj0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_duzj0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo uc_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    29,               // lineNo
    41,               // colNo
    "mem_dR0_dm0j0",  // aName
    "dB0nbTRs_dm0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dm0j0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo vc_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    30,               // lineNo
    37,               // colNo
    "mem_T",          // aName
    "dB0nbTRs_dm0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dm0j0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo wc_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    29,               // lineNo
    41,               // colNo
    "mem_dR0_dn0j0",  // aName
    "dB0nbTRs_dn0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dn0j0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo xc_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    30,               // lineNo
    37,               // colNo
    "mem_T",          // aName
    "dB0nbTRs_dn0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dn0j0.m", // pName
    0                          // checkKind
};

static emlrtDCInfo gp_emlrtDCI{
    71,                // lineNo
    16,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtDCInfo hp_emlrtDCI{
    71,                // lineNo
    16,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    4                           // checkKind
};

static emlrtDCInfo ip_emlrtDCI{
    71,                // lineNo
    22,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtDCInfo jp_emlrtDCI{
    71,                // lineNo
    5,                 // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtDCInfo kp_emlrtDCI{
    71,                // lineNo
    5,                 // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    4                           // checkKind
};

static emlrtBCInfo yc_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    76,                // lineNo
    84,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo ad_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    81,                // lineNo
    90,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo bd_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    86,                // lineNo
    90,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo cd_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    94,                // lineNo
    69,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo lp_emlrtDCI{
    94,                // lineNo
    69,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo dd_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    100,               // lineNo
    73,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo mp_emlrtDCI{
    100,               // lineNo
    73,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo ed_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    106,               // lineNo
    75,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo np_emlrtDCI{
    106,               // lineNo
    75,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo fd_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    114,               // lineNo
    92,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo op_emlrtDCI{
    114,               // lineNo
    92,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo gd_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    120,               // lineNo
    96,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo pp_emlrtDCI{
    120,               // lineNo
    96,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo hd_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    126,               // lineNo
    98,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo qp_emlrtDCI{
    126,               // lineNo
    98,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo id_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    113,               // lineNo
    88,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo rp_emlrtDCI{
    113,               // lineNo
    88,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo jd_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    119,               // lineNo
    92,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo sp_emlrtDCI{
    119,               // lineNo
    92,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo kd_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    135,               // lineNo
    92,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo tp_emlrtDCI{
    135,               // lineNo
    92,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo ld_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    125,               // lineNo
    94,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo up_emlrtDCI{
    125,               // lineNo
    94,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo md_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    141,               // lineNo
    96,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo vp_emlrtDCI{
    141,               // lineNo
    96,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo nd_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    29,               // lineNo
    62,               // colNo
    "mem_y.mem_t",    // aName
    "dB0nbTRs_duzj0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_duzj0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo od_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    29,               // lineNo
    66,               // colNo
    "mem_y.mem_t",    // aName
    "dB0nbTRs_duzj0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_duzj0.m", // pName
    0                          // checkKind
};

static emlrtDCInfo wp_emlrtDCI{
    29,               // lineNo
    66,               // colNo
    "dB0nbTRs_duzj0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_duzj0.m", // pName
    1                          // checkKind
};

static emlrtBCInfo pd_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    147,               // lineNo
    98,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo xp_emlrtDCI{
    147,               // lineNo
    98,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo qd_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    134,               // lineNo
    88,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo yp_emlrtDCI{
    134,               // lineNo
    88,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo rd_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    29,               // lineNo
    62,               // colNo
    "mem_y.mem_t",    // aName
    "dB0nbTRs_dm0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dm0j0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo sd_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    29,               // lineNo
    66,               // colNo
    "mem_y.mem_t",    // aName
    "dB0nbTRs_dm0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dm0j0.m", // pName
    0                          // checkKind
};

static emlrtDCInfo aq_emlrtDCI{
    29,               // lineNo
    66,               // colNo
    "dB0nbTRs_dm0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dm0j0.m", // pName
    1                          // checkKind
};

static emlrtBCInfo td_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    140,               // lineNo
    92,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo bq_emlrtDCI{
    140,               // lineNo
    92,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo ud_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    29,               // lineNo
    62,               // colNo
    "mem_y.mem_t",    // aName
    "dB0nbTRs_dn0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dn0j0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo vd_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    29,               // lineNo
    66,               // colNo
    "mem_y.mem_t",    // aName
    "dB0nbTRs_dn0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dn0j0.m", // pName
    0                          // checkKind
};

static emlrtDCInfo cq_emlrtDCI{
    29,               // lineNo
    66,               // colNo
    "dB0nbTRs_dn0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dn0j0.m", // pName
    1                          // checkKind
};

static emlrtBCInfo wd_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    146,               // lineNo
    94,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo dq_emlrtDCI{
    146,               // lineNo
    94,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo xd_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    30,               // lineNo
    76,               // colNo
    "mem_y.mem_t",    // aName
    "dB0nbTRs_duzj0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_duzj0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo yd_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    30,               // lineNo
    76,               // colNo
    "mem_y.mem_t",    // aName
    "dB0nbTRs_dm0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dm0j0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo ae_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    30,               // lineNo
    76,               // colNo
    "mem_y.mem_t",    // aName
    "dB0nbTRs_dn0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dn0j0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo be_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    30,               // lineNo
    95,               // colNo
    "mem_dti_duzj0",  // aName
    "dB0nbTRs_duzj0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_duzj0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo ce_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    30,               // lineNo
    99,               // colNo
    "mem_dti_duzj0",  // aName
    "dB0nbTRs_duzj0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_duzj0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo de_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    30,               // lineNo
    101,              // colNo
    "mem_dti_duzj0",  // aName
    "dB0nbTRs_duzj0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_duzj0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo ee_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    30,               // lineNo
    95,               // colNo
    "mem_dti_dm0j0",  // aName
    "dB0nbTRs_dm0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dm0j0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo fe_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    30,               // lineNo
    101,              // colNo
    "mem_dti_dm0j0",  // aName
    "dB0nbTRs_dm0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dm0j0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo ge_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    30,               // lineNo
    95,               // colNo
    "mem_dti_dn0j0",  // aName
    "dB0nbTRs_dn0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dn0j0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo he_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    30,               // lineNo
    101,              // colNo
    "mem_dti_dn0j0",  // aName
    "dB0nbTRs_dn0j0", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dn0j0.m", // pName
    0                          // checkKind
};

static emlrtBCInfo ie_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    93,                                             // lineNo
    66,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0", // aName
    "BVP_Bu_Construc",                              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo je_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    93,                                             // lineNo
    70,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0", // aName
    "BVP_Bu_Construc",                              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo ke_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    93,                                             // lineNo
    72,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0", // aName
    "BVP_Bu_Construc",                              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo eq_emlrtDCI{
    93,                // lineNo
    72,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo le_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    93,                // lineNo
    84,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo me_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    93,                // lineNo
    12,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo ne_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    93,                // lineNo
    16,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo oe_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    99,                                             // lineNo
    70,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0", // aName
    "BVP_Bu_Construc",                              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo pe_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    99,                                             // lineNo
    76,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0", // aName
    "BVP_Bu_Construc",                              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo fq_emlrtDCI{
    99,                // lineNo
    76,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo qe_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    99,                // lineNo
    88,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo re_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    99,                // lineNo
    12,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo se_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    99,                // lineNo
    16,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo te_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    105,                                            // lineNo
    72,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0", // aName
    "BVP_Bu_Construc",                              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo ue_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    105,                                            // lineNo
    78,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0", // aName
    "BVP_Bu_Construc",                              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo gq_emlrtDCI{
    105,               // lineNo
    78,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo ve_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    105,               // lineNo
    90,                // colNo
    "vect_ind_iT",     // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo we_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    105,               // lineNo
    12,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo xe_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    105,               // lineNo
    16,                // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtBCInfo ye_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    146,               // lineNo
    9,                 // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo hq_emlrtDCI{
    146,               // lineNo
    9,                 // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo af_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    140,               // lineNo
    9,                 // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo iq_emlrtDCI{
    140,               // lineNo
    9,                 // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo bf_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    134,               // lineNo
    9,                 // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo jq_emlrtDCI{
    134,               // lineNo
    9,                 // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo cf_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    125,               // lineNo
    9,                 // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo kq_emlrtDCI{
    125,               // lineNo
    9,                 // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo df_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    119,               // lineNo
    9,                 // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo lq_emlrtDCI{
    119,               // lineNo
    9,                 // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo ef_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    113,               // lineNo
    9,                 // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo mq_emlrtDCI{
    113,               // lineNo
    9,                 // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo ff_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    86,                // lineNo
    9,                 // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo nq_emlrtDCI{
    86,                // lineNo
    9,                 // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtBCInfo gf_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    81,                // lineNo
    9,                 // colNo
    "Bu",              // aName
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    0                           // checkKind
};

static emlrtDCInfo oq_emlrtDCI{
    81,                // lineNo
    9,                 // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m", // pName
    1                           // checkKind
};

static emlrtRTEInfo rc_emlrtRTEI{
    71,                // lineNo
    5,                 // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m" // pName
};

static emlrtRTEInfo sc_emlrtRTEI{
    76,                // lineNo
    23,                // colNo
    "BVP_Bu_Construc", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Bu_Construc.m" // pName
};

// Function Definitions
void BVP_Bu_Construc(const emlrtStack &sp, const MemBVP *mem_bvp,
                     const MemDerivPropagLow *mem_deriv_propag_low,
                     const CTCRConstruc *ctcr_construc,
                     const CTCRCarac *ctcr_carac, const CTCRLoad *ctcr_load,
                     coder::array<real_T, 2U> &Bu)
{
  static const int8_T iv2[3]{0, 0, 1};
  coder::array<real_T, 2U> r;
  emlrtStack st;
  real_T a[9];
  real_T b_R_tmp[9];
  real_T b_mem_deriv_propag_low[9];
  real_T c_R_tmp[9];
  real_T y[3];
  real_T R_tmp;
  real_T b_b;
  real_T b_gamma;
  real_T ctcr_construc_tmp;
  real_T d_R_tmp;
  real_T e_R_tmp;
  real_T f_R_tmp;
  real_T is;
  real_T nbT;
  int32_T b_iv[2];
  int32_T iv1[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T loop_ub;
  boolean_T b;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  //  ======================================================================= %
  //
  //  This function computes manually the optimization Jacobian using the
  //  associated Low-Level derivatives
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  mem_bvp               : (class)           Memory of the BVP variables
  //  mem_deriv_propag_low  : (class)           Memory of the low-level
  //  derivatives ctcr_construc         : (class)           Robot features
  //  related to the model settings ctcr_carac            : (class) Robot
  //  features ctcr_load             : (class)           Robot loads
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  Bu                    : (nbT+6 x nbT+6)   Optimization Jacobian
  //
  //  ======================================================================= %
  //  ============= Organization of the partial dervatives of b ============= %
  //        ____
  //       ⎡    ⎤  1
  //       ⎪ b1 ⎥
  //       ⎪____⎥  nbT-1
  //       ⎪____⎥
  //       ⎪    ⎥  nbT
  //       ⎪ b2 ⎥
  //       ⎪____⎥  nbT
  //   b = ⎪____⎥
  //       ⎪    ⎥  nbT+1
  //       ⎪ b3 ⎥
  //       ⎪____⎥  nbT+3
  //       ⎪____⎥
  //       ⎪    ⎥  nbT+4
  //       ⎪ b4 ⎥
  //       ⎣____⎦  nbT+6
  //
  //  ======================================================================= %
  //  ========================================================== %
  //  ================== Getting input values ================== %
  nbT = ctcr_carac->nbT;
  //  ========================================================== %
  //  Initialization
  if (!(ctcr_carac->nbT + 6.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(ctcr_carac->nbT + 6.0, &hp_emlrtDCI,
                                (emlrtConstCTX)&sp);
  }
  R_tmp = static_cast<int32_T>(muDoubleScalarFloor(ctcr_carac->nbT + 6.0));
  if (ctcr_carac->nbT + 6.0 != R_tmp) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT + 6.0, &gp_emlrtDCI,
                            (emlrtConstCTX)&sp);
  }
  Bu.set_size(&rc_emlrtRTEI, &sp, static_cast<int32_T>(ctcr_carac->nbT + 6.0),
              Bu.size(1));
  if (ctcr_carac->nbT + 6.0 != R_tmp) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT + 6.0, &ip_emlrtDCI,
                            (emlrtConstCTX)&sp);
  }
  Bu.set_size(&rc_emlrtRTEI, &sp, Bu.size(0),
              static_cast<int32_T>(ctcr_carac->nbT + 6.0));
  if (ctcr_carac->nbT + 6.0 != R_tmp) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT + 6.0, &jp_emlrtDCI,
                            (emlrtConstCTX)&sp);
  }
  if (!(ctcr_carac->nbT + 6.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(ctcr_carac->nbT + 6.0, &kp_emlrtDCI,
                                (emlrtConstCTX)&sp);
  }
  if (ctcr_carac->nbT + 6.0 != R_tmp) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT + 6.0, &jp_emlrtDCI,
                            (emlrtConstCTX)&sp);
  }
  loop_ub = static_cast<int32_T>(ctcr_carac->nbT + 6.0) *
            static_cast<int32_T>(ctcr_carac->nbT + 6.0);
  for (i = 0; i < loop_ub; i++) {
    Bu[i] = 0.0;
  }
  //  ============== db1_duz(0) ============= %
  i = static_cast<int32_T>(ctcr_carac->nbT - 1.0);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT - 1.0, mxDOUBLE_CLASS,
                                static_cast<int32_T>(ctcr_carac->nbT - 1.0),
                                &k_emlrtRTEI, (emlrtConstCTX)&sp);
  if (i - 1 >= 0) {
    b_loop_ub = mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(1);
    b_iv[0] = 1;
    iv1[0] = 1;
    iv1[1] = mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(1);
  }
  for (b_i = 0; b_i < i; b_i++) {
    if (nbT < 1.0) {
      i1 = 0;
    } else {
      if (Bu.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Bu.size(1), &hc_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (nbT != static_cast<int32_T>(muDoubleScalarFloor(nbT))) {
        emlrtIntegerCheckR2012b(nbT, &bp_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(nbT) < 1) ||
          (static_cast<int32_T>(nbT) > Bu.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, Bu.size(1),
                                      &ic_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = static_cast<int32_T>(nbT);
    }
    if ((b_i + 1 < 1) || (b_i + 1 > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Bu.size(0), &gc_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0), &gb_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          ctcr_construc->vect_ind_iT.size(0), &yc_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp = ctcr_construc
                ->vect_ind_iT[b_i + ctcr_construc->vect_ind_iT.size(0) * 2];
    if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
      emlrtIntegerCheckR2012b(R_tmp, &lo_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(R_tmp) < 1) ||
        (static_cast<int32_T>(R_tmp) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(2), &hb_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    r.set_size(&sc_emlrtRTEI, &sp, 1,
               mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(1));
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      r[i2] =
          mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0
              [(b_i +
                mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0) * i2) +
               mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0) *
                   mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(1) *
                   (static_cast<int32_T>(R_tmp) - 1)];
    }
    b_iv[1] = i1;
    emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &iv1[0], 2, &c_emlrtECI,
                                  (emlrtCTX)&sp);
    loop_ub = r.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      Bu[b_i + Bu.size(0) * i1] = r[i1];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  //  ============== db1_dm(0) ============== %
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT - 1.0, mxDOUBLE_CLASS,
                                static_cast<int32_T>(ctcr_carac->nbT - 1.0),
                                &l_emlrtRTEI, (emlrtConstCTX)&sp);
  for (b_i = 0; b_i < i; b_i++) {
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0), &ib_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          ctcr_construc->vect_ind_iT.size(0), &ad_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp = ctcr_construc
                ->vect_ind_iT[b_i + ctcr_construc->vect_ind_iT.size(0) * 2];
    if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
      emlrtIntegerCheckR2012b(R_tmp, &mo_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(R_tmp) < 1) ||
        (static_cast<int32_T>(R_tmp) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(2), &jb_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1, Bu.size(0),
          &jc_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (nbT + 1.0 != static_cast<int32_T>(muDoubleScalarFloor(nbT + 1.0))) {
      emlrtIntegerCheckR2012b(nbT + 1.0, &oq_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(nbT + 1.0) < 1) ||
        (static_cast<int32_T>(nbT + 1.0) > Bu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT + 1.0), 1,
                                    Bu.size(1), &gf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[b_i + Bu.size(0) * (static_cast<int32_T>(nbT + 1.0) - 1)] =
        mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0
            [b_i + mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0) * 3 *
                       (static_cast<int32_T>(R_tmp) - 1)];
    if ((nbT + 1.0) + 1.0 !=
        static_cast<int32_T>(muDoubleScalarFloor((nbT + 1.0) + 1.0))) {
      emlrtIntegerCheckR2012b((nbT + 1.0) + 1.0, &oq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 1.0) + 1.0) < 1) ||
        (static_cast<int32_T>((nbT + 1.0) + 1.0) > Bu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 1.0), 1,
                                    Bu.size(1), &gf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[b_i + Bu.size(0) * (static_cast<int32_T>((nbT + 1.0) + 1.0) - 1)] =
        mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0
            [(b_i + mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0)) +
             mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0) * 3 *
                 (static_cast<int32_T>(R_tmp) - 1)];
    if ((nbT + 1.0) + 2.0 !=
        static_cast<int32_T>(muDoubleScalarFloor((nbT + 1.0) + 2.0))) {
      emlrtIntegerCheckR2012b((nbT + 1.0) + 2.0, &oq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 1.0) + 2.0) < 1) ||
        (static_cast<int32_T>((nbT + 1.0) + 2.0) > Bu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 2.0), 1,
                                    Bu.size(1), &gf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[b_i + Bu.size(0) * (static_cast<int32_T>((nbT + 1.0) + 2.0) - 1)] =
        mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0
            [(b_i + mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0) * 2) +
             mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0) * 3 *
                 (static_cast<int32_T>(R_tmp) - 1)];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  //  ============== db1_dn(0) ============== %
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT - 1.0, mxDOUBLE_CLASS,
                                static_cast<int32_T>(ctcr_carac->nbT - 1.0),
                                &m_emlrtRTEI, (emlrtConstCTX)&sp);
  for (b_i = 0; b_i < i; b_i++) {
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0), &kb_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1,
          ctcr_construc->vect_ind_iT.size(0), &bd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp = ctcr_construc
                ->vect_ind_iT[b_i + ctcr_construc->vect_ind_iT.size(0) * 2];
    if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
      emlrtIntegerCheckR2012b(R_tmp, &no_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(R_tmp) < 1) ||
        (static_cast<int32_T>(R_tmp) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(2), &lb_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U), 1, Bu.size(0),
          &kc_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (nbT + 4.0 != static_cast<int32_T>(muDoubleScalarFloor(nbT + 4.0))) {
      emlrtIntegerCheckR2012b(nbT + 4.0, &nq_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(nbT + 4.0) < 1) ||
        (static_cast<int32_T>(nbT + 4.0) > Bu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT + 4.0), 1,
                                    Bu.size(1), &ff_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[b_i + Bu.size(0) * (static_cast<int32_T>(nbT + 4.0) - 1)] =
        mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0
            [b_i + mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0) * 3 *
                       (static_cast<int32_T>(R_tmp) - 1)];
    if ((nbT + 4.0) + 1.0 !=
        static_cast<int32_T>(muDoubleScalarFloor((nbT + 4.0) + 1.0))) {
      emlrtIntegerCheckR2012b((nbT + 4.0) + 1.0, &nq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 4.0) + 1.0) < 1) ||
        (static_cast<int32_T>((nbT + 4.0) + 1.0) > Bu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 1.0), 1,
                                    Bu.size(1), &ff_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[b_i + Bu.size(0) * (static_cast<int32_T>((nbT + 4.0) + 1.0) - 1)] =
        mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0
            [(b_i + mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0)) +
             mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0) * 3 *
                 (static_cast<int32_T>(R_tmp) - 1)];
    if ((nbT + 4.0) + 2.0 !=
        static_cast<int32_T>(muDoubleScalarFloor((nbT + 4.0) + 2.0))) {
      emlrtIntegerCheckR2012b((nbT + 4.0) + 2.0, &nq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 4.0) + 2.0) < 1) ||
        (static_cast<int32_T>((nbT + 4.0) + 2.0) > Bu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 2.0), 1,
                                    Bu.size(1), &ff_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[b_i + Bu.size(0) * (static_cast<int32_T>((nbT + 4.0) + 2.0) - 1)] =
        mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0
            [(b_i + mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0) * 2) +
             mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0) * 3 *
                 (static_cast<int32_T>(R_tmp) - 1)];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  //  ============== db2_duz(0) ============= %
  i = static_cast<int32_T>(ctcr_carac->nbT);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
                                static_cast<int32_T>(ctcr_carac->nbT),
                                &n_emlrtRTEI, (emlrtConstCTX)&sp);
  for (int32_T j{0}; j < i; j++) {
    st.site = &sb_emlrtRSI;
    if (nbT != static_cast<int32_T>(muDoubleScalarFloor(nbT))) {
      emlrtIntegerCheckR2012b(nbT, &lp_emlrtDCI, &st);
    }
    if ((i < 1) || (i > ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->vect_ind_iT.size(0),
                                    &cd_emlrtBCI, &st);
    }
    is = ctcr_construc
             ->vect_ind_iT[(i + ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
    //  =======================================================================
    //  %
    //
    //  This function computes the partial derivative of rigid transformation
    //  matrix, from the base B0 to the current s, associated to the tube i=nbT
    //  w.r.t. the uz(0) unknown initial conditions
    //
    //  ====================
    //  ====== INPUTS ======
    //
    //  is                : (int ∊ [1 , nbP])    Index of the current
    //  curvilinear abscissa j                 : (int ∊ [1 , nbT])    Index of
    //  the tube associated to the derivation w.r.t. uzj(0) nbT               :
    //  (int > 0)            Number of tubes of the CTCR mem_T             : (4
    //  x 4 x nbP)        Matrix memory of the B0(0)Ts values mem_y : (class)
    //  Matrix memory of the y(s) values mem_dR0_duzj0     : (3 x 3 x nbT x nbP)
    //  Matrix memory of the dR0(s)_duzj0 partial derivatives mem_dti_duzj0 :
    //  (nbT x nbT x nbP)    Matrix memory of the dti(s)_duzj0 partial
    //  derivatives
    //
    //  ====================
    //  ===== OUTPUTS ======
    //
    //  dB0nbTRsduzj0     : (3x3)                Value of the partial derivative
    //
    //  =======================================================================
    //  %
    b = ((static_cast<int32_T>(nbT) < 1) ||
         (static_cast<int32_T>(nbT) > mem_bvp->mem_y.mem_t.size(0)));
    if (b) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
                                    mem_bvp->mem_y.mem_t.size(0), &nd_emlrtBCI,
                                    &st);
    }
    if (is != static_cast<int32_T>(muDoubleScalarFloor(is))) {
      emlrtIntegerCheckR2012b(is, &wp_emlrtDCI, &st);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > mem_bvp->mem_y.mem_t.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    mem_bvp->mem_y.mem_t.size(1), &od_emlrtBCI,
                                    &st);
    }
    b_gamma = mem_bvp->mem_y.mem_t[(static_cast<int32_T>(nbT) +
                                    mem_bvp->mem_y.mem_t.size(0) *
                                        (static_cast<int32_T>(is) - 1)) -
                                   1];
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
    R_tmp = muDoubleScalarSin(b_gamma);
    d_R_tmp = muDoubleScalarCos(b_gamma);
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > mem_bvp->mem_y.mem_t.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    mem_bvp->mem_y.mem_t.size(1), &xd_emlrtBCI,
                                    &st);
    }
    b_gamma = mem_bvp->mem_y.mem_t[(static_cast<int32_T>(nbT) +
                                    mem_bvp->mem_y.mem_t.size(0) *
                                        (static_cast<int32_T>(is) - 1)) -
                                   1];
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
    e_R_tmp = muDoubleScalarSin(b_gamma);
    f_R_tmp = muDoubleScalarCos(b_gamma);
    if ((static_cast<int32_T>(nbT) < 1) ||
        (static_cast<int32_T>(nbT) >
         mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(nbT), 1,
          mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0), &be_emlrtBCI,
          &st);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
         mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1,
          mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1), &ce_emlrtBCI,
          &st);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) >
         mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(is), 1,
          mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2), &de_emlrtBCI,
          &st);
    }
    b_b = mem_deriv_propag_low->mem_dti.mem_dti_duzj0
              [((static_cast<int32_T>(nbT) +
                 mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0) * j) +
                mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0) *
                    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1) *
                    (static_cast<int32_T>(is) - 1)) -
               1];
    if ((j + 1 < 1) ||
        (j + 1 > mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          j + 1, 1, mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2),
          &rc_emlrtBCI, &st);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) >
         mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(3))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(is), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(3), &sc_emlrtBCI,
          &st);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > mem_bvp->mem_T.size(2))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    mem_bvp->mem_T.size(2), &tc_emlrtBCI, &st);
    }
    if (i > ctcr_construc->K.size(2)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->K.size(2),
                                    &mb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    b_gamma = ctcr_construc->K[9 * (static_cast<int32_T>(nbT) - 1) + 8];
    b_R_tmp[0] = d_R_tmp;
    b_R_tmp[1] = -R_tmp;
    b_R_tmp[2] = 0.0;
    b_R_tmp[3] = R_tmp;
    b_R_tmp[4] = d_R_tmp;
    b_R_tmp[5] = 0.0;
    c_R_tmp[0] = f_R_tmp;
    c_R_tmp[3] = -e_R_tmp;
    c_R_tmp[6] = 0.0;
    c_R_tmp[1] = e_R_tmp;
    c_R_tmp[4] = f_R_tmp;
    c_R_tmp[7] = 0.0;
    for (i1 = 0; i1 < 3; i1++) {
      loop_ub = iv2[i1];
      b_R_tmp[i1 + 6] = loop_ub;
      c_R_tmp[3 * i1 + 2] = loop_ub;
      R_tmp = c_R_tmp[3 * i1];
      d_R_tmp = c_R_tmp[3 * i1 + 1];
      for (i2 = 0; i2 < 3; i2++) {
        a[i1 + 3 * i2] = static_cast<real_T>(iv[i2]) * R_tmp +
                         static_cast<real_T>(iv[i2 + 3]) * d_R_tmp;
      }
    }
    for (i1 = 0; i1 < 9; i1++) {
      a[i1] *= b_b;
    }
    for (i1 = 0; i1 < 3; i1++) {
      R_tmp = a[3 * i1];
      d_R_tmp = b_R_tmp[3 * i1];
      i2 = 3 * i1 + 1;
      b_loop_ub = 3 * i1 + 2;
      for (int32_T i7{0}; i7 < 3; i7++) {
        loop_ub = i1 + 3 * i7;
        c_R_tmp[loop_ub] =
            (mem_bvp->mem_T[i7 + 16 * (static_cast<int32_T>(is) - 1)] * R_tmp +
             mem_bvp->mem_T[(i7 + 16 * (static_cast<int32_T>(is) - 1)) + 4] *
                 a[i2]) +
            mem_bvp->mem_T[(i7 + 16 * (static_cast<int32_T>(is) - 1)) + 8] *
                a[b_loop_ub];
        b_mem_deriv_propag_low[loop_ub] =
            (mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                     [(i7 + 9 * j) +
                      9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                          (static_cast<int32_T>(is) - 1)] *
                 d_R_tmp +
             mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                     [((i7 + 9 * j) +
                       9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                           (static_cast<int32_T>(is) - 1)) +
                      3] *
                 b_R_tmp[i2]) +
            mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                    [((i7 + 9 * j) +
                      9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                          (static_cast<int32_T>(is) - 1)) +
                     6] *
                b_R_tmp[b_loop_ub];
      }
      y[i1] = static_cast<real_T>(iv2[i1]) / b_gamma;
    }
    for (i1 = 0; i1 < 9; i1++) {
      b_mem_deriv_propag_low[i1] += c_R_tmp[i1];
    }
    R_tmp = 0.0;
    d_R_tmp = y[0];
    b_gamma = y[1];
    f_R_tmp = y[2];
    for (i1 = 0; i1 < 3; i1++) {
      R_tmp += ((d_R_tmp * b_mem_deriv_propag_low[3 * i1] +
                 b_gamma * b_mem_deriv_propag_low[3 * i1 + 1]) +
                f_R_tmp * b_mem_deriv_propag_low[3 * i1 + 2]) *
               ctcr_load->tau_tip[i1];
    }
    if ((static_cast<int32_T>(nbT) < 1) ||
        (static_cast<int32_T>(nbT) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(nbT), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0), &ie_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(1), &je_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(nbT) < 1) ||
        (static_cast<int32_T>(nbT) > ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
                                    ctcr_construc->vect_ind_iT.size(0),
                                    &le_emlrtBCI, (emlrtConstCTX)&sp);
    }
    d_R_tmp =
        ctcr_construc->vect_ind_iT[(static_cast<int32_T>(nbT) +
                                    ctcr_construc->vect_ind_iT.size(0) * 2) -
                                   1];
    if (d_R_tmp != static_cast<int32_T>(muDoubleScalarFloor(d_R_tmp))) {
      emlrtIntegerCheckR2012b(d_R_tmp, &eq_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d_R_tmp) < 1) ||
        (static_cast<int32_T>(d_R_tmp) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(d_R_tmp), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(2), &ke_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(nbT) < 1) ||
        (static_cast<int32_T>(nbT) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, Bu.size(0),
                                    &me_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > Bu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, Bu.size(1),
          &ne_emlrtBCI, (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>(nbT) + Bu.size(0) * j) - 1] =
        mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0
            [((static_cast<int32_T>(nbT) +
               mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0) * j) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0) *
                  mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(1) *
                  (static_cast<int32_T>(d_R_tmp) - 1)) -
             1] -
        R_tmp;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  //  ============== db2_dm(0) ============== %
  b_i = static_cast<int32_T>(ctcr_carac->nbT) - 1;
  ctcr_construc_tmp =
      ctcr_construc->K[9 * (static_cast<int32_T>(ctcr_carac->nbT) - 1) + 8];
  for (int32_T j{0}; j < 3; j++) {
    st.site = &tb_emlrtRSI;
    if (nbT != static_cast<int32_T>(muDoubleScalarFloor(nbT))) {
      emlrtIntegerCheckR2012b(nbT, &mp_emlrtDCI, &st);
    }
    if ((i < 1) || (i > ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->vect_ind_iT.size(0),
                                    &dd_emlrtBCI, &st);
    }
    is = ctcr_construc
             ->vect_ind_iT[(i + ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
    //  =======================================================================
    //  %
    //
    //  This function computes the partial derivative of rigid transformation
    //  matrix, from the base B0 to the current s, associated to the tube i=nbT
    //  w.r.t. the m0(0) unknown initial conditions
    //
    //  ====================
    //  ====== INPUTS ======
    //
    //  is                : (int ∊ [1 , nbP])  Index of the current curvilinear
    //  abscissa j                 : (int ∊ [1 , 3])    Index of the tube
    //  associated to the derivation w.r.t. m0(0) nbT               : (int > 0)
    //  Number of tubes of the CTCR mem_T             : (4 x 4 x nbP) Matrix
    //  memory of the B0(0)Ts values mem_y             : (class) Matrix memory
    //  of the y(s) values mem_dR0_dm0j0     : (3 x 3 x 3 x nbP)  Matrix memory
    //  of the dR0(s)_dm0j0 partial derivatives mem_dti_dm0j0     : (nbT x 3 x
    //  nbP)    Matrix memory of the dti(s)_dm0j0 partial derivatives
    //
    //  ====================
    //  ===== OUTPUTS ======
    //
    //  dB0nbTRsdm0j0     : (3 x 3) Value of the partial derivative
    //
    //  =======================================================================
    //  %
    b = ((static_cast<int32_T>(nbT) < 1) ||
         (static_cast<int32_T>(nbT) > mem_bvp->mem_y.mem_t.size(0)));
    if (b) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
                                    mem_bvp->mem_y.mem_t.size(0), &rd_emlrtBCI,
                                    &st);
    }
    if (is != static_cast<int32_T>(muDoubleScalarFloor(is))) {
      emlrtIntegerCheckR2012b(is, &aq_emlrtDCI, &st);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > mem_bvp->mem_y.mem_t.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    mem_bvp->mem_y.mem_t.size(1), &sd_emlrtBCI,
                                    &st);
    }
    b_gamma = mem_bvp->mem_y.mem_t[b_i + mem_bvp->mem_y.mem_t.size(0) *
                                             (static_cast<int32_T>(is) - 1)];
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
    R_tmp = muDoubleScalarSin(b_gamma);
    d_R_tmp = muDoubleScalarCos(b_gamma);
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > mem_bvp->mem_y.mem_t.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    mem_bvp->mem_y.mem_t.size(1), &yd_emlrtBCI,
                                    &st);
    }
    b_gamma = mem_bvp->mem_y.mem_t[b_i + mem_bvp->mem_y.mem_t.size(0) *
                                             (static_cast<int32_T>(is) - 1)];
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
    e_R_tmp = muDoubleScalarSin(b_gamma);
    f_R_tmp = muDoubleScalarCos(b_gamma);
    if ((static_cast<int32_T>(nbT) < 1) ||
        (static_cast<int32_T>(nbT) >
         mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(nbT), 1,
          mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0), &ee_emlrtBCI,
          &st);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) >
         mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(is), 1,
          mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(2), &fe_emlrtBCI,
          &st);
    }
    b_b = mem_deriv_propag_low->mem_dti.mem_dti_dm0j0
              [(b_i + mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0) * j) +
               mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0) * 3 *
                   (static_cast<int32_T>(is) - 1)];
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) >
         mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(3))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(is), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(3), &uc_emlrtBCI,
          &st);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > mem_bvp->mem_T.size(2))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    mem_bvp->mem_T.size(2), &vc_emlrtBCI, &st);
    }
    if (i > ctcr_construc->K.size(2)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->K.size(2),
                                    &nb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    b_R_tmp[0] = d_R_tmp;
    b_R_tmp[1] = -R_tmp;
    b_R_tmp[2] = 0.0;
    b_R_tmp[3] = R_tmp;
    b_R_tmp[4] = d_R_tmp;
    b_R_tmp[5] = 0.0;
    c_R_tmp[0] = f_R_tmp;
    c_R_tmp[3] = -e_R_tmp;
    c_R_tmp[6] = 0.0;
    c_R_tmp[1] = e_R_tmp;
    c_R_tmp[4] = f_R_tmp;
    c_R_tmp[7] = 0.0;
    for (i1 = 0; i1 < 3; i1++) {
      loop_ub = iv2[i1];
      b_R_tmp[i1 + 6] = loop_ub;
      c_R_tmp[3 * i1 + 2] = loop_ub;
      R_tmp = c_R_tmp[3 * i1];
      d_R_tmp = c_R_tmp[3 * i1 + 1];
      for (i2 = 0; i2 < 3; i2++) {
        a[i1 + 3 * i2] = static_cast<real_T>(iv[i2]) * R_tmp +
                         static_cast<real_T>(iv[i2 + 3]) * d_R_tmp;
      }
    }
    for (i1 = 0; i1 < 9; i1++) {
      a[i1] *= b_b;
    }
    for (i1 = 0; i1 < 3; i1++) {
      R_tmp = a[3 * i1];
      d_R_tmp = b_R_tmp[3 * i1];
      i2 = 3 * i1 + 1;
      b_loop_ub = 3 * i1 + 2;
      for (int32_T i7{0}; i7 < 3; i7++) {
        loop_ub = i1 + 3 * i7;
        c_R_tmp[loop_ub] =
            (mem_bvp->mem_T[i7 + 16 * (static_cast<int32_T>(is) - 1)] * R_tmp +
             mem_bvp->mem_T[(i7 + 16 * (static_cast<int32_T>(is) - 1)) + 4] *
                 a[i2]) +
            mem_bvp->mem_T[(i7 + 16 * (static_cast<int32_T>(is) - 1)) + 8] *
                a[b_loop_ub];
        b_mem_deriv_propag_low[loop_ub] =
            (mem_deriv_propag_low->mem_dR0
                     .mem_dR0_dm0j0[(i7 + 9 * j) +
                                    27 * (static_cast<int32_T>(is) - 1)] *
                 d_R_tmp +
             mem_deriv_propag_low->mem_dR0
                     .mem_dR0_dm0j0[((i7 + 9 * j) +
                                     27 * (static_cast<int32_T>(is) - 1)) +
                                    3] *
                 b_R_tmp[i2]) +
            mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0
                    [((i7 + 9 * j) + 27 * (static_cast<int32_T>(is) - 1)) + 6] *
                b_R_tmp[b_loop_ub];
      }
      y[i1] = static_cast<real_T>(iv2[i1]) / ctcr_construc_tmp;
    }
    for (i1 = 0; i1 < 9; i1++) {
      b_mem_deriv_propag_low[i1] += c_R_tmp[i1];
    }
    R_tmp = 0.0;
    d_R_tmp = y[0];
    b_gamma = y[1];
    f_R_tmp = y[2];
    for (i1 = 0; i1 < 3; i1++) {
      R_tmp += ((d_R_tmp * b_mem_deriv_propag_low[3 * i1] +
                 b_gamma * b_mem_deriv_propag_low[3 * i1 + 1]) +
                f_R_tmp * b_mem_deriv_propag_low[3 * i1 + 2]) *
               ctcr_load->tau_tip[i1];
    }
    if ((static_cast<int32_T>(nbT) < 1) ||
        (static_cast<int32_T>(nbT) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(nbT), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0), &oe_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(nbT) < 1) ||
        (static_cast<int32_T>(nbT) > ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
                                    ctcr_construc->vect_ind_iT.size(0),
                                    &qe_emlrtBCI, (emlrtConstCTX)&sp);
    }
    d_R_tmp = ctcr_construc
                  ->vect_ind_iT[b_i + ctcr_construc->vect_ind_iT.size(0) * 2];
    if (d_R_tmp != static_cast<int32_T>(muDoubleScalarFloor(d_R_tmp))) {
      emlrtIntegerCheckR2012b(d_R_tmp, &fq_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d_R_tmp) < 1) ||
        (static_cast<int32_T>(d_R_tmp) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(d_R_tmp), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(2), &pe_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(nbT) < 1) ||
        (static_cast<int32_T>(nbT) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, Bu.size(0),
                                    &re_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i1 = static_cast<int32_T>(
        (static_cast<uint32_T>(nbT) + static_cast<uint32_T>(j)) + 1U);
    if ((i1 < 1) || (i1 > Bu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Bu.size(1), &se_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[b_i + Bu.size(0) * (i1 - 1)] =
        mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0
            [(b_i + mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0) * j) +
             mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0) * 3 *
                 (static_cast<int32_T>(d_R_tmp) - 1)] -
        R_tmp;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  //  ============== db2_dn(0) ============== %
  for (int32_T j{0}; j < 3; j++) {
    st.site = &ub_emlrtRSI;
    if (nbT != static_cast<int32_T>(muDoubleScalarFloor(nbT))) {
      emlrtIntegerCheckR2012b(nbT, &np_emlrtDCI, &st);
    }
    if ((i < 1) || (i > ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->vect_ind_iT.size(0),
                                    &ed_emlrtBCI, &st);
    }
    is = ctcr_construc
             ->vect_ind_iT[(i + ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
    //  =======================================================================
    //  %
    //
    //  This function computes the partial derivative of rigid transformation
    //  matrix, from the base B0 to the current s, associated to the tube i=nbT
    //  w.r.t. the n0(0) unknown initial conditions
    //
    //  ====================
    //  ====== INPUTS ======
    //
    //  is                : (int ∊ [1 , nbP])  Index of the current curvilinear
    //  abscissa j                 : (int ∊ [1 , 3])    Index of the tube
    //  associated to the derivation w.r.t. n0(0) nbT               : (int > 0)
    //  Number of tubes of the CTCR mem_T             : (4 x 4 x nbP) Matrix
    //  memory of the B0(0)Ts values mem_y             : (class) Matrix memory
    //  of the y(s) values mem_dR0_dn0j0     : (3 x 3 x 3 x nbP)  Matrix memory
    //  of the dR0(s)_dn0j0 partial derivatives mem_dti_dn0j0     : (nbT x 3 x
    //  nbP)    Matrix memory of the dti(s)_dn0j0 partial derivatives
    //
    //  ====================
    //  ===== OUTPUTS ======
    //
    //  dB0nbTRsdn0j0     : (3 x 3)            Value of the partial derivative
    //
    //  =======================================================================
    //  %
    b = ((static_cast<int32_T>(nbT) < 1) ||
         (static_cast<int32_T>(nbT) > mem_bvp->mem_y.mem_t.size(0)));
    if (b) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
                                    mem_bvp->mem_y.mem_t.size(0), &ud_emlrtBCI,
                                    &st);
    }
    if (is != static_cast<int32_T>(muDoubleScalarFloor(is))) {
      emlrtIntegerCheckR2012b(is, &cq_emlrtDCI, &st);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > mem_bvp->mem_y.mem_t.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    mem_bvp->mem_y.mem_t.size(1), &vd_emlrtBCI,
                                    &st);
    }
    b_gamma = mem_bvp->mem_y.mem_t[b_i + mem_bvp->mem_y.mem_t.size(0) *
                                             (static_cast<int32_T>(is) - 1)];
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
    R_tmp = muDoubleScalarSin(b_gamma);
    d_R_tmp = muDoubleScalarCos(b_gamma);
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > mem_bvp->mem_y.mem_t.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    mem_bvp->mem_y.mem_t.size(1), &ae_emlrtBCI,
                                    &st);
    }
    b_gamma = mem_bvp->mem_y.mem_t[b_i + mem_bvp->mem_y.mem_t.size(0) *
                                             (static_cast<int32_T>(is) - 1)];
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
    e_R_tmp = muDoubleScalarSin(b_gamma);
    f_R_tmp = muDoubleScalarCos(b_gamma);
    if ((static_cast<int32_T>(nbT) < 1) ||
        (static_cast<int32_T>(nbT) >
         mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(nbT), 1,
          mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0), &ge_emlrtBCI,
          &st);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) >
         mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(is), 1,
          mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(2), &he_emlrtBCI,
          &st);
    }
    b_b = mem_deriv_propag_low->mem_dti.mem_dti_dn0j0
              [(b_i + mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0) * j) +
               mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0) * 3 *
                   (static_cast<int32_T>(is) - 1)];
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) >
         mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(3))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(is), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(3), &wc_emlrtBCI,
          &st);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > mem_bvp->mem_T.size(2))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    mem_bvp->mem_T.size(2), &xc_emlrtBCI, &st);
    }
    if (i > ctcr_construc->K.size(2)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->K.size(2),
                                    &ob_emlrtBCI, (emlrtConstCTX)&sp);
    }
    b_R_tmp[0] = d_R_tmp;
    b_R_tmp[1] = -R_tmp;
    b_R_tmp[2] = 0.0;
    b_R_tmp[3] = R_tmp;
    b_R_tmp[4] = d_R_tmp;
    b_R_tmp[5] = 0.0;
    c_R_tmp[0] = f_R_tmp;
    c_R_tmp[3] = -e_R_tmp;
    c_R_tmp[6] = 0.0;
    c_R_tmp[1] = e_R_tmp;
    c_R_tmp[4] = f_R_tmp;
    c_R_tmp[7] = 0.0;
    for (i1 = 0; i1 < 3; i1++) {
      loop_ub = iv2[i1];
      b_R_tmp[i1 + 6] = loop_ub;
      c_R_tmp[3 * i1 + 2] = loop_ub;
      R_tmp = c_R_tmp[3 * i1];
      d_R_tmp = c_R_tmp[3 * i1 + 1];
      for (i2 = 0; i2 < 3; i2++) {
        a[i1 + 3 * i2] = static_cast<real_T>(iv[i2]) * R_tmp +
                         static_cast<real_T>(iv[i2 + 3]) * d_R_tmp;
      }
    }
    for (i1 = 0; i1 < 9; i1++) {
      a[i1] *= b_b;
    }
    for (i1 = 0; i1 < 3; i1++) {
      R_tmp = a[3 * i1];
      d_R_tmp = b_R_tmp[3 * i1];
      i2 = 3 * i1 + 1;
      b_loop_ub = 3 * i1 + 2;
      for (int32_T i7{0}; i7 < 3; i7++) {
        loop_ub = i1 + 3 * i7;
        c_R_tmp[loop_ub] =
            (mem_bvp->mem_T[i7 + 16 * (static_cast<int32_T>(is) - 1)] * R_tmp +
             mem_bvp->mem_T[(i7 + 16 * (static_cast<int32_T>(is) - 1)) + 4] *
                 a[i2]) +
            mem_bvp->mem_T[(i7 + 16 * (static_cast<int32_T>(is) - 1)) + 8] *
                a[b_loop_ub];
        b_mem_deriv_propag_low[loop_ub] =
            (mem_deriv_propag_low->mem_dR0
                     .mem_dR0_dn0j0[(i7 + 9 * j) +
                                    27 * (static_cast<int32_T>(is) - 1)] *
                 d_R_tmp +
             mem_deriv_propag_low->mem_dR0
                     .mem_dR0_dn0j0[((i7 + 9 * j) +
                                     27 * (static_cast<int32_T>(is) - 1)) +
                                    3] *
                 b_R_tmp[i2]) +
            mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0
                    [((i7 + 9 * j) + 27 * (static_cast<int32_T>(is) - 1)) + 6] *
                b_R_tmp[b_loop_ub];
      }
      y[i1] = static_cast<real_T>(iv2[i1]) / ctcr_construc_tmp;
    }
    for (i1 = 0; i1 < 9; i1++) {
      b_mem_deriv_propag_low[i1] += c_R_tmp[i1];
    }
    R_tmp = 0.0;
    d_R_tmp = y[0];
    b_gamma = y[1];
    f_R_tmp = y[2];
    for (i1 = 0; i1 < 3; i1++) {
      R_tmp += ((d_R_tmp * b_mem_deriv_propag_low[3 * i1] +
                 b_gamma * b_mem_deriv_propag_low[3 * i1 + 1]) +
                f_R_tmp * b_mem_deriv_propag_low[3 * i1 + 2]) *
               ctcr_load->tau_tip[i1];
    }
    if ((static_cast<int32_T>(nbT) < 1) ||
        (static_cast<int32_T>(nbT) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(nbT), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0), &te_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(nbT) < 1) ||
        (static_cast<int32_T>(nbT) > ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
                                    ctcr_construc->vect_ind_iT.size(0),
                                    &ve_emlrtBCI, (emlrtConstCTX)&sp);
    }
    d_R_tmp = ctcr_construc
                  ->vect_ind_iT[b_i + ctcr_construc->vect_ind_iT.size(0) * 2];
    if (d_R_tmp != static_cast<int32_T>(muDoubleScalarFloor(d_R_tmp))) {
      emlrtIntegerCheckR2012b(d_R_tmp, &gq_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d_R_tmp) < 1) ||
        (static_cast<int32_T>(d_R_tmp) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(d_R_tmp), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(2), &ue_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(nbT) < 1) ||
        (static_cast<int32_T>(nbT) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, Bu.size(0),
                                    &we_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i1 = static_cast<int32_T>(
        (static_cast<uint32_T>(nbT) + static_cast<uint32_T>(j)) + 4U);
    if ((i1 < 1) || (i1 > Bu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Bu.size(1), &xe_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[b_i + Bu.size(0) * (i1 - 1)] =
        mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0
            [(b_i + mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0) * j) +
             mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0) * 3 *
                 (static_cast<int32_T>(d_R_tmp) - 1)] -
        R_tmp;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  //  ============== db3_duz(0) ============= %
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
                                static_cast<int32_T>(ctcr_carac->nbT),
                                &o_emlrtRTEI, (emlrtConstCTX)&sp);
  if (i - 1 >= 0) {
    i3 = static_cast<int32_T>(muDoubleScalarFloor(nbT));
    i4 = static_cast<int32_T>(nbT) + 1;
  }
  for (int32_T j{0}; j < i; j++) {
    if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
         mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2), &rb_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if (nbT != i3) {
      emlrtIntegerCheckR2012b(nbT, &op_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((i < 1) || (i > ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->vect_ind_iT.size(0),
                                    &fd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp = ctcr_construc
                ->vect_ind_iT[(i + ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
    if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
      emlrtIntegerCheckR2012b(R_tmp, &po_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(R_tmp) < 1) ||
        (static_cast<int32_T>(R_tmp) >
         mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(3))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(3), &sb_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    for (i1 = 0; i1 < 3; i1++) {
      c_R_tmp[3 * i1] =
          mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
              [(3 * i1 + 9 * j) +
               9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                   (static_cast<int32_T>(R_tmp) - 1)];
      c_R_tmp[3 * i1 + 1] =
          mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
              [((3 * i1 + 9 * j) +
                9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                    (static_cast<int32_T>(R_tmp) - 1)) +
               1];
      c_R_tmp[3 * i1 + 2] =
          mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
              [((3 * i1 + 9 * j) +
                9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                    (static_cast<int32_T>(R_tmp) - 1)) +
               2];
    }
    coder::internal::blas::mtimes(c_R_tmp, ctcr_load->tau_tip, y);
    if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
         mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1,
          mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1), &pb_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if (static_cast<int32_T>(nbT) != i3) {
      emlrtIntegerCheckR2012b(nbT, &rp_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if (i > ctcr_construc->vect_ind_iT.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->vect_ind_iT.size(0),
                                    &id_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp = ctcr_construc
                ->vect_ind_iT[(i + ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
    if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
      emlrtIntegerCheckR2012b(R_tmp, &oo_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(R_tmp) < 1) ||
        (static_cast<int32_T>(R_tmp) >
         mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(2), &qb_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > Bu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, Bu.size(1),
          &lc_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (nbT + 1.0 != static_cast<int32_T>(nbT + 1.0)) {
      emlrtIntegerCheckR2012b(nbT + 1.0, &mq_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((i4 < 1.0) || (i4 > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT) + 1, 1,
                                    Bu.size(0), &ef_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[static_cast<int32_T>(nbT) + Bu.size(0) * j] =
        mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0
            [3 * j + 3 * mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) *
                         (static_cast<int32_T>(R_tmp) - 1)] -
        y[0];
    if ((nbT + 1.0) + 1.0 != static_cast<int32_T>((nbT + 1.0) + 1.0)) {
      emlrtIntegerCheckR2012b((nbT + 1.0) + 1.0, &mq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 1.0) + 1.0) < 1) ||
        (static_cast<int32_T>((nbT + 1.0) + 1.0) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 1.0), 1,
                                    Bu.size(0), &ef_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>((nbT + 1.0) + 1.0) + Bu.size(0) * j) - 1] =
        mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0
            [(3 * j + 3 * mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) *
                          (static_cast<int32_T>(R_tmp) - 1)) +
             1] -
        y[1];
    if ((nbT + 1.0) + 2.0 != static_cast<int32_T>((nbT + 1.0) + 2.0)) {
      emlrtIntegerCheckR2012b((nbT + 1.0) + 2.0, &mq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 1.0) + 2.0) < 1) ||
        (static_cast<int32_T>((nbT + 1.0) + 2.0) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 2.0), 1,
                                    Bu.size(0), &ef_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>((nbT + 1.0) + 2.0) + Bu.size(0) * j) - 1] =
        mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0
            [(3 * j + 3 * mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) *
                          (static_cast<int32_T>(R_tmp) - 1)) +
             2] -
        y[2];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  //  ============== db3_dm(0) ============== %
  i1 = static_cast<int32_T>(muDoubleScalarFloor(nbT));
  for (int32_T j{0}; j < 3; j++) {
    if (nbT != i1) {
      emlrtIntegerCheckR2012b(nbT, &pp_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((i < 1) || (i > ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->vect_ind_iT.size(0),
                                    &gd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp = ctcr_construc
                ->vect_ind_iT[(i + ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
    if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
      emlrtIntegerCheckR2012b(R_tmp, &ro_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(R_tmp) < 1) ||
        (static_cast<int32_T>(R_tmp) >
         mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(3))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(3), &ub_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    for (i2 = 0; i2 < 3; i2++) {
      c_R_tmp[3 * i2] =
          mem_deriv_propag_low->mem_dR0
              .mem_dR0_dm0j0[(3 * i2 + 9 * j) +
                             27 * (static_cast<int32_T>(R_tmp) - 1)];
      c_R_tmp[3 * i2 + 1] =
          mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0
              [((3 * i2 + 9 * j) + 27 * (static_cast<int32_T>(R_tmp) - 1)) + 1];
      c_R_tmp[3 * i2 + 2] =
          mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0
              [((3 * i2 + 9 * j) + 27 * (static_cast<int32_T>(R_tmp) - 1)) + 2];
    }
    coder::internal::blas::mtimes(c_R_tmp, ctcr_load->tau_tip, y);
    if (static_cast<int32_T>(nbT) != i1) {
      emlrtIntegerCheckR2012b(nbT, &sp_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if (i > ctcr_construc->vect_ind_iT.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->vect_ind_iT.size(0),
                                    &jd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp = ctcr_construc
                ->vect_ind_iT[(i + ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
    if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
      emlrtIntegerCheckR2012b(R_tmp, &qo_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(R_tmp) < 1) ||
        (static_cast<int32_T>(R_tmp) >
         mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0.size(2), &tb_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    d_R_tmp = nbT + (static_cast<real_T>(j) + 1.0);
    if (d_R_tmp != static_cast<int32_T>(d_R_tmp)) {
      emlrtIntegerCheckR2012b(d_R_tmp, &cp_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d_R_tmp) < 1) ||
        (static_cast<int32_T>(d_R_tmp) > Bu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d_R_tmp), 1,
                                    Bu.size(1), &mc_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (nbT + 1.0 != static_cast<int32_T>(nbT + 1.0)) {
      emlrtIntegerCheckR2012b(nbT + 1.0, &lq_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(nbT) + 1 < 1.0) ||
        (static_cast<int32_T>(nbT) + 1 > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT) + 1, 1,
                                    Bu.size(0), &df_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[static_cast<int32_T>(nbT) +
       Bu.size(0) * (static_cast<int32_T>(d_R_tmp) - 1)] =
        mem_deriv_propag_low->mem_dm0
            .mem_dm0_dm0j0[3 * j + 9 * (static_cast<int32_T>(R_tmp) - 1)] -
        y[0];
    if ((nbT + 1.0) + 1.0 != static_cast<int32_T>((nbT + 1.0) + 1.0)) {
      emlrtIntegerCheckR2012b((nbT + 1.0) + 1.0, &lq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 1.0) + 1.0) < 1) ||
        (static_cast<int32_T>((nbT + 1.0) + 1.0) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 1.0), 1,
                                    Bu.size(0), &df_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>((nbT + 1.0) + 1.0) +
        Bu.size(0) * (static_cast<int32_T>(d_R_tmp) - 1)) -
       1] = mem_deriv_propag_low->mem_dm0
                .mem_dm0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(R_tmp) - 1)) +
                               1] -
            y[1];
    if ((nbT + 1.0) + 2.0 != static_cast<int32_T>((nbT + 1.0) + 2.0)) {
      emlrtIntegerCheckR2012b((nbT + 1.0) + 2.0, &lq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 1.0) + 2.0) < 1) ||
        (static_cast<int32_T>((nbT + 1.0) + 2.0) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 2.0), 1,
                                    Bu.size(0), &df_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>((nbT + 1.0) + 2.0) +
        Bu.size(0) * (static_cast<int32_T>(d_R_tmp) - 1)) -
       1] = mem_deriv_propag_low->mem_dm0
                .mem_dm0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(R_tmp) - 1)) +
                               2] -
            y[2];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  //  ============== db3_dn(0) ============== %
  i1 = static_cast<int32_T>(muDoubleScalarFloor(nbT));
  for (int32_T j{0}; j < 3; j++) {
    if (nbT != i1) {
      emlrtIntegerCheckR2012b(nbT, &qp_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((i < 1) || (i > ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->vect_ind_iT.size(0),
                                    &hd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp = ctcr_construc
                ->vect_ind_iT[(i + ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
    if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
      emlrtIntegerCheckR2012b(R_tmp, &to_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(R_tmp) < 1) ||
        (static_cast<int32_T>(R_tmp) >
         mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(3))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(3), &wb_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    for (i2 = 0; i2 < 3; i2++) {
      c_R_tmp[3 * i2] =
          mem_deriv_propag_low->mem_dR0
              .mem_dR0_dn0j0[(3 * i2 + 9 * j) +
                             27 * (static_cast<int32_T>(R_tmp) - 1)];
      c_R_tmp[3 * i2 + 1] =
          mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0
              [((3 * i2 + 9 * j) + 27 * (static_cast<int32_T>(R_tmp) - 1)) + 1];
      c_R_tmp[3 * i2 + 2] =
          mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0
              [((3 * i2 + 9 * j) + 27 * (static_cast<int32_T>(R_tmp) - 1)) + 2];
    }
    coder::internal::blas::mtimes(c_R_tmp, ctcr_load->tau_tip, y);
    if (static_cast<int32_T>(nbT) != i1) {
      emlrtIntegerCheckR2012b(nbT, &up_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if (i > ctcr_construc->vect_ind_iT.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->vect_ind_iT.size(0),
                                    &ld_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp = ctcr_construc
                ->vect_ind_iT[(i + ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
    if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
      emlrtIntegerCheckR2012b(R_tmp, &so_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(R_tmp) < 1) ||
        (static_cast<int32_T>(R_tmp) >
         mem_deriv_propag_low->mem_dm0.mem_dm0_dn0j0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_dm0.mem_dm0_dn0j0.size(2), &vb_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    d_R_tmp = (nbT + 3.0) + (static_cast<real_T>(j) + 1.0);
    if (d_R_tmp != static_cast<int32_T>(d_R_tmp)) {
      emlrtIntegerCheckR2012b(d_R_tmp, &dp_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d_R_tmp) < 1) ||
        (static_cast<int32_T>(d_R_tmp) > Bu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d_R_tmp), 1,
                                    Bu.size(1), &nc_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (nbT + 1.0 != static_cast<int32_T>(nbT + 1.0)) {
      emlrtIntegerCheckR2012b(nbT + 1.0, &kq_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(nbT) + 1 < 1.0) ||
        (static_cast<int32_T>(nbT) + 1 > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT) + 1, 1,
                                    Bu.size(0), &cf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[static_cast<int32_T>(nbT) +
       Bu.size(0) * (static_cast<int32_T>(d_R_tmp) - 1)] =
        mem_deriv_propag_low->mem_dm0
            .mem_dm0_dn0j0[3 * j + 9 * (static_cast<int32_T>(R_tmp) - 1)] -
        y[0];
    if ((nbT + 1.0) + 1.0 != static_cast<int32_T>((nbT + 1.0) + 1.0)) {
      emlrtIntegerCheckR2012b((nbT + 1.0) + 1.0, &kq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 1.0) + 1.0) < 1) ||
        (static_cast<int32_T>((nbT + 1.0) + 1.0) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 1.0), 1,
                                    Bu.size(0), &cf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>((nbT + 1.0) + 1.0) +
        Bu.size(0) * (static_cast<int32_T>(d_R_tmp) - 1)) -
       1] = mem_deriv_propag_low->mem_dm0
                .mem_dm0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(R_tmp) - 1)) +
                               1] -
            y[1];
    if ((nbT + 1.0) + 2.0 != static_cast<int32_T>((nbT + 1.0) + 2.0)) {
      emlrtIntegerCheckR2012b((nbT + 1.0) + 2.0, &kq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 1.0) + 2.0) < 1) ||
        (static_cast<int32_T>((nbT + 1.0) + 2.0) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 2.0), 1,
                                    Bu.size(0), &cf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>((nbT + 1.0) + 2.0) +
        Bu.size(0) * (static_cast<int32_T>(d_R_tmp) - 1)) -
       1] = mem_deriv_propag_low->mem_dm0
                .mem_dm0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(R_tmp) - 1)) +
                               2] -
            y[2];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  //  ============== db4_duz(0) ============= %
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
                                static_cast<int32_T>(ctcr_carac->nbT),
                                &p_emlrtRTEI, (emlrtConstCTX)&sp);
  if (i - 1 >= 0) {
    i5 = static_cast<int32_T>(muDoubleScalarFloor(nbT));
    i6 = static_cast<int32_T>(nbT) + 4;
  }
  for (int32_T j{0}; j < i; j++) {
    if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
         mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2), &ac_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if (nbT != i5) {
      emlrtIntegerCheckR2012b(nbT, &tp_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((i < 1) || (i > ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->vect_ind_iT.size(0),
                                    &kd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp = ctcr_construc
                ->vect_ind_iT[(i + ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
    if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
      emlrtIntegerCheckR2012b(R_tmp, &vo_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(R_tmp) < 1) ||
        (static_cast<int32_T>(R_tmp) >
         mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(3))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(3), &bc_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    for (i1 = 0; i1 < 3; i1++) {
      c_R_tmp[3 * i1] =
          mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
              [(3 * i1 + 9 * j) +
               9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                   (static_cast<int32_T>(R_tmp) - 1)];
      c_R_tmp[3 * i1 + 1] =
          mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
              [((3 * i1 + 9 * j) +
                9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                    (static_cast<int32_T>(R_tmp) - 1)) +
               1];
      c_R_tmp[3 * i1 + 2] =
          mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
              [((3 * i1 + 9 * j) +
                9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                    (static_cast<int32_T>(R_tmp) - 1)) +
               2];
    }
    coder::internal::blas::mtimes(c_R_tmp, ctcr_load->f_tip, y);
    if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
         mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1,
          mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1), &xb_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if (static_cast<int32_T>(nbT) != i5) {
      emlrtIntegerCheckR2012b(nbT, &yp_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if (i > ctcr_construc->vect_ind_iT.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->vect_ind_iT.size(0),
                                    &qd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp = ctcr_construc
                ->vect_ind_iT[(i + ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
    if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
      emlrtIntegerCheckR2012b(R_tmp, &uo_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(R_tmp) < 1) ||
        (static_cast<int32_T>(R_tmp) >
         mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(2), &yb_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > Bu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(j) + 1U), 1, Bu.size(1),
          &oc_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (nbT + 4.0 != static_cast<int32_T>(nbT + 4.0)) {
      emlrtIntegerCheckR2012b(nbT + 4.0, &jq_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((i6 < 1.0) || (i6 > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT) + 4, 1,
                                    Bu.size(0), &bf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>(nbT) + Bu.size(0) * j) + 3] =
        mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0
            [3 * j + 3 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) *
                         (static_cast<int32_T>(R_tmp) - 1)] -
        y[0];
    if ((nbT + 4.0) + 1.0 != static_cast<int32_T>((nbT + 4.0) + 1.0)) {
      emlrtIntegerCheckR2012b((nbT + 4.0) + 1.0, &jq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 4.0) + 1.0) < 1) ||
        (static_cast<int32_T>((nbT + 4.0) + 1.0) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 1.0), 1,
                                    Bu.size(0), &bf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>((nbT + 4.0) + 1.0) + Bu.size(0) * j) - 1] =
        mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0
            [(3 * j + 3 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) *
                          (static_cast<int32_T>(R_tmp) - 1)) +
             1] -
        y[1];
    if ((nbT + 4.0) + 2.0 != static_cast<int32_T>((nbT + 4.0) + 2.0)) {
      emlrtIntegerCheckR2012b((nbT + 4.0) + 2.0, &jq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 4.0) + 2.0) < 1) ||
        (static_cast<int32_T>((nbT + 4.0) + 2.0) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 2.0), 1,
                                    Bu.size(0), &bf_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>((nbT + 4.0) + 2.0) + Bu.size(0) * j) - 1] =
        mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0
            [(3 * j + 3 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) *
                          (static_cast<int32_T>(R_tmp) - 1)) +
             2] -
        y[2];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  //  ============== db4_dm(0) ============== %
  i1 = static_cast<int32_T>(muDoubleScalarFloor(nbT));
  for (int32_T j{0}; j < 3; j++) {
    if (nbT != i1) {
      emlrtIntegerCheckR2012b(nbT, &vp_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((i < 1) || (i > ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->vect_ind_iT.size(0),
                                    &md_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp = ctcr_construc
                ->vect_ind_iT[(i + ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
    if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
      emlrtIntegerCheckR2012b(R_tmp, &xo_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(R_tmp) < 1) ||
        (static_cast<int32_T>(R_tmp) >
         mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(3))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(3), &dc_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    for (i2 = 0; i2 < 3; i2++) {
      c_R_tmp[3 * i2] =
          mem_deriv_propag_low->mem_dR0
              .mem_dR0_dm0j0[(3 * i2 + 9 * j) +
                             27 * (static_cast<int32_T>(R_tmp) - 1)];
      c_R_tmp[3 * i2 + 1] =
          mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0
              [((3 * i2 + 9 * j) + 27 * (static_cast<int32_T>(R_tmp) - 1)) + 1];
      c_R_tmp[3 * i2 + 2] =
          mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0
              [((3 * i2 + 9 * j) + 27 * (static_cast<int32_T>(R_tmp) - 1)) + 2];
    }
    coder::internal::blas::mtimes(c_R_tmp, ctcr_load->f_tip, y);
    if (static_cast<int32_T>(nbT) != i1) {
      emlrtIntegerCheckR2012b(nbT, &bq_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if (i > ctcr_construc->vect_ind_iT.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->vect_ind_iT.size(0),
                                    &td_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp = ctcr_construc
                ->vect_ind_iT[(i + ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
    if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
      emlrtIntegerCheckR2012b(R_tmp, &wo_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(R_tmp) < 1) ||
        (static_cast<int32_T>(R_tmp) >
         mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0.size(2), &cc_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    d_R_tmp = nbT + (static_cast<real_T>(j) + 1.0);
    if (d_R_tmp != static_cast<int32_T>(d_R_tmp)) {
      emlrtIntegerCheckR2012b(d_R_tmp, &ep_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d_R_tmp) < 1) ||
        (static_cast<int32_T>(d_R_tmp) > Bu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d_R_tmp), 1,
                                    Bu.size(1), &pc_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (nbT + 4.0 != static_cast<int32_T>(nbT + 4.0)) {
      emlrtIntegerCheckR2012b(nbT + 4.0, &iq_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(nbT) + 4 < 1.0) ||
        (static_cast<int32_T>(nbT) + 4 > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT) + 4, 1,
                                    Bu.size(0), &af_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>(nbT) +
        Bu.size(0) * (static_cast<int32_T>(d_R_tmp) - 1)) +
       3] = mem_deriv_propag_low->mem_dn0
                .mem_dn0_dm0j0[3 * j + 9 * (static_cast<int32_T>(R_tmp) - 1)] -
            y[0];
    if ((nbT + 4.0) + 1.0 != static_cast<int32_T>((nbT + 4.0) + 1.0)) {
      emlrtIntegerCheckR2012b((nbT + 4.0) + 1.0, &iq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 4.0) + 1.0) < 1) ||
        (static_cast<int32_T>((nbT + 4.0) + 1.0) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 1.0), 1,
                                    Bu.size(0), &af_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>((nbT + 4.0) + 1.0) +
        Bu.size(0) * (static_cast<int32_T>(d_R_tmp) - 1)) -
       1] = mem_deriv_propag_low->mem_dn0
                .mem_dn0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(R_tmp) - 1)) +
                               1] -
            y[1];
    if ((nbT + 4.0) + 2.0 != static_cast<int32_T>((nbT + 4.0) + 2.0)) {
      emlrtIntegerCheckR2012b((nbT + 4.0) + 2.0, &iq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 4.0) + 2.0) < 1) ||
        (static_cast<int32_T>((nbT + 4.0) + 2.0) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 2.0), 1,
                                    Bu.size(0), &af_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>((nbT + 4.0) + 2.0) +
        Bu.size(0) * (static_cast<int32_T>(d_R_tmp) - 1)) -
       1] = mem_deriv_propag_low->mem_dn0
                .mem_dn0_dm0j0[(3 * j + 9 * (static_cast<int32_T>(R_tmp) - 1)) +
                               2] -
            y[2];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  //  ============== db4_dn(0) ============== %
  i1 = static_cast<int32_T>(muDoubleScalarFloor(nbT));
  for (int32_T j{0}; j < 3; j++) {
    if (nbT != i1) {
      emlrtIntegerCheckR2012b(nbT, &xp_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((i < 1) || (i > ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->vect_ind_iT.size(0),
                                    &pd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp = ctcr_construc
                ->vect_ind_iT[(i + ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
    if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
      emlrtIntegerCheckR2012b(R_tmp, &ap_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(R_tmp) < 1) ||
        (static_cast<int32_T>(R_tmp) >
         mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(3))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(3), &fc_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    for (i2 = 0; i2 < 3; i2++) {
      c_R_tmp[3 * i2] =
          mem_deriv_propag_low->mem_dR0
              .mem_dR0_dn0j0[(3 * i2 + 9 * j) +
                             27 * (static_cast<int32_T>(R_tmp) - 1)];
      c_R_tmp[3 * i2 + 1] =
          mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0
              [((3 * i2 + 9 * j) + 27 * (static_cast<int32_T>(R_tmp) - 1)) + 1];
      c_R_tmp[3 * i2 + 2] =
          mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0
              [((3 * i2 + 9 * j) + 27 * (static_cast<int32_T>(R_tmp) - 1)) + 2];
    }
    coder::internal::blas::mtimes(c_R_tmp, ctcr_load->f_tip, y);
    if (static_cast<int32_T>(nbT) != i1) {
      emlrtIntegerCheckR2012b(nbT, &dq_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if (i > ctcr_construc->vect_ind_iT.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, ctcr_construc->vect_ind_iT.size(0),
                                    &wd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    R_tmp = ctcr_construc
                ->vect_ind_iT[(i + ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
    if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
      emlrtIntegerCheckR2012b(R_tmp, &yo_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(R_tmp) < 1) ||
        (static_cast<int32_T>(R_tmp) >
         mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0.size(2))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0.size(2), &ec_emlrtBCI,
          (emlrtConstCTX)&sp);
    }
    d_R_tmp = (nbT + 3.0) + (static_cast<real_T>(j) + 1.0);
    if (d_R_tmp != static_cast<int32_T>(d_R_tmp)) {
      emlrtIntegerCheckR2012b(d_R_tmp, &fp_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d_R_tmp) < 1) ||
        (static_cast<int32_T>(d_R_tmp) > Bu.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d_R_tmp), 1,
                                    Bu.size(1), &qc_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (nbT + 4.0 != static_cast<int32_T>(nbT + 4.0)) {
      emlrtIntegerCheckR2012b(nbT + 4.0, &hq_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(nbT) + 4 < 1.0) ||
        (static_cast<int32_T>(nbT) + 4 > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT) + 4, 1,
                                    Bu.size(0), &ye_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>(nbT) +
        Bu.size(0) * (static_cast<int32_T>(d_R_tmp) - 1)) +
       3] = mem_deriv_propag_low->mem_dn0
                .mem_dn0_dn0j0[3 * j + 9 * (static_cast<int32_T>(R_tmp) - 1)] -
            y[0];
    if ((nbT + 4.0) + 1.0 != static_cast<int32_T>((nbT + 4.0) + 1.0)) {
      emlrtIntegerCheckR2012b((nbT + 4.0) + 1.0, &hq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 4.0) + 1.0) < 1) ||
        (static_cast<int32_T>((nbT + 4.0) + 1.0) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 1.0), 1,
                                    Bu.size(0), &ye_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>((nbT + 4.0) + 1.0) +
        Bu.size(0) * (static_cast<int32_T>(d_R_tmp) - 1)) -
       1] = mem_deriv_propag_low->mem_dn0
                .mem_dn0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(R_tmp) - 1)) +
                               1] -
            y[1];
    if ((nbT + 4.0) + 2.0 != static_cast<int32_T>((nbT + 4.0) + 2.0)) {
      emlrtIntegerCheckR2012b((nbT + 4.0) + 2.0, &hq_emlrtDCI,
                              (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>((nbT + 4.0) + 2.0) < 1) ||
        (static_cast<int32_T>((nbT + 4.0) + 2.0) > Bu.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 2.0), 1,
                                    Bu.size(0), &ye_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    Bu[(static_cast<int32_T>((nbT + 4.0) + 2.0) +
        Bu.size(0) * (static_cast<int32_T>(d_R_tmp) - 1)) -
       1] = mem_deriv_propag_low->mem_dn0
                .mem_dn0_dn0j0[(3 * j + 9 * (static_cast<int32_T>(R_tmp) - 1)) +
                               2] -
            y[2];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (BVP_Bu_Construc.cpp)
