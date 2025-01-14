//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// IVP_MaJ_Mem.cpp
//
// Code generation for function 'IVP_MaJ_Mem'
//

// Include files
#include "IVP_MaJ_Mem.h"
#include "CTCRConstruc.h"
#include "CTCR_Shape_data.h"
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
#include "find.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo qb_emlrtRSI{
    41,            // lineNo
    "IVP_MaJ_Mem", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pathName
};

static emlrtRSInfo rb_emlrtRSI{
    42,            // lineNo
    "IVP_MaJ_Mem", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pathName
};

static emlrtECInfo j_emlrtECI{
    -1,            // nDims
    41,            // lineNo
    32,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtECInfo k_emlrtECI{
    1,             // nDims
    45,            // lineNo
    37,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtBCInfo ro_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    50,                     // lineNo
    76,                     // colNo
    "mem_bvp.mem_y.mem_R0", // aName
    "IVP_MaJ_Mem",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo so_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    50,                       // lineNo
    110,                      // colNo
    "mem_bvp.mem_ys.mem_R0s", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo to_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    50,            // lineNo
    123,           // colNo
    "vect_res",    // aName
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo uo_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    50,                     // lineNo
    34,                     // colNo
    "mem_bvp.mem_y.mem_R0", // aName
    "IVP_MaJ_Mem",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vo_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    51,                     // lineNo
    74,                     // colNo
    "mem_bvp.mem_y.mem_p0", // aName
    "IVP_MaJ_Mem",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wo_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    51,                       // lineNo
    108,                      // colNo
    "mem_bvp.mem_ys.mem_p0s", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xo_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    51,            // lineNo
    121,           // colNo
    "vect_res",    // aName
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yo_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    51,                     // lineNo
    32,                     // colNo
    "mem_bvp.mem_y.mem_p0", // aName
    "IVP_MaJ_Mem",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ap_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    54,            // lineNo
    28,            // colNo
    "next_vectT",  // aName
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bp_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    60,                                           // lineNo
    114,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_duzj0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cp_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    60,                                           // lineNo
    118,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_duzj0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dp_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    60,                                                 // lineNo
    181,                                                // colNo
    "mem_deriv_propag_low.mem_dti_ds.mem_dti_duzj0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ep_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    60,                                                 // lineNo
    185,                                                // colNo
    "mem_deriv_propag_low.mem_dti_ds.mem_dti_duzj0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fp_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    60,                       // lineNo
    219,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtECInfo l_emlrtECI{
    2,             // nDims
    60,            // lineNo
    71,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtBCInfo gp_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    60,                                           // lineNo
    56,                                           // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_duzj0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hp_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    60,                                           // lineNo
    60,                                           // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_duzj0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtECInfo m_emlrtECI{
    -1,            // nDims
    60,            // lineNo
    13,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtBCInfo ip_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    67,                     // lineNo
    74,                     // colNo
    "mem_bvp.mem_y.mem_m0", // aName
    "IVP_MaJ_Mem",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jp_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    67,                       // lineNo
    108,                      // colNo
    "mem_bvp.mem_ys.mem_m0s", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kp_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    67,            // lineNo
    121,           // colNo
    "vect_res",    // aName
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lp_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    67,                     // lineNo
    36,                     // colNo
    "mem_bvp.mem_y.mem_m0", // aName
    "IVP_MaJ_Mem",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mp_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    68,                     // lineNo
    74,                     // colNo
    "mem_bvp.mem_y.mem_n0", // aName
    "IVP_MaJ_Mem",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo np_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    68,                       // lineNo
    108,                      // colNo
    "mem_bvp.mem_ys.mem_n0s", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo op_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    68,            // lineNo
    121,           // colNo
    "vect_res",    // aName
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pp_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    68,                     // lineNo
    36,                     // colNo
    "mem_bvp.mem_y.mem_n0", // aName
    "IVP_MaJ_Mem",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qp_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    72,            // lineNo
    32,            // colNo
    "next_vectT",  // aName
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rp_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    75,                                             // lineNo
    128,                                            // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0", // aName
    "IVP_MaJ_Mem",                                  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sp_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    75,                                             // lineNo
    132,                                            // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0", // aName
    "IVP_MaJ_Mem",                                  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tp_emlrtBCI{
    -1,                                                   // iFirst
    -1,                                                   // iLast
    75,                                                   // lineNo
    194,                                                  // colNo
    "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_duzj0_ds", // aName
    "IVP_MaJ_Mem",                                        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo up_emlrtBCI{
    -1,                                                   // iFirst
    -1,                                                   // iLast
    75,                                                   // lineNo
    198,                                                  // colNo
    "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_duzj0_ds", // aName
    "IVP_MaJ_Mem",                                        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vp_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    75,                       // lineNo
    233,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtECInfo n_emlrtECI{
    2,             // nDims
    75,            // lineNo
    83,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtBCInfo wp_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    75,                                             // lineNo
    62,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0", // aName
    "IVP_MaJ_Mem",                                  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xp_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    75,                                             // lineNo
    66,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_duzj0", // aName
    "IVP_MaJ_Mem",                                  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtECInfo o_emlrtECI{
    -1,            // nDims
    75,            // lineNo
    17,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtBCInfo yp_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    76,                                             // lineNo
    128,                                            // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0", // aName
    "IVP_MaJ_Mem",                                  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo aq_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    76,                                             // lineNo
    132,                                            // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0", // aName
    "IVP_MaJ_Mem",                                  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bq_emlrtBCI{
    -1,                                                   // iFirst
    -1,                                                   // iLast
    76,                                                   // lineNo
    194,                                                  // colNo
    "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dm0j0_ds", // aName
    "IVP_MaJ_Mem",                                        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cq_emlrtBCI{
    -1,                                                   // iFirst
    -1,                                                   // iLast
    76,                                                   // lineNo
    198,                                                  // colNo
    "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dm0j0_ds", // aName
    "IVP_MaJ_Mem",                                        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dq_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    76,                       // lineNo
    233,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo eq_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    76,                                             // lineNo
    66,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dm0j0", // aName
    "IVP_MaJ_Mem",                                  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fq_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    77,                                             // lineNo
    128,                                            // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0", // aName
    "IVP_MaJ_Mem",                                  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gq_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    77,                                             // lineNo
    132,                                            // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0", // aName
    "IVP_MaJ_Mem",                                  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hq_emlrtBCI{
    -1,                                                   // iFirst
    -1,                                                   // iLast
    77,                                                   // lineNo
    194,                                                  // colNo
    "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dn0j0_ds", // aName
    "IVP_MaJ_Mem",                                        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo iq_emlrtBCI{
    -1,                                                   // iFirst
    -1,                                                   // iLast
    77,                                                   // lineNo
    198,                                                  // colNo
    "mem_deriv_propag_low.mem_duzi_ds.mem_duzi_dn0j0_ds", // aName
    "IVP_MaJ_Mem",                                        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jq_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    77,                       // lineNo
    233,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kq_emlrtBCI{
    -1,                                             // iFirst
    -1,                                             // iLast
    77,                                             // lineNo
    66,                                             // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dn0j0", // aName
    "IVP_MaJ_Mem",                                  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lq_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    78,                                           // lineNo
    126,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dm0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mq_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    78,                                           // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dm0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo nq_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    78,                                                 // lineNo
    192,                                                // colNo
    "mem_deriv_propag_low.mem_dti_ds.mem_dti_dm0j0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo oq_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    78,                                                 // lineNo
    196,                                                // colNo
    "mem_deriv_propag_low.mem_dti_ds.mem_dti_dm0j0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pq_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    78,                       // lineNo
    233,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qq_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    78,                                           // lineNo
    64,                                           // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dm0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rq_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    79,                                           // lineNo
    126,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dn0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sq_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    79,                                           // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dn0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tq_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    79,                                                 // lineNo
    192,                                                // colNo
    "mem_deriv_propag_low.mem_dti_ds.mem_dti_dn0j0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo uq_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    79,                                                 // lineNo
    196,                                                // colNo
    "mem_deriv_propag_low.mem_dti_ds.mem_dti_dn0j0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vq_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    79,                       // lineNo
    233,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wq_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    79,                                           // lineNo
    64,                                           // colNo
    "mem_deriv_propag_low.mem_dti.mem_dti_dn0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xq_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    85,                                           // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yq_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    85,                                                 // lineNo
    196,                                                // colNo
    "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_duzj0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ar_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    85,                       // lineNo
    233,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtECInfo p_emlrtECI{
    2,             // nDims
    85,            // lineNo
    83,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtBCInfo br_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    85,                                           // lineNo
    60,                                           // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_duzj0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtECInfo q_emlrtECI{
    -1,            // nDims
    85,            // lineNo
    13,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtBCInfo cr_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    86,                                           // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dr_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    86,                                                 // lineNo
    196,                                                // colNo
    "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dm0j0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo er_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    86,                       // lineNo
    233,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fr_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    86,                                           // lineNo
    60,                                           // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dm0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gr_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    87,                                           // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hr_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    87,                                                 // lineNo
    196,                                                // colNo
    "mem_deriv_propag_low.mem_dm0_ds.mem_dm0_dn0j0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ir_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    87,                       // lineNo
    233,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jr_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    87,                                           // lineNo
    60,                                           // colNo
    "mem_deriv_propag_low.mem_dm0.mem_dm0_dn0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kr_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    88,                                           // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo lr_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    88,                                                 // lineNo
    196,                                                // colNo
    "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_duzj0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo mr_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    88,                       // lineNo
    233,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtECInfo r_emlrtECI{
    2,             // nDims
    88,            // lineNo
    83,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtBCInfo nr_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    88,                                           // lineNo
    60,                                           // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_duzj0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtECInfo s_emlrtECI{
    -1,            // nDims
    88,            // lineNo
    13,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtBCInfo or_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    89,                                           // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo pr_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    89,                                                 // lineNo
    196,                                                // colNo
    "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dm0j0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qr_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    89,                       // lineNo
    233,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rr_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    89,                                           // lineNo
    60,                                           // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_dm0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo sr_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    90,                                           // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tr_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    90,                                                 // lineNo
    196,                                                // colNo
    "mem_deriv_propag_low.mem_dn0_ds.mem_dn0_dn0j0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ur_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    90,                       // lineNo
    233,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo vr_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    90,                                           // lineNo
    60,                                           // colNo
    "mem_deriv_propag_low.mem_dn0.mem_dn0_dn0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo wr_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    91,                                           // lineNo
    132,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xr_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    91,                                                 // lineNo
    194,                                                // colNo
    "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_duzj0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo yr_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    91,                       // lineNo
    225,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtECInfo t_emlrtECI{
    3,             // nDims
    91,            // lineNo
    83,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtBCInfo as_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    91,                                           // lineNo
    62,                                           // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_duzj0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtECInfo u_emlrtECI{
    -1,            // nDims
    91,            // lineNo
    13,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtBCInfo bs_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    92,                                           // lineNo
    132,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cs_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    92,                                                 // lineNo
    194,                                                // colNo
    "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dm0j0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ds_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    92,                       // lineNo
    225,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo es_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    92,                                           // lineNo
    62,                                           // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dm0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo fs_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    93,                                           // lineNo
    132,                                          // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gs_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    93,                                                 // lineNo
    194,                                                // colNo
    "mem_deriv_propag_low.mem_dR0_ds.mem_dR0_dn0j0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo hs_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    93,                       // lineNo
    225,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo is_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    93,                                           // lineNo
    62,                                           // colNo
    "mem_deriv_propag_low.mem_dR0.mem_dR0_dn0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo js_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    94,                                           // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_dm0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ks_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    94,                                                 // lineNo
    192,                                                // colNo
    "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dm0j0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ls_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    94,                       // lineNo
    225,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ms_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    94,                                           // lineNo
    60,                                           // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_dm0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ns_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    95,                                           // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_dn0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo os_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    95,                                                 // lineNo
    192,                                                // colNo
    "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_dn0j0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ps_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    95,                       // lineNo
    225,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo qs_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    95,                                           // lineNo
    60,                                           // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_dn0j0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rs_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    96,                                           // lineNo
    130,                                          // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_duzj0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ss_emlrtBCI{
    -1,                                                 // iFirst
    -1,                                                 // iLast
    96,                                                 // lineNo
    192,                                                // colNo
    "mem_deriv_propag_low.mem_dP0_ds.mem_dP0_duzj0_ds", // aName
    "IVP_MaJ_Mem",                                      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ts_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    96,                       // lineNo
    225,                      // colNo
    "ctcr_construc.vect_res", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtECInfo v_emlrtECI{
    2,             // nDims
    96,            // lineNo
    83,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtBCInfo us_emlrtBCI{
    -1,                                           // iFirst
    -1,                                           // iLast
    96,                                           // lineNo
    60,                                           // colNo
    "mem_deriv_propag_low.mem_dP0.mem_dP0_duzj0", // aName
    "IVP_MaJ_Mem",                                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtECInfo w_emlrtECI{
    -1,            // nDims
    96,            // lineNo
    13,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtBCInfo vs_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    45,            // lineNo
    37,            // colNo
    "next_vectT",  // aName
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ws_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    56,                    // lineNo
    71,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "IVP_MaJ_Mem",         // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo xs_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    56,                    // lineNo
    73,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "IVP_MaJ_Mem",         // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ys_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    56,                      // lineNo
    105,                     // colNo
    "mem_bvp.mem_ys.mem_ts", // aName
    "IVP_MaJ_Mem",           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo at_emlrtBCI{
    -1,                      // iFirst
    -1,                      // iLast
    56,                      // lineNo
    107,                     // colNo
    "mem_bvp.mem_ys.mem_ts", // aName
    "IVP_MaJ_Mem",           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bt_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    56,            // lineNo
    120,           // colNo
    "vect_res",    // aName
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ct_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    56,                    // lineNo
    33,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "IVP_MaJ_Mem",         // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo dt_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    56,                    // lineNo
    35,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "IVP_MaJ_Mem",         // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo et_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    57,                     // lineNo
    72,                     // colNo
    "mem_bvp.mem_y.mem_uz", // aName
    "IVP_MaJ_Mem",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ft_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    57,                     // lineNo
    74,                     // colNo
    "mem_bvp.mem_y.mem_uz", // aName
    "IVP_MaJ_Mem",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo gt_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    57,                       // lineNo
    106,                      // colNo
    "mem_bvp.mem_ys.mem_uzs", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ht_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    57,                       // lineNo
    108,                      // colNo
    "mem_bvp.mem_ys.mem_uzs", // aName
    "IVP_MaJ_Mem",            // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo it_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    57,            // lineNo
    121,           // colNo
    "vect_res",    // aName
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo jt_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    57,                     // lineNo
    34,                     // colNo
    "mem_bvp.mem_y.mem_uz", // aName
    "IVP_MaJ_Mem",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtBCInfo kt_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    57,                     // lineNo
    36,                     // colNo
    "mem_bvp.mem_y.mem_uz", // aName
    "IVP_MaJ_Mem",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m", // pName
    0                       // checkKind
};

static emlrtRTEInfo gd_emlrtRTEI{
    41,            // lineNo
    32,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo hd_emlrtRTEI{
    41,            // lineNo
    57,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo id_emlrtRTEI{
    41,            // lineNo
    9,             // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo jd_emlrtRTEI{
    42,            // lineNo
    32,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo kd_emlrtRTEI{
    45,            // lineNo
    37,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo ld_emlrtRTEI{
    1,             // lineNo
    45,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo md_emlrtRTEI{
    60,            // lineNo
    132,           // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo nd_emlrtRTEI{
    60,            // lineNo
    71,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo od_emlrtRTEI{
    75,            // lineNo
    143,           // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo pd_emlrtRTEI{
    75,            // lineNo
    83,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo qd_emlrtRTEI{
    85,            // lineNo
    143,           // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo rd_emlrtRTEI{
    85,            // lineNo
    83,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo sd_emlrtRTEI{
    88,            // lineNo
    143,           // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo td_emlrtRTEI{
    88,            // lineNo
    83,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo ud_emlrtRTEI{
    91,            // lineNo
    139,           // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo vd_emlrtRTEI{
    91,            // lineNo
    83,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo wd_emlrtRTEI{
    96,            // lineNo
    139,           // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRTEInfo xd_emlrtRTEI{
    96,            // lineNo
    83,            // colNo
    "IVP_MaJ_Mem", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pName
};

static emlrtRSInfo nd_emlrtRSI{
    60,            // lineNo
    "IVP_MaJ_Mem", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pathName
};

static emlrtRSInfo od_emlrtRSI{
    75,            // lineNo
    "IVP_MaJ_Mem", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pathName
};

static emlrtRSInfo pd_emlrtRSI{
    96,            // lineNo
    "IVP_MaJ_Mem", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pathName
};

static emlrtRSInfo qd_emlrtRSI{
    91,            // lineNo
    "IVP_MaJ_Mem", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pathName
};

static emlrtRSInfo rd_emlrtRSI{
    88,            // lineNo
    "IVP_MaJ_Mem", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pathName
};

static emlrtRSInfo sd_emlrtRSI{
    85,            // lineNo
    "IVP_MaJ_Mem", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pathName
};

static emlrtRSInfo td_emlrtRSI{
    45,            // lineNo
    "IVP_MaJ_Mem", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/IVP_MaJ_Mem.m" // pathName
};

// Function Declarations
static void b_binary_expand_op(const emlrtStack &sp,
                               coder::array<real_T, 2U> &in1,
                               const MemDerivPropagLow *in2,
                               const coder::array<int32_T, 1U> &in3,
                               int32_T in4, real_T in5);

static void b_binary_expand_op(const emlrtStack &sp,
                               coder::array<real_T, 2U> &in1,
                               const MemDerivPropagLow *in2, real_T in3);

static void binary_expand_op(const emlrtStack &sp,
                             coder::array<real_T, 2U> &in1,
                             const MemDerivPropagLow *in2,
                             const coder::array<int32_T, 1U> &in3, int32_T in4,
                             real_T in5);

static void binary_expand_op(const emlrtStack &sp,
                             coder::array<real_T, 2U> &in1,
                             const MemDerivPropagLow *in2, real_T in3);

static void binary_expand_op(const emlrtStack &sp,
                             coder::array<real_T, 3U> &in1,
                             const MemDerivPropagLow *in2, real_T in3);

static void c_binary_expand_op(const emlrtStack &sp,
                               coder::array<real_T, 2U> &in1,
                               const MemDerivPropagLow *in2, real_T in3);

static void ne(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
               const coder::array<int32_T, 1U> &in2,
               const coder::array<int32_T, 1U> &in3);

// Function Definitions
static void b_binary_expand_op(const emlrtStack &sp,
                               coder::array<real_T, 2U> &in1,
                               const MemDerivPropagLow *in2,
                               const coder::array<int32_T, 1U> &in3,
                               int32_T in4, real_T in5)
{
  coder::array<real_T, 2U> b_in2;
  int32_T b_in3;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_in3 = in3[in4];
  if (in1.size(1) == 1) {
    i = in2->mem_duzi.mem_duzi_duzj0.size(1);
  } else {
    i = in1.size(1);
  }
  b_in2.set_size(&pd_emlrtRTEI, &sp, 1, i);
  stride_0_1 = (in2->mem_duzi.mem_duzi_duzj0.size(1) != 1);
  stride_1_1 = (in1.size(1) != 1);
  if (in1.size(1) == 1) {
    loop_ub = in2->mem_duzi.mem_duzi_duzj0.size(1);
  } else {
    loop_ub = in1.size(1);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2[i] =
        in2->mem_duzi
            .mem_duzi_duzj0[((b_in3 + in2->mem_duzi.mem_duzi_duzj0.size(0) *
                                          (i * stride_0_1)) +
                             in2->mem_duzi.mem_duzi_duzj0.size(0) *
                                 in2->mem_duzi.mem_duzi_duzj0.size(1) *
                                 (static_cast<int32_T>(in5) - 1)) -
                            1] +
        in1[i * stride_1_1];
  }
  in1.set_size(&pd_emlrtRTEI, &sp, 1, b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void b_binary_expand_op(const emlrtStack &sp,
                               coder::array<real_T, 2U> &in1,
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
    i = in2->mem_dn0.mem_dn0_duzj0.size(1);
  } else {
    i = in1.size(1);
  }
  b_in2.set_size(&td_emlrtRTEI, &sp, 3, i);
  stride_0_1 = (in2->mem_dn0.mem_dn0_duzj0.size(1) != 1);
  stride_1_1 = (in1.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in1.size(1) == 1) {
    loop_ub = in2->mem_dn0.mem_dn0_duzj0.size(1);
  } else {
    loop_ub = in1.size(1);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2[3 * i] =
        in2->mem_dn0.mem_dn0_duzj0[3 * aux_0_1 +
                                   3 * in2->mem_dn0.mem_dn0_duzj0.size(1) *
                                       (static_cast<int32_T>(in3) - 1)] +
        in1[3 * aux_1_1];
    b_in2[3 * i + 1] =
        in2->mem_dn0.mem_dn0_duzj0[(3 * aux_0_1 +
                                    3 * in2->mem_dn0.mem_dn0_duzj0.size(1) *
                                        (static_cast<int32_T>(in3) - 1)) +
                                   1] +
        in1[3 * aux_1_1 + 1];
    b_in2[3 * i + 2] =
        in2->mem_dn0.mem_dn0_duzj0[(3 * aux_0_1 +
                                    3 * in2->mem_dn0.mem_dn0_duzj0.size(1) *
                                        (static_cast<int32_T>(in3) - 1)) +
                                   2] +
        in1[3 * aux_1_1 + 2];
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  in1.set_size(&td_emlrtRTEI, &sp, 3, b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[3 * i] = b_in2[3 * i];
    in1[3 * i + 1] = b_in2[3 * i + 1];
    in1[3 * i + 2] = b_in2[3 * i + 2];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op(const emlrtStack &sp,
                             coder::array<real_T, 2U> &in1,
                             const MemDerivPropagLow *in2,
                             const coder::array<int32_T, 1U> &in3, int32_T in4,
                             real_T in5)
{
  coder::array<real_T, 2U> b_in2;
  int32_T b_in3;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_in3 = in3[in4];
  if (in1.size(1) == 1) {
    i = in2->mem_dti.mem_dti_duzj0.size(1);
  } else {
    i = in1.size(1);
  }
  b_in2.set_size(&nd_emlrtRTEI, &sp, 1, i);
  stride_0_1 = (in2->mem_dti.mem_dti_duzj0.size(1) != 1);
  stride_1_1 = (in1.size(1) != 1);
  if (in1.size(1) == 1) {
    loop_ub = in2->mem_dti.mem_dti_duzj0.size(1);
  } else {
    loop_ub = in1.size(1);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2[i] = in2->mem_dti
                   .mem_dti_duzj0[((b_in3 + in2->mem_dti.mem_dti_duzj0.size(0) *
                                                (i * stride_0_1)) +
                                   in2->mem_dti.mem_dti_duzj0.size(0) *
                                       in2->mem_dti.mem_dti_duzj0.size(1) *
                                       (static_cast<int32_T>(in5) - 1)) -
                                  1] +
               in1[i * stride_1_1];
  }
  in1.set_size(&nd_emlrtRTEI, &sp, 1, b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op(const emlrtStack &sp,
                             coder::array<real_T, 2U> &in1,
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
    i = in2->mem_dP0.mem_dP0_duzj0.size(1);
  } else {
    i = in1.size(1);
  }
  b_in2.set_size(&xd_emlrtRTEI, &sp, 3, i);
  stride_0_1 = (in2->mem_dP0.mem_dP0_duzj0.size(1) != 1);
  stride_1_1 = (in1.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in1.size(1) == 1) {
    loop_ub = in2->mem_dP0.mem_dP0_duzj0.size(1);
  } else {
    loop_ub = in1.size(1);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2[3 * i] =
        in2->mem_dP0.mem_dP0_duzj0[3 * aux_0_1 +
                                   3 * in2->mem_dP0.mem_dP0_duzj0.size(1) *
                                       (static_cast<int32_T>(in3) - 1)] +
        in1[3 * aux_1_1];
    b_in2[3 * i + 1] =
        in2->mem_dP0.mem_dP0_duzj0[(3 * aux_0_1 +
                                    3 * in2->mem_dP0.mem_dP0_duzj0.size(1) *
                                        (static_cast<int32_T>(in3) - 1)) +
                                   1] +
        in1[3 * aux_1_1 + 1];
    b_in2[3 * i + 2] =
        in2->mem_dP0.mem_dP0_duzj0[(3 * aux_0_1 +
                                    3 * in2->mem_dP0.mem_dP0_duzj0.size(1) *
                                        (static_cast<int32_T>(in3) - 1)) +
                                   2] +
        in1[3 * aux_1_1 + 2];
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  in1.set_size(&xd_emlrtRTEI, &sp, 3, b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[3 * i] = b_in2[3 * i];
    in1[3 * i + 1] = b_in2[3 * i + 1];
    in1[3 * i + 2] = b_in2[3 * i + 2];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op(const emlrtStack &sp,
                             coder::array<real_T, 3U> &in1,
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
    i = in2->mem_dR0.mem_dR0_duzj0.size(2);
  } else {
    i = in1.size(2);
  }
  b_in2.set_size(&vd_emlrtRTEI, &sp, 3, 3, i);
  stride_0_2 = (in2->mem_dR0.mem_dR0_duzj0.size(2) != 1);
  stride_1_2 = (in1.size(2) != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  if (in1.size(2) == 1) {
    loop_ub = in2->mem_dR0.mem_dR0_duzj0.size(2);
  } else {
    loop_ub = in1.size(2);
  }
  for (i = 0; i < loop_ub; i++) {
    for (int32_T i1{0}; i1 < 3; i1++) {
      b_in2[3 * i1 + 9 * i] =
          in2->mem_dR0.mem_dR0_duzj0[(3 * i1 + 9 * aux_0_2) +
                                     9 * in2->mem_dR0.mem_dR0_duzj0.size(2) *
                                         (static_cast<int32_T>(in3) - 1)] +
          in1[3 * i1 + 9 * aux_1_2];
      b_in2[(3 * i1 + 9 * i) + 1] =
          in2->mem_dR0.mem_dR0_duzj0[((3 * i1 + 9 * aux_0_2) +
                                      9 * in2->mem_dR0.mem_dR0_duzj0.size(2) *
                                          (static_cast<int32_T>(in3) - 1)) +
                                     1] +
          in1[(3 * i1 + 9 * aux_1_2) + 1];
      b_in2[(3 * i1 + 9 * i) + 2] =
          in2->mem_dR0.mem_dR0_duzj0[((3 * i1 + 9 * aux_0_2) +
                                      9 * in2->mem_dR0.mem_dR0_duzj0.size(2) *
                                          (static_cast<int32_T>(in3) - 1)) +
                                     2] +
          in1[(3 * i1 + 9 * aux_1_2) + 2];
    }
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  in1.set_size(&vd_emlrtRTEI, &sp, 3, 3, b_in2.size(2));
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

static void c_binary_expand_op(const emlrtStack &sp,
                               coder::array<real_T, 2U> &in1,
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
    i = in2->mem_dm0.mem_dm0_duzj0.size(1);
  } else {
    i = in1.size(1);
  }
  b_in2.set_size(&rd_emlrtRTEI, &sp, 3, i);
  stride_0_1 = (in2->mem_dm0.mem_dm0_duzj0.size(1) != 1);
  stride_1_1 = (in1.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in1.size(1) == 1) {
    loop_ub = in2->mem_dm0.mem_dm0_duzj0.size(1);
  } else {
    loop_ub = in1.size(1);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2[3 * i] =
        in2->mem_dm0.mem_dm0_duzj0[3 * aux_0_1 +
                                   3 * in2->mem_dm0.mem_dm0_duzj0.size(1) *
                                       (static_cast<int32_T>(in3) - 1)] +
        in1[3 * aux_1_1];
    b_in2[3 * i + 1] =
        in2->mem_dm0.mem_dm0_duzj0[(3 * aux_0_1 +
                                    3 * in2->mem_dm0.mem_dm0_duzj0.size(1) *
                                        (static_cast<int32_T>(in3) - 1)) +
                                   1] +
        in1[3 * aux_1_1 + 1];
    b_in2[3 * i + 2] =
        in2->mem_dm0.mem_dm0_duzj0[(3 * aux_0_1 +
                                    3 * in2->mem_dm0.mem_dm0_duzj0.size(1) *
                                        (static_cast<int32_T>(in3) - 1)) +
                                   2] +
        in1[3 * aux_1_1 + 2];
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  in1.set_size(&rd_emlrtRTEI, &sp, 3, b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    in1[3 * i] = b_in2[3 * i];
    in1[3 * i + 1] = b_in2[3 * i + 1];
    in1[3 * i + 2] = b_in2[3 * i + 2];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void ne(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
               const coder::array<int32_T, 1U> &in2,
               const coder::array<int32_T, 1U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&kd_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] != in3[i * stride_1_0]);
  }
}

void IVP_MaJ_Mem(const emlrtStack &sp, real_T is, MemBVP *mem_bvp,
                 const CTCRConstruc *ctcr_construc,
                 MemDerivPropagLow *mem_deriv_propag_low)
{
  coder::array<real_T, 3U> r4;
  coder::array<real_T, 2U> r2;
  coder::array<real_T, 2U> r3;
  coder::array<int32_T, 1U> ii;
  coder::array<int32_T, 1U> next_vectT;
  coder::array<boolean_T, 1U> b_is;
  coder::array<boolean_T, 1U> r;
  coder::array<boolean_T, 1U> r1;
  emlrtStack b_st;
  emlrtStack st;
  real_T b_ctcr_construc;
  real_T c_ctcr_construc;
  int32_T iv1[3];
  int32_T b_iv[2];
  int32_T c_is;
  int32_T d_is;
  int32_T e_is;
  int32_T f_is;
  int32_T g_is;
  int32_T h_is;
  int32_T i_is;
  int32_T j_is;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  //  ======================================================================= %
  //
  //  This function integrates the state vector ODE and the Low-Level
  //  derivatives involved in the optimization Jacobian computation using a
  //  manual first order linearization
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  is                    : (int ∊ [1 , nbP]) Index of the current curvilinear
  //  abscissa mem_bvp               : (class)           Memory of the BVP
  //  variables ctcr_construc         : (class)           Robot features related
  //  to the model settings mem_deriv_propag_low  : (class)           Memory of
  //  the low-level derivatives
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  mem_bvp               : (class)           Memory of the BVP variables
  //  mem_deriv_propag_low  : (class)           Memory of the low-level
  //  derivatives
  //
  //  ======================================================================= %
  //  ========================================================== %
  //  ================== Getting input values ================== %
  //  ========================================================== %
  if (!(is == ctcr_construc->nbP)) {
    real_T ctcr_construc_tmp;
    int32_T b_i;
    int32_T loop_ub;
    int32_T partialTrueCount;
    int32_T trueCount;
    b_is.set_size(&gd_emlrtRTEI, &sp, ctcr_construc->vect_ind_iT.size(0));
    loop_ub = ctcr_construc->vect_ind_iT.size(0);
    r.set_size(&hd_emlrtRTEI, &sp, ctcr_construc->vect_ind_iT.size(0));
    for (partialTrueCount = 0; partialTrueCount < loop_ub; partialTrueCount++) {
      b_is[partialTrueCount] =
          (ctcr_construc->vect_ind_iT[partialTrueCount] <= is + 1.0);
      r[partialTrueCount] =
          (is + 1.0 <=
           ctcr_construc->vect_ind_iT[partialTrueCount +
                                      ctcr_construc->vect_ind_iT.size(0) * 2]);
    }
    if (b_is.size(0) != r.size(0)) {
      emlrtSizeEqCheck1DR2012b(b_is.size(0), r.size(0), &j_emlrtECI,
                               (emlrtConstCTX)&sp);
    }
    st.site = &qb_emlrtRSI;
    loop_ub = b_is.size(0);
    for (partialTrueCount = 0; partialTrueCount < loop_ub; partialTrueCount++) {
      b_is[partialTrueCount] = (b_is[partialTrueCount] && r[partialTrueCount]);
    }
    b_st.site = &jb_emlrtRSI;
    coder::eml_find(b_st, b_is, ii);
    next_vectT.set_size(&id_emlrtRTEI, &st, ii.size(0));
    loop_ub = ii.size(0);
    for (partialTrueCount = 0; partialTrueCount < loop_ub; partialTrueCount++) {
      next_vectT[partialTrueCount] = ii[partialTrueCount];
    }
    st.site = &rb_emlrtRSI;
    b_is.set_size(&jd_emlrtRTEI, &st, ctcr_construc->vect_ind_iT.size(0));
    loop_ub = ctcr_construc->vect_ind_iT.size(0);
    for (partialTrueCount = 0; partialTrueCount < loop_ub; partialTrueCount++) {
      b_is[partialTrueCount] =
          (is + 1.0 == ctcr_construc->vect_ind_iT[partialTrueCount]);
    }
    b_st.site = &jb_emlrtRSI;
    coder::eml_find(b_st, b_is, ii);
    if (ii.size(0) != 0) {
      if ((next_vectT.size(0) != ii.size(0)) &&
          ((next_vectT.size(0) != 1) && (ii.size(0) != 1))) {
        emlrtDimSizeImpxCheckR2021b(next_vectT.size(0), ii.size(0), &k_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      if (next_vectT.size(0) == ii.size(0)) {
        r1.set_size(&kd_emlrtRTEI, &sp, next_vectT.size(0));
        loop_ub = next_vectT.size(0);
        for (partialTrueCount = 0; partialTrueCount < loop_ub;
             partialTrueCount++) {
          r1[partialTrueCount] =
              (next_vectT[partialTrueCount] != ii[partialTrueCount]);
        }
      } else {
        st.site = &td_emlrtRSI;
        ne(st, r1, next_vectT, ii);
      }
      loop_ub = r1.size(0) - 1;
      trueCount = 0;
      for (int32_T i{0}; i <= loop_ub; i++) {
        if (r1[i]) {
          trueCount++;
        }
      }
      partialTrueCount = 0;
      for (int32_T i{0}; i <= loop_ub; i++) {
        if (r1[i]) {
          if (i > next_vectT.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(i, 0, next_vectT.size(0) - 1,
                                          &vs_emlrtBCI, (emlrtConstCTX)&sp);
          }
          next_vectT[partialTrueCount] = next_vectT[i];
          partialTrueCount++;
        }
      }
      next_vectT.set_size(&ld_emlrtRTEI, &sp, trueCount);
    }
    partialTrueCount = mem_bvp->mem_ys.mem_R0s.size(2);
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > partialTrueCount)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    partialTrueCount, &so_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    ctcr_construc->vect_res.size(1),
                                    &to_emlrtBCI, (emlrtConstCTX)&sp);
    }
    partialTrueCount = mem_bvp->mem_y.mem_R0.size(2);
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > partialTrueCount)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    partialTrueCount, &ro_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    ctcr_construc_tmp = ctcr_construc->vect_res[static_cast<int32_T>(is) - 1];
    partialTrueCount = mem_bvp->mem_y.mem_R0.size(2);
    if ((static_cast<int32_T>(is + 1.0) < 1) ||
        (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                    partialTrueCount, &uo_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    for (partialTrueCount = 0; partialTrueCount < 3; partialTrueCount++) {
      mem_bvp->mem_y.mem_R0[3 * partialTrueCount +
                            9 * (static_cast<int32_T>(is + 1.0) - 1)] =
          mem_bvp->mem_y.mem_R0[3 * partialTrueCount +
                                9 * (static_cast<int32_T>(is) - 1)] +
          mem_bvp->mem_ys.mem_R0s[3 * partialTrueCount +
                                  9 * (static_cast<int32_T>(is) - 1)] *
              ctcr_construc_tmp;
      mem_bvp->mem_y.mem_R0[(3 * partialTrueCount +
                             9 * (static_cast<int32_T>(is + 1.0) - 1)) +
                            1] =
          mem_bvp->mem_y.mem_R0[(3 * partialTrueCount +
                                 9 * (static_cast<int32_T>(is) - 1)) +
                                1] +
          mem_bvp->mem_ys.mem_R0s[(3 * partialTrueCount +
                                   9 * (static_cast<int32_T>(is) - 1)) +
                                  1] *
              ctcr_construc_tmp;
      mem_bvp->mem_y.mem_R0[(3 * partialTrueCount +
                             9 * (static_cast<int32_T>(is + 1.0) - 1)) +
                            2] =
          mem_bvp->mem_y.mem_R0[(3 * partialTrueCount +
                                 9 * (static_cast<int32_T>(is) - 1)) +
                                2] +
          mem_bvp->mem_ys.mem_R0s[(3 * partialTrueCount +
                                   9 * (static_cast<int32_T>(is) - 1)) +
                                  2] *
              ctcr_construc_tmp;
    }
    partialTrueCount = mem_bvp->mem_ys.mem_p0s.size(1);
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > partialTrueCount)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    partialTrueCount, &wo_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    ctcr_construc->vect_res.size(1),
                                    &xo_emlrtBCI, (emlrtConstCTX)&sp);
    }
    partialTrueCount = mem_bvp->mem_y.mem_p0.size(1);
    if ((static_cast<int32_T>(is) < 1) ||
        (static_cast<int32_T>(is) > partialTrueCount)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                    partialTrueCount, &vo_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    partialTrueCount = mem_bvp->mem_y.mem_p0.size(1);
    if ((static_cast<int32_T>(is + 1.0) < 1) ||
        (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                    partialTrueCount, &yo_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    mem_bvp->mem_y.mem_p0[3 * (static_cast<int32_T>(is + 1.0) - 1)] =
        mem_bvp->mem_y.mem_p0[3 * (static_cast<int32_T>(is) - 1)] +
        mem_bvp->mem_ys.mem_p0s[3 * (static_cast<int32_T>(is) - 1)] *
            ctcr_construc_tmp;
    mem_bvp->mem_y.mem_p0[3 * (static_cast<int32_T>(is + 1.0) - 1) + 1] =
        mem_bvp->mem_y.mem_p0[3 * (static_cast<int32_T>(is) - 1) + 1] +
        mem_bvp->mem_ys.mem_p0s[3 * (static_cast<int32_T>(is) - 1) + 1] *
            ctcr_construc_tmp;
    mem_bvp->mem_y.mem_p0[3 * (static_cast<int32_T>(is + 1.0) - 1) + 2] =
        mem_bvp->mem_y.mem_p0[3 * (static_cast<int32_T>(is) - 1) + 2] +
        mem_bvp->mem_ys.mem_p0s[3 * (static_cast<int32_T>(is) - 1) + 2] *
            ctcr_construc_tmp;
    partialTrueCount = next_vectT.size(0);
    if (next_vectT.size(0) - 1 >= 0) {
      c_is = static_cast<int32_T>(is);
      b_ctcr_construc = ctcr_construc_tmp;
      b_iv[0] = 1;
      d_is = static_cast<int32_T>(is + 1.0);
    }
    for (int32_T i{0}; i < partialTrueCount; i++) {
      if (i + 1 > next_vectT.size(0)) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, next_vectT.size(0),
                                      &ap_emlrtBCI, (emlrtConstCTX)&sp);
      }
      b_i = mem_bvp->mem_y.mem_t.size(0);
      if ((next_vectT[i] < 1) || (next_vectT[i] > b_i)) {
        emlrtDynamicBoundsCheckR2012b(next_vectT[i], 1, b_i, &ws_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      b_i = mem_bvp->mem_y.mem_t.size(1);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > b_i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                      &xs_emlrtBCI, (emlrtConstCTX)&sp);
      }
      b_i = mem_bvp->mem_ys.mem_ts.size(0);
      if ((next_vectT[i] < 1) || (next_vectT[i] > b_i)) {
        emlrtDynamicBoundsCheckR2012b(next_vectT[i], 1, b_i, &ys_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      b_i = mem_bvp->mem_ys.mem_ts.size(1);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > b_i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                      &at_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &bt_emlrtBCI, (emlrtConstCTX)&sp);
      }
      b_i = mem_bvp->mem_y.mem_t.size(0);
      if ((next_vectT[i] < 1) || (next_vectT[i] > b_i)) {
        emlrtDynamicBoundsCheckR2012b(next_vectT[i], 1, b_i, &ct_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      b_i = mem_bvp->mem_y.mem_t.size(1);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > b_i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, b_i,
                                      &dt_emlrtBCI, (emlrtConstCTX)&sp);
      }
      mem_bvp->mem_y
          .mem_t[(next_vectT[i] + mem_bvp->mem_y.mem_t.size(0) *
                                      (static_cast<int32_T>(is + 1.0) - 1)) -
                 1] =
          mem_bvp->mem_y
              .mem_t[(next_vectT[i] + mem_bvp->mem_y.mem_t.size(0) *
                                          (static_cast<int32_T>(is) - 1)) -
                     1] +
          mem_bvp->mem_ys
                  .mem_ts[(next_vectT[i] + mem_bvp->mem_ys.mem_ts.size(0) *
                                               (static_cast<int32_T>(is) - 1)) -
                          1] *
              ctcr_construc_tmp;
      b_i = mem_bvp->mem_y.mem_uz.size(0);
      if ((next_vectT[i] < 1) || (next_vectT[i] > b_i)) {
        emlrtDynamicBoundsCheckR2012b(next_vectT[i], 1, b_i, &et_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      b_i = mem_bvp->mem_y.mem_uz.size(1);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > b_i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                      &ft_emlrtBCI, (emlrtConstCTX)&sp);
      }
      b_i = mem_bvp->mem_ys.mem_uzs.size(0);
      if ((next_vectT[i] < 1) || (next_vectT[i] > b_i)) {
        emlrtDynamicBoundsCheckR2012b(next_vectT[i], 1, b_i, &gt_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      b_i = mem_bvp->mem_ys.mem_uzs.size(1);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > b_i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                      &ht_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &it_emlrtBCI, (emlrtConstCTX)&sp);
      }
      b_i = mem_bvp->mem_y.mem_uz.size(0);
      if ((next_vectT[i] < 1) || (next_vectT[i] > b_i)) {
        emlrtDynamicBoundsCheckR2012b(next_vectT[i], 1, b_i, &jt_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      b_i = mem_bvp->mem_y.mem_uz.size(1);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > b_i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, b_i,
                                      &kt_emlrtBCI, (emlrtConstCTX)&sp);
      }
      mem_bvp->mem_y
          .mem_uz[(next_vectT[i] + mem_bvp->mem_y.mem_uz.size(0) *
                                       (static_cast<int32_T>(is + 1.0) - 1)) -
                  1] =
          mem_bvp->mem_y
              .mem_uz[(next_vectT[i] + mem_bvp->mem_y.mem_uz.size(0) *
                                           (static_cast<int32_T>(is) - 1)) -
                      1] +
          mem_bvp->mem_ys.mem_uzs[(next_vectT[i] +
                                   mem_bvp->mem_ys.mem_uzs.size(0) *
                                       (static_cast<int32_T>(is) - 1)) -
                                  1] *
              ctcr_construc_tmp;
      b_i = mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0);
      trueCount = next_vectT[i];
      if ((trueCount < 1) || (trueCount > b_i)) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, b_i, &bp_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      b_i = mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > b_i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                      &cp_emlrtBCI, (emlrtConstCTX)&sp);
      }
      b_i = mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(0);
      trueCount = next_vectT[i];
      if ((trueCount < 1) || (trueCount > b_i)) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, b_i, &dp_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      b_i = mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) || (static_cast<int32_T>(is) > b_i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                      &ep_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &fp_emlrtBCI, (emlrtConstCTX)&sp);
      }
      loop_ub = mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(1);
      r3.set_size(&md_emlrtRTEI, &sp, 1, loop_ub);
      for (b_i = 0; b_i < loop_ub; b_i++) {
        r3[b_i] =
            mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds
                [((next_vectT[i] +
                   mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(0) *
                       b_i) +
                  mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(0) *
                      mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(
                          1) *
                      (c_is - 1)) -
                 1] *
            b_ctcr_construc;
      }
      loop_ub = mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1);
      if ((loop_ub != r3.size(1)) && ((loop_ub != 1) && (r3.size(1) != 1))) {
        emlrtDimSizeImpxCheckR2021b(loop_ub, r3.size(1), &l_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      b_i = mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0);
      trueCount = next_vectT[i];
      if ((trueCount < 1) || (trueCount > b_i)) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, b_i, &gp_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      b_i = mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > b_i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, b_i,
                                      &hp_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if (loop_ub == r3.size(1)) {
        r3.set_size(&nd_emlrtRTEI, &sp, 1, loop_ub);
        for (b_i = 0; b_i < loop_ub; b_i++) {
          r3[b_i] =
              mem_deriv_propag_low->mem_dti.mem_dti_duzj0
                  [((next_vectT[i] +
                     mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0) *
                         b_i) +
                    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0) *
                        mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1) *
                        (static_cast<int32_T>(is) - 1)) -
                   1] +
              r3[b_i];
        }
      } else {
        st.site = &nd_emlrtRSI;
        binary_expand_op(st, r3, mem_deriv_propag_low, next_vectT, i, is);
      }
      b_iv[1] = mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1);
      emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, r3.size(), 2, &m_emlrtECI,
                                    (emlrtCTX)&sp);
      loop_ub = r3.size(1);
      for (b_i = 0; b_i < loop_ub; b_i++) {
        mem_deriv_propag_low->mem_dti.mem_dti_duzj0
            [((next_vectT[i] +
               mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0) * b_i) +
              mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0) *
                  mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1) *
                  (d_is - 1)) -
             1] = r3[b_i];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
    if (is >= ctcr_construc->ind_origin) {
      partialTrueCount = mem_bvp->mem_ys.mem_m0s.size(1);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &jp_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &kp_emlrtBCI, (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_bvp->mem_y.mem_m0.size(1);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &ip_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_bvp->mem_y.mem_m0.size(1);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                      partialTrueCount, &lp_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      mem_bvp->mem_y.mem_m0[3 * (static_cast<int32_T>(is + 1.0) - 1)] =
          mem_bvp->mem_y.mem_m0[3 * (static_cast<int32_T>(is) - 1)] +
          mem_bvp->mem_ys.mem_m0s[3 * (static_cast<int32_T>(is) - 1)] *
              ctcr_construc_tmp;
      mem_bvp->mem_y.mem_m0[3 * (static_cast<int32_T>(is + 1.0) - 1) + 1] =
          mem_bvp->mem_y.mem_m0[3 * (static_cast<int32_T>(is) - 1) + 1] +
          mem_bvp->mem_ys.mem_m0s[3 * (static_cast<int32_T>(is) - 1) + 1] *
              ctcr_construc_tmp;
      mem_bvp->mem_y.mem_m0[3 * (static_cast<int32_T>(is + 1.0) - 1) + 2] =
          mem_bvp->mem_y.mem_m0[3 * (static_cast<int32_T>(is) - 1) + 2] +
          mem_bvp->mem_ys.mem_m0s[3 * (static_cast<int32_T>(is) - 1) + 2] *
              ctcr_construc_tmp;
      partialTrueCount = mem_bvp->mem_ys.mem_n0s.size(1);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &np_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &op_emlrtBCI, (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_bvp->mem_y.mem_n0.size(1);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &mp_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_bvp->mem_y.mem_n0.size(1);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                      partialTrueCount, &pp_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(is + 1.0) - 1)] =
          mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(is) - 1)] +
          mem_bvp->mem_ys.mem_n0s[3 * (static_cast<int32_T>(is) - 1)] *
              ctcr_construc_tmp;
      mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(is + 1.0) - 1) + 1] =
          mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(is) - 1) + 1] +
          mem_bvp->mem_ys.mem_n0s[3 * (static_cast<int32_T>(is) - 1) + 1] *
              ctcr_construc_tmp;
      mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(is + 1.0) - 1) + 2] =
          mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(is) - 1) + 2] +
          mem_bvp->mem_ys.mem_n0s[3 * (static_cast<int32_T>(is) - 1) + 2] *
              ctcr_construc_tmp;
      partialTrueCount = next_vectT.size(0);
      if (next_vectT.size(0) - 1 >= 0) {
        e_is = static_cast<int32_T>(is);
        c_ctcr_construc = ctcr_construc_tmp;
        b_iv[0] = 1;
        f_is = static_cast<int32_T>(is + 1.0);
        g_is = static_cast<int32_T>(is);
        h_is = static_cast<int32_T>(is);
        i_is = static_cast<int32_T>(is);
        j_is = static_cast<int32_T>(is);
      }
      for (int32_T i{0}; i < partialTrueCount; i++) {
        real_T mem_deriv_propag_low_idx_2;
        boolean_T b;
        if (i + 1 > next_vectT.size(0)) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, next_vectT.size(0),
                                        &qp_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0);
        trueCount = next_vectT[i];
        if ((trueCount < 1) || (trueCount > b_i)) {
          emlrtDynamicBoundsCheckR2012b(trueCount, 1, b_i, &rp_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(2);
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > b_i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                        &sp_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(0);
        trueCount = next_vectT[i];
        if ((trueCount < 1) || (trueCount > b_i)) {
          emlrtDynamicBoundsCheckR2012b(trueCount, 1, b_i, &tp_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(2);
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > b_i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                        &up_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                        ctcr_construc->vect_res.size(1),
                                        &vp_emlrtBCI, (emlrtConstCTX)&sp);
        }
        loop_ub = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(1);
        r3.set_size(&od_emlrtRTEI, &sp, 1, loop_ub);
        for (b_i = 0; b_i < loop_ub; b_i++) {
          r3[b_i] =
              mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds
                  [((next_vectT[i] + mem_deriv_propag_low->mem_duzi_ds
                                             .mem_duzi_duzj0_ds.size(0) *
                                         b_i) +
                    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(
                        0) *
                        mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds
                            .size(1) *
                        (e_is - 1)) -
                   1] *
              c_ctcr_construc;
        }
        loop_ub = mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(1);
        if ((loop_ub != r3.size(1)) && ((loop_ub != 1) && (r3.size(1) != 1))) {
          emlrtDimSizeImpxCheckR2021b(loop_ub, r3.size(1), &n_emlrtECI,
                                      (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0);
        trueCount = next_vectT[i];
        if ((trueCount < 1) || (trueCount > b_i)) {
          emlrtDynamicBoundsCheckR2012b(trueCount, 1, b_i, &wp_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(2);
        if ((static_cast<int32_T>(is + 1.0) < 1) ||
            (static_cast<int32_T>(is + 1.0) > b_i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, b_i,
                                        &xp_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if (loop_ub == r3.size(1)) {
          r3.set_size(&pd_emlrtRTEI, &sp, 1, loop_ub);
          for (b_i = 0; b_i < loop_ub; b_i++) {
            r3[b_i] =
                mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0
                    [((next_vectT[i] +
                       mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0) *
                           b_i) +
                      mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0) *
                          mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(
                              1) *
                          (static_cast<int32_T>(is) - 1)) -
                     1] +
                r3[b_i];
          }
        } else {
          st.site = &od_emlrtRSI;
          b_binary_expand_op(st, r3, mem_deriv_propag_low, next_vectT, i, is);
        }
        b_iv[1] = mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(1);
        emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, r3.size(), 2, &o_emlrtECI,
                                      (emlrtCTX)&sp);
        loop_ub = r3.size(1);
        for (b_i = 0; b_i < loop_ub; b_i++) {
          mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0
              [((next_vectT[i] +
                 mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0) * b_i) +
                mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(0) *
                    mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.size(1) *
                    (f_is - 1)) -
               1] = r3[b_i];
        }
        b_i = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds.size(0);
        trueCount = next_vectT[i];
        if ((trueCount < 1) || (trueCount > b_i)) {
          emlrtDynamicBoundsCheckR2012b(trueCount, 1, b_i, &bq_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds.size(2);
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > b_i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                        &cq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                        ctcr_construc->vect_res.size(1),
                                        &dq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0);
        b = ((next_vectT[i] < 1) || (next_vectT[i] > b_i));
        if (b) {
          emlrtDynamicBoundsCheckR2012b(next_vectT[i], 1, b_i, &yp_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(2);
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > b_i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                        &aq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(is + 1.0) < 1) ||
            (static_cast<int32_T>(is + 1.0) > b_i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, b_i,
                                        &eq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_ctcr_construc =
            mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0
                [((next_vectT[i] +
                   mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0)) +
                  mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0) * 3 *
                      (static_cast<int32_T>(is) - 1)) -
                 1] +
            mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds
                    [((next_vectT[i] + mem_deriv_propag_low->mem_duzi_ds
                                           .mem_duzi_dm0j0_ds.size(0)) +
                      mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds.size(
                          0) *
                          3 * (g_is - 1)) -
                     1] *
                c_ctcr_construc;
        mem_deriv_propag_low_idx_2 =
            mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0
                [((next_vectT[i] +
                   mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0) * 2) +
                  mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0) * 3 *
                      (static_cast<int32_T>(is) - 1)) -
                 1] +
            mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds
                    [((next_vectT[i] + mem_deriv_propag_low->mem_duzi_ds
                                               .mem_duzi_dm0j0_ds.size(0) *
                                           2) +
                      mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds.size(
                          0) *
                          3 * (g_is - 1)) -
                     1] *
                c_ctcr_construc;
        mem_deriv_propag_low->mem_duzi
            .mem_duzi_dm0j0[(next_vectT[i] +
                             mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(
                                 0) *
                                 3 * (static_cast<int32_T>(is + 1.0) - 1)) -
                            1] =
            mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0
                [(next_vectT[i] +
                  mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0) * 3 *
                      (static_cast<int32_T>(is) - 1)) -
                 1] +
            mem_deriv_propag_low->mem_duzi_ds
                    .mem_duzi_dm0j0_ds[(next_vectT[i] +
                                        mem_deriv_propag_low->mem_duzi_ds
                                                .mem_duzi_dm0j0_ds.size(0) *
                                            3 * (g_is - 1)) -
                                       1] *
                c_ctcr_construc;
        mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0
            [((next_vectT[i] +
               mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0)) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0) * 3 *
                  (static_cast<int32_T>(is + 1.0) - 1)) -
             1] = b_ctcr_construc;
        mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0
            [((next_vectT[i] +
               mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0) * 2) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0) * 3 *
                  (static_cast<int32_T>(is + 1.0) - 1)) -
             1] = mem_deriv_propag_low_idx_2;
        b_i = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds.size(0);
        trueCount = next_vectT[i];
        if ((trueCount < 1) || (trueCount > b_i)) {
          emlrtDynamicBoundsCheckR2012b(trueCount, 1, b_i, &hq_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds.size(2);
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > b_i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                        &iq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                        ctcr_construc->vect_res.size(1),
                                        &jq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0);
        b = ((next_vectT[i] < 1) || (next_vectT[i] > b_i));
        if (b) {
          emlrtDynamicBoundsCheckR2012b(next_vectT[i], 1, b_i, &fq_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(2);
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > b_i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                        &gq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(is + 1.0) < 1) ||
            (static_cast<int32_T>(is + 1.0) > b_i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, b_i,
                                        &kq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_ctcr_construc =
            mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0
                [((next_vectT[i] +
                   mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0)) +
                  mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0) * 3 *
                      (static_cast<int32_T>(is) - 1)) -
                 1] +
            mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds
                    [((next_vectT[i] + mem_deriv_propag_low->mem_duzi_ds
                                           .mem_duzi_dn0j0_ds.size(0)) +
                      mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds.size(
                          0) *
                          3 * (h_is - 1)) -
                     1] *
                c_ctcr_construc;
        mem_deriv_propag_low_idx_2 =
            mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0
                [((next_vectT[i] +
                   mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0) * 2) +
                  mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0) * 3 *
                      (static_cast<int32_T>(is) - 1)) -
                 1] +
            mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds
                    [((next_vectT[i] + mem_deriv_propag_low->mem_duzi_ds
                                               .mem_duzi_dn0j0_ds.size(0) *
                                           2) +
                      mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds.size(
                          0) *
                          3 * (h_is - 1)) -
                     1] *
                c_ctcr_construc;
        mem_deriv_propag_low->mem_duzi
            .mem_duzi_dn0j0[(next_vectT[i] +
                             mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(
                                 0) *
                                 3 * (static_cast<int32_T>(is + 1.0) - 1)) -
                            1] =
            mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0
                [(next_vectT[i] +
                  mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0) * 3 *
                      (static_cast<int32_T>(is) - 1)) -
                 1] +
            mem_deriv_propag_low->mem_duzi_ds
                    .mem_duzi_dn0j0_ds[(next_vectT[i] +
                                        mem_deriv_propag_low->mem_duzi_ds
                                                .mem_duzi_dn0j0_ds.size(0) *
                                            3 * (h_is - 1)) -
                                       1] *
                c_ctcr_construc;
        mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0
            [((next_vectT[i] +
               mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0)) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0) * 3 *
                  (static_cast<int32_T>(is + 1.0) - 1)) -
             1] = b_ctcr_construc;
        mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0
            [((next_vectT[i] +
               mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0) * 2) +
              mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0) * 3 *
                  (static_cast<int32_T>(is + 1.0) - 1)) -
             1] = mem_deriv_propag_low_idx_2;
        b_i = mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds.size(0);
        trueCount = next_vectT[i];
        if ((trueCount < 1) || (trueCount > b_i)) {
          emlrtDynamicBoundsCheckR2012b(trueCount, 1, b_i, &nq_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds.size(2);
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > b_i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                        &oq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                        ctcr_construc->vect_res.size(1),
                                        &pq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0);
        b = ((next_vectT[i] < 1) || (next_vectT[i] > b_i));
        if (b) {
          emlrtDynamicBoundsCheckR2012b(next_vectT[i], 1, b_i, &lq_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(2);
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > b_i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                        &mq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(is + 1.0) < 1) ||
            (static_cast<int32_T>(is + 1.0) > b_i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, b_i,
                                        &qq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_ctcr_construc =
            mem_deriv_propag_low->mem_dti.mem_dti_dm0j0
                [((next_vectT[i] +
                   mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0)) +
                  mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0) * 3 *
                      (static_cast<int32_T>(is) - 1)) -
                 1] +
            mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds
                    [((next_vectT[i] + mem_deriv_propag_low->mem_dti_ds
                                           .mem_dti_dm0j0_ds.size(0)) +
                      mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds.size(
                          0) *
                          3 * (i_is - 1)) -
                     1] *
                c_ctcr_construc;
        mem_deriv_propag_low_idx_2 =
            mem_deriv_propag_low->mem_dti.mem_dti_dm0j0
                [((next_vectT[i] +
                   mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0) * 2) +
                  mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0) * 3 *
                      (static_cast<int32_T>(is) - 1)) -
                 1] +
            mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds
                    [((next_vectT[i] + mem_deriv_propag_low->mem_dti_ds
                                               .mem_dti_dm0j0_ds.size(0) *
                                           2) +
                      mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds.size(
                          0) *
                          3 * (i_is - 1)) -
                     1] *
                c_ctcr_construc;
        mem_deriv_propag_low->mem_dti
            .mem_dti_dm0j0[(next_vectT[i] +
                            mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(
                                0) *
                                3 * (static_cast<int32_T>(is + 1.0) - 1)) -
                           1] =
            mem_deriv_propag_low->mem_dti.mem_dti_dm0j0
                [(next_vectT[i] +
                  mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0) * 3 *
                      (static_cast<int32_T>(is) - 1)) -
                 1] +
            mem_deriv_propag_low->mem_dti_ds
                    .mem_dti_dm0j0_ds[(next_vectT[i] +
                                       mem_deriv_propag_low->mem_dti_ds
                                               .mem_dti_dm0j0_ds.size(0) *
                                           3 * (i_is - 1)) -
                                      1] *
                c_ctcr_construc;
        mem_deriv_propag_low->mem_dti.mem_dti_dm0j0
            [((next_vectT[i] +
               mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0) * 3 *
                  (static_cast<int32_T>(is + 1.0) - 1)) -
             1] = b_ctcr_construc;
        mem_deriv_propag_low->mem_dti.mem_dti_dm0j0
            [((next_vectT[i] +
               mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0) * 2) +
              mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0) * 3 *
                  (static_cast<int32_T>(is + 1.0) - 1)) -
             1] = mem_deriv_propag_low_idx_2;
        b_i = mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds.size(0);
        trueCount = next_vectT[i];
        if ((trueCount < 1) || (trueCount > b_i)) {
          emlrtDynamicBoundsCheckR2012b(trueCount, 1, b_i, &tq_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds.size(2);
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > b_i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                        &uq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                        ctcr_construc->vect_res.size(1),
                                        &vq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0);
        b = ((next_vectT[i] < 1) || (next_vectT[i] > b_i));
        if (b) {
          emlrtDynamicBoundsCheckR2012b(next_vectT[i], 1, b_i, &rq_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_i = mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(2);
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > b_i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, b_i,
                                        &sq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(is + 1.0) < 1) ||
            (static_cast<int32_T>(is + 1.0) > b_i)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1, b_i,
                                        &wq_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_ctcr_construc =
            mem_deriv_propag_low->mem_dti.mem_dti_dn0j0
                [((next_vectT[i] +
                   mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0)) +
                  mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0) * 3 *
                      (static_cast<int32_T>(is) - 1)) -
                 1] +
            mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds
                    [((next_vectT[i] + mem_deriv_propag_low->mem_dti_ds
                                           .mem_dti_dn0j0_ds.size(0)) +
                      mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds.size(
                          0) *
                          3 * (j_is - 1)) -
                     1] *
                c_ctcr_construc;
        mem_deriv_propag_low_idx_2 =
            mem_deriv_propag_low->mem_dti.mem_dti_dn0j0
                [((next_vectT[i] +
                   mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0) * 2) +
                  mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0) * 3 *
                      (static_cast<int32_T>(is) - 1)) -
                 1] +
            mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds
                    [((next_vectT[i] + mem_deriv_propag_low->mem_dti_ds
                                               .mem_dti_dn0j0_ds.size(0) *
                                           2) +
                      mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds.size(
                          0) *
                          3 * (j_is - 1)) -
                     1] *
                c_ctcr_construc;
        mem_deriv_propag_low->mem_dti
            .mem_dti_dn0j0[(next_vectT[i] +
                            mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(
                                0) *
                                3 * (static_cast<int32_T>(is + 1.0) - 1)) -
                           1] =
            mem_deriv_propag_low->mem_dti.mem_dti_dn0j0
                [(next_vectT[i] +
                  mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0) * 3 *
                      (static_cast<int32_T>(is) - 1)) -
                 1] +
            mem_deriv_propag_low->mem_dti_ds
                    .mem_dti_dn0j0_ds[(next_vectT[i] +
                                       mem_deriv_propag_low->mem_dti_ds
                                               .mem_dti_dn0j0_ds.size(0) *
                                           3 * (j_is - 1)) -
                                      1] *
                c_ctcr_construc;
        mem_deriv_propag_low->mem_dti.mem_dti_dn0j0
            [((next_vectT[i] +
               mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0) * 3 *
                  (static_cast<int32_T>(is + 1.0) - 1)) -
             1] = b_ctcr_construc;
        mem_deriv_propag_low->mem_dti.mem_dti_dn0j0
            [((next_vectT[i] +
               mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0) * 2) +
              mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0) * 3 *
                  (static_cast<int32_T>(is + 1.0) - 1)) -
             1] = mem_deriv_propag_low_idx_2;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
      partialTrueCount = mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &xq_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      partialTrueCount =
          mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &yq_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &ar_emlrtBCI, (emlrtConstCTX)&sp);
      }
      r2.set_size(&qd_emlrtRTEI, &sp, 3,
                  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.size(1));
      loop_ub = mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.size(1);
      for (partialTrueCount = 0; partialTrueCount < loop_ub;
           partialTrueCount++) {
        r2[3 * partialTrueCount] =
            mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds
                [3 * partialTrueCount +
                 3 * mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.size(1) *
                     (static_cast<int32_T>(is) - 1)] *
            ctcr_construc_tmp;
        r2[3 * partialTrueCount + 1] =
            mem_deriv_propag_low->mem_dm0_ds
                .mem_dm0_duzj0_ds[(3 * partialTrueCount +
                                   3 *
                                       mem_deriv_propag_low->mem_dm0_ds
                                           .mem_dm0_duzj0_ds.size(1) *
                                       (static_cast<int32_T>(is) - 1)) +
                                  1] *
            ctcr_construc_tmp;
        r2[3 * partialTrueCount + 2] =
            mem_deriv_propag_low->mem_dm0_ds
                .mem_dm0_duzj0_ds[(3 * partialTrueCount +
                                   3 *
                                       mem_deriv_propag_low->mem_dm0_ds
                                           .mem_dm0_duzj0_ds.size(1) *
                                       (static_cast<int32_T>(is) - 1)) +
                                  2] *
            ctcr_construc_tmp;
      }
      partialTrueCount = mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1);
      if ((partialTrueCount != r2.size(1)) &&
          ((partialTrueCount != 1) && (r2.size(1) != 1))) {
        emlrtDimSizeImpxCheckR2021b(partialTrueCount, r2.size(1), &p_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(2);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                      partialTrueCount, &br_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) == r2.size(1)) {
        r2.set_size(&rd_emlrtRTEI, &sp, 3,
                    mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1));
        loop_ub = mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1);
        for (partialTrueCount = 0; partialTrueCount < loop_ub;
             partialTrueCount++) {
          r2[3 * partialTrueCount] =
              mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0
                  [3 * partialTrueCount +
                   3 * mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) *
                       (static_cast<int32_T>(is) - 1)] +
              r2[3 * partialTrueCount];
          r2[3 * partialTrueCount + 1] =
              mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0
                  [(3 * partialTrueCount +
                    3 * mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) *
                        (static_cast<int32_T>(is) - 1)) +
                   1] +
              r2[3 * partialTrueCount + 1];
          r2[3 * partialTrueCount + 2] =
              mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0
                  [(3 * partialTrueCount +
                    3 * mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) *
                        (static_cast<int32_T>(is) - 1)) +
                   2] +
              r2[3 * partialTrueCount + 2];
        }
      } else {
        st.site = &sd_emlrtRSI;
        c_binary_expand_op(st, r2, mem_deriv_propag_low, is);
      }
      b_iv[0] = 3;
      b_iv[1] = mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1);
      emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, r2.size(), 2, &q_emlrtECI,
                                    (emlrtCTX)&sp);
      loop_ub = r2.size(1);
      for (partialTrueCount = 0; partialTrueCount < loop_ub;
           partialTrueCount++) {
        mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0
            [3 * partialTrueCount +
             3 * mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) *
                 (static_cast<int32_T>(is + 1.0) - 1)] =
            r2[3 * partialTrueCount];
        mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0
            [(3 * partialTrueCount +
              3 * mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) *
                  (static_cast<int32_T>(is + 1.0) - 1)) +
             1] = r2[3 * partialTrueCount + 1];
        mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0
            [(3 * partialTrueCount +
              3 * mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1) *
                  (static_cast<int32_T>(is + 1.0) - 1)) +
             2] = r2[3 * partialTrueCount + 2];
      }
      partialTrueCount =
          mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dm0j0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &dr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &er_emlrtBCI, (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &cr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0.size(2);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                      partialTrueCount, &fr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      for (partialTrueCount = 0; partialTrueCount < 3; partialTrueCount++) {
        mem_deriv_propag_low->mem_dm0
            .mem_dm0_dm0j0[3 * partialTrueCount +
                           9 * (static_cast<int32_T>(is + 1.0) - 1)] =
            mem_deriv_propag_low->mem_dm0
                .mem_dm0_dm0j0[3 * partialTrueCount +
                               9 * (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dm0_ds
                    .mem_dm0_dm0j0_ds[3 * partialTrueCount +
                                      9 * (static_cast<int32_T>(is) - 1)] *
                ctcr_construc_tmp;
        mem_deriv_propag_low->mem_dm0
            .mem_dm0_dm0j0[(3 * partialTrueCount +
                            9 * (static_cast<int32_T>(is + 1.0) - 1)) +
                           1] =
            mem_deriv_propag_low->mem_dm0
                .mem_dm0_dm0j0[(3 * partialTrueCount +
                                9 * (static_cast<int32_T>(is) - 1)) +
                               1] +
            mem_deriv_propag_low->mem_dm0_ds
                    .mem_dm0_dm0j0_ds[(3 * partialTrueCount +
                                       9 * (static_cast<int32_T>(is) - 1)) +
                                      1] *
                ctcr_construc_tmp;
        mem_deriv_propag_low->mem_dm0
            .mem_dm0_dm0j0[(3 * partialTrueCount +
                            9 * (static_cast<int32_T>(is + 1.0) - 1)) +
                           2] =
            mem_deriv_propag_low->mem_dm0
                .mem_dm0_dm0j0[(3 * partialTrueCount +
                                9 * (static_cast<int32_T>(is) - 1)) +
                               2] +
            mem_deriv_propag_low->mem_dm0_ds
                    .mem_dm0_dm0j0_ds[(3 * partialTrueCount +
                                       9 * (static_cast<int32_T>(is) - 1)) +
                                      2] *
                ctcr_construc_tmp;
      }
      partialTrueCount =
          mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dn0j0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &hr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &ir_emlrtBCI, (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dm0.mem_dm0_dn0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &gr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dm0.mem_dm0_dn0j0.size(2);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                      partialTrueCount, &jr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      for (partialTrueCount = 0; partialTrueCount < 3; partialTrueCount++) {
        mem_deriv_propag_low->mem_dm0
            .mem_dm0_dn0j0[3 * partialTrueCount +
                           9 * (static_cast<int32_T>(is + 1.0) - 1)] =
            mem_deriv_propag_low->mem_dm0
                .mem_dm0_dn0j0[3 * partialTrueCount +
                               9 * (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dm0_ds
                    .mem_dm0_dn0j0_ds[3 * partialTrueCount +
                                      9 * (static_cast<int32_T>(is) - 1)] *
                ctcr_construc_tmp;
        mem_deriv_propag_low->mem_dm0
            .mem_dm0_dn0j0[(3 * partialTrueCount +
                            9 * (static_cast<int32_T>(is + 1.0) - 1)) +
                           1] =
            mem_deriv_propag_low->mem_dm0
                .mem_dm0_dn0j0[(3 * partialTrueCount +
                                9 * (static_cast<int32_T>(is) - 1)) +
                               1] +
            mem_deriv_propag_low->mem_dm0_ds
                    .mem_dm0_dn0j0_ds[(3 * partialTrueCount +
                                       9 * (static_cast<int32_T>(is) - 1)) +
                                      1] *
                ctcr_construc_tmp;
        mem_deriv_propag_low->mem_dm0
            .mem_dm0_dn0j0[(3 * partialTrueCount +
                            9 * (static_cast<int32_T>(is + 1.0) - 1)) +
                           2] =
            mem_deriv_propag_low->mem_dm0
                .mem_dm0_dn0j0[(3 * partialTrueCount +
                                9 * (static_cast<int32_T>(is) - 1)) +
                               2] +
            mem_deriv_propag_low->mem_dm0_ds
                    .mem_dm0_dn0j0_ds[(3 * partialTrueCount +
                                       9 * (static_cast<int32_T>(is) - 1)) +
                                      2] *
                ctcr_construc_tmp;
      }
      partialTrueCount = mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &kr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      partialTrueCount =
          mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &lr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &mr_emlrtBCI, (emlrtConstCTX)&sp);
      }
      r2.set_size(&sd_emlrtRTEI, &sp, 3,
                  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.size(1));
      loop_ub = mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.size(1);
      for (partialTrueCount = 0; partialTrueCount < loop_ub;
           partialTrueCount++) {
        r2[3 * partialTrueCount] =
            mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds
                [3 * partialTrueCount +
                 3 * mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.size(1) *
                     (static_cast<int32_T>(is) - 1)] *
            ctcr_construc_tmp;
        r2[3 * partialTrueCount + 1] =
            mem_deriv_propag_low->mem_dn0_ds
                .mem_dn0_duzj0_ds[(3 * partialTrueCount +
                                   3 *
                                       mem_deriv_propag_low->mem_dn0_ds
                                           .mem_dn0_duzj0_ds.size(1) *
                                       (static_cast<int32_T>(is) - 1)) +
                                  1] *
            ctcr_construc_tmp;
        r2[3 * partialTrueCount + 2] =
            mem_deriv_propag_low->mem_dn0_ds
                .mem_dn0_duzj0_ds[(3 * partialTrueCount +
                                   3 *
                                       mem_deriv_propag_low->mem_dn0_ds
                                           .mem_dn0_duzj0_ds.size(1) *
                                       (static_cast<int32_T>(is) - 1)) +
                                  2] *
            ctcr_construc_tmp;
      }
      partialTrueCount = mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1);
      if ((partialTrueCount != r2.size(1)) &&
          ((partialTrueCount != 1) && (r2.size(1) != 1))) {
        emlrtDimSizeImpxCheckR2021b(partialTrueCount, r2.size(1), &r_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(2);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                      partialTrueCount, &nr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) == r2.size(1)) {
        r2.set_size(&td_emlrtRTEI, &sp, 3,
                    mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1));
        loop_ub = mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1);
        for (partialTrueCount = 0; partialTrueCount < loop_ub;
             partialTrueCount++) {
          r2[3 * partialTrueCount] =
              mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0
                  [3 * partialTrueCount +
                   3 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) *
                       (static_cast<int32_T>(is) - 1)] +
              r2[3 * partialTrueCount];
          r2[3 * partialTrueCount + 1] =
              mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0
                  [(3 * partialTrueCount +
                    3 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) *
                        (static_cast<int32_T>(is) - 1)) +
                   1] +
              r2[3 * partialTrueCount + 1];
          r2[3 * partialTrueCount + 2] =
              mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0
                  [(3 * partialTrueCount +
                    3 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) *
                        (static_cast<int32_T>(is) - 1)) +
                   2] +
              r2[3 * partialTrueCount + 2];
        }
      } else {
        st.site = &rd_emlrtRSI;
        b_binary_expand_op(st, r2, mem_deriv_propag_low, is);
      }
      b_iv[0] = 3;
      b_iv[1] = mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1);
      emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, r2.size(), 2, &s_emlrtECI,
                                    (emlrtCTX)&sp);
      loop_ub = r2.size(1);
      for (partialTrueCount = 0; partialTrueCount < loop_ub;
           partialTrueCount++) {
        mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0
            [3 * partialTrueCount +
             3 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) *
                 (static_cast<int32_T>(is + 1.0) - 1)] =
            r2[3 * partialTrueCount];
        mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0
            [(3 * partialTrueCount +
              3 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) *
                  (static_cast<int32_T>(is + 1.0) - 1)) +
             1] = r2[3 * partialTrueCount + 1];
        mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0
            [(3 * partialTrueCount +
              3 * mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1) *
                  (static_cast<int32_T>(is + 1.0) - 1)) +
             2] = r2[3 * partialTrueCount + 2];
      }
      partialTrueCount =
          mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dm0j0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &pr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &qr_emlrtBCI, (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &or_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0.size(2);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                      partialTrueCount, &rr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      for (partialTrueCount = 0; partialTrueCount < 3; partialTrueCount++) {
        mem_deriv_propag_low->mem_dn0
            .mem_dn0_dm0j0[3 * partialTrueCount +
                           9 * (static_cast<int32_T>(is + 1.0) - 1)] =
            mem_deriv_propag_low->mem_dn0
                .mem_dn0_dm0j0[3 * partialTrueCount +
                               9 * (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dn0_ds
                    .mem_dn0_dm0j0_ds[3 * partialTrueCount +
                                      9 * (static_cast<int32_T>(is) - 1)] *
                ctcr_construc_tmp;
        mem_deriv_propag_low->mem_dn0
            .mem_dn0_dm0j0[(3 * partialTrueCount +
                            9 * (static_cast<int32_T>(is + 1.0) - 1)) +
                           1] =
            mem_deriv_propag_low->mem_dn0
                .mem_dn0_dm0j0[(3 * partialTrueCount +
                                9 * (static_cast<int32_T>(is) - 1)) +
                               1] +
            mem_deriv_propag_low->mem_dn0_ds
                    .mem_dn0_dm0j0_ds[(3 * partialTrueCount +
                                       9 * (static_cast<int32_T>(is) - 1)) +
                                      1] *
                ctcr_construc_tmp;
        mem_deriv_propag_low->mem_dn0
            .mem_dn0_dm0j0[(3 * partialTrueCount +
                            9 * (static_cast<int32_T>(is + 1.0) - 1)) +
                           2] =
            mem_deriv_propag_low->mem_dn0
                .mem_dn0_dm0j0[(3 * partialTrueCount +
                                9 * (static_cast<int32_T>(is) - 1)) +
                               2] +
            mem_deriv_propag_low->mem_dn0_ds
                    .mem_dn0_dm0j0_ds[(3 * partialTrueCount +
                                       9 * (static_cast<int32_T>(is) - 1)) +
                                      2] *
                ctcr_construc_tmp;
      }
      partialTrueCount =
          mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dn0j0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &tr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &ur_emlrtBCI, (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &sr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0.size(2);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                      partialTrueCount, &vr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      for (partialTrueCount = 0; partialTrueCount < 3; partialTrueCount++) {
        mem_deriv_propag_low->mem_dn0
            .mem_dn0_dn0j0[3 * partialTrueCount +
                           9 * (static_cast<int32_T>(is + 1.0) - 1)] =
            mem_deriv_propag_low->mem_dn0
                .mem_dn0_dn0j0[3 * partialTrueCount +
                               9 * (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dn0_ds
                    .mem_dn0_dn0j0_ds[3 * partialTrueCount +
                                      9 * (static_cast<int32_T>(is) - 1)] *
                ctcr_construc_tmp;
        mem_deriv_propag_low->mem_dn0
            .mem_dn0_dn0j0[(3 * partialTrueCount +
                            9 * (static_cast<int32_T>(is + 1.0) - 1)) +
                           1] =
            mem_deriv_propag_low->mem_dn0
                .mem_dn0_dn0j0[(3 * partialTrueCount +
                                9 * (static_cast<int32_T>(is) - 1)) +
                               1] +
            mem_deriv_propag_low->mem_dn0_ds
                    .mem_dn0_dn0j0_ds[(3 * partialTrueCount +
                                       9 * (static_cast<int32_T>(is) - 1)) +
                                      1] *
                ctcr_construc_tmp;
        mem_deriv_propag_low->mem_dn0
            .mem_dn0_dn0j0[(3 * partialTrueCount +
                            9 * (static_cast<int32_T>(is + 1.0) - 1)) +
                           2] =
            mem_deriv_propag_low->mem_dn0
                .mem_dn0_dn0j0[(3 * partialTrueCount +
                                9 * (static_cast<int32_T>(is) - 1)) +
                               2] +
            mem_deriv_propag_low->mem_dn0_ds
                    .mem_dn0_dn0j0_ds[(3 * partialTrueCount +
                                       9 * (static_cast<int32_T>(is) - 1)) +
                                      2] *
                ctcr_construc_tmp;
      }
      partialTrueCount = mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(3);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &wr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      partialTrueCount =
          mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(3);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &xr_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &yr_emlrtBCI, (emlrtConstCTX)&sp);
      }
      r4.set_size(&ud_emlrtRTEI, &sp, 3, 3,
                  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(2));
      loop_ub = mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(2);
      for (partialTrueCount = 0; partialTrueCount < loop_ub;
           partialTrueCount++) {
        for (b_i = 0; b_i < 3; b_i++) {
          r4[3 * b_i + 9 * partialTrueCount] =
              mem_deriv_propag_low->mem_dR0_ds
                  .mem_dR0_duzj0_ds[(3 * b_i + 9 * partialTrueCount) +
                                    9 *
                                        mem_deriv_propag_low->mem_dR0_ds
                                            .mem_dR0_duzj0_ds.size(2) *
                                        (static_cast<int32_T>(is) - 1)] *
              ctcr_construc_tmp;
          r4[(3 * b_i + 9 * partialTrueCount) + 1] =
              mem_deriv_propag_low->mem_dR0_ds
                  .mem_dR0_duzj0_ds[((3 * b_i + 9 * partialTrueCount) +
                                     9 *
                                         mem_deriv_propag_low->mem_dR0_ds
                                             .mem_dR0_duzj0_ds.size(2) *
                                         (static_cast<int32_T>(is) - 1)) +
                                    1] *
              ctcr_construc_tmp;
          r4[(3 * b_i + 9 * partialTrueCount) + 2] =
              mem_deriv_propag_low->mem_dR0_ds
                  .mem_dR0_duzj0_ds[((3 * b_i + 9 * partialTrueCount) +
                                     9 *
                                         mem_deriv_propag_low->mem_dR0_ds
                                             .mem_dR0_duzj0_ds.size(2) *
                                         (static_cast<int32_T>(is) - 1)) +
                                    2] *
              ctcr_construc_tmp;
        }
      }
      partialTrueCount = mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2);
      if ((partialTrueCount != r4.size(2)) &&
          ((partialTrueCount != 1) && (r4.size(2) != 1))) {
        emlrtDimSizeImpxCheckR2021b(partialTrueCount, r4.size(2), &t_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(3);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                      partialTrueCount, &as_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) == r4.size(2)) {
        r4.set_size(&vd_emlrtRTEI, &sp, 3, 3,
                    mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2));
        loop_ub = mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2);
        for (partialTrueCount = 0; partialTrueCount < loop_ub;
             partialTrueCount++) {
          for (b_i = 0; b_i < 3; b_i++) {
            r4[3 * b_i + 9 * partialTrueCount] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                    [(3 * b_i + 9 * partialTrueCount) +
                     9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                         (static_cast<int32_T>(is) - 1)] +
                r4[3 * b_i + 9 * partialTrueCount];
            r4[(3 * b_i + 9 * partialTrueCount) + 1] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                    [((3 * b_i + 9 * partialTrueCount) +
                      9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                          (static_cast<int32_T>(is) - 1)) +
                     1] +
                r4[(3 * b_i + 9 * partialTrueCount) + 1];
            r4[(3 * b_i + 9 * partialTrueCount) + 2] =
                mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
                    [((3 * b_i + 9 * partialTrueCount) +
                      9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                          (static_cast<int32_T>(is) - 1)) +
                     2] +
                r4[(3 * b_i + 9 * partialTrueCount) + 2];
          }
        }
      } else {
        st.site = &qd_emlrtRSI;
        binary_expand_op(st, r4, mem_deriv_propag_low, is);
      }
      iv1[0] = 3;
      iv1[1] = 3;
      iv1[2] = mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2);
      emlrtSubAssignSizeCheckR2012b(&iv1[0], 3, r4.size(), 3, &u_emlrtECI,
                                    (emlrtCTX)&sp);
      loop_ub = r4.size(2);
      for (partialTrueCount = 0; partialTrueCount < loop_ub;
           partialTrueCount++) {
        for (b_i = 0; b_i < 3; b_i++) {
          mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
              [(3 * b_i + 9 * partialTrueCount) +
               9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                   (static_cast<int32_T>(is + 1.0) - 1)] =
              r4[3 * b_i + 9 * partialTrueCount];
          mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
              [((3 * b_i + 9 * partialTrueCount) +
                9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                    (static_cast<int32_T>(is + 1.0) - 1)) +
               1] = r4[(3 * b_i + 9 * partialTrueCount) + 1];
          mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0
              [((3 * b_i + 9 * partialTrueCount) +
                9 * mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2) *
                    (static_cast<int32_T>(is + 1.0) - 1)) +
               2] = r4[(3 * b_i + 9 * partialTrueCount) + 2];
        }
      }
      partialTrueCount =
          mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dm0j0_ds.size(3);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &cs_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &ds_emlrtBCI, (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(3);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &bs_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(3);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                      partialTrueCount, &es_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      for (partialTrueCount = 0; partialTrueCount < 3; partialTrueCount++) {
        for (b_i = 0; b_i < 3; b_i++) {
          mem_deriv_propag_low->mem_dR0
              .mem_dR0_dm0j0[(3 * b_i + 9 * partialTrueCount) +
                             27 * (static_cast<int32_T>(is + 1.0) - 1)] =
              mem_deriv_propag_low->mem_dR0
                  .mem_dR0_dm0j0[(3 * b_i + 9 * partialTrueCount) +
                                 27 * (static_cast<int32_T>(is) - 1)] +
              mem_deriv_propag_low->mem_dR0_ds
                      .mem_dR0_dm0j0_ds[(3 * b_i + 9 * partialTrueCount) +
                                        27 * (static_cast<int32_T>(is) - 1)] *
                  ctcr_construc_tmp;
          mem_deriv_propag_low->mem_dR0
              .mem_dR0_dm0j0[((3 * b_i + 9 * partialTrueCount) +
                              27 * (static_cast<int32_T>(is + 1.0) - 1)) +
                             1] =
              mem_deriv_propag_low->mem_dR0
                  .mem_dR0_dm0j0[((3 * b_i + 9 * partialTrueCount) +
                                  27 * (static_cast<int32_T>(is) - 1)) +
                                 1] +
              mem_deriv_propag_low->mem_dR0_ds
                      .mem_dR0_dm0j0_ds[((3 * b_i + 9 * partialTrueCount) +
                                         27 * (static_cast<int32_T>(is) - 1)) +
                                        1] *
                  ctcr_construc_tmp;
          mem_deriv_propag_low->mem_dR0
              .mem_dR0_dm0j0[((3 * b_i + 9 * partialTrueCount) +
                              27 * (static_cast<int32_T>(is + 1.0) - 1)) +
                             2] =
              mem_deriv_propag_low->mem_dR0
                  .mem_dR0_dm0j0[((3 * b_i + 9 * partialTrueCount) +
                                  27 * (static_cast<int32_T>(is) - 1)) +
                                 2] +
              mem_deriv_propag_low->mem_dR0_ds
                      .mem_dR0_dm0j0_ds[((3 * b_i + 9 * partialTrueCount) +
                                         27 * (static_cast<int32_T>(is) - 1)) +
                                        2] *
                  ctcr_construc_tmp;
        }
      }
      partialTrueCount =
          mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dn0j0_ds.size(3);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &gs_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &hs_emlrtBCI, (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(3);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &fs_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(3);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                      partialTrueCount, &is_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      for (partialTrueCount = 0; partialTrueCount < 3; partialTrueCount++) {
        for (b_i = 0; b_i < 3; b_i++) {
          mem_deriv_propag_low->mem_dR0
              .mem_dR0_dn0j0[(3 * b_i + 9 * partialTrueCount) +
                             27 * (static_cast<int32_T>(is + 1.0) - 1)] =
              mem_deriv_propag_low->mem_dR0
                  .mem_dR0_dn0j0[(3 * b_i + 9 * partialTrueCount) +
                                 27 * (static_cast<int32_T>(is) - 1)] +
              mem_deriv_propag_low->mem_dR0_ds
                      .mem_dR0_dn0j0_ds[(3 * b_i + 9 * partialTrueCount) +
                                        27 * (static_cast<int32_T>(is) - 1)] *
                  ctcr_construc_tmp;
          mem_deriv_propag_low->mem_dR0
              .mem_dR0_dn0j0[((3 * b_i + 9 * partialTrueCount) +
                              27 * (static_cast<int32_T>(is + 1.0) - 1)) +
                             1] =
              mem_deriv_propag_low->mem_dR0
                  .mem_dR0_dn0j0[((3 * b_i + 9 * partialTrueCount) +
                                  27 * (static_cast<int32_T>(is) - 1)) +
                                 1] +
              mem_deriv_propag_low->mem_dR0_ds
                      .mem_dR0_dn0j0_ds[((3 * b_i + 9 * partialTrueCount) +
                                         27 * (static_cast<int32_T>(is) - 1)) +
                                        1] *
                  ctcr_construc_tmp;
          mem_deriv_propag_low->mem_dR0
              .mem_dR0_dn0j0[((3 * b_i + 9 * partialTrueCount) +
                              27 * (static_cast<int32_T>(is + 1.0) - 1)) +
                             2] =
              mem_deriv_propag_low->mem_dR0
                  .mem_dR0_dn0j0[((3 * b_i + 9 * partialTrueCount) +
                                  27 * (static_cast<int32_T>(is) - 1)) +
                                 2] +
              mem_deriv_propag_low->mem_dR0_ds
                      .mem_dR0_dn0j0_ds[((3 * b_i + 9 * partialTrueCount) +
                                         27 * (static_cast<int32_T>(is) - 1)) +
                                        2] *
                  ctcr_construc_tmp;
        }
      }
      partialTrueCount =
          mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dm0j0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &ks_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &ls_emlrtBCI, (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dP0.mem_dP0_dm0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &js_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dP0.mem_dP0_dm0j0.size(2);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                      partialTrueCount, &ms_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      for (partialTrueCount = 0; partialTrueCount < 3; partialTrueCount++) {
        mem_deriv_propag_low->mem_dP0
            .mem_dP0_dm0j0[3 * partialTrueCount +
                           9 * (static_cast<int32_T>(is + 1.0) - 1)] =
            mem_deriv_propag_low->mem_dP0
                .mem_dP0_dm0j0[3 * partialTrueCount +
                               9 * (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dP0_ds
                    .mem_dP0_dm0j0_ds[3 * partialTrueCount +
                                      9 * (static_cast<int32_T>(is) - 1)] *
                ctcr_construc_tmp;
        mem_deriv_propag_low->mem_dP0
            .mem_dP0_dm0j0[(3 * partialTrueCount +
                            9 * (static_cast<int32_T>(is + 1.0) - 1)) +
                           1] =
            mem_deriv_propag_low->mem_dP0
                .mem_dP0_dm0j0[(3 * partialTrueCount +
                                9 * (static_cast<int32_T>(is) - 1)) +
                               1] +
            mem_deriv_propag_low->mem_dP0_ds
                    .mem_dP0_dm0j0_ds[(3 * partialTrueCount +
                                       9 * (static_cast<int32_T>(is) - 1)) +
                                      1] *
                ctcr_construc_tmp;
        mem_deriv_propag_low->mem_dP0
            .mem_dP0_dm0j0[(3 * partialTrueCount +
                            9 * (static_cast<int32_T>(is + 1.0) - 1)) +
                           2] =
            mem_deriv_propag_low->mem_dP0
                .mem_dP0_dm0j0[(3 * partialTrueCount +
                                9 * (static_cast<int32_T>(is) - 1)) +
                               2] +
            mem_deriv_propag_low->mem_dP0_ds
                    .mem_dP0_dm0j0_ds[(3 * partialTrueCount +
                                       9 * (static_cast<int32_T>(is) - 1)) +
                                      2] *
                ctcr_construc_tmp;
      }
      partialTrueCount =
          mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dn0j0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &os_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &ps_emlrtBCI, (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dP0.mem_dP0_dn0j0.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &ns_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dP0.mem_dP0_dn0j0.size(2);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                      partialTrueCount, &qs_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      for (partialTrueCount = 0; partialTrueCount < 3; partialTrueCount++) {
        mem_deriv_propag_low->mem_dP0
            .mem_dP0_dn0j0[3 * partialTrueCount +
                           9 * (static_cast<int32_T>(is + 1.0) - 1)] =
            mem_deriv_propag_low->mem_dP0
                .mem_dP0_dn0j0[3 * partialTrueCount +
                               9 * (static_cast<int32_T>(is) - 1)] +
            mem_deriv_propag_low->mem_dP0_ds
                    .mem_dP0_dn0j0_ds[3 * partialTrueCount +
                                      9 * (static_cast<int32_T>(is) - 1)] *
                ctcr_construc_tmp;
        mem_deriv_propag_low->mem_dP0
            .mem_dP0_dn0j0[(3 * partialTrueCount +
                            9 * (static_cast<int32_T>(is + 1.0) - 1)) +
                           1] =
            mem_deriv_propag_low->mem_dP0
                .mem_dP0_dn0j0[(3 * partialTrueCount +
                                9 * (static_cast<int32_T>(is) - 1)) +
                               1] +
            mem_deriv_propag_low->mem_dP0_ds
                    .mem_dP0_dn0j0_ds[(3 * partialTrueCount +
                                       9 * (static_cast<int32_T>(is) - 1)) +
                                      1] *
                ctcr_construc_tmp;
        mem_deriv_propag_low->mem_dP0
            .mem_dP0_dn0j0[(3 * partialTrueCount +
                            9 * (static_cast<int32_T>(is + 1.0) - 1)) +
                           2] =
            mem_deriv_propag_low->mem_dP0
                .mem_dP0_dn0j0[(3 * partialTrueCount +
                                9 * (static_cast<int32_T>(is) - 1)) +
                               2] +
            mem_deriv_propag_low->mem_dP0_ds
                    .mem_dP0_dn0j0_ds[(3 * partialTrueCount +
                                       9 * (static_cast<int32_T>(is) - 1)) +
                                      2] *
                ctcr_construc_tmp;
      }
      partialTrueCount = mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &rs_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      partialTrueCount =
          mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(2);
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      partialTrueCount, &ss_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > ctcr_construc->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      ctcr_construc->vect_res.size(1),
                                      &ts_emlrtBCI, (emlrtConstCTX)&sp);
      }
      r2.set_size(&wd_emlrtRTEI, &sp, 3,
                  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(1));
      loop_ub = mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(1);
      for (partialTrueCount = 0; partialTrueCount < loop_ub;
           partialTrueCount++) {
        r2[3 * partialTrueCount] =
            mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds
                [3 * partialTrueCount +
                 3 * mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(1) *
                     (static_cast<int32_T>(is) - 1)] *
            ctcr_construc_tmp;
        r2[3 * partialTrueCount + 1] =
            mem_deriv_propag_low->mem_dP0_ds
                .mem_dP0_duzj0_ds[(3 * partialTrueCount +
                                   3 *
                                       mem_deriv_propag_low->mem_dP0_ds
                                           .mem_dP0_duzj0_ds.size(1) *
                                       (static_cast<int32_T>(is) - 1)) +
                                  1] *
            ctcr_construc_tmp;
        r2[3 * partialTrueCount + 2] =
            mem_deriv_propag_low->mem_dP0_ds
                .mem_dP0_duzj0_ds[(3 * partialTrueCount +
                                   3 *
                                       mem_deriv_propag_low->mem_dP0_ds
                                           .mem_dP0_duzj0_ds.size(1) *
                                       (static_cast<int32_T>(is) - 1)) +
                                  2] *
            ctcr_construc_tmp;
      }
      partialTrueCount = mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(1);
      if ((partialTrueCount != r2.size(1)) &&
          ((partialTrueCount != 1) && (r2.size(1) != 1))) {
        emlrtDimSizeImpxCheckR2021b(partialTrueCount, r2.size(1), &v_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      partialTrueCount = mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(2);
      if ((static_cast<int32_T>(is + 1.0) < 1) ||
          (static_cast<int32_T>(is + 1.0) > partialTrueCount)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is + 1.0), 1,
                                      partialTrueCount, &us_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(1) == r2.size(1)) {
        r2.set_size(&xd_emlrtRTEI, &sp, 3,
                    mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(1));
        loop_ub = mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(1);
        for (partialTrueCount = 0; partialTrueCount < loop_ub;
             partialTrueCount++) {
          r2[3 * partialTrueCount] =
              mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0
                  [3 * partialTrueCount +
                   3 * mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(1) *
                       (static_cast<int32_T>(is) - 1)] +
              r2[3 * partialTrueCount];
          r2[3 * partialTrueCount + 1] =
              mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0
                  [(3 * partialTrueCount +
                    3 * mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(1) *
                        (static_cast<int32_T>(is) - 1)) +
                   1] +
              r2[3 * partialTrueCount + 1];
          r2[3 * partialTrueCount + 2] =
              mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0
                  [(3 * partialTrueCount +
                    3 * mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(1) *
                        (static_cast<int32_T>(is) - 1)) +
                   2] +
              r2[3 * partialTrueCount + 2];
        }
      } else {
        st.site = &pd_emlrtRSI;
        binary_expand_op(st, r2, mem_deriv_propag_low, is);
      }
      b_iv[0] = 3;
      b_iv[1] = mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(1);
      emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, r2.size(), 2, &w_emlrtECI,
                                    (emlrtCTX)&sp);
      loop_ub = r2.size(1);
      for (partialTrueCount = 0; partialTrueCount < loop_ub;
           partialTrueCount++) {
        mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0
            [3 * partialTrueCount +
             3 * mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(1) *
                 (static_cast<int32_T>(is + 1.0) - 1)] =
            r2[3 * partialTrueCount];
        mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0
            [(3 * partialTrueCount +
              3 * mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(1) *
                  (static_cast<int32_T>(is + 1.0) - 1)) +
             1] = r2[3 * partialTrueCount + 1];
        mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0
            [(3 * partialTrueCount +
              3 * mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(1) *
                  (static_cast<int32_T>(is + 1.0) - 1)) +
             2] = r2[3 * partialTrueCount + 2];
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (IVP_MaJ_Mem.cpp)
