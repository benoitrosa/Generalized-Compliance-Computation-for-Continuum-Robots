//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Init_Mem.cpp
//
// Code generation for function 'Init_Mem'
//

// Include files
#include "Init_Mem.h"
#include "BVPProp.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCR_Shape_data.h"
#include "MemBVP.h"
#include "MemCJ.h"
#include "MemDM0.h"
#include "MemDM0DS.h"
#include "MemDN0.h"
#include "MemDN0DS.h"
#include "MemDP0.h"
#include "MemDP0DS.h"
#include "MemDR0.h"
#include "MemDR0DS.h"
#include "MemDT0.h"
#include "MemDTi.h"
#include "MemDTiDS.h"
#include "MemDU0.h"
#include "MemDUZi.h"
#include "MemDUZiDS.h"
#include "MemDerivPropagHigh.h"
#include "MemDerivPropagLow.h"
#include "MemY.h"
#include "MemYS.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtBCInfo emlrtBCI{ -1,       // iFirst
  -1,                                  // iLast
  57,                                  // lineNo
  49,                                  // colNo
  "ctcr_construc.vect_z",              // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtBCInfo b_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  56,                                  // lineNo
  16,                                  // colNo
  "mem_R0",                            // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtBCInfo c_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  57,                                  // lineNo
  14,                                  // colNo
  "mem_p0",                            // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtBCInfo d_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  79,                                  // lineNo
  59,                                  // colNo
  "ctcr_construc.vect_z",              // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtBCInfo e_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  79,                                  // lineNo
  15,                                  // colNo
  "mem_T",                             // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtRTEInfo b_emlrtRTEI{ 117,  // lineNo
  13,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m"                  // pName
};

static emlrtRTEInfo c_emlrtRTEI{ 118,  // lineNo
  18,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m"                  // pName
};

static emlrtRTEInfo d_emlrtRTEI{ 124,  // lineNo
  14,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m"                  // pName
};

static emlrtRTEInfo e_emlrtRTEI{ 187,  // lineNo
  13,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m"                  // pName
};

static emlrtRTEInfo f_emlrtRTEI{ 188,  // lineNo
  18,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m"                  // pName
};

static emlrtDCInfo emlrtDCI{ 249,      // lineNo
  23,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtBCInfo f_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  249,                                 // lineNo
  23,                                  // colNo
  "mem_dm0_dm0j0",                     // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtDCInfo b_emlrtDCI{ 48,     // lineNo
  29,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo c_emlrtDCI{ 48,     // lineNo
  29,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  4                                    // checkKind
};

static emlrtDCInfo d_emlrtDCI{ 48,     // lineNo
  33,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo e_emlrtDCI{ 48,     // lineNo
  33,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  4                                    // checkKind
};

static emlrtDCInfo f_emlrtDCI{ 49,     // lineNo
  29,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo g_emlrtDCI{ 49,     // lineNo
  33,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo h_emlrtDCI{ 50,     // lineNo
  31,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo i_emlrtDCI{ 51,     // lineNo
  31,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo j_emlrtDCI{ 52,     // lineNo
  33,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo k_emlrtDCI{ 53,     // lineNo
  31,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo l_emlrtDCI{ 62,     // lineNo
  25,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo m_emlrtDCI{ 62,     // lineNo
  29,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo n_emlrtDCI{ 63,     // lineNo
  25,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo o_emlrtDCI{ 63,     // lineNo
  29,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo p_emlrtDCI{ 64,     // lineNo
  27,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo q_emlrtDCI{ 65,     // lineNo
  27,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo r_emlrtDCI{ 66,     // lineNo
  29,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo s_emlrtDCI{ 67,     // lineNo
  27,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo t_emlrtDCI{ 72,     // lineNo
  31,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo u_emlrtDCI{ 75,     // lineNo
  31,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo v_emlrtDCI{ 75,     // lineNo
  35,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo w_emlrtDCI{ 78,     // lineNo
  33,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo x_emlrtDCI{ 84,     // lineNo
  77,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo y_emlrtDCI{ 104,    // lineNo
  38,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ab_emlrtDCI{ 104,   // lineNo
  42,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo bb_emlrtDCI{ 104,   // lineNo
  46,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo cb_emlrtDCI{ 105,   // lineNo
  38,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo db_emlrtDCI{ 105,   // lineNo
  44,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo eb_emlrtDCI{ 106,   // lineNo
  38,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo fb_emlrtDCI{ 106,   // lineNo
  44,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo gb_emlrtDCI{ 107,   // lineNo
  38,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo hb_emlrtDCI{ 107,   // lineNo
  42,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ib_emlrtDCI{ 107,   // lineNo
  46,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo jb_emlrtDCI{ 108,   // lineNo
  38,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo kb_emlrtDCI{ 108,   // lineNo
  42,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo lb_emlrtDCI{ 108,   // lineNo
  46,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo mb_emlrtDCI{ 109,   // lineNo
  38,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo nb_emlrtDCI{ 109,   // lineNo
  44,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ob_emlrtDCI{ 109,   // lineNo
  48,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo pb_emlrtDCI{ 110,   // lineNo
  38,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo qb_emlrtDCI{ 110,   // lineNo
  44,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo rb_emlrtDCI{ 110,   // lineNo
  48,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo sb_emlrtDCI{ 147,   // lineNo
  38,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo tb_emlrtDCI{ 147,   // lineNo
  42,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ub_emlrtDCI{ 147,   // lineNo
  46,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo vb_emlrtDCI{ 148,   // lineNo
  38,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo wb_emlrtDCI{ 148,   // lineNo
  44,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo xb_emlrtDCI{ 149,   // lineNo
  38,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo yb_emlrtDCI{ 149,   // lineNo
  44,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ac_emlrtDCI{ 150,   // lineNo
  38,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo bc_emlrtDCI{ 150,   // lineNo
  42,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo cc_emlrtDCI{ 150,   // lineNo
  46,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo dc_emlrtDCI{ 151,   // lineNo
  38,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ec_emlrtDCI{ 151,   // lineNo
  42,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo fc_emlrtDCI{ 151,   // lineNo
  46,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo gc_emlrtDCI{ 152,   // lineNo
  38,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo hc_emlrtDCI{ 152,   // lineNo
  44,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ic_emlrtDCI{ 152,   // lineNo
  48,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo jc_emlrtDCI{ 153,   // lineNo
  38,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo kc_emlrtDCI{ 153,   // lineNo
  44,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo lc_emlrtDCI{ 153,   // lineNo
  48,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo mc_emlrtDCI{ 176,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo nc_emlrtDCI{ 176,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo oc_emlrtDCI{ 176,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo pc_emlrtDCI{ 177,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo qc_emlrtDCI{ 177,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo rc_emlrtDCI{ 178,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo sc_emlrtDCI{ 178,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo tc_emlrtDCI{ 179,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo uc_emlrtDCI{ 179,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo vc_emlrtDCI{ 179,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo wc_emlrtDCI{ 180,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo xc_emlrtDCI{ 180,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo yc_emlrtDCI{ 180,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ad_emlrtDCI{ 181,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo bd_emlrtDCI{ 181,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo cd_emlrtDCI{ 181,   // lineNo
  47,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo dd_emlrtDCI{ 182,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ed_emlrtDCI{ 182,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo fd_emlrtDCI{ 182,   // lineNo
  47,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo gd_emlrtDCI{ 209,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo hd_emlrtDCI{ 209,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo id_emlrtDCI{ 209,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo jd_emlrtDCI{ 210,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo kd_emlrtDCI{ 210,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ld_emlrtDCI{ 211,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo md_emlrtDCI{ 211,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo nd_emlrtDCI{ 212,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo od_emlrtDCI{ 212,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo pd_emlrtDCI{ 212,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo qd_emlrtDCI{ 213,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo rd_emlrtDCI{ 213,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo sd_emlrtDCI{ 213,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo td_emlrtDCI{ 214,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ud_emlrtDCI{ 214,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo vd_emlrtDCI{ 214,   // lineNo
  47,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo wd_emlrtDCI{ 215,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo xd_emlrtDCI{ 215,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo yd_emlrtDCI{ 215,   // lineNo
  47,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ae_emlrtDCI{ 238,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo be_emlrtDCI{ 238,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ce_emlrtDCI{ 239,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo de_emlrtDCI{ 240,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ee_emlrtDCI{ 241,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo fe_emlrtDCI{ 241,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ge_emlrtDCI{ 242,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo he_emlrtDCI{ 242,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ie_emlrtDCI{ 243,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo je_emlrtDCI{ 243,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ke_emlrtDCI{ 244,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo le_emlrtDCI{ 244,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo me_emlrtDCI{ 270,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ne_emlrtDCI{ 270,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo oe_emlrtDCI{ 271,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo pe_emlrtDCI{ 272,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo qe_emlrtDCI{ 273,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo re_emlrtDCI{ 273,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo se_emlrtDCI{ 274,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo te_emlrtDCI{ 274,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ue_emlrtDCI{ 275,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ve_emlrtDCI{ 275,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo we_emlrtDCI{ 276,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo xe_emlrtDCI{ 276,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ye_emlrtDCI{ 297,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo af_emlrtDCI{ 297,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo bf_emlrtDCI{ 298,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo cf_emlrtDCI{ 299,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo df_emlrtDCI{ 300,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ef_emlrtDCI{ 300,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ff_emlrtDCI{ 301,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo gf_emlrtDCI{ 301,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo hf_emlrtDCI{ 302,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo if_emlrtDCI{ 302,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo jf_emlrtDCI{ 303,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo kf_emlrtDCI{ 303,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo lf_emlrtDCI{ 330,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo mf_emlrtDCI{ 330,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo nf_emlrtDCI{ 331,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo of_emlrtDCI{ 332,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo pf_emlrtDCI{ 333,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo qf_emlrtDCI{ 333,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo rf_emlrtDCI{ 334,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo sf_emlrtDCI{ 334,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo tf_emlrtDCI{ 335,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo uf_emlrtDCI{ 335,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo vf_emlrtDCI{ 336,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo wf_emlrtDCI{ 336,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo xf_emlrtDCI{ 359,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo yf_emlrtDCI{ 359,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ag_emlrtDCI{ 360,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo bg_emlrtDCI{ 361,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo cg_emlrtDCI{ 362,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo dg_emlrtDCI{ 362,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo eg_emlrtDCI{ 363,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo fg_emlrtDCI{ 363,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo gg_emlrtDCI{ 364,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo hg_emlrtDCI{ 364,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ig_emlrtDCI{ 365,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo jg_emlrtDCI{ 365,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo kg_emlrtDCI{ 388,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo lg_emlrtDCI{ 388,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo mg_emlrtDCI{ 389,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ng_emlrtDCI{ 390,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo og_emlrtDCI{ 391,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo pg_emlrtDCI{ 391,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo qg_emlrtDCI{ 392,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo rg_emlrtDCI{ 392,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo sg_emlrtDCI{ 393,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo tg_emlrtDCI{ 393,   // lineNo
  47,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ug_emlrtDCI{ 394,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo vg_emlrtDCI{ 394,   // lineNo
  47,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo wg_emlrtDCI{ 418,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo xg_emlrtDCI{ 418,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo yg_emlrtDCI{ 419,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ah_emlrtDCI{ 420,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo bh_emlrtDCI{ 421,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ch_emlrtDCI{ 421,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo dh_emlrtDCI{ 422,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo eh_emlrtDCI{ 422,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo fh_emlrtDCI{ 423,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo gh_emlrtDCI{ 423,   // lineNo
  47,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo hh_emlrtDCI{ 424,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ih_emlrtDCI{ 424,   // lineNo
  47,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo jh_emlrtDCI{ 439,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo kh_emlrtDCI{ 439,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo lh_emlrtDCI{ 440,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo mh_emlrtDCI{ 441,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo nh_emlrtDCI{ 442,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo oh_emlrtDCI{ 442,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ph_emlrtDCI{ 443,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo qh_emlrtDCI{ 443,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo rh_emlrtDCI{ 444,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo sh_emlrtDCI{ 444,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo th_emlrtDCI{ 445,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo uh_emlrtDCI{ 445,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo vh_emlrtDCI{ 462,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo wh_emlrtDCI{ 462,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo xh_emlrtDCI{ 463,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo yh_emlrtDCI{ 464,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ai_emlrtDCI{ 465,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo bi_emlrtDCI{ 465,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ci_emlrtDCI{ 466,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo di_emlrtDCI{ 466,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ei_emlrtDCI{ 467,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo fi_emlrtDCI{ 467,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo gi_emlrtDCI{ 468,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo hi_emlrtDCI{ 468,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ii_emlrtDCI{ 486,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ji_emlrtDCI{ 486,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ki_emlrtDCI{ 487,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo li_emlrtDCI{ 488,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo mi_emlrtDCI{ 489,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ni_emlrtDCI{ 489,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo oi_emlrtDCI{ 490,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo pi_emlrtDCI{ 490,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo qi_emlrtDCI{ 491,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ri_emlrtDCI{ 491,   // lineNo
  47,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo si_emlrtDCI{ 492,   // lineNo
  43,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ti_emlrtDCI{ 492,   // lineNo
  47,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ui_emlrtDCI{ 522,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo vi_emlrtDCI{ 522,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo wi_emlrtDCI{ 523,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo xi_emlrtDCI{ 523,   // lineNo
  49,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo yi_emlrtDCI{ 525,   // lineNo
  41,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo aj_emlrtDCI{ 525,   // lineNo
  52,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo bj_emlrtDCI{ 526,   // lineNo
  45,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo cj_emlrtDCI{ 526,   // lineNo
  51,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo dj_emlrtDCI{ 538,   // lineNo
  33,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ej_emlrtDCI{ 538,   // lineNo
  39,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo fj_emlrtDCI{ 539,   // lineNo
  29,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo gj_emlrtDCI{ 539,   // lineNo
  37,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo hj_emlrtDCI{ 38,    // lineNo
  17,                                  // colNo
  "MemY/MemY",                         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemY.m",                         // pName
  1                                    // checkKind
};

static emlrtDCInfo ij_emlrtDCI{ 39,    // lineNo
  17,                                  // colNo
  "MemY/MemY",                         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemY.m",                         // pName
  1                                    // checkKind
};

static emlrtDCInfo jj_emlrtDCI{ 40,    // lineNo
  17,                                  // colNo
  "MemY/MemY",                         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemY.m",                         // pName
  1                                    // checkKind
};

static emlrtDCInfo kj_emlrtDCI{ 41,    // lineNo
  17,                                  // colNo
  "MemY/MemY",                         // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemY.m",                         // pName
  1                                    // checkKind
};

static emlrtDCInfo lj_emlrtDCI{ 38,    // lineNo
  17,                                  // colNo
  "MemBVP/MemBVP",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemBVP.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo mj_emlrtDCI{ 38,    // lineNo
  17,                                  // colNo
  "MemYS/MemYS",                       // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemYS.m",                        // pName
  1                                    // checkKind
};

static emlrtDCInfo nj_emlrtDCI{ 39,    // lineNo
  17,                                  // colNo
  "MemYS/MemYS",                       // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemYS.m",                        // pName
  1                                    // checkKind
};

static emlrtDCInfo oj_emlrtDCI{ 40,    // lineNo
  17,                                  // colNo
  "MemYS/MemYS",                       // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemYS.m",                        // pName
  1                                    // checkKind
};

static emlrtDCInfo pj_emlrtDCI{ 41,    // lineNo
  17,                                  // colNo
  "MemYS/MemYS",                       // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemYS.m",                        // pName
  1                                    // checkKind
};

static emlrtDCInfo qj_emlrtDCI{ 42,    // lineNo
  17,                                  // colNo
  "MemYS/MemYS",                       // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemYS.m",                        // pName
  1                                    // checkKind
};

static emlrtDCInfo rj_emlrtDCI{ 43,    // lineNo
  17,                                  // colNo
  "MemYS/MemYS",                       // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemYS.m",                        // pName
  1                                    // checkKind
};

static emlrtDCInfo sj_emlrtDCI{ 40,    // lineNo
  17,                                  // colNo
  "MemBVP/MemBVP",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemBVP.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo tj_emlrtDCI{ 41,    // lineNo
  17,                                  // colNo
  "MemBVP/MemBVP",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemBVP.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo uj_emlrtDCI{ 42,    // lineNo
  17,                                  // colNo
  "MemBVP/MemBVP",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemBVP.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo vj_emlrtDCI{ 43,    // lineNo
  17,                                  // colNo
  "MemBVP/MemBVP",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemBVP.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo wj_emlrtDCI{ 104,   // lineNo
  5,                                   // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo xj_emlrtDCI{ 66,    // lineNo
  17,                                  // colNo
  "MemDUZi/MemDUZi",                   // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDUZi.m",                      // pName
  1                                    // checkKind
};

static emlrtDCInfo yj_emlrtDCI{ 67,    // lineNo
  17,                                  // colNo
  "MemDUZi/MemDUZi",                   // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDUZi.m",                      // pName
  1                                    // checkKind
};

static emlrtDCInfo ak_emlrtDCI{ 68,    // lineNo
  17,                                  // colNo
  "MemDUZi/MemDUZi",                   // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDUZi.m",                      // pName
  1                                    // checkKind
};

static emlrtDCInfo bk_emlrtDCI{ 108,   // lineNo
  5,                                   // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo ck_emlrtDCI{ 70,    // lineNo
  17,                                  // colNo
  "MemDUZi/MemDUZi",                   // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDUZi.m",                      // pName
  1                                    // checkKind
};

static emlrtDCInfo dk_emlrtDCI{ 71,    // lineNo
  17,                                  // colNo
  "MemDUZi/MemDUZi",                   // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDUZi.m",                      // pName
  1                                    // checkKind
};

static emlrtBCInfo g_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  118,                                 // lineNo
  30,                                  // colNo
  "vect_ind_iT",                       // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtBCInfo h_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  125,                                 // lineNo
  68,                                  // colNo
  "bvp_prop.IC_opt",                   // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtBCInfo i_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  125,                                 // lineNo
  81,                                  // colNo
  "vect_res",                          // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtDCInfo ek_emlrtDCI{ 125,   // lineNo
  81,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtBCInfo j_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  125,                                 // lineNo
  93,                                  // colNo
  "vect_ind_iT",                       // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtBCInfo k_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  125,                                 // lineNo
  23,                                  // colNo
  "mem_duzi_dbcj",                     // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtBCInfo l_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  125,                                 // lineNo
  26,                                  // colNo
  "mem_duzi_dbcj",                     // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtBCInfo m_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  125,                                 // lineNo
  29,                                  // colNo
  "mem_duzi_dbcj",                     // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtDCInfo fk_emlrtDCI{ 125,   // lineNo
  29,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtBCInfo n_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  119,                                 // lineNo
  28,                                  // colNo
  "mem_duzi_duzj0",                    // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtBCInfo o_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  119,                                 // lineNo
  30,                                  // colNo
  "mem_duzi_duzj0",                    // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtBCInfo p_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  119,                                 // lineNo
  32,                                  // colNo
  "mem_duzi_duzj0",                    // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtDCInfo gk_emlrtDCI{ 119,   // lineNo
  32,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo hk_emlrtDCI{ 67,    // lineNo
  17,                                  // colNo
  "MemDUZiDS/MemDUZiDS",               // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDUZiDS.m",                    // pName
  1                                    // checkKind
};

static emlrtDCInfo ik_emlrtDCI{ 68,    // lineNo
  17,                                  // colNo
  "MemDUZiDS/MemDUZiDS",               // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDUZiDS.m",                    // pName
  1                                    // checkKind
};

static emlrtDCInfo jk_emlrtDCI{ 69,    // lineNo
  17,                                  // colNo
  "MemDUZiDS/MemDUZiDS",               // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDUZiDS.m",                    // pName
  1                                    // checkKind
};

static emlrtDCInfo kk_emlrtDCI{ 70,    // lineNo
  17,                                  // colNo
  "MemDUZiDS/MemDUZiDS",               // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDUZiDS.m",                    // pName
  1                                    // checkKind
};

static emlrtDCInfo lk_emlrtDCI{ 71,    // lineNo
  17,                                  // colNo
  "MemDUZiDS/MemDUZiDS",               // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDUZiDS.m",                    // pName
  1                                    // checkKind
};

static emlrtDCInfo mk_emlrtDCI{ 72,    // lineNo
  17,                                  // colNo
  "MemDUZiDS/MemDUZiDS",               // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDUZiDS.m",                    // pName
  1                                    // checkKind
};

static emlrtDCInfo nk_emlrtDCI{ 73,    // lineNo
  17,                                  // colNo
  "MemDUZiDS/MemDUZiDS",               // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDUZiDS.m",                    // pName
  1                                    // checkKind
};

static emlrtDCInfo ok_emlrtDCI{ 176,   // lineNo
  5,                                   // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo pk_emlrtDCI{ 66,    // lineNo
  17,                                  // colNo
  "MemDTi/MemDTi",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDTi.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo qk_emlrtDCI{ 67,    // lineNo
  17,                                  // colNo
  "MemDTi/MemDTi",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDTi.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo rk_emlrtDCI{ 68,    // lineNo
  17,                                  // colNo
  "MemDTi/MemDTi",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDTi.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo sk_emlrtDCI{ 69,    // lineNo
  17,                                  // colNo
  "MemDTi/MemDTi",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDTi.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo tk_emlrtDCI{ 70,    // lineNo
  17,                                  // colNo
  "MemDTi/MemDTi",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDTi.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo uk_emlrtDCI{ 71,    // lineNo
  17,                                  // colNo
  "MemDTi/MemDTi",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDTi.m",                       // pName
  1                                    // checkKind
};

static emlrtBCInfo q_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  188,                                 // lineNo
  30,                                  // colNo
  "vect_ind_iT",                       // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtBCInfo r_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  189,                                 // lineNo
  44,                                  // colNo
  "vect_z",                            // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtBCInfo s_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  189,                                 // lineNo
  57,                                  // colNo
  "vect_z",                            // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtDCInfo vk_emlrtDCI{ 189,   // lineNo
  57,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtBCInfo t_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  189,                                 // lineNo
  27,                                  // colNo
  "mem_dti_duzj0",                     // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtBCInfo u_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  189,                                 // lineNo
  29,                                  // colNo
  "mem_dti_duzj0",                     // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtBCInfo v_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  189,                                 // lineNo
  31,                                  // colNo
  "mem_dti_duzj0",                     // aName
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  0                                    // checkKind
};

static emlrtDCInfo wk_emlrtDCI{ 189,   // lineNo
  31,                                  // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo xk_emlrtDCI{ 66,    // lineNo
  17,                                  // colNo
  "MemDTiDS/MemDTiDS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDTiDS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo yk_emlrtDCI{ 67,    // lineNo
  17,                                  // colNo
  "MemDTiDS/MemDTiDS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDTiDS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo al_emlrtDCI{ 68,    // lineNo
  17,                                  // colNo
  "MemDTiDS/MemDTiDS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDTiDS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo bl_emlrtDCI{ 69,    // lineNo
  17,                                  // colNo
  "MemDTiDS/MemDTiDS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDTiDS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo cl_emlrtDCI{ 70,    // lineNo
  17,                                  // colNo
  "MemDTiDS/MemDTiDS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDTiDS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo dl_emlrtDCI{ 71,    // lineNo
  17,                                  // colNo
  "MemDTiDS/MemDTiDS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDTiDS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo el_emlrtDCI{ 72,    // lineNo
  17,                                  // colNo
  "MemDTiDS/MemDTiDS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDTiDS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo fl_emlrtDCI{ 66,    // lineNo
  17,                                  // colNo
  "MemDM0/MemDM0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDM0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo gl_emlrtDCI{ 55,    // lineNo
  17,                                  // colNo
  "MemDerivPropagLow/MemDerivPropagLow",// fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m",            // pName
  1                                    // checkKind
};

static emlrtDCInfo hl_emlrtDCI{ 68,    // lineNo
  17,                                  // colNo
  "MemDM0/MemDM0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDM0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo il_emlrtDCI{ 69,    // lineNo
  17,                                  // colNo
  "MemDM0/MemDM0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDM0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo jl_emlrtDCI{ 70,    // lineNo
  17,                                  // colNo
  "MemDM0/MemDM0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDM0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo kl_emlrtDCI{ 71,    // lineNo
  17,                                  // colNo
  "MemDM0/MemDM0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDM0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo ll_emlrtDCI{ 72,    // lineNo
  17,                                  // colNo
  "MemDM0/MemDM0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDM0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo ml_emlrtDCI{ 67,    // lineNo
  17,                                  // colNo
  "MemDM0DS/MemDM0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDM0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo nl_emlrtDCI{ 68,    // lineNo
  17,                                  // colNo
  "MemDM0DS/MemDM0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDM0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo ol_emlrtDCI{ 69,    // lineNo
  17,                                  // colNo
  "MemDM0DS/MemDM0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDM0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo pl_emlrtDCI{ 70,    // lineNo
  17,                                  // colNo
  "MemDM0DS/MemDM0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDM0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo ql_emlrtDCI{ 71,    // lineNo
  17,                                  // colNo
  "MemDM0DS/MemDM0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDM0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo rl_emlrtDCI{ 72,    // lineNo
  17,                                  // colNo
  "MemDM0DS/MemDM0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDM0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo sl_emlrtDCI{ 73,    // lineNo
  17,                                  // colNo
  "MemDM0DS/MemDM0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDM0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo tl_emlrtDCI{ 66,    // lineNo
  17,                                  // colNo
  "MemDN0/MemDN0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDN0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo ul_emlrtDCI{ 67,    // lineNo
  17,                                  // colNo
  "MemDN0/MemDN0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDN0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo vl_emlrtDCI{ 57,    // lineNo
  17,                                  // colNo
  "MemDerivPropagLow/MemDerivPropagLow",// fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m",            // pName
  1                                    // checkKind
};

static emlrtDCInfo wl_emlrtDCI{ 69,    // lineNo
  17,                                  // colNo
  "MemDN0/MemDN0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDN0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo xl_emlrtDCI{ 70,    // lineNo
  17,                                  // colNo
  "MemDN0/MemDN0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDN0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo yl_emlrtDCI{ 71,    // lineNo
  17,                                  // colNo
  "MemDN0/MemDN0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDN0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo am_emlrtDCI{ 72,    // lineNo
  17,                                  // colNo
  "MemDN0/MemDN0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDN0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo bm_emlrtDCI{ 67,    // lineNo
  17,                                  // colNo
  "MemDN0DS/MemDN0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDN0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo cm_emlrtDCI{ 68,    // lineNo
  17,                                  // colNo
  "MemDN0DS/MemDN0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDN0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo dm_emlrtDCI{ 69,    // lineNo
  17,                                  // colNo
  "MemDN0DS/MemDN0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDN0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo em_emlrtDCI{ 70,    // lineNo
  17,                                  // colNo
  "MemDN0DS/MemDN0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDN0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo fm_emlrtDCI{ 71,    // lineNo
  17,                                  // colNo
  "MemDN0DS/MemDN0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDN0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo gm_emlrtDCI{ 72,    // lineNo
  17,                                  // colNo
  "MemDN0DS/MemDN0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDN0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo hm_emlrtDCI{ 73,    // lineNo
  17,                                  // colNo
  "MemDN0DS/MemDN0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDN0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo im_emlrtDCI{ 65,    // lineNo
  17,                                  // colNo
  "MemDU0/MemDU0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDU0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo jm_emlrtDCI{ 66,    // lineNo
  17,                                  // colNo
  "MemDU0/MemDU0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDU0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo km_emlrtDCI{ 67,    // lineNo
  17,                                  // colNo
  "MemDU0/MemDU0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDU0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo lm_emlrtDCI{ 68,    // lineNo
  17,                                  // colNo
  "MemDU0/MemDU0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDU0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo mm_emlrtDCI{ 69,    // lineNo
  17,                                  // colNo
  "MemDU0/MemDU0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDU0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo nm_emlrtDCI{ 70,    // lineNo
  17,                                  // colNo
  "MemDU0/MemDU0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDU0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo om_emlrtDCI{ 71,    // lineNo
  17,                                  // colNo
  "MemDU0/MemDU0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDU0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo pm_emlrtDCI{ 69,    // lineNo
  17,                                  // colNo
  "MemDR0/MemDR0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDR0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo qm_emlrtDCI{ 70,    // lineNo
  17,                                  // colNo
  "MemDR0/MemDR0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDR0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo rm_emlrtDCI{ 71,    // lineNo
  17,                                  // colNo
  "MemDR0/MemDR0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDR0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo sm_emlrtDCI{ 72,    // lineNo
  17,                                  // colNo
  "MemDR0/MemDR0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDR0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo tm_emlrtDCI{ 73,    // lineNo
  17,                                  // colNo
  "MemDR0/MemDR0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDR0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo um_emlrtDCI{ 74,    // lineNo
  17,                                  // colNo
  "MemDR0/MemDR0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDR0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo vm_emlrtDCI{ 75,    // lineNo
  17,                                  // colNo
  "MemDR0/MemDR0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDR0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo wm_emlrtDCI{ 69,    // lineNo
  17,                                  // colNo
  "MemDR0DS/MemDR0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDR0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo xm_emlrtDCI{ 70,    // lineNo
  17,                                  // colNo
  "MemDR0DS/MemDR0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDR0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo ym_emlrtDCI{ 71,    // lineNo
  17,                                  // colNo
  "MemDR0DS/MemDR0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDR0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo an_emlrtDCI{ 72,    // lineNo
  17,                                  // colNo
  "MemDR0DS/MemDR0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDR0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo bn_emlrtDCI{ 73,    // lineNo
  17,                                  // colNo
  "MemDR0DS/MemDR0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDR0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo cn_emlrtDCI{ 74,    // lineNo
  17,                                  // colNo
  "MemDR0DS/MemDR0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDR0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo dn_emlrtDCI{ 75,    // lineNo
  17,                                  // colNo
  "MemDR0DS/MemDR0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDR0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo en_emlrtDCI{ 66,    // lineNo
  17,                                  // colNo
  "MemDP0/MemDP0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDP0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo fn_emlrtDCI{ 67,    // lineNo
  17,                                  // colNo
  "MemDP0/MemDP0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDP0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo gn_emlrtDCI{ 68,    // lineNo
  17,                                  // colNo
  "MemDP0/MemDP0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDP0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo hn_emlrtDCI{ 69,    // lineNo
  17,                                  // colNo
  "MemDP0/MemDP0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDP0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo in_emlrtDCI{ 70,    // lineNo
  17,                                  // colNo
  "MemDP0/MemDP0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDP0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo jn_emlrtDCI{ 71,    // lineNo
  17,                                  // colNo
  "MemDP0/MemDP0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDP0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo kn_emlrtDCI{ 72,    // lineNo
  17,                                  // colNo
  "MemDP0/MemDP0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDP0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo ln_emlrtDCI{ 66,    // lineNo
  17,                                  // colNo
  "MemDP0DS/MemDP0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDP0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo mn_emlrtDCI{ 67,    // lineNo
  17,                                  // colNo
  "MemDP0DS/MemDP0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDP0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo nn_emlrtDCI{ 68,    // lineNo
  17,                                  // colNo
  "MemDP0DS/MemDP0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDP0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo on_emlrtDCI{ 69,    // lineNo
  17,                                  // colNo
  "MemDP0DS/MemDP0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDP0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo pn_emlrtDCI{ 70,    // lineNo
  17,                                  // colNo
  "MemDP0DS/MemDP0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDP0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo qn_emlrtDCI{ 71,    // lineNo
  17,                                  // colNo
  "MemDP0DS/MemDP0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDP0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo rn_emlrtDCI{ 72,    // lineNo
  17,                                  // colNo
  "MemDP0DS/MemDP0DS",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDP0DS.m",                     // pName
  1                                    // checkKind
};

static emlrtDCInfo sn_emlrtDCI{ 71,    // lineNo
  17,                                  // colNo
  "MemDT0/MemDT0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDT0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo tn_emlrtDCI{ 72,    // lineNo
  17,                                  // colNo
  "MemDT0/MemDT0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDT0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo un_emlrtDCI{ 73,    // lineNo
  17,                                  // colNo
  "MemDT0/MemDT0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDT0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo vn_emlrtDCI{ 74,    // lineNo
  17,                                  // colNo
  "MemDT0/MemDT0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDT0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo wn_emlrtDCI{ 75,    // lineNo
  17,                                  // colNo
  "MemDT0/MemDT0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDT0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo xn_emlrtDCI{ 76,    // lineNo
  17,                                  // colNo
  "MemDT0/MemDT0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDT0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo yn_emlrtDCI{ 77,    // lineNo
  17,                                  // colNo
  "MemDT0/MemDT0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDT0.m",                       // pName
  1                                    // checkKind
};

static emlrtDCInfo ao_emlrtDCI{ 57,    // lineNo
  17,                                  // colNo
  "MemDerivPropagHigh/MemDerivPropagHigh",// fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Class/MemDerivPropagHigh.m",    // pName
  1                                    // checkKind
};

static emlrtDCInfo bo_emlrtDCI{ 58,    // lineNo
  17,                                  // colNo
  "MemDerivPropagHigh/MemDerivPropagHigh",// fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Class/MemDerivPropagHigh.m",    // pName
  1                                    // checkKind
};

static emlrtDCInfo co_emlrtDCI{ 60,    // lineNo
  17,                                  // colNo
  "MemDerivPropagHigh/MemDerivPropagHigh",// fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Class/MemDerivPropagHigh.m",    // pName
  1                                    // checkKind
};

static emlrtDCInfo do_emlrtDCI{ 61,    // lineNo
  17,                                  // colNo
  "MemDerivPropagHigh/MemDerivPropagHigh",// fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Class/MemDerivPropagHigh.m",    // pName
  1                                    // checkKind
};

static emlrtDCInfo eo_emlrtDCI{ 41,    // lineNo
  17,                                  // colNo
  "MemCJ/MemCJ",                       // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Class/MemCJ.m",                 // pName
  1                                    // checkKind
};

static emlrtDCInfo fo_emlrtDCI{ 42,    // lineNo
  17,                                  // colNo
  "MemCJ/MemCJ",                       // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Class/MemCJ.m",                 // pName
  1                                    // checkKind
};

static emlrtRTEInfo ib_emlrtRTEI{ 38,  // lineNo
  17,                                  // colNo
  "MemBVP",                            // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemBVP.m"                        // pName
};

static emlrtRTEInfo jb_emlrtRTEI{ 39,  // lineNo
  17,                                  // colNo
  "MemBVP",                            // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemBVP.m"                        // pName
};

static emlrtRTEInfo kb_emlrtRTEI{ 40,  // lineNo
  17,                                  // colNo
  "MemBVP",                            // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemBVP.m"                        // pName
};

static emlrtRTEInfo lb_emlrtRTEI{ 41,  // lineNo
  17,                                  // colNo
  "MemBVP",                            // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemBVP.m"                        // pName
};

static emlrtRTEInfo mb_emlrtRTEI{ 42,  // lineNo
  17,                                  // colNo
  "MemBVP",                            // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemBVP.m"                        // pName
};

static emlrtRTEInfo nb_emlrtRTEI{ 43,  // lineNo
  17,                                  // colNo
  "MemBVP",                            // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemBVP.m"                        // pName
};

static emlrtRTEInfo ob_emlrtRTEI{ 104, // lineNo
  5,                                   // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m"                  // pName
};

static emlrtRTEInfo pb_emlrtRTEI{ 61,  // lineNo
  17,                                  // colNo
  "MemDerivPropagLow",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m"             // pName
};

static emlrtRTEInfo qb_emlrtRTEI{ 108, // lineNo
  5,                                   // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m"                  // pName
};

static emlrtRTEInfo rb_emlrtRTEI{ 62,  // lineNo
  17,                                  // colNo
  "MemDerivPropagLow",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m"             // pName
};

static emlrtRTEInfo sb_emlrtRTEI{ 176, // lineNo
  5,                                   // colNo
  "Init_Mem",                          // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
  "ctions/Init_Mem.m"                  // pName
};

static emlrtRTEInfo tb_emlrtRTEI{ 59,  // lineNo
  17,                                  // colNo
  "MemDerivPropagLow",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m"             // pName
};

static emlrtRTEInfo ub_emlrtRTEI{ 60,  // lineNo
  17,                                  // colNo
  "MemDerivPropagLow",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m"             // pName
};

static emlrtRTEInfo vb_emlrtRTEI{ 55,  // lineNo
  17,                                  // colNo
  "MemDerivPropagLow",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m"             // pName
};

static emlrtRTEInfo wb_emlrtRTEI{ 56,  // lineNo
  17,                                  // colNo
  "MemDerivPropagLow",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m"             // pName
};

static emlrtRTEInfo xb_emlrtRTEI{ 57,  // lineNo
  17,                                  // colNo
  "MemDerivPropagLow",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m"             // pName
};

static emlrtRTEInfo yb_emlrtRTEI{ 58,  // lineNo
  17,                                  // colNo
  "MemDerivPropagLow",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m"             // pName
};

static emlrtRTEInfo ac_emlrtRTEI{ 54,  // lineNo
  17,                                  // colNo
  "MemDerivPropagLow",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m"             // pName
};

static emlrtRTEInfo bc_emlrtRTEI{ 63,  // lineNo
  17,                                  // colNo
  "MemDerivPropagLow",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m"             // pName
};

static emlrtRTEInfo cc_emlrtRTEI{ 64,  // lineNo
  17,                                  // colNo
  "MemDerivPropagLow",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m"             // pName
};

static emlrtRTEInfo dc_emlrtRTEI{ 65,  // lineNo
  17,                                  // colNo
  "MemDerivPropagLow",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m"             // pName
};

static emlrtRTEInfo ec_emlrtRTEI{ 66,  // lineNo
  17,                                  // colNo
  "MemDerivPropagLow",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m"             // pName
};

static emlrtRTEInfo fc_emlrtRTEI{ 67,  // lineNo
  17,                                  // colNo
  "MemDerivPropagLow",                 // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
  "ss/MemDerivPropagLow.m"             // pName
};

static emlrtRTEInfo gc_emlrtRTEI{ 57,  // lineNo
  17,                                  // colNo
  "MemDerivPropagHigh",                // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Class/MemDerivPropagHigh.m"     // pName
};

static emlrtRTEInfo hc_emlrtRTEI{ 58,  // lineNo
  17,                                  // colNo
  "MemDerivPropagHigh",                // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Class/MemDerivPropagHigh.m"     // pName
};

static emlrtRTEInfo ic_emlrtRTEI{ 60,  // lineNo
  17,                                  // colNo
  "MemDerivPropagHigh",                // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Class/MemDerivPropagHigh.m"     // pName
};

static emlrtRTEInfo jc_emlrtRTEI{ 61,  // lineNo
  17,                                  // colNo
  "MemDerivPropagHigh",                // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Class/MemDerivPropagHigh.m"     // pName
};

static emlrtRTEInfo kc_emlrtRTEI{ 41,  // lineNo
  17,                                  // colNo
  "MemCJ",                             // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Class/MemCJ.m"                  // pName
};

static emlrtRTEInfo lc_emlrtRTEI{ 42,  // lineNo
  17,                                  // colNo
  "MemCJ",                             // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Class/MemCJ.m"                  // pName
};

// Function Definitions
void Init_Mem(const emlrtStack &sp, const CTCRConstruc *ctcr_construc, const
              CTCRCarac *ctcr_carac, const BVPProp *bvp_prop, MemBVP *mem_bvp,
              MemDerivPropagLow *mem_deriv_propag_low, MemDerivPropagHigh
              *mem_deriv_propag_high, MemCJ *mem_CJ)
{
  static const int8_T b_iv[9]{ 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  real_T b_is;
  real_T d;
  real_T ind_origin;
  int32_T b_loop_ub_tmp;
  int32_T c_loop_ub_tmp;
  int32_T d_loop_ub_tmp;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T is;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  boolean_T b;

  //  ======================================================================= %
  //
  //  This function initializes the memories variables for the state vector and the partial derivatives
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  ctcr_construc         : (class) Robot features related to the model settings
  //  ctcr_carac            : (class) Robot features
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  mem_bvp               : (class) Memory of the BVP variables
  //  mem_deriv_propag_low  : (class) Memory of the low-level derivatives
  //  mem_deriv_propag_high : (class) Memory of the high-level partial derivatives
  //  mem_CJ                : (class) Memory of the Generalized Compliance Matrix and the Joint Jacobian
  //
  //  ======================================================================= %
  //  ========================================================== %
  //  ================== Getting input values ================== %
  ind_origin = ctcr_construc->ind_origin;

  //  ========================================================== %
  //  ================= Initialization mem_bvp ================= %
  //  y(s) memory initialization
  if (!(ctcr_carac->nbT >= 0.0)) {
    emlrtNonNegativeCheckR2012b(ctcr_carac->nbT, &c_emlrtDCI, (emlrtConstCTX)&sp);
  }

  i = static_cast<int32_T>(muDoubleScalarFloor(ctcr_carac->nbT));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &b_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_y.mem_t.set_size(&ib_emlrtRTEI, &sp, static_cast<int32_T>
    (ctcr_carac->nbT), mem_bvp->mem_y.mem_t.size(1));
  if (!(ctcr_construc->nbP >= 0.0)) {
    emlrtNonNegativeCheckR2012b(ctcr_construc->nbP, &e_emlrtDCI, (emlrtConstCTX)
      &sp);
  }

  i1 = static_cast<int32_T>(muDoubleScalarFloor(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &d_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_y.mem_t.set_size(&ib_emlrtRTEI, &sp, mem_bvp->mem_y.mem_t.size(0),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &hj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &hj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub_tmp = static_cast<int32_T>(ctcr_carac->nbT) * static_cast<int32_T>
    (ctcr_construc->nbP);
  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_bvp->mem_y.mem_t[i2] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &f_emlrtDCI, (emlrtConstCTX)&sp);
  }

  i2 = static_cast<int32_T>(ctcr_carac->nbT);
  mem_bvp->mem_y.mem_uz.set_size(&ib_emlrtRTEI, &sp, static_cast<int32_T>
    (ctcr_carac->nbT), mem_bvp->mem_y.mem_uz.size(1));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &g_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_y.mem_uz.set_size(&ib_emlrtRTEI, &sp, mem_bvp->mem_y.mem_uz.size
    (0), static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ij_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ij_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < loop_ub_tmp; i3++) {
    mem_bvp->mem_y.mem_uz[i3] = 0.0;
  }

  mem_bvp->mem_y.mem_m0.set_size(&ib_emlrtRTEI, &sp, 3,
    mem_bvp->mem_y.mem_m0.size(1));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &h_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_y.mem_m0.set_size(&ib_emlrtRTEI, &sp, mem_bvp->mem_y.mem_m0.size
    (0), static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &jj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  b_loop_ub_tmp = 3 * static_cast<int32_T>(ctcr_construc->nbP);
  for (i3 = 0; i3 < b_loop_ub_tmp; i3++) {
    mem_bvp->mem_y.mem_m0[i3] = 0.0;
  }

  mem_bvp->mem_y.mem_n0.set_size(&ib_emlrtRTEI, &sp, 3,
    mem_bvp->mem_y.mem_n0.size(1));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &i_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_y.mem_n0.set_size(&ib_emlrtRTEI, &sp, mem_bvp->mem_y.mem_n0.size
    (0), static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &kj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < b_loop_ub_tmp; i3++) {
    mem_bvp->mem_y.mem_n0[i3] = 0.0;
  }

  mem_bvp->mem_y.mem_R0.set_size(&ib_emlrtRTEI, &sp, 3, 3,
    mem_bvp->mem_y.mem_R0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &j_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_y.mem_R0.set_size(&ib_emlrtRTEI, &sp, mem_bvp->mem_y.mem_R0.size
    (0), mem_bvp->mem_y.mem_R0.size(1), static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &lj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  c_loop_ub_tmp = 9 * static_cast<int32_T>(ctcr_construc->nbP);
  for (i3 = 0; i3 < c_loop_ub_tmp; i3++) {
    mem_bvp->mem_y.mem_R0[i3] = 0.0;
  }

  mem_bvp->mem_y.mem_p0.set_size(&ib_emlrtRTEI, &sp, 3,
    mem_bvp->mem_y.mem_p0.size(1));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &k_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_y.mem_p0.set_size(&ib_emlrtRTEI, &sp, mem_bvp->mem_y.mem_p0.size
    (0), static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &lj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < b_loop_ub_tmp; i3++) {
    mem_bvp->mem_y.mem_p0[i3] = 0.0;
  }

  //  ====== Non-zero initialization
  if (static_cast<int32_T>(ctcr_construc->nbP) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(ctcr_construc->nbP),
      &b_emlrtBCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < 3; i3++) {
    mem_bvp->mem_y.mem_R0[3 * i3] = b_iv[3 * i3];
    mem_bvp->mem_y.mem_R0[3 * i3 + 1] = b_iv[3 * i3 + 1];
    mem_bvp->mem_y.mem_R0[3 * i3 + 2] = b_iv[3 * i3 + 2];
  }

  if (static_cast<int32_T>(ctcr_construc->nbP) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(ctcr_construc->nbP),
      &c_emlrtBCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->vect_z.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, ctcr_construc->vect_z.size(1), &emlrtBCI,
      (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_y.mem_p0[0] = 0.0;
  mem_bvp->mem_y.mem_p0[1] = 0.0;
  mem_bvp->mem_y.mem_p0[2] = ctcr_construc->vect_z[0];

  //  ====== Constructor ======
  //  d_y_ds(s) memory initialization
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &l_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_ys.mem_ts.set_size(&jb_emlrtRTEI, &sp, static_cast<int32_T>
    (ctcr_carac->nbT), mem_bvp->mem_ys.mem_ts.size(1));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &m_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_ys.mem_ts.set_size(&jb_emlrtRTEI, &sp,
    mem_bvp->mem_ys.mem_ts.size(0), static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &mj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &mj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < loop_ub_tmp; i3++) {
    mem_bvp->mem_ys.mem_ts[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &n_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_ys.mem_uzs.set_size(&jb_emlrtRTEI, &sp, static_cast<int32_T>
    (ctcr_carac->nbT), mem_bvp->mem_ys.mem_uzs.size(1));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &o_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_ys.mem_uzs.set_size(&jb_emlrtRTEI, &sp,
    mem_bvp->mem_ys.mem_uzs.size(0), static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &nj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &nj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < loop_ub_tmp; i3++) {
    mem_bvp->mem_ys.mem_uzs[i3] = 0.0;
  }

  mem_bvp->mem_ys.mem_m0s.set_size(&jb_emlrtRTEI, &sp, 3,
    mem_bvp->mem_ys.mem_m0s.size(1));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &p_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_ys.mem_m0s.set_size(&jb_emlrtRTEI, &sp,
    mem_bvp->mem_ys.mem_m0s.size(0), static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &oj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < b_loop_ub_tmp; i3++) {
    mem_bvp->mem_ys.mem_m0s[i3] = 0.0;
  }

  mem_bvp->mem_ys.mem_n0s.set_size(&jb_emlrtRTEI, &sp, 3,
    mem_bvp->mem_ys.mem_n0s.size(1));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &q_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_ys.mem_n0s.set_size(&jb_emlrtRTEI, &sp,
    mem_bvp->mem_ys.mem_n0s.size(0), static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &pj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < b_loop_ub_tmp; i3++) {
    mem_bvp->mem_ys.mem_n0s[i3] = 0.0;
  }

  mem_bvp->mem_ys.mem_R0s.set_size(&jb_emlrtRTEI, &sp, 3, 3,
    mem_bvp->mem_ys.mem_R0s.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &r_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_ys.mem_R0s.set_size(&jb_emlrtRTEI, &sp,
    mem_bvp->mem_ys.mem_R0s.size(0), mem_bvp->mem_ys.mem_R0s.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &qj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < c_loop_ub_tmp; i3++) {
    mem_bvp->mem_ys.mem_R0s[i3] = 0.0;
  }

  mem_bvp->mem_ys.mem_p0s.set_size(&jb_emlrtRTEI, &sp, 3,
    mem_bvp->mem_ys.mem_p0s.size(1));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &s_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_ys.mem_p0s.set_size(&jb_emlrtRTEI, &sp,
    mem_bvp->mem_ys.mem_p0s.size(0), static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &rj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < b_loop_ub_tmp; i3++) {
    mem_bvp->mem_ys.mem_p0s[i3] = 0.0;
  }

  //  ====== Constructor ======
  //  u0(s) memory initialization
  mem_bvp->mem_u0.set_size(&kb_emlrtRTEI, &sp, 3, mem_bvp->mem_u0.size(1));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &t_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_u0.set_size(&kb_emlrtRTEI, &sp, mem_bvp->mem_u0.size(0),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &sj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < b_loop_ub_tmp; i3++) {
    mem_bvp->mem_u0[i3] = 0.0;
  }

  //  uixy memory initialization
  mem_bvp->mem_uixy.set_size(&lb_emlrtRTEI, &sp, 2, mem_bvp->mem_uixy.size(1),
    mem_bvp->mem_uixy.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &u_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_uixy.set_size(&lb_emlrtRTEI, &sp, mem_bvp->mem_uixy.size(0),
    static_cast<int32_T>(ctcr_carac->nbT), mem_bvp->mem_uixy.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &v_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_uixy.set_size(&lb_emlrtRTEI, &sp, mem_bvp->mem_uixy.size(0),
    mem_bvp->mem_uixy.size(1), static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &tj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &tj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub = (static_cast<int32_T>(ctcr_carac->nbT) << 1) * static_cast<int32_T>
    (ctcr_construc->nbP);
  for (i3 = 0; i3 < loop_ub; i3++) {
    mem_bvp->mem_uixy[i3] = 0.0;
  }

  //  B0(0)Ts memory initialization
  mem_bvp->mem_T.set_size(&mb_emlrtRTEI, &sp, 4, 4, mem_bvp->mem_T.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &w_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_T.set_size(&mb_emlrtRTEI, &sp, mem_bvp->mem_T.size(0),
    mem_bvp->mem_T.size(1), static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &uj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub = static_cast<int32_T>(ctcr_construc->nbP) << 4;
  for (i3 = 0; i3 < loop_ub; i3++) {
    mem_bvp->mem_T[i3] = 0.0;
  }

  if (static_cast<int32_T>(ctcr_construc->nbP) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(ctcr_construc->nbP),
      &e_emlrtBCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->vect_z.size(1) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, ctcr_construc->vect_z.size(1),
      &d_emlrtBCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < 3; i3++) {
    mem_bvp->mem_T[4 * i3] = b_iv[3 * i3];
    mem_bvp->mem_T[4 * i3 + 1] = b_iv[3 * i3 + 1];
    mem_bvp->mem_T[4 * i3 + 2] = b_iv[3 * i3 + 2];
  }

  mem_bvp->mem_T[12] = 0.0;
  mem_bvp->mem_T[13] = 0.0;
  mem_bvp->mem_T[14] = ctcr_construc->vect_z[0];
  mem_bvp->mem_T[3] = 0.0;
  mem_bvp->mem_T[7] = 0.0;
  mem_bvp->mem_T[11] = 0.0;
  mem_bvp->mem_T[15] = 1.0;

  //  ========================================================== %
  //  ================== Setting output values ================= %
  mem_bvp->mem_inv_sum_Ki.set_size(&nb_emlrtRTEI, &sp, 3, 3,
    mem_bvp->mem_inv_sum_Ki.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &x_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_bvp->mem_inv_sum_Ki.set_size(&nb_emlrtRTEI, &sp,
    mem_bvp->mem_inv_sum_Ki.size(0), mem_bvp->mem_inv_sum_Ki.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &vj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < c_loop_ub_tmp; i3++) {
    mem_bvp->mem_inv_sum_Ki[i3] = 0.0;
  }

  //  ====== Constructor ======
  //  ===================================================================== %
  //  ======================== mem_deriv_propag_low ======================= %
  //  ===================================================================== %
  //  ============================== mem_duzi ============================= %
  //  ===================================================================== %
  //  ====== Zero initialization
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &y_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_duzj0.set_size(&ob_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1),
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ab_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_duzj0.set_size(&ob_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &bb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_duzj0.set_size(&ob_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0),
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &wj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &wj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub_tmp = static_cast<int32_T>(ctcr_carac->nbT) * static_cast<int32_T>
    (ctcr_carac->nbT) * static_cast<int32_T>(ctcr_construc->nbP);
  for (i3 = 0; i3 < loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &cb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.set_size(&pb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &db_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.set_size(&pb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(0),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &xj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &xj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  b_loop_ub_tmp = static_cast<int32_T>(ctcr_carac->nbT) * 3 *
    static_cast<int32_T>(ctcr_construc->nbP);
  for (i3 = 0; i3 < b_loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_duzi.mem_duzi_dm0j0[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &eb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.set_size(&pb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &fb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.set_size(&pb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(0),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &yj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &yj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < b_loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_duzi.mem_duzi_dn0j0[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &gb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.set_size(&pb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(1),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &hb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.set_size(&pb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ib_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.set_size(&pb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ak_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ak_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &jb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.set_size(&qb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &kb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.set_size(&qb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &lb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.set_size(&qb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &bk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &bk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &mb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.set_size(&pb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &nb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.set_size(&pb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ob_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.set_size(&pb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(1),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ck_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ck_emlrtDCI, (emlrtConstCTX)&sp);
  }

  d_loop_ub_tmp = b_loop_ub_tmp * static_cast<int32_T>(ctcr_construc->nbP);
  for (i3 = 0; i3 < d_loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &pb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.set_size(&pb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &qb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.set_size(&pb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &rb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.set_size(&pb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(1),
    mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &dk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &dk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < d_loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0[i3] = 0.0;
  }

  //  ====== Non-zero initialization
  //  === mem_duzi_duzj0
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
    static_cast<int32_T>(ctcr_carac->nbT), &b_emlrtRTEI, (emlrtConstCTX)&sp);
  for (loop_ub = 0; loop_ub < i2; loop_ub++) {
    if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
         static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
         ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
        (loop_ub) + 1U), 1, ctcr_construc->vect_ind_iT.size(0), &g_emlrtBCI,
        (emlrtConstCTX)&sp);
    }

    d = ctcr_construc->vect_ind_iT[loop_ub];
    i3 = static_cast<int32_T>(ind_origin + (1.0 - d));
    emlrtForLoopVectorCheckR2021a(d, 1.0, ind_origin, mxDOUBLE_CLASS, i3,
      &c_emlrtRTEI, (emlrtConstCTX)&sp);
    for (is = 0; is < i3; is++) {
      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0),
          &n_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1),
          &o_emlrtBCI, (emlrtConstCTX)&sp);
      }

      b_is = d + static_cast<real_T>(is);
      if (b_is != static_cast<int32_T>(muDoubleScalarFloor(b_is))) {
        emlrtIntegerCheckR2012b(b_is, &gk_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(b_is) < 1) || (static_cast<int32_T>(b_is) >
           mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_is), 1,
          mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2), &p_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      mem_deriv_propag_low->mem_dti.mem_dti_duzj0[(loop_ub +
        mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0) * loop_ub) +
        mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0) *
        mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1) *
        (static_cast<int32_T>(b_is) - 1)] = 1.0;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }

  //  === mem_duzi_dbcj
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
    static_cast<int32_T>(ctcr_carac->nbT), &d_emlrtRTEI, (emlrtConstCTX)&sp);
  for (loop_ub = 0; loop_ub < i2; loop_ub++) {
    if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
         static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
         bvp_prop->IC_opt.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
        (loop_ub) + 1U), 1, bvp_prop->IC_opt.size(0), &h_emlrtBCI,
        (emlrtConstCTX)&sp);
    }

    b = ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
          static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
          ctcr_construc->vect_ind_iT.size(0)));
    if (b) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
        (loop_ub) + 1U), 1, ctcr_construc->vect_ind_iT.size(0), &j_emlrtBCI,
        (emlrtConstCTX)&sp);
    }

    d = ctcr_construc->vect_ind_iT[loop_ub];
    b_is = static_cast<int32_T>(muDoubleScalarFloor(d));
    if (d != b_is) {
      emlrtIntegerCheckR2012b(d, &ek_emlrtDCI, (emlrtConstCTX)&sp);
    }

    if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
         ctcr_construc->vect_res.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
        ctcr_construc->vect_res.size(1), &i_emlrtBCI, (emlrtConstCTX)&sp);
    }

    if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
         static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
        (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0),
        &k_emlrtBCI, (emlrtConstCTX)&sp);
    }

    if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
         static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
        (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1),
        &l_emlrtBCI, (emlrtConstCTX)&sp);
    }

    if (d != b_is) {
      emlrtIntegerCheckR2012b(d, &fk_emlrtDCI, (emlrtConstCTX)&sp);
    }

    if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
         mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
        mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2), &m_emlrtBCI,
        (emlrtConstCTX)&sp);
    }

    mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj[(loop_ub +
      mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) * loop_ub) +
      mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) *
      mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1) *
      (static_cast<int32_T>(d) - 1)] = -bvp_prop->IC_opt[loop_ub] /
      ctcr_construc->vect_res[static_cast<int32_T>(d) - 1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }

  //  ====== Final initialization
  //  ====== Constructor ======
  mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0.set_size(&pb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0),
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1),
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2));
  loop_ub = mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0) *
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1) *
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2);
  for (i3 = 0; i3 < loop_ub; i3++) {
    mem_deriv_propag_low->mem_duzi.mem_duzi_duzj0[i3] =
      mem_deriv_propag_low->mem_dti.mem_dti_duzj0[i3];
  }

  //  ===================================================================== %
  //  ============================ mem_duzi_ds ============================ %
  //  ===================================================================== %
  //  ====== Zero initialization
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &sb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.set_size(&rb_emlrtRTEI,
    &sp, static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(1),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &tb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.set_size(&rb_emlrtRTEI,
    &sp, mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(0),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ub_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.set_size(&rb_emlrtRTEI,
    &sp, mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(0),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &hk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &hk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_duzj0_ds[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &vb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds.set_size(&rb_emlrtRTEI,
    &sp, static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &wb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds.set_size(&rb_emlrtRTEI,
    &sp, mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds.size(0),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ik_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ik_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < b_loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dm0j0_ds[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &xb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds.set_size(&rb_emlrtRTEI,
    &sp, static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &yb_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds.set_size(&rb_emlrtRTEI,
    &sp, mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds.size(0),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &jk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &jk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < b_loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dn0j0_ds[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ac_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.set_size(&rb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(1),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &bc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.set_size(&rb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(0),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &cc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.set_size(&rb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(0),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &kk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &kk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtcj_ds[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &dc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.set_size(&rb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(1),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ec_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.set_size(&rb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(0),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &fc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.set_size(&rb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(0),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &lk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &lk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dbcj_ds[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &gc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.set_size(&rb_emlrtRTEI,
    &sp, static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(2),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &hc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.set_size(&rb_emlrtRTEI,
    &sp, mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(0),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ic_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.set_size(&rb_emlrtRTEI,
    &sp, mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(0),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(1),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &mk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &mk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < d_loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dtaus0_ds[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &jc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.set_size(&rb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(2),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &kc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.set_size(&rb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(0),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &lc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.set_size(&rb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(0),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(1),
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &nk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &nk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < d_loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_duzi_ds.mem_duzi_dfs0_ds[i3] = 0.0;
  }

  //  ====== Final initialization
  //  ====== Constructor ======
  //  ===================================================================== %
  //  ============================== mem_dti ============================== %
  //  ===================================================================== %
  //  ====== Zero initialization
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &mc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_duzj0.set_size(&sb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1),
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &nc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_duzj0.set_size(&sb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &oc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_duzj0.set_size(&sb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0),
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ok_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ok_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_dti.mem_dti_duzj0[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &pc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.set_size(&tb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &qc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.set_size(&tb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(0),
    mem_deriv_propag_low->mem_dti.mem_dti_dm0j0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &pk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &pk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < b_loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_dti.mem_dti_dm0j0[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &rc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.set_size(&tb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &sc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.set_size(&tb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(0),
    mem_deriv_propag_low->mem_dti.mem_dti_dn0j0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &qk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &qk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < b_loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_dti.mem_dti_dn0j0[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &tc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dtcj.set_size(&tb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(1),
    mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &uc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dtcj.set_size(&tb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &vc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dtcj.set_size(&tb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(0),
    mem_deriv_propag_low->mem_dti.mem_dti_dtcj.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &rk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &rk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_dti.mem_dti_dtcj[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &wc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dbcj.set_size(&tb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1),
    mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &xc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dbcj.set_size(&tb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &yc_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dbcj.set_size(&tb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0),
    mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &sk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &sk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_dti.mem_dti_dbcj[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ad_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.set_size(&tb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(2),
    mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &bd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.set_size(&tb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0),
    mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &cd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.set_size(&tb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0),
    mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(1),
    mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &tk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &tk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < d_loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_dti.mem_dti_dtaus0[i3] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &dd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dfs0.set_size(&tb_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(2),
    mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ed_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dfs0.set_size(&tb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0),
    mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &fd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti.mem_dti_dfs0.set_size(&tb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0),
    mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(1),
    mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &uk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &uk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i3 = 0; i3 < d_loop_ub_tmp; i3++) {
    mem_deriv_propag_low->mem_dti.mem_dti_dfs0[i3] = 0.0;
  }

  //  ====== Non-zero initialization
  //  === mem_dti_duzj0
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
    static_cast<int32_T>(ctcr_carac->nbT), &e_emlrtRTEI, (emlrtConstCTX)&sp);
  for (loop_ub = 0; loop_ub < i2; loop_ub++) {
    b = ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
          static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
          ctcr_construc->vect_ind_iT.size(0)));
    if (b) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
        (loop_ub) + 1U), 1, ctcr_construc->vect_ind_iT.size(0), &q_emlrtBCI,
        (emlrtConstCTX)&sp);
    }

    d = ctcr_construc->vect_ind_iT[loop_ub];
    i3 = static_cast<int32_T>(ind_origin + (1.0 - d));
    emlrtForLoopVectorCheckR2021a(d, 1.0, ind_origin, mxDOUBLE_CLASS, i3,
      &f_emlrtRTEI, (emlrtConstCTX)&sp);
    for (is = 0; is < i3; is++) {
      b_is = d + static_cast<real_T>(is);
      if ((static_cast<int32_T>(b_is) < 1) || (static_cast<int32_T>(b_is) >
           ctcr_construc->vect_z.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_is), 1,
          ctcr_construc->vect_z.size(1), &r_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &vk_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
           ctcr_construc->vect_z.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
          ctcr_construc->vect_z.size(1), &s_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0),
          &t_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1),
          &u_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (b_is != static_cast<int32_T>(muDoubleScalarFloor(b_is))) {
        emlrtIntegerCheckR2012b(b_is, &wk_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(b_is) < 1) || (static_cast<int32_T>(b_is) >
           mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_is), 1,
          mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(2), &v_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      mem_deriv_propag_low->mem_dti.mem_dti_duzj0[(loop_ub +
        mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0) * loop_ub) +
        mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(0) *
        mem_deriv_propag_low->mem_dti.mem_dti_duzj0.size(1) *
        (static_cast<int32_T>(b_is) - 1)] = ctcr_construc->vect_z
        [static_cast<int32_T>(b_is) - 1] - ctcr_construc->vect_z
        [static_cast<int32_T>(d) - 1];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }

  //  ====== Final initialization
  //  ====== Constructor ======
  //  ===================================================================== %
  //  ============================ mem_dti_ds ============================= %
  //  ===================================================================== %
  //  ====== Zero initialization
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &gd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.set_size(&ub_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(1),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &hd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.set_size(&ub_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(0),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &id_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.set_size(&ub_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(0),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &xk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &xk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dti_ds.mem_dti_duzj0_ds[i2] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &jd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds.set_size(&ub_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &kd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds.set_size(&ub_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds.size(0),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &yk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &yk_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dm0j0_ds[i2] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ld_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds.set_size(&ub_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &md_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds.set_size(&ub_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds.size(0),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &al_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &al_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dn0j0_ds[i2] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &nd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.set_size(&ub_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(1),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &od_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.set_size(&ub_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(0),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &pd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.set_size(&ub_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(0),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &bl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &bl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtcj_ds[i2] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &qd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.set_size(&ub_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(1),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &rd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.set_size(&ub_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(0),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &sd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.set_size(&ub_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(0),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &cl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &cl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dbcj_ds[i2] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &td_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.set_size(&ub_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(2),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ud_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.set_size(&ub_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(0),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &vd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.set_size(&ub_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(0),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(1),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &dl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &dl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < d_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dtaus0_ds[i2] = 0.0;
  }

  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &wd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.set_size(&ub_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT), 3,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(2),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &xd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.set_size(&ub_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(0),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &yd_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.set_size(&ub_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(0),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(1),
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &el_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &el_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < d_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dti_ds.mem_dti_dfs0_ds[i2] = 0.0;
  }

  //  ====== Final initialization
  //  ====== Constructor ======
  //  ===================================================================== %
  //  ============================== mem_dm0 ============================== %
  //  ===================================================================== %
  //  ====== Zero initialization
  mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.set_size(&vb_emlrtRTEI, &sp, 3,
    mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1),
    mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ae_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.set_size(&vb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &be_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.set_size(&vb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(0),
    mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &fl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &fl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dm0.mem_dm0_duzj0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0.set_size(&vb_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ce_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0.set_size(&vb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0.size(0),
    mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &gl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < c_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dn0j0.set_size(&vb_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dn0j0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &de_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dn0j0.set_size(&vb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dn0j0.size(0),
    mem_deriv_propag_low->mem_dm0.mem_dm0_dn0j0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &hl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < c_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dm0.mem_dm0_dn0j0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.set_size(&vb_emlrtRTEI, &sp, 3,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1),
    mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ee_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.set_size(&vb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &fe_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.set_size(&vb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(0),
    mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &il_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &il_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.set_size(&vb_emlrtRTEI, &sp, 3,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1),
    mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ge_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.set_size(&vb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &he_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.set_size(&vb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(0),
    mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &jl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &jl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.set_size(&vb_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2),
    mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ie_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.set_size(&vb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(0),
    mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &je_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.set_size(&vb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(0),
    mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(1),
    mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &kl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub_tmp = c_loop_ub_tmp * static_cast<int32_T>(ctcr_construc->nbP);
  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.set_size(&vb_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2),
    mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ke_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.set_size(&vb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(0),
    mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &le_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.set_size(&vb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(0),
    mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(1),
    mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ll_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0[i2] = 0.0;
  }

  //  ====== Non-zero initialization
  //  === mem_dm0_dm0j0
  if (ctcr_construc->ind_origin != static_cast<int32_T>(muDoubleScalarFloor
       (ctcr_construc->ind_origin))) {
    emlrtIntegerCheckR2012b(ctcr_construc->ind_origin, &emlrtDCI, (emlrtConstCTX)
      &sp);
  }

  if ((static_cast<int32_T>(ctcr_construc->ind_origin) < 1) ||
      (static_cast<int32_T>(ctcr_construc->ind_origin) > static_cast<int32_T>
       (ctcr_construc->nbP))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ctcr_construc->ind_origin),
      1, static_cast<int32_T>(ctcr_construc->nbP), &f_emlrtBCI, (emlrtConstCTX)&
      sp);
  }

  for (i2 = 0; i2 < 3; i2++) {
    mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0[3 * i2 + 9 *
      (static_cast<int32_T>(ctcr_construc->ind_origin) - 1)] = b_iv[3 * i2];
    mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0[(3 * i2 + 9 *
      (static_cast<int32_T>(ctcr_construc->ind_origin) - 1)) + 1] = b_iv[3 * i2
      + 1];
    mem_deriv_propag_low->mem_dm0.mem_dm0_dm0j0[(3 * i2 + 9 *
      (static_cast<int32_T>(ctcr_construc->ind_origin) - 1)) + 2] = b_iv[3 * i2
      + 2];
  }

  //  ====== Final initialization
  //  ====== Constructor ======
  //  ===================================================================== %
  //  ============================ mem_dm0_ds ============================= %
  //  ===================================================================== %
  //  ====== Zero initialization
  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.set_size(&wb_emlrtRTEI, &sp,
    3, mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.size(1),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &me_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.set_size(&wb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.size(0),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ne_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.set_size(&wb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.size(0),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ml_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ml_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_duzj0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dm0j0_ds.set_size(&wb_emlrtRTEI, &sp,
    3, 3, mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dm0j0_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &oe_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dm0j0_ds.set_size(&wb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dm0j0_ds.size(0),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dm0j0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &nl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < c_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dm0j0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dn0j0_ds.set_size(&wb_emlrtRTEI, &sp,
    3, 3, mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dn0j0_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &pe_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dn0j0_ds.set_size(&wb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dn0j0_ds.size(0),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dn0j0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ol_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < c_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dn0j0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.set_size(&wb_emlrtRTEI, &sp,
    3, mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(1),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &qe_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.set_size(&wb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(0),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &re_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.set_size(&wb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(0),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &pl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &pl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtcj_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.set_size(&wb_emlrtRTEI, &sp,
    3, mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(1),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &se_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.set_size(&wb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(0),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &te_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.set_size(&wb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(0),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ql_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ql_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dbcj_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.set_size(&wb_emlrtRTEI, &sp,
    3, 3, mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(2),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ue_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.set_size(&wb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(0),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ve_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.set_size(&wb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(0),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(1),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &rl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dtaus0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.set_size(&wb_emlrtRTEI, &sp,
    3, 3, mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(2),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &we_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.set_size(&wb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(0),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &xe_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.set_size(&wb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(0),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(1),
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &sl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dm0_ds.mem_dm0_dfs0_ds[i2] = 0.0;
  }

  //  ====== Final initialization
  //  ====== Constructor ======
  //  ===================================================================== %
  //  ============================== mem_dn0 ============================== %
  //  ===================================================================== %
  //  ====== Zero initialization
  mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.set_size(&xb_emlrtRTEI, &sp, 3,
    mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1),
    mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ye_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.set_size(&xb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &af_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.set_size(&xb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(0),
    mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &tl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &tl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dn0.mem_dn0_duzj0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0.set_size(&xb_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &bf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0.set_size(&xb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0.size(0),
    mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ul_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < c_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dn0.mem_dn0_dm0j0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0.set_size(&xb_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &cf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0.set_size(&xb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0.size(0),
    mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &vl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < c_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.set_size(&xb_emlrtRTEI, &sp, 3,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1),
    mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &df_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.set_size(&xb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ef_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.set_size(&xb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(0),
    mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &wl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &wl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.set_size(&xb_emlrtRTEI, &sp, 3,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1),
    mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ff_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.set_size(&xb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &gf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.set_size(&xb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(0),
    mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &xl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &xl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.set_size(&xb_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2),
    mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &hf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.set_size(&xb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(0),
    mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &if_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.set_size(&xb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(0),
    mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(1),
    mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &yl_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.set_size(&xb_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2),
    mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &jf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.set_size(&xb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(0),
    mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &kf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.set_size(&xb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(0),
    mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(1),
    mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &am_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0[i2] = 0.0;
  }

  //  ====== Non-zero initialization
  //  === mem_dn0_dn0j0
  for (i2 = 0; i2 < 3; i2++) {
    mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0[3 * i2 + 9 *
      (static_cast<int32_T>(ctcr_construc->ind_origin) - 1)] = b_iv[3 * i2];
    mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0[(3 * i2 + 9 *
      (static_cast<int32_T>(ctcr_construc->ind_origin) - 1)) + 1] = b_iv[3 * i2
      + 1];
    mem_deriv_propag_low->mem_dn0.mem_dn0_dn0j0[(3 * i2 + 9 *
      (static_cast<int32_T>(ctcr_construc->ind_origin) - 1)) + 2] = b_iv[3 * i2
      + 2];
  }

  //  ====== Final initialization
  //  ====== Constructor ======
  //  ===================================================================== %
  //  ============================ mem_dn0_ds ============================= %
  //  ===================================================================== %
  //  ====== Zero initialization
  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.set_size(&yb_emlrtRTEI, &sp,
    3, mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.size(1),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &lf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.set_size(&yb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.size(0),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &mf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.set_size(&yb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.size(0),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &bm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &bm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_duzj0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dm0j0_ds.set_size(&yb_emlrtRTEI, &sp,
    3, 3, mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dm0j0_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &nf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dm0j0_ds.set_size(&yb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dm0j0_ds.size(0),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dm0j0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &cm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < c_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dm0j0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dn0j0_ds.set_size(&yb_emlrtRTEI, &sp,
    3, 3, mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dn0j0_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &of_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dn0j0_ds.set_size(&yb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dn0j0_ds.size(0),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dn0j0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &dm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < c_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dn0j0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.set_size(&yb_emlrtRTEI, &sp,
    3, mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.size(1),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &pf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.set_size(&yb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.size(0),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &qf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.set_size(&yb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.size(0),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &em_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &em_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtcj_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.set_size(&yb_emlrtRTEI, &sp,
    3, mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.size(1),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &rf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.set_size(&yb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.size(0),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &sf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.set_size(&yb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.size(0),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &fm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &fm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dbcj_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.set_size(&yb_emlrtRTEI, &sp,
    3, 3, mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(2),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &tf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.set_size(&yb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(0),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &uf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.set_size(&yb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(0),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(1),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &gm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dtaus0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.set_size(&yb_emlrtRTEI, &sp,
    3, 3, mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(2),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &vf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.set_size(&yb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(0),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &wf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.set_size(&yb_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(0),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(1),
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &hm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dn0_ds.mem_dn0_dfs0_ds[i2] = 0.0;
  }

  //  ====== Final initialization
  //  ====== Constructor ======
  //  ===================================================================== %
  //  ============================== mem_du0 ============================== %
  //  ===================================================================== %
  //  ====== Zero initialization
  mem_deriv_propag_low->mem_du0.mem_du0_duzj0.set_size(&ac_emlrtRTEI, &sp, 3,
    mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1),
    mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &xf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_du0.mem_du0_duzj0.set_size(&ac_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &yf_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_du0.mem_du0_duzj0.set_size(&ac_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(0),
    mem_deriv_propag_low->mem_du0.mem_du0_duzj0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &im_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &im_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_du0.mem_du0_duzj0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dm0j0.set_size(&ac_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_du0.mem_du0_dm0j0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ag_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dm0j0.set_size(&ac_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_du0.mem_du0_dm0j0.size(0),
    mem_deriv_propag_low->mem_du0.mem_du0_dm0j0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &jm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < c_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_du0.mem_du0_dm0j0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dn0j0.set_size(&ac_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_du0.mem_du0_dn0j0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &bg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dn0j0.set_size(&ac_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_du0.mem_du0_dn0j0.size(0),
    mem_deriv_propag_low->mem_du0.mem_du0_dn0j0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &km_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < c_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_du0.mem_du0_dn0j0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dtcj.set_size(&ac_emlrtRTEI, &sp, 3,
    mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1),
    mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &cg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dtcj.set_size(&ac_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &dg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dtcj.set_size(&ac_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(0),
    mem_deriv_propag_low->mem_du0.mem_du0_dtcj.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &lm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &lm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_du0.mem_du0_dtcj[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dbcj.set_size(&ac_emlrtRTEI, &sp, 3,
    mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1),
    mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &eg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dbcj.set_size(&ac_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &fg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dbcj.set_size(&ac_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(0),
    mem_deriv_propag_low->mem_du0.mem_du0_dbcj.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &mm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &mm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_du0.mem_du0_dbcj[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.set_size(&ac_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2),
    mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &gg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.set_size(&ac_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(0),
    mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &hg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.set_size(&ac_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(0),
    mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(1),
    mem_deriv_propag_low->mem_du0.mem_du0_dtaus0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &nm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_du0.mem_du0_dtaus0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dfs0.set_size(&ac_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2),
    mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ig_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dfs0.set_size(&ac_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(0),
    mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &jg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_du0.mem_du0_dfs0.set_size(&ac_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(0),
    mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(1),
    mem_deriv_propag_low->mem_du0.mem_du0_dfs0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &om_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_du0.mem_du0_dfs0[i2] = 0.0;
  }

  //  ====== Final initialization
  //  ====== Constructor ======
  //  ===================================================================== %
  //  ============================== mem_dR0 ============================== %
  //  ===================================================================== %
  //  ====== Zero initialization
  mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.set_size(&bc_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2),
    mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(3));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &kg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.set_size(&bc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(0),
    mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(1), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &lg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.set_size(&bc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(0),
    mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(1),
    mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &pm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &pm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  d_loop_ub_tmp = 9 * static_cast<int32_T>(ctcr_carac->nbT) *
    static_cast<int32_T>(ctcr_construc->nbP);
  for (i2 = 0; i2 < d_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dR0.mem_dR0_duzj0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.set_size(&bc_emlrtRTEI, &sp, 3, 3,
    3, mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &mg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.set_size(&bc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(0),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(1),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &qm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub = 27 * static_cast<int32_T>(ctcr_construc->nbP);
  for (i2 = 0; i2 < loop_ub; i2++) {
    mem_deriv_propag_low->mem_dR0.mem_dR0_dm0j0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.set_size(&bc_emlrtRTEI, &sp, 3, 3,
    3, mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ng_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.set_size(&bc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(0),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(1),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &rm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub; i2++) {
    mem_deriv_propag_low->mem_dR0.mem_dR0_dn0j0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.set_size(&bc_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(3));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &og_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.set_size(&bc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(0),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(1), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &pg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.set_size(&bc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(0),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(1),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &sm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &sm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < d_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.set_size(&bc_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &qg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.set_size(&bc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(0),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(1), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &rg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.set_size(&bc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(0),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(1),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &tm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &tm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < d_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.set_size(&bc_emlrtRTEI, &sp, 3, 3,
    3, mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(4));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &sg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.set_size(&bc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(0),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(1),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(4));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &tg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.set_size(&bc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(0),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(1),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(2),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &um_emlrtDCI, (emlrtConstCTX)&sp);
  }

  is = loop_ub * static_cast<int32_T>(ctcr_construc->nbP);
  for (i2 = 0; i2 < is; i2++) {
    mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.set_size(&bc_emlrtRTEI, &sp, 3, 3,
    3, mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(4));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ug_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.set_size(&bc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(0),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(1),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(4));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &vg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.set_size(&bc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(0),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(1),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(2),
    mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &vm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < is; i2++) {
    mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[i2] = 0.0;
  }

  //  ====== Final initialization
  //  ====== Constructor ======
  //  ===================================================================== %
  //  ============================ mem_dR0_ds ============================= %
  //  ===================================================================== %
  //  ====== Zero initialization
  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.set_size(&cc_emlrtRTEI, &sp,
    3, 3, mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(2),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(3));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &wg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.set_size(&cc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(0),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(1),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &xg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.set_size(&cc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(0),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(1),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &wm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &wm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < d_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_duzj0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dm0j0_ds.set_size(&cc_emlrtRTEI, &sp,
    3, 3, 3, mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dm0j0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &yg_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dm0j0_ds.set_size(&cc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dm0j0_ds.size(0),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dm0j0_ds.size(1),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dm0j0_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &xm_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub; i2++) {
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dm0j0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dn0j0_ds.set_size(&cc_emlrtRTEI, &sp,
    3, 3, 3, mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dn0j0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ah_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dn0j0_ds.set_size(&cc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dn0j0_ds.size(0),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dn0j0_ds.size(1),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dn0j0_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ym_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub; i2++) {
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dn0j0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.set_size(&cc_emlrtRTEI, &sp,
    3, 3, mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(2),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(3));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &bh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.set_size(&cc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(0),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(1),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ch_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.set_size(&cc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(0),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(1),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &an_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &an_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < d_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtcj_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.set_size(&cc_emlrtRTEI, &sp,
    3, 3, mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(2),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(3));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &dh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.set_size(&cc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(0),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(1),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &eh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.set_size(&cc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(0),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(1),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &bn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &bn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < d_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dbcj_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.set_size(&cc_emlrtRTEI, &sp,
    3, 3, 3, mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(3),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(4));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &fh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.set_size(&cc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(0),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(1),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(4));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &gh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.set_size(&cc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(0),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(1),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(2),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds.size(3),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &cn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < is; i2++) {
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dtaus0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.set_size(&cc_emlrtRTEI, &sp,
    3, 3, 3, mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(3),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(4));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &hh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.set_size(&cc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(0),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(1),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(4));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ih_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.set_size(&cc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(0),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(1),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(2),
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds.size(3),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &dn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < is; i2++) {
    mem_deriv_propag_low->mem_dR0_ds.mem_dR0_dfs0_ds[i2] = 0.0;
  }

  //  ====== Final initialization
  //  ====== Constructor ======
  //  ===================================================================== %
  //  ============================== mem_dP0 ============================== %
  //  ===================================================================== %
  //  ====== Zero initialization
  mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.set_size(&dc_emlrtRTEI, &sp, 3,
    mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(1),
    mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &jh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.set_size(&dc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &kh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.set_size(&dc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(0),
    mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &en_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &en_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dP0.mem_dP0_duzj0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dm0j0.set_size(&dc_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dm0j0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &lh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dm0j0.set_size(&dc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dm0j0.size(0),
    mem_deriv_propag_low->mem_dP0.mem_dP0_dm0j0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &fn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < c_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dP0.mem_dP0_dm0j0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dn0j0.set_size(&dc_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dn0j0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &mh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dn0j0.set_size(&dc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dn0j0.size(0),
    mem_deriv_propag_low->mem_dP0.mem_dP0_dn0j0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &gn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < c_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dP0.mem_dP0_dn0j0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.set_size(&dc_emlrtRTEI, &sp, 3,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(1),
    mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &nh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.set_size(&dc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &oh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.set_size(&dc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(0),
    mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &hn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &hn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dP0.mem_dP0_dtcj[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.set_size(&dc_emlrtRTEI, &sp, 3,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1),
    mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ph_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.set_size(&dc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(0), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &qh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.set_size(&dc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(0),
    mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &in_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &in_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dP0.mem_dP0_dbcj[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.set_size(&dc_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(2),
    mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &rh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.set_size(&dc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(0),
    mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &sh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.set_size(&dc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(0),
    mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(1),
    mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &jn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dP0.mem_dP0_dtaus0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.set_size(&dc_emlrtRTEI, &sp, 3, 3,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(2),
    mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &th_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.set_size(&dc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(0),
    mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &uh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.set_size(&dc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(0),
    mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(1),
    mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &kn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dP0.mem_dP0_dfs0[i2] = 0.0;
  }

  //  ====== Final initialization
  //  ====== Constructor ======
  //  ===================================================================== %
  //  ============================= mem_dP0_ds ============================ %
  //  ===================================================================== %
  //  ====== Zero initialization
  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.set_size(&ec_emlrtRTEI, &sp,
    3, mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(1),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &vh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.set_size(&ec_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(0),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &wh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.set_size(&ec_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(0),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ln_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ln_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_duzj0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dm0j0_ds.set_size(&ec_emlrtRTEI, &sp,
    3, 3, mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dm0j0_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &xh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dm0j0_ds.set_size(&ec_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dm0j0_ds.size(0),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dm0j0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &mn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < c_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dm0j0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dn0j0_ds.set_size(&ec_emlrtRTEI, &sp,
    3, 3, mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dn0j0_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &yh_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dn0j0_ds.set_size(&ec_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dn0j0_ds.size(0),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dn0j0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &nn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < c_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dn0j0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.set_size(&ec_emlrtRTEI, &sp,
    3, mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(1),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ai_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.set_size(&ec_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(0),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &bi_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.set_size(&ec_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(0),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &on_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &on_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtcj_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.set_size(&ec_emlrtRTEI, &sp,
    3, mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(2));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ci_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.set_size(&ec_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(0),
    static_cast<int32_T>(ctcr_carac->nbT),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &di_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.set_size(&ec_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(0),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &pn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &pn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dbcj_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.set_size(&ec_emlrtRTEI, &sp,
    3, 3, mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(2),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ei_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.set_size(&ec_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(0),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &fi_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.set_size(&ec_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(0),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(1),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &qn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dtaus0_ds[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.set_size(&ec_emlrtRTEI, &sp,
    3, 3, mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(2),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &gi_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.set_size(&ec_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(0),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(1),
    static_cast<int32_T>(ctcr_construc->nbP),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &hi_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.set_size(&ec_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(0),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(1),
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds.size(2),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &rn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dP0_ds.mem_dP0_dfs0_ds[i2] = 0.0;
  }

  //  ====== Final initialization
  //  ====== Constructor ======
  //  ===================================================================== %
  //  ============================= mem_dT0 ============================= %
  //  ===================================================================== %
  //  ====== Zero initialization
  mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.set_size(&fc_emlrtRTEI, &sp, 4, 4,
    mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2),
    mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(3));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &ii_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.set_size(&fc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(0),
    mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(1), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ji_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.set_size(&fc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(0),
    mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(1),
    mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &sn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &sn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub_tmp = (static_cast<int32_T>(ctcr_carac->nbT) << 4) *
    static_cast<int32_T>(ctcr_construc->nbP);
  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dT0.mem_dT0_duzj0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dm0j0.set_size(&fc_emlrtRTEI, &sp, 4, 4,
    3, mem_deriv_propag_low->mem_dT0.mem_dT0_dm0j0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ki_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dm0j0.set_size(&fc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dT0.mem_dT0_dm0j0.size(0),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dm0j0.size(1),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dm0j0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &tn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  b_loop_ub_tmp = 48 * static_cast<int32_T>(ctcr_construc->nbP);
  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dT0.mem_dT0_dm0j0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dn0j0.set_size(&fc_emlrtRTEI, &sp, 4, 4,
    3, mem_deriv_propag_low->mem_dT0.mem_dT0_dn0j0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &li_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dn0j0.set_size(&fc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dT0.mem_dT0_dn0j0.size(0),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dn0j0.size(1),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dn0j0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &un_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < b_loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dT0.mem_dT0_dn0j0[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.set_size(&fc_emlrtRTEI, &sp, 4, 4,
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(3));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &mi_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.set_size(&fc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(0),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(1), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ni_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.set_size(&fc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(0),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(1),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &vn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &vn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtcj[i2] = 0.0;
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.set_size(&fc_emlrtRTEI, &sp, 4, 4,
    mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(3));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &oi_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.set_size(&fc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(0),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(1), static_cast<int32_T>
    (ctcr_carac->nbT), mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &pi_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.set_size(&fc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(0),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(1),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &wn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &wn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i = 0; i < loop_ub_tmp; i++) {
    mem_deriv_propag_low->mem_dT0.mem_dT0_dbcj[i] = 0.0;
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.set_size(&fc_emlrtRTEI, &sp, 4, 4,
    3, mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(3),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(4));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &qi_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.set_size(&fc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(0),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(1),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(4));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ri_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.set_size(&fc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(0),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(1),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(2),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0.size(3), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &xn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub_tmp = b_loop_ub_tmp * static_cast<int32_T>(ctcr_construc->nbP);
  for (i = 0; i < loop_ub_tmp; i++) {
    mem_deriv_propag_low->mem_dT0.mem_dT0_dtaus0[i] = 0.0;
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.set_size(&fc_emlrtRTEI, &sp, 4, 4,
    3, mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(3),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(4));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &si_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.set_size(&fc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(0),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(1),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(4));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ti_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.set_size(&fc_emlrtRTEI, &sp,
    mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(0),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(1),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(2),
    mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0.size(3), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &yn_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i = 0; i < loop_ub_tmp; i++) {
    mem_deriv_propag_low->mem_dT0.mem_dT0_dfs0[i] = 0.0;
  }

  //  ====== Final initialization
  //  ====== Constructor ======
  //  ========================================================== %
  //  ================== Setting output values ================= %
  //  ====== Constructor ======
  //  ========================================================== %
  //  ===================================================================== %
  //  ======================= mem_deriv_propag_high ======================= %
  i = static_cast<int32_T>(muDoubleScalarFloor(ctcr_carac->nbT + 6.0));
  if (ctcr_carac->nbT + 6.0 != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT + 6.0, &ui_emlrtDCI, (emlrtConstCTX)
      &sp);
  }

  mem_deriv_propag_high->mem_B.set_size(&gc_emlrtRTEI, &sp, static_cast<int32_T>
    (ctcr_carac->nbT + 6.0), mem_deriv_propag_high->mem_B.size(1));
  d = 3.0 * ctcr_carac->nbT;
  b_is = static_cast<int32_T>(muDoubleScalarFloor(d + 6.0));
  if (d + 6.0 != b_is) {
    emlrtIntegerCheckR2012b(d + 6.0, &vi_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_high->mem_B.set_size(&gc_emlrtRTEI, &sp,
    mem_deriv_propag_high->mem_B.size(0), static_cast<int32_T>(d + 6.0));
  if (ctcr_carac->nbT + 6.0 != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT + 6.0, &ao_emlrtDCI, (emlrtConstCTX)
      &sp);
  }

  if (d + 6.0 != b_is) {
    emlrtIntegerCheckR2012b(d + 6.0, &ao_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub = static_cast<int32_T>(ctcr_carac->nbT + 6.0) * static_cast<int32_T>(d
    + 6.0);
  for (i2 = 0; i2 < loop_ub; i2++) {
    mem_deriv_propag_high->mem_B[i2] = 0.0;
  }

  if (ctcr_carac->nbT + 6.0 != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT + 6.0, &wi_emlrtDCI, (emlrtConstCTX)
      &sp);
  }

  mem_deriv_propag_high->mem_Bws0.set_size(&hc_emlrtRTEI, &sp,
    static_cast<int32_T>(ctcr_carac->nbT + 6.0), 6,
    mem_deriv_propag_high->mem_Bws0.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &xi_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_high->mem_Bws0.set_size(&hc_emlrtRTEI, &sp,
    mem_deriv_propag_high->mem_Bws0.size(0),
    mem_deriv_propag_high->mem_Bws0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_carac->nbT + 6.0 != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT + 6.0, &bo_emlrtDCI, (emlrtConstCTX)
      &sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &bo_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub = static_cast<int32_T>(ctcr_carac->nbT + 6.0) * 6 *
    static_cast<int32_T>(ctcr_construc->nbP);
  for (i = 0; i < loop_ub; i++) {
    mem_deriv_propag_high->mem_Bws0[i] = 0.0;
  }

  mem_deriv_propag_high->mem_E.set_size(&ic_emlrtRTEI, &sp, 6,
    mem_deriv_propag_high->mem_E.size(1), mem_deriv_propag_high->mem_E.size(2));
  i = static_cast<int32_T>(muDoubleScalarFloor(d + 12.0));
  if (d + 12.0 != i) {
    emlrtIntegerCheckR2012b(d + 12.0, &yi_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_high->mem_E.set_size(&ic_emlrtRTEI, &sp,
    mem_deriv_propag_high->mem_E.size(0), static_cast<int32_T>(d + 12.0),
    mem_deriv_propag_high->mem_E.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &aj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_high->mem_E.set_size(&ic_emlrtRTEI, &sp,
    mem_deriv_propag_high->mem_E.size(0), mem_deriv_propag_high->mem_E.size(1),
    static_cast<int32_T>(ctcr_construc->nbP));
  if (d + 12.0 != i) {
    emlrtIntegerCheckR2012b(d + 12.0, &co_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &co_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub = 6 * static_cast<int32_T>(d + 12.0) * static_cast<int32_T>
    (ctcr_construc->nbP);
  for (i = 0; i < loop_ub; i++) {
    mem_deriv_propag_high->mem_E[i] = 0.0;
  }

  mem_deriv_propag_high->mem_Ews0.set_size(&jc_emlrtRTEI, &sp, 6, 6,
    mem_deriv_propag_high->mem_Ews0.size(2),
    mem_deriv_propag_high->mem_Ews0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &bj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_high->mem_Ews0.set_size(&jc_emlrtRTEI, &sp,
    mem_deriv_propag_high->mem_Ews0.size(0),
    mem_deriv_propag_high->mem_Ews0.size(1), static_cast<int32_T>
    (ctcr_construc->nbP), mem_deriv_propag_high->mem_Ews0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &cj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_deriv_propag_high->mem_Ews0.set_size(&jc_emlrtRTEI, &sp,
    mem_deriv_propag_high->mem_Ews0.size(0),
    mem_deriv_propag_high->mem_Ews0.size(1),
    mem_deriv_propag_high->mem_Ews0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &do_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub_tmp = 36 * static_cast<int32_T>(ctcr_construc->nbP) *
    static_cast<int32_T>(ctcr_construc->nbP);
  for (i = 0; i < loop_ub_tmp; i++) {
    mem_deriv_propag_high->mem_Ews0[i] = 0.0;
  }

  //  ====== Constructor ======
  //  ===================================================================== %
  //  =============================== mem_CJ ============================== %
  mem_CJ->mem_Cs0.set_size(&kc_emlrtRTEI, &sp, 6, 6, mem_CJ->mem_Cs0.size(2),
    mem_CJ->mem_Cs0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &dj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_CJ->mem_Cs0.set_size(&kc_emlrtRTEI, &sp, mem_CJ->mem_Cs0.size(0),
    mem_CJ->mem_Cs0.size(1), static_cast<int32_T>(ctcr_construc->nbP),
    mem_CJ->mem_Cs0.size(3));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &ej_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_CJ->mem_Cs0.set_size(&kc_emlrtRTEI, &sp, mem_CJ->mem_Cs0.size(0),
    mem_CJ->mem_Cs0.size(1), mem_CJ->mem_Cs0.size(2), static_cast<int32_T>
    (ctcr_construc->nbP));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &eo_emlrtDCI, (emlrtConstCTX)&sp);
  }

  for (i = 0; i < loop_ub_tmp; i++) {
    mem_CJ->mem_Cs0[i] = 0.0;
  }

  mem_CJ->mem_J.set_size(&lc_emlrtRTEI, &sp, 6, mem_CJ->mem_J.size(1),
    mem_CJ->mem_J.size(2));
  d = 2.0 * ctcr_carac->nbT;
  i = static_cast<int32_T>(muDoubleScalarFloor(d));
  if (d != i) {
    emlrtIntegerCheckR2012b(d, &fj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  i2 = static_cast<int32_T>(d);
  mem_CJ->mem_J.set_size(&lc_emlrtRTEI, &sp, mem_CJ->mem_J.size(0), i2,
    mem_CJ->mem_J.size(2));
  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &gj_emlrtDCI, (emlrtConstCTX)&sp);
  }

  mem_CJ->mem_J.set_size(&lc_emlrtRTEI, &sp, mem_CJ->mem_J.size(0),
    mem_CJ->mem_J.size(1), static_cast<int32_T>(ctcr_construc->nbP));
  if (i2 != i) {
    emlrtIntegerCheckR2012b(d, &fo_emlrtDCI, (emlrtConstCTX)&sp);
  }

  if (ctcr_construc->nbP != i1) {
    emlrtIntegerCheckR2012b(ctcr_construc->nbP, &fo_emlrtDCI, (emlrtConstCTX)&sp);
  }

  loop_ub = 6 * i2 * static_cast<int32_T>(ctcr_construc->nbP);
  for (i = 0; i < loop_ub; i++) {
    mem_CJ->mem_J[i] = 0.0;
  }

  //  ====== Constructor ======
}

// End of code generation (Init_Mem.cpp)
