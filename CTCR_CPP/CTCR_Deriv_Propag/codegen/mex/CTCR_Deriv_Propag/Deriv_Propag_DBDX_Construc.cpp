//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Deriv_Propag_DBDX_Construc.cpp
//
// Code generation for function 'Deriv_Propag_DBDX_Construc'
//

// Include files
#include "Deriv_Propag_DBDX_Construc.h"
#include "BVPProp.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCRLoad.h"
#include "CTCR_Deriv_Propag_data.h"
#include "MemBVP.h"
#include "MemDM0.h"
#include "MemDN0.h"
#include "MemDR0.h"
#include "MemDTi.h"
#include "MemDUZi.h"
#include "MemDerivPropagHigh.h"
#include "MemDerivPropagLow.h"
#include "MemY.h"
#include "SimulationParam.h"
#include "dB0nbTRs_dtcj.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo lb_emlrtRSI{ 92,    // lineNo
  "Deriv_Propag_DBDX_Construc",        // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pathName
};

static emlrtRSInfo ob_emlrtRSI{ 137,   // lineNo
  "Deriv_Propag_DBDX_Construc",        // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pathName
};

static emlrtRSInfo rb_emlrtRSI{ 270,   // lineNo
  "Deriv_Propag_DBDX_Construc",        // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pathName
};

static emlrtRSInfo sb_emlrtRSI{ 312,   // lineNo
  "Deriv_Propag_DBDX_Construc",        // fcnName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pathName
};

static emlrtRTEInfo s_emlrtRTEI{ 82,   // lineNo
  17,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pName
};

static emlrtBCInfo ix_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  83,                                  // lineNo
  104,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo n_emlrtDCI{ 83,     // lineNo
  108,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo jx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  83,                                  // lineNo
  108,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  83,                                  // lineNo
  41,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo o_emlrtDCI{ 83,     // lineNo
  43,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo lx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  83,                                  // lineNo
  43,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo p_emlrtDCI{ 83,     // lineNo
  49,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo mx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  83,                                  // lineNo
  49,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtECInfo cb_emlrtECI{ -1,    // nDims
  83,                                  // lineNo
  13,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pName
};

static emlrtRTEInfo t_emlrtRTEI{ 90,   // lineNo
  17,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pName
};

static emlrtBCInfo nx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  92,                                  // lineNo
  41,                                  // colNo
  "K",                                 // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo u_emlrtRTEI{ 99,   // lineNo
  17,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pName
};

static emlrtBCInfo ox_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  100,                                 // lineNo
  108,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo q_emlrtDCI{ 100,    // lineNo
  110,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo px_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  100,                                 // lineNo
  110,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dtcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  101,                                 // lineNo
  81,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo r_emlrtDCI{ 101,    // lineNo
  83,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo rx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  101,                                 // lineNo
  83,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo s_emlrtDCI{ 100,    // lineNo
  53,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo sx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  100,                                 // lineNo
  53,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo v_emlrtRTEI{ 108,  // lineNo
  17,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pName
};

static emlrtBCInfo tx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  109,                                 // lineNo
  108,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo t_emlrtDCI{ 109,    // lineNo
  110,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo ux_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  109,                                 // lineNo
  110,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  110,                                 // lineNo
  81,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo u_emlrtDCI{ 110,    // lineNo
  83,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo wx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  110,                                 // lineNo
  83,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo v_emlrtDCI{ 109,    // lineNo
  53,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo xx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  109,                                 // lineNo
  53,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo w_emlrtRTEI{ 119,  // lineNo
  17,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pName
};

static emlrtRTEInfo x_emlrtRTEI{ 120,  // lineNo
  21,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pName
};

static emlrtRTEInfo y_emlrtRTEI{ 134,  // lineNo
  17,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pName
};

static emlrtBCInfo yx_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  137,                                 // lineNo
  41,                                  // colNo
  "K",                                 // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo ab_emlrtRTEI{ 146, // lineNo
  17,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pName
};

static emlrtBCInfo ay_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  147,                                 // lineNo
  110,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo w_emlrtDCI{ 147,    // lineNo
  112,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo by_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  147,                                 // lineNo
  112,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cy_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  148,                                 // lineNo
  86,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo x_emlrtDCI{ 148,    // lineNo
  88,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo dy_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  148,                                 // lineNo
  88,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo y_emlrtDCI{ 147,    // lineNo
  53,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo ey_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  147,                                 // lineNo
  53,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo bb_emlrtRTEI{ 156, // lineNo
  17,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pName
};

static emlrtBCInfo fy_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  157,                                 // lineNo
  110,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo ab_emlrtDCI{ 157,   // lineNo
  112,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo gy_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  157,                                 // lineNo
  112,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hy_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  86,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo bb_emlrtDCI{ 158,   // lineNo
  88,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo iy_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  88,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo cb_emlrtDCI{ 157,   // lineNo
  53,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo jy_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  157,                                 // lineNo
  53,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ky_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  171,                                 // lineNo
  33,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo db_emlrtDCI{ 171,   // lineNo
  35,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo ly_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  171,                                 // lineNo
  35,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo my_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  171,                                 // lineNo
  41,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo eb_emlrtDCI{ 171,   // lineNo
  43,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo ny_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  171,                                 // lineNo
  43,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtECInfo db_emlrtECI{ -1,    // nDims
  171,                                 // lineNo
  5,                                   // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pName
};

static emlrtBCInfo oy_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  197,                                 // lineNo
  48,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo py_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  197,                                 // lineNo
  50,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo fb_emlrtDCI{ 197,   // lineNo
  60,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo qy_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  197,                                 // lineNo
  60,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtECInfo eb_emlrtECI{ -1,    // nDims
  197,                                 // lineNo
  17,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pName
};

static emlrtBCInfo ry_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  204,                                 // lineNo
  48,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sy_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  204,                                 // lineNo
  50,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo gb_emlrtDCI{ 204,   // lineNo
  60,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo ty_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  204,                                 // lineNo
  60,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtECInfo fb_emlrtECI{ -1,    // nDims
  204,                                 // lineNo
  17,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pName
};

static emlrtBCInfo uy_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  94,                                  // colNo
  "K",                                 // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo hb_emlrtDCI{ 211,   // lineNo
  122,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo vy_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  122,                                 // colNo
  "mem_bvp.mem_T",                     // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wy_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  218,                                 // lineNo
  48,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo ib_emlrtDCI{ 218,   // lineNo
  56,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo xy_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  218,                                 // lineNo
  56,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo jb_emlrtDCI{ 225,   // lineNo
  110,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo yy_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  225,                                 // lineNo
  110,                                 // colNo
  "mem_bvp.mem_T",                     // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo kb_emlrtDCI{ 225,   // lineNo
  64,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo aab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  225,                                 // lineNo
  64,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo lb_emlrtDCI{ 232,   // lineNo
  64,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo bab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  232,                                 // lineNo
  64,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo mb_emlrtDCI{ 239,   // lineNo
  64,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo cab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  239,                                 // lineNo
  64,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo nb_emlrtDCI{ 246,   // lineNo
  111,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo dab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  246,                                 // lineNo
  111,                                 // colNo
  "mem_bvp.mem_T",                     // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo ob_emlrtDCI{ 246,   // lineNo
  64,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo eab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  246,                                 // lineNo
  64,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  260,                                 // lineNo
  111,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo pb_emlrtDCI{ 260,   // lineNo
  115,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo gab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  260,                                 // lineNo
  115,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  260,                                 // lineNo
  132,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo iab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  260,                                 // lineNo
  52,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo qb_emlrtDCI{ 260,   // lineNo
  58,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo jab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  260,                                 // lineNo
  58,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  270,                                 // lineNo
  55,                                  // colNo
  "K",                                 // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo rb_emlrtDCI{ 279,   // lineNo
  121,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo lab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  279,                                 // lineNo
  121,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  279,                                 // lineNo
  140,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dtaus0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo sb_emlrtDCI{ 280,   // lineNo
  99,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo nab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  280,                                 // lineNo
  99,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo oab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  280,                                 // lineNo
  118,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  279,                                 // lineNo
  64,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo tb_emlrtDCI{ 279,   // lineNo
  66,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo qab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  279,                                 // lineNo
  66,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo ub_emlrtDCI{ 290,   // lineNo
  121,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo rab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  290,                                 // lineNo
  121,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  290,                                 // lineNo
  140,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dtaus0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo vb_emlrtDCI{ 291,   // lineNo
  99,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo tab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  291,                                 // lineNo
  99,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo uab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  291,                                 // lineNo
  118,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dtaus0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  290,                                 // lineNo
  64,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo wb_emlrtDCI{ 290,   // lineNo
  66,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo wab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  290,                                 // lineNo
  66,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  301,                                 // lineNo
  109,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo xb_emlrtDCI{ 301,   // lineNo
  113,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo yab_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  301,                                 // lineNo
  113,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo abb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  301,                                 // lineNo
  130,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  301,                                 // lineNo
  52,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo yb_emlrtDCI{ 301,   // lineNo
  58,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo cbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  301,                                 // lineNo
  58,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo dbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  312,                                 // lineNo
  55,                                  // colNo
  "K",                                 // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo ac_emlrtDCI{ 321,   // lineNo
  121,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo ebb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  321,                                 // lineNo
  121,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  321,                                 // lineNo
  140,                                 // colNo
  "mem_deriv_propag_low.mem_dm0.mem_dm0_dfs0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo bc_emlrtDCI{ 322,   // lineNo
  97,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo gbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  322,                                 // lineNo
  97,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  322,                                 // lineNo
  116,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ibb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  321,                                 // lineNo
  64,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo cc_emlrtDCI{ 321,   // lineNo
  68,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo jbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  321,                                 // lineNo
  68,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo dc_emlrtDCI{ 331,   // lineNo
  121,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo kbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  331,                                 // lineNo
  121,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  331,                                 // lineNo
  140,                                 // colNo
  "mem_deriv_propag_low.mem_dn0.mem_dn0_dfs0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo ec_emlrtDCI{ 332,   // lineNo
  97,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo mbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  332,                                 // lineNo
  97,                                  // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  332,                                 // lineNo
  116,                                 // colNo
  "mem_deriv_propag_low.mem_dR0.mem_dR0_dfs0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo obb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  331,                                 // lineNo
  64,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo fc_emlrtDCI{ 331,   // lineNo
  68,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo pbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  331,                                 // lineNo
  68,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  29,                                  // lineNo
  37,                                  // colNo
  "mem_dR0_dbcj",                      // aName
  "dB0nbTRs_dbcj",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dbcj.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo rbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  29,                                  // lineNo
  39,                                  // colNo
  "mem_dR0_dbcj",                      // aName
  "dB0nbTRs_dbcj",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dbcj.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo sbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  30,                                  // lineNo
  36,                                  // colNo
  "mem_T",                             // aName
  "dB0nbTRs_dbcj",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dbcj.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo tbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  30,                                  // lineNo
  43,                                  // colNo
  "mem_dR0_dtaus0",                    // aName
  "dB0nbTRs_dtaus0",                   // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dtaus0.m",          // pName
  0                                    // checkKind
};

static emlrtBCInfo ubb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  30,                                  // lineNo
  46,                                  // colNo
  "mem_dR0_dtaus0",                    // aName
  "dB0nbTRs_dtaus0",                   // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dtaus0.m",          // pName
  0                                    // checkKind
};

static emlrtBCInfo vbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  31,                                  // lineNo
  37,                                  // colNo
  "mem_T",                             // aName
  "dB0nbTRs_dtaus0",                   // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dtaus0.m",          // pName
  0                                    // checkKind
};

static emlrtBCInfo wbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  30,                                  // lineNo
  39,                                  // colNo
  "mem_dR0_dfs0",                      // aName
  "dB0nbTRs_dfs0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dfs0.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo xbb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  30,                                  // lineNo
  42,                                  // colNo
  "mem_dR0_dfs0",                      // aName
  "dB0nbTRs_dfs0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dfs0.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo ybb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  31,                                  // lineNo
  36,                                  // colNo
  "mem_T",                             // aName
  "dB0nbTRs_dfs0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dfs0.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo acb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  48,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  56,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo gc_emlrtDCI{ 211,   // lineNo
  56,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo ccb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  92,                                  // lineNo
  72,                                  // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo hc_emlrtDCI{ 92,    // lineNo
  72,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo dcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  83,                                  // lineNo
  120,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ecb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  185,                                 // lineNo
  46,                                  // colNo
  "simulation_param.pt_s0_LIT",        // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  187,                                 // lineNo
  35,                                  // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo ic_emlrtDCI{ 187,   // lineNo
  35,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo gcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  101,                                 // lineNo
  95,                                  // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo jc_emlrtDCI{ 101,   // lineNo
  95,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo hcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  91,                                  // lineNo
  100,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo icb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  91,                                  // lineNo
  104,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  91,                                  // lineNo
  106,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo kc_emlrtDCI{ 91,    // lineNo
  106,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo kcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  91,                                  // lineNo
  118,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  91,                                  // lineNo
  41,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  91,                                  // lineNo
  45,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ncb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  110,                                 // lineNo
  95,                                  // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo lc_emlrtDCI{ 110,   // lineNo
  95,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo ocb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  100,                                 // lineNo
  122,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo mc_emlrtDCI{ 100,   // lineNo
  122,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo pcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  260,                                 // lineNo
  127,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  197,                                 // lineNo
  72,                                  // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  109,                                 // lineNo
  122,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo nc_emlrtDCI{ 109,   // lineNo
  122,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo scb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  270,                                 // lineNo
  92,                                  // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  280,                                 // lineNo
  111,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ucb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  108,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  110,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  112,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo oc_emlrtDCI{ 124,   // lineNo
  112,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo xcb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  124,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ycb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  49,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo adb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  124,                                 // lineNo
  51,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo pc_emlrtDCI{ 124,   // lineNo
  51,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo bdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  122,                                 // lineNo
  108,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  122,                                 // lineNo
  110,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ddb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  122,                                 // lineNo
  112,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo qc_emlrtDCI{ 122,   // lineNo
  112,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo edb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  122,                                 // lineNo
  124,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo fdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  122,                                 // lineNo
  49,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  122,                                 // lineNo
  51,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo rc_emlrtDCI{ 122,   // lineNo
  51,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo hdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  137,                                 // lineNo
  72,                                  // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo sc_emlrtDCI{ 137,   // lineNo
  72,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo idb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  291,                                 // lineNo
  111,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  204,                                 // lineNo
  72,                                  // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  148,                                 // lineNo
  100,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo tc_emlrtDCI{ 148,   // lineNo
  100,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo ldb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  279,                                 // lineNo
  21,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo mdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  301,                                 // lineNo
  125,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ndb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  290,                                 // lineNo
  21,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo odb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  158,                                 // lineNo
  100,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo uc_emlrtDCI{ 158,   // lineNo
  100,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo pdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  312,                                 // lineNo
  90,                                  // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  147,                                 // lineNo
  124,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo vc_emlrtDCI{ 147,   // lineNo
  124,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo rdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  322,                                 // lineNo
  109,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  167,                                 // colNo
  "mem_bvp.mem_y.mem_t",               // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  171,                                 // colNo
  "mem_bvp.mem_y.mem_t",               // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo wc_emlrtDCI{ 211,   // lineNo
  171,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo udb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  183,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  332,                                 // lineNo
  109,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  157,                                 // lineNo
  124,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo xc_emlrtDCI{ 157,   // lineNo
  124,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo xdb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  30,                                  // lineNo
  68,                                  // colNo
  "mem_y.mem_t",                       // aName
  "dB0nbTRs_dtaus0",                   // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dtaus0.m",          // pName
  0                                    // checkKind
};

static emlrtBCInfo ydb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  30,                                  // lineNo
  72,                                  // colNo
  "mem_y.mem_t",                       // aName
  "dB0nbTRs_dtaus0",                   // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dtaus0.m",          // pName
  0                                    // checkKind
};

static emlrtDCInfo yc_emlrtDCI{ 30,    // lineNo
  72,                                  // colNo
  "dB0nbTRs_dtaus0",                   // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dtaus0.m",          // pName
  1                                    // checkKind
};

static emlrtBCInfo aeb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  321,                                 // lineNo
  21,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo beb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  29,                                  // lineNo
  60,                                  // colNo
  "mem_y.mem_t",                       // aName
  "dB0nbTRs_dbcj",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dbcj.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo ceb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  29,                                  // lineNo
  64,                                  // colNo
  "mem_y.mem_t",                       // aName
  "dB0nbTRs_dbcj",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dbcj.m",            // pName
  0                                    // checkKind
};

static emlrtDCInfo ad_emlrtDCI{ 29,    // lineNo
  64,                                  // colNo
  "dB0nbTRs_dbcj",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dbcj.m",            // pName
  1                                    // checkKind
};

static emlrtBCInfo deb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  331,                                 // lineNo
  21,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo eeb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  30,                                  // lineNo
  64,                                  // colNo
  "mem_y.mem_t",                       // aName
  "dB0nbTRs_dfs0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dfs0.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo feb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  30,                                  // lineNo
  68,                                  // colNo
  "mem_y.mem_t",                       // aName
  "dB0nbTRs_dfs0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dfs0.m",            // pName
  0                                    // checkKind
};

static emlrtDCInfo bd_emlrtDCI{ 30,    // lineNo
  68,                                  // colNo
  "dB0nbTRs_dfs0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dfs0.m",            // pName
  1                                    // checkKind
};

static emlrtBCInfo geb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  31,                                  // lineNo
  76,                                  // colNo
  "mem_y.mem_t",                       // aName
  "dB0nbTRs_dtaus0",                   // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dtaus0.m",          // pName
  0                                    // checkKind
};

static emlrtBCInfo heb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  30,                                  // lineNo
  75,                                  // colNo
  "mem_y.mem_t",                       // aName
  "dB0nbTRs_dbcj",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dbcj.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo ieb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  218,                                 // lineNo
  68,                                  // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jeb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  31,                                  // lineNo
  75,                                  // colNo
  "mem_y.mem_t",                       // aName
  "dB0nbTRs_dfs0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dfs0.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo keb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  31,                                  // lineNo
  96,                                  // colNo
  "mem_dti_dtaus0",                    // aName
  "dB0nbTRs_dtaus0",                   // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dtaus0.m",          // pName
  0                                    // checkKind
};

static emlrtBCInfo leb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  31,                                  // lineNo
  102,                                 // colNo
  "mem_dti_dtaus0",                    // aName
  "dB0nbTRs_dtaus0",                   // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dtaus0.m",          // pName
  0                                    // checkKind
};

static emlrtBCInfo meb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  31,                                  // lineNo
  105,                                 // colNo
  "mem_dti_dtaus0",                    // aName
  "dB0nbTRs_dtaus0",                   // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dtaus0.m",          // pName
  0                                    // checkKind
};

static emlrtBCInfo neb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  30,                                  // lineNo
  93,                                  // colNo
  "mem_dti_dbcj",                      // aName
  "dB0nbTRs_dbcj",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dbcj.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo oeb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  30,                                  // lineNo
  97,                                  // colNo
  "mem_dti_dbcj",                      // aName
  "dB0nbTRs_dbcj",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dbcj.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo peb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  30,                                  // lineNo
  99,                                  // colNo
  "mem_dti_dbcj",                      // aName
  "dB0nbTRs_dbcj",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dbcj.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo qeb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  31,                                  // lineNo
  93,                                  // colNo
  "mem_dti_dfs0",                      // aName
  "dB0nbTRs_dfs0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dfs0.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo reb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  31,                                  // lineNo
  99,                                  // colNo
  "mem_dti_dfs0",                      // aName
  "dB0nbTRs_dfs0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dfs0.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo seb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  31,                                  // lineNo
  102,                                 // colNo
  "mem_dti_dfs0",                      // aName
  "dB0nbTRs_dfs0",                     // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
  "ctions/dB0nbTRs_dfs0.m",            // pName
  0                                    // checkKind
};

static emlrtBCInfo teb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  269,                                 // lineNo
  111,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ueb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  269,                                 // lineNo
  117,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo cd_emlrtDCI{ 269,   // lineNo
  117,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo veb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  269,                                 // lineNo
  136,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dtaus0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo web_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  269,                                 // lineNo
  52,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo xeb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  269,                                 // lineNo
  56,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo yeb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  269,                                 // lineNo
  58,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo dd_emlrtDCI{ 269,   // lineNo
  58,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo afb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  136,                                 // lineNo
  102,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo bfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  136,                                 // lineNo
  106,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo cfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  136,                                 // lineNo
  108,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo ed_emlrtDCI{ 136,   // lineNo
  108,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo dfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  136,                                 // lineNo
  120,                                 // colNo
  "vect_ind_iT",                       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo efb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  136,                                 // lineNo
  41,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ffb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  136,                                 // lineNo
  45,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo gfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  311,                                 // lineNo
  111,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo hfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  311,                                 // lineNo
  117,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo fd_emlrtDCI{ 311,   // lineNo
  117,                                 // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo ifb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  311,                                 // lineNo
  136,                                 // colNo
  "mem_deriv_propag_low.mem_duzi.mem_duzi_dfs0",// aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo jfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  311,                                 // lineNo
  52,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo kfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  311,                                 // lineNo
  56,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo lfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  311,                                 // lineNo
  60,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo gd_emlrtDCI{ 311,   // lineNo
  60,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo mfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  17,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo nfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  246,                                 // lineNo
  17,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ofb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  239,                                 // lineNo
  17,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo pfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  232,                                 // lineNo
  17,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo qfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  225,                                 // lineNo
  17,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo rfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  218,                                 // lineNo
  17,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo sfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  204,                                 // lineNo
  56,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo tfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  197,                                 // lineNo
  56,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo ufb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  301,                                 // lineNo
  21,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo vfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  260,                                 // lineNo
  21,                                  // colNo
  "mem_deriv_propag_high.mem_Bws0",    // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo wfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  157,                                 // lineNo
  13,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo hd_emlrtDCI{ 157,   // lineNo
  13,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo xfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  147,                                 // lineNo
  13,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo id_emlrtDCI{ 147,   // lineNo
  13,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo yfb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  109,                                 // lineNo
  13,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo jd_emlrtDCI{ 109,   // lineNo
  13,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtBCInfo agb_emlrtBCI{ -1,   // iFirst
  -1,                                  // iLast
  100,                                 // lineNo
  13,                                  // colNo
  "mem_deriv_propag_high.mem_B",       // aName
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  0                                    // checkKind
};

static emlrtDCInfo kd_emlrtDCI{ 100,   // lineNo
  13,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m",// pName
  1                                    // checkKind
};

static emlrtRTEInfo ld_emlrtRTEI{ 83,  // lineNo
  60,                                  // colNo
  "Deriv_Propag_DBDX_Construc",        // fName
  "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
  "pag_Functions/Deriv_Propag_DBDX_Construc.m"// pName
};

// Function Definitions
void Deriv_Propag_DBDX_Construc(const emlrtStack &sp, const MemBVP *mem_bvp,
  const CTCRConstruc *ctcr_construc, const CTCRCarac *ctcr_carac, const CTCRLoad
  *ctcr_load, const BVPProp *bvp_prop, const SimulationParam *simulation_param,
  const MemDerivPropagLow *mem_deriv_propag_low, MemDerivPropagHigh
  *mem_deriv_propag_high)
{
  static const int8_T iv1[3]{ 0, 0, 1 };

  coder::array<real_T, 2U> r;
  emlrtStack st;
  real_T a[9];
  real_T b_mem_deriv_propag_low[9];
  real_T e_R_tmp[9];
  real_T f_R_tmp[9];
  real_T y[3];
  real_T R_tmp;
  real_T b_R_tmp;
  real_T b_ctcr_construc;
  real_T b_gamma;
  real_T c_R_tmp;
  real_T ctcr_construc_tmp;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T d4;
  real_T d5;
  real_T d6;
  real_T d7;
  real_T d8;
  real_T d_R_tmp;
  real_T is0;
  real_T is_tmp;
  real_T nbT;
  int32_T b_iv[2];
  int32_T b_nbT[2];
  int32_T b_loop_ub;
  int32_T b_mem_deriv_propag_high;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T i7;
  int32_T i8;
  int32_T loop_ub;
  int32_T tp_is0;
  boolean_T b;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);

  //  ======================================================================= %
  //
  //  This function computes the High-Level partial derivatives Bx
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  mem_bvp               : (class) Memory of the BVP variables
  //  ctcr_construc         : (class) Robot features related to the model settings
  //  ctcr_carac            : (class) Robot features
  //  ctcr_load             : (class) Robot loads
  //  bvp_prop              : (class) Results of the BVP resolution
  //  simulation_param      : (class) Model settings
  //  mem_deriv_propag_low  : (class) Memory of the low-level derivatives
  //  mem_deriv_propag_high : (class) Memory of the high-level partial derivatives
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  mem_deriv_propag_high : (class) Memory of the high-level partial derivatives
  //
  //  ======================================================================= %
  //  ==================== Organization of the residual b =================== %
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
  //  ============================================== %
  //  ============== db_dtc and db_bc ============== %
  //  (eq 35)
  if (simulation_param->bool_J) {
    //  ========================= %
    //  ======== db1_dtc ======== %
    i = static_cast<int32_T>(ctcr_carac->nbT - 1.0);
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT - 1.0,
      mxDOUBLE_CLASS, static_cast<int32_T>(ctcr_carac->nbT - 1.0), &s_emlrtRTEI,
      (emlrtConstCTX)&sp);
    if (i - 1 >= 0) {
      d = 2.0 * ctcr_carac->nbT + 6.0;
      loop_ub = mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(1);
      b_iv[0] = 1;
      b_nbT[0] = 1;
      b_nbT[1] = mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(1);
    }

    for (int32_T b_i{0}; b_i < i; b_i++) {
      if (nbT + 7.0 > d) {
        i2 = 0;
        i1 = 0;
      } else {
        i1 = mem_deriv_propag_high->mem_B.size(1);
        if (nbT + 7.0 != static_cast<int32_T>(muDoubleScalarFloor(nbT + 7.0))) {
          emlrtIntegerCheckR2012b(nbT + 7.0, &o_emlrtDCI, (emlrtConstCTX)&sp);
        }

        if ((static_cast<int32_T>(nbT + 7.0) < 1) || (static_cast<int32_T>(nbT +
              7.0) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT + 7.0), 1, i1,
            &lx_emlrtBCI, (emlrtConstCTX)&sp);
        }

        i2 = static_cast<int32_T>(nbT + 7.0) - 1;
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &p_emlrtDCI, (emlrtConstCTX)&sp);
        }

        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i1,
            &mx_emlrtBCI, (emlrtConstCTX)&sp);
        }

        i1 = static_cast<int32_T>(d);
      }

      i3 = mem_deriv_propag_high->mem_B.size(0);
      if ((b_i + 1 < 1) || (b_i + 1 > i3)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i3, &kx_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
           mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (b_i) + 1U), 1, mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0),
          &ix_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
           ctcr_construc->vect_ind_iT.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (b_i) + 1U), 1, ctcr_construc->vect_ind_iT.size(0), &dcb_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      d4 = ctcr_construc->vect_ind_iT[b_i + ctcr_construc->vect_ind_iT.size(0) *
        2];
      if (d4 != static_cast<int32_T>(muDoubleScalarFloor(d4))) {
        emlrtIntegerCheckR2012b(d4, &n_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(d4) < 1) || (static_cast<int32_T>(d4) >
           mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d4), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(2), &jx_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      r.set_size(&ld_emlrtRTEI, &sp, 1,
                 mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(1));
      for (i3 = 0; i3 < loop_ub; i3++) {
        r[i3] = mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj[(b_i +
          mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0) * i3) +
          mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0) *
          mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(1) *
          (static_cast<int32_T>(d4) - 1)];
      }

      b_iv[1] = i1 - i2;
      emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &b_nbT[0], 2, &cb_emlrtECI,
        (emlrtCTX)&sp);
      b_loop_ub = r.size(1);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        mem_deriv_propag_high->mem_B[b_i + mem_deriv_propag_high->mem_B.size(0) *
          (i2 + i1)] = r[i1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }

    //  ========================= %
    //  ======== db2_dtc ======== %
    i1 = static_cast<int32_T>(ctcr_carac->nbT);
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
      static_cast<int32_T>(ctcr_carac->nbT), &t_emlrtRTEI, (emlrtConstCTX)&sp);
    if (i1 - 1 >= 0) {
      b_ctcr_construc = ctcr_construc->K[9 * (i1 - 1) + 8];
      d1 = 0.0 / b_ctcr_construc;
      d2 = 0.0 / b_ctcr_construc;
      d3 = 1.0 / b_ctcr_construc;
      is0 = ctcr_construc->vect_ind_iT[(i1 + ctcr_construc->vect_ind_iT.size(0) *
        2) - 1];
    }

    for (loop_ub = 0; loop_ub < i1; loop_ub++) {
      if (nbT != static_cast<int32_T>(muDoubleScalarFloor(nbT))) {
        emlrtIntegerCheckR2012b(nbT, &hc_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((i1 < 1) || (i1 > ctcr_construc->vect_ind_iT.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->vect_ind_iT.size(0),
          &ccb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      st.site = &lb_emlrtRSI;
      dB0nbTRs_dtcj(st, ctcr_construc->vect_ind_iT[(i1 +
        ctcr_construc->vect_ind_iT.size(0) * 2) - 1], static_cast<real_T>
                    (loop_ub) + 1.0, nbT, mem_bvp->mem_T, mem_bvp->mem_y,
                    mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj,
                    mem_deriv_propag_low->mem_dti.mem_dti_dtcj, a);
      if (i1 > ctcr_construc->K.size(2)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->K.size(2),
          &nx_emlrtBCI, (emlrtConstCTX)&sp);
      }

      d = 0.0;
      for (i2 = 0; i2 < 3; i2++) {
        d += ((d1 * a[i2] + d2 * a[i2 + 3]) + d3 * a[i2 + 6]) *
          ctcr_load->tau_tip[i2];
      }

      if (i1 > mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0), &hcb_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size
          (1), &icb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (i1 > ctcr_construc->vect_ind_iT.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
          ctcr_construc->vect_ind_iT.size(0), &kcb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (is0 != static_cast<int32_T>(muDoubleScalarFloor(is0))) {
        emlrtIntegerCheckR2012b(is0, &kc_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
           mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(2), &jcb_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      i2 = mem_deriv_propag_high->mem_B.size(0);
      if (i1 > i2) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
          &lcb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      i2 = mem_deriv_propag_high->mem_B.size(1);
      i3 = static_cast<int32_T>((nbT + 6.0) + (static_cast<real_T>(loop_ub) +
        1.0));
      if ((i3 < 1) || (i3 > i2)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mcb_emlrtBCI, (emlrtConstCTX)&
          sp);
      }

      mem_deriv_propag_high->mem_B[(i1 + mem_deriv_propag_high->mem_B.size(0) *
        (i3 - 1)) - 1] = mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj[((i1 +
        mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0) * loop_ub) +
        mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(0) *
        mem_deriv_propag_low->mem_duzi.mem_duzi_dtcj.size(1) *
        (static_cast<int32_T>(is0) - 1)) - 1] - d;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }

    //  ========================= %
    //  ======== db3_dtc ======== %
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
      static_cast<int32_T>(ctcr_carac->nbT), &u_emlrtRTEI, (emlrtConstCTX)&sp);
    if (i1 - 1 >= 0) {
      i4 = static_cast<int32_T>(muDoubleScalarFloor(nbT));
      b_gamma = ctcr_construc->vect_ind_iT[(i1 + ctcr_construc->vect_ind_iT.size
        (0) * 2) - 1];
      ctcr_construc_tmp = ctcr_construc->vect_ind_iT[(i1 +
        ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
      i5 = static_cast<int32_T>(nbT) + 1;
    }

    for (loop_ub = 0; loop_ub < i1; loop_ub++) {
      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2),
          &qx_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (nbT != i4) {
        emlrtIntegerCheckR2012b(nbT, &jc_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((i1 < 1) || (i1 > ctcr_construc->vect_ind_iT.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->vect_ind_iT.size(0),
          &gcb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (b_gamma != static_cast<int32_T>(muDoubleScalarFloor(b_gamma))) {
        emlrtIntegerCheckR2012b(b_gamma, &r_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(b_gamma) < 1) || (static_cast<int32_T>(b_gamma) >
           mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(3))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_gamma), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(3), &rx_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      for (i2 = 0; i2 < 3; i2++) {
        a[3 * i2] = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[(3 * i2 + 9 *
          loop_ub) + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (
          static_cast<int32_T>(b_gamma) - 1)];
        a[3 * i2 + 1] = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((3 * i2 + 9 *
          loop_ub) + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (
          static_cast<int32_T>(b_gamma) - 1)) + 1];
        a[3 * i2 + 2] = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((3 * i2 + 9 *
          loop_ub) + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (
          static_cast<int32_T>(b_gamma) - 1)) + 2];
      }

      coder::internal::blas::mtimes(a, ctcr_load->tau_tip, y);
      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1),
          &ox_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (static_cast<int32_T>(nbT) != i4) {
        emlrtIntegerCheckR2012b(nbT, &mc_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if (i1 > ctcr_construc->vect_ind_iT.size(0)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->vect_ind_iT.size(0),
          &ocb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (ctcr_construc_tmp != static_cast<int32_T>(muDoubleScalarFloor
           (ctcr_construc_tmp))) {
        emlrtIntegerCheckR2012b(ctcr_construc_tmp, &q_emlrtDCI, (emlrtConstCTX)&
          sp);
      }

      if ((static_cast<int32_T>(ctcr_construc_tmp) < 1) || (static_cast<int32_T>
           (ctcr_construc_tmp) > mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size
           (2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ctcr_construc_tmp), 1,
          mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(2), &px_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      b_mem_deriv_propag_high = mem_deriv_propag_high->mem_B.size(0);
      d = (nbT + 6.0) + (static_cast<real_T>(loop_ub) + 1.0);
      if (d != static_cast<int32_T>(d)) {
        emlrtIntegerCheckR2012b(d, &s_emlrtDCI, (emlrtConstCTX)&sp);
      }

      i2 = mem_deriv_propag_high->mem_B.size(1);
      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i2)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i2,
          &sx_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (nbT + 1.0 != static_cast<int32_T>(nbT + 1.0)) {
        emlrtIntegerCheckR2012b(nbT + 1.0, &kd_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((i5 < 1.0) || (i5 > b_mem_deriv_propag_high)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT) + 1, 1,
          b_mem_deriv_propag_high, &agb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      mem_deriv_propag_high->mem_B[static_cast<int32_T>(nbT) +
        mem_deriv_propag_high->mem_B.size(0) * (static_cast<int32_T>(d) - 1)] =
        mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj[3 * loop_ub + 3 *
        mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) *
        (static_cast<int32_T>(ctcr_construc_tmp) - 1)] - y[0];
      if ((nbT + 1.0) + 1.0 != static_cast<int32_T>((nbT + 1.0) + 1.0)) {
        emlrtIntegerCheckR2012b((nbT + 1.0) + 1.0, &kd_emlrtDCI, (emlrtConstCTX)
          &sp);
      }

      if ((static_cast<int32_T>((nbT + 1.0) + 1.0) < 1) || (static_cast<int32_T>
           ((nbT + 1.0) + 1.0) > b_mem_deriv_propag_high)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 1.0), 1,
          b_mem_deriv_propag_high, &agb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      mem_deriv_propag_high->mem_B[(static_cast<int32_T>((nbT + 1.0) + 1.0) +
        mem_deriv_propag_high->mem_B.size(0) * (static_cast<int32_T>(d) - 1)) -
        1] = mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj[(3 * loop_ub + 3 *
        mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) *
        (static_cast<int32_T>(ctcr_construc_tmp) - 1)) + 1] - y[1];
      if ((nbT + 1.0) + 2.0 != static_cast<int32_T>((nbT + 1.0) + 2.0)) {
        emlrtIntegerCheckR2012b((nbT + 1.0) + 2.0, &kd_emlrtDCI, (emlrtConstCTX)
          &sp);
      }

      if ((static_cast<int32_T>((nbT + 1.0) + 2.0) < 1) || (static_cast<int32_T>
           ((nbT + 1.0) + 2.0) > b_mem_deriv_propag_high)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 2.0), 1,
          b_mem_deriv_propag_high, &agb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      mem_deriv_propag_high->mem_B[(static_cast<int32_T>((nbT + 1.0) + 2.0) +
        mem_deriv_propag_high->mem_B.size(0) * (static_cast<int32_T>(d) - 1)) -
        1] = mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj[(3 * loop_ub + 3 *
        mem_deriv_propag_low->mem_dm0.mem_dm0_dtcj.size(1) *
        (static_cast<int32_T>(ctcr_construc_tmp) - 1)) + 2] - y[2];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }

    //  ========================= %
    //  ======== db4_dtc ======== %
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
      static_cast<int32_T>(ctcr_carac->nbT), &v_emlrtRTEI, (emlrtConstCTX)&sp);
    if (i1 - 1 >= 0) {
      tp_is0 = static_cast<int32_T>(muDoubleScalarFloor(nbT));
      is_tmp = ctcr_construc->vect_ind_iT[(i1 + ctcr_construc->vect_ind_iT.size
        (0) * 2) - 1];
      R_tmp = ctcr_construc->vect_ind_iT[(i1 + ctcr_construc->vect_ind_iT.size(0)
        * 2) - 1];
      i6 = static_cast<int32_T>(nbT) + 4;
    }

    for (loop_ub = 0; loop_ub < i1; loop_ub++) {
      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2),
          &vx_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (nbT != tp_is0) {
        emlrtIntegerCheckR2012b(nbT, &lc_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((i1 < 1) || (i1 > ctcr_construc->vect_ind_iT.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->vect_ind_iT.size(0),
          &ncb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (is_tmp != static_cast<int32_T>(muDoubleScalarFloor(is_tmp))) {
        emlrtIntegerCheckR2012b(is_tmp, &u_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(is_tmp) < 1) || (static_cast<int32_T>(is_tmp) >
           mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(3))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is_tmp), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(3), &wx_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      for (i2 = 0; i2 < 3; i2++) {
        a[3 * i2] = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[(3 * i2 + 9 *
          loop_ub) + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (
          static_cast<int32_T>(is_tmp) - 1)];
        a[3 * i2 + 1] = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((3 * i2 + 9 *
          loop_ub) + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (
          static_cast<int32_T>(is_tmp) - 1)) + 1];
        a[3 * i2 + 2] = mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj[((3 * i2 + 9 *
          loop_ub) + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dtcj.size(2) * (
          static_cast<int32_T>(is_tmp) - 1)) + 2];
      }

      coder::internal::blas::mtimes(a, ctcr_load->f_tip, y);
      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1),
          &tx_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (static_cast<int32_T>(nbT) != tp_is0) {
        emlrtIntegerCheckR2012b(nbT, &nc_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if (i1 > ctcr_construc->vect_ind_iT.size(0)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->vect_ind_iT.size(0),
          &rcb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (R_tmp != static_cast<int32_T>(muDoubleScalarFloor(R_tmp))) {
        emlrtIntegerCheckR2012b(R_tmp, &t_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(R_tmp) < 1) || (static_cast<int32_T>(R_tmp) >
           mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(R_tmp), 1,
          mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(2), &ux_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      b_mem_deriv_propag_high = mem_deriv_propag_high->mem_B.size(0);
      d = (nbT + 6.0) + (static_cast<real_T>(loop_ub) + 1.0);
      if (d != static_cast<int32_T>(d)) {
        emlrtIntegerCheckR2012b(d, &v_emlrtDCI, (emlrtConstCTX)&sp);
      }

      i2 = mem_deriv_propag_high->mem_B.size(1);
      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i2)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i2,
          &xx_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (nbT + 4.0 != static_cast<int32_T>(nbT + 4.0)) {
        emlrtIntegerCheckR2012b(nbT + 4.0, &jd_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((i6 < 1.0) || (i6 > b_mem_deriv_propag_high)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT) + 4, 1,
          b_mem_deriv_propag_high, &yfb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      mem_deriv_propag_high->mem_B[(static_cast<int32_T>(nbT) +
        mem_deriv_propag_high->mem_B.size(0) * (static_cast<int32_T>(d) - 1)) +
        3] = mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[3 * loop_ub + 3 *
        mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) * (static_cast<
        int32_T>(R_tmp) - 1)] - y[0];
      if ((nbT + 4.0) + 1.0 != static_cast<int32_T>((nbT + 4.0) + 1.0)) {
        emlrtIntegerCheckR2012b((nbT + 4.0) + 1.0, &jd_emlrtDCI, (emlrtConstCTX)
          &sp);
      }

      if ((static_cast<int32_T>((nbT + 4.0) + 1.0) < 1) || (static_cast<int32_T>
           ((nbT + 4.0) + 1.0) > b_mem_deriv_propag_high)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 1.0), 1,
          b_mem_deriv_propag_high, &yfb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      mem_deriv_propag_high->mem_B[(static_cast<int32_T>((nbT + 4.0) + 1.0) +
        mem_deriv_propag_high->mem_B.size(0) * (static_cast<int32_T>(d) - 1)) -
        1] = mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[(3 * loop_ub + 3 *
        mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) *
        (static_cast<int32_T>(R_tmp) - 1)) + 1] - y[1];
      if ((nbT + 4.0) + 2.0 != static_cast<int32_T>((nbT + 4.0) + 2.0)) {
        emlrtIntegerCheckR2012b((nbT + 4.0) + 2.0, &jd_emlrtDCI, (emlrtConstCTX)
          &sp);
      }

      if ((static_cast<int32_T>((nbT + 4.0) + 2.0) < 1) || (static_cast<int32_T>
           ((nbT + 4.0) + 2.0) > b_mem_deriv_propag_high)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 2.0), 1,
          b_mem_deriv_propag_high, &yfb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      mem_deriv_propag_high->mem_B[(static_cast<int32_T>((nbT + 4.0) + 2.0) +
        mem_deriv_propag_high->mem_B.size(0) * (static_cast<int32_T>(d) - 1)) -
        1] = mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj[(3 * loop_ub + 3 *
        mem_deriv_propag_low->mem_dn0.mem_dn0_dtcj.size(1) *
        (static_cast<int32_T>(R_tmp) - 1)) + 2] - y[2];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }

    //  ========================= %
    //  ======== db1_dbc ======== %
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT - 1.0,
      mxDOUBLE_CLASS, static_cast<int32_T>(ctcr_carac->nbT - 1.0), &w_emlrtRTEI,
      (emlrtConstCTX)&sp);
    for (int32_T b_i{0}; b_i < i; b_i++) {
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, nbT, mxDOUBLE_CLASS,
        static_cast<int32_T>(nbT), &x_emlrtRTEI, (emlrtConstCTX)&sp);
      for (loop_ub = 0; loop_ub < i1; loop_ub++) {
        if (static_cast<uint32_T>(b_i) == static_cast<uint32_T>(loop_ub)) {
          if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
               mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(b_i) + 1U), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0),
              &bdb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
               mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<
              uint32_T>(loop_ub) + 1U), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1),
              &cdb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
               ctcr_construc->vect_ind_iT.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(b_i) + 1U), 1,
              ctcr_construc->vect_ind_iT.size(0), &edb_emlrtBCI, (emlrtConstCTX)
              &sp);
          }

          d = ctcr_construc->vect_ind_iT[b_i + ctcr_construc->vect_ind_iT.size(0)
            * 2] + 1.0;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &qc_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
               mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2),
              &ddb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_high->mem_B.size(0);
          if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(b_i) + 1U), 1, i2, &fdb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_high->mem_B.size(1);
          d4 = (2.0 * nbT + 6.0) + (static_cast<real_T>(loop_ub) + 1.0);
          if (d4 != static_cast<int32_T>(muDoubleScalarFloor(d4))) {
            emlrtIntegerCheckR2012b(d4, &rc_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(d4) < 1) || (static_cast<int32_T>(d4) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d4), 1, i2,
              &gdb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_B[b_i + mem_deriv_propag_high->mem_B.size(0)
            * (static_cast<int32_T>(d4) - 1)] =
            mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj[(b_i +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) * loop_ub) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) *
            mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1) * (static_cast<
            int32_T>(d) - 1)];
        } else {
          if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
               mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(b_i) + 1U), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0),
              &ucb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
               mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<
              uint32_T>(loop_ub) + 1U), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1),
              &vcb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
               ctcr_construc->vect_ind_iT.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(b_i) + 1U), 1,
              ctcr_construc->vect_ind_iT.size(0), &xcb_emlrtBCI, (emlrtConstCTX)
              &sp);
          }

          d = ctcr_construc->vect_ind_iT[b_i + ctcr_construc->vect_ind_iT.size(0)
            * 2];
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &oc_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
               mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2),
              &wcb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_high->mem_B.size(0);
          if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) || (
               static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) > i2)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(b_i) + 1U), 1, i2, &ycb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_high->mem_B.size(1);
          d4 = (2.0 * nbT + 6.0) + (static_cast<real_T>(loop_ub) + 1.0);
          if (d4 != static_cast<int32_T>(muDoubleScalarFloor(d4))) {
            emlrtIntegerCheckR2012b(d4, &pc_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(d4) < 1) || (static_cast<int32_T>(d4) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d4), 1, i2,
              &adb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_B[b_i + mem_deriv_propag_high->mem_B.size(0)
            * (static_cast<int32_T>(d4) - 1)] =
            mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj[(b_i +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) * loop_ub) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) *
            mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1) * (static_cast<
            int32_T>(d) - 1)];
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }

    //  ========================= %
    //  ======== db2_dbc ======== %
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
      static_cast<int32_T>(ctcr_carac->nbT), &y_emlrtRTEI, (emlrtConstCTX)&sp);
    for (loop_ub = 0; loop_ub < i1; loop_ub++) {
      st.site = &ob_emlrtRSI;
      if (nbT != static_cast<int32_T>(muDoubleScalarFloor(nbT))) {
        emlrtIntegerCheckR2012b(nbT, &sc_emlrtDCI, &st);
      }

      if ((i1 < 1) || (i1 > ctcr_construc->vect_ind_iT.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->vect_ind_iT.size(0),
          &hdb_emlrtBCI, &st);
      }

      is0 = ctcr_construc->vect_ind_iT[(i1 + ctcr_construc->vect_ind_iT.size(0) *
        2) - 1];

      //  ======================================================================= %
      //
      //  This function computes the partial derivative of rigid transformation
      //  matrix, from the base B0 to the current s, associated to the tube i=nbT
      //  w.r.t. the translation of the tubes bc
      //
      //  ====================
      //  ====== INPUTS ======
      //
      //  is            : (int ∊ [1 , nbP])    Index of the current curvilinear abscissa
      //  j             : (int ∊ [1 , nbT])    Index of the tube associated to the translation used for the partial derivative
      //  nbT           : (int > 0)            Number of tubes of the CTCR
      //  mem_T         : (4 x 4 x nbP)        Matrix memory of the B0(0)Ts values
      //  mem_y         : (class)              Matrix memory of the y(s) values
      //  mem_dR0_dbcj  : (3 x 3 x nbT x nbP)  Matrix memory of the dR0(s)_dbcj partial derivatives
      //  mem_dti_dbcj  : (nbT x nbT x nbP)    Matrix memory of the dti(s)_dbcj partial derivatives
      //
      //  ====================
      //  ===== OUTPUTS ======
      //
      //  dB0nbTRsdbcj  : (3 x 3)              Value of the partial derivative
      //
      //  ======================================================================= %
      b = (i1 > mem_bvp->mem_y.mem_t.size(0));
      if (b) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
          mem_bvp->mem_y.mem_t.size(0), &beb_emlrtBCI, &st);
      }

      if (is0 != static_cast<int32_T>(muDoubleScalarFloor(is0))) {
        emlrtIntegerCheckR2012b(is0, &ad_emlrtDCI, &st);
      }

      if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
           mem_bvp->mem_y.mem_t.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
          mem_bvp->mem_y.mem_t.size(1), &ceb_emlrtBCI, &st);
      }

      b_gamma = mem_bvp->mem_y.mem_t[(static_cast<int32_T>(nbT) +
        mem_bvp->mem_y.mem_t.size(0) * (static_cast<int32_T>(is0) - 1)) - 1];

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
      b_R_tmp = muDoubleScalarSin(b_gamma);
      c_R_tmp = muDoubleScalarCos(b_gamma);
      if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
           mem_bvp->mem_y.mem_t.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
          mem_bvp->mem_y.mem_t.size(1), &heb_emlrtBCI, &st);
      }

      b_gamma = mem_bvp->mem_y.mem_t[(static_cast<int32_T>(nbT) +
        mem_bvp->mem_y.mem_t.size(0) * (static_cast<int32_T>(is0) - 1)) - 1];

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
      d_R_tmp = muDoubleScalarSin(b_gamma);
      R_tmp = muDoubleScalarCos(b_gamma);
      if (i1 > mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
          mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0), &neb_emlrtBCI, &st);
      }

      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1),
          &oeb_emlrtBCI, &st);
      }

      if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
           mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
          mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(2), &peb_emlrtBCI, &st);
      }

      b_gamma = mem_deriv_propag_low->mem_dti.mem_dti_dbcj[((static_cast<int32_T>
        (nbT) + mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0) * loop_ub) +
        mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(0) *
        mem_deriv_propag_low->mem_dti.mem_dti_dbcj.size(1) *
        (static_cast<int32_T>(is0) - 1)) - 1];
      if ((loop_ub + 1 < 1) || (loop_ub + 1 >
           mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2), &qbb_emlrtBCI, &st);
      }

      if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
           mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3), &rbb_emlrtBCI, &st);
      }

      if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
           mem_bvp->mem_T.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
          mem_bvp->mem_T.size(2), &sbb_emlrtBCI, &st);
      }

      if (i1 > ctcr_construc->K.size(2)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->K.size(2),
          &yx_emlrtBCI, (emlrtConstCTX)&sp);
      }

      b_ctcr_construc = ctcr_construc->K[9 * (static_cast<int32_T>(nbT) - 1) + 8];
      e_R_tmp[0] = c_R_tmp;
      e_R_tmp[1] = -b_R_tmp;
      e_R_tmp[2] = 0.0;
      e_R_tmp[3] = b_R_tmp;
      e_R_tmp[4] = c_R_tmp;
      e_R_tmp[5] = 0.0;
      f_R_tmp[0] = R_tmp;
      f_R_tmp[3] = -d_R_tmp;
      f_R_tmp[6] = 0.0;
      f_R_tmp[1] = d_R_tmp;
      f_R_tmp[4] = R_tmp;
      f_R_tmp[7] = 0.0;
      for (i = 0; i < 3; i++) {
        b_loop_ub = iv1[i];
        e_R_tmp[i + 6] = b_loop_ub;
        f_R_tmp[3 * i + 2] = b_loop_ub;
        d = f_R_tmp[3 * i];
        d4 = f_R_tmp[3 * i + 1];
        for (i2 = 0; i2 < 3; i2++) {
          a[i + 3 * i2] = static_cast<real_T>(iv[i2]) * d + static_cast<real_T>
            (iv[i2 + 3]) * d4;
        }
      }

      for (i = 0; i < 9; i++) {
        a[i] *= b_gamma;
      }

      for (i = 0; i < 3; i++) {
        d = a[3 * i];
        d4 = e_R_tmp[3 * i];
        i2 = 3 * i + 1;
        i3 = 3 * i + 2;
        for (i4 = 0; i4 < 3; i4++) {
          b_loop_ub = i + 3 * i4;
          f_R_tmp[b_loop_ub] = (mem_bvp->mem_T[i4 + 16 * (static_cast<int32_T>
            (is0) - 1)] * d + mem_bvp->mem_T[(i4 + 16 * (static_cast<int32_T>
            (is0) - 1)) + 4] * a[i2]) + mem_bvp->mem_T[(i4 + 16 * (static_cast<
            int32_T>(is0) - 1)) + 8] * a[i3];
          b_mem_deriv_propag_low[b_loop_ub] =
            (mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[(i4 + 9 * loop_ub) + 9 *
             mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) *
             (static_cast<int32_T>(is0) - 1)] * d4 +
             mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((i4 + 9 * loop_ub) + 9 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (static_cast<
               int32_T>(is0) - 1)) + 3] * e_R_tmp[i2]) +
            mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((i4 + 9 * loop_ub) + 9 *
            mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) *
            (static_cast<int32_T>(is0) - 1)) + 6] * e_R_tmp[i3];
        }

        y[i] = static_cast<real_T>(iv1[i]) / b_ctcr_construc;
      }

      for (i = 0; i < 9; i++) {
        b_mem_deriv_propag_low[i] += f_R_tmp[i];
      }

      d = 0.0;
      d4 = y[0];
      d1 = y[1];
      d2 = y[2];
      for (i = 0; i < 3; i++) {
        d += ((d4 * b_mem_deriv_propag_low[3 * i] + d1 * b_mem_deriv_propag_low
               [3 * i + 1]) + d2 * b_mem_deriv_propag_low[3 * i + 2]) *
          ctcr_load->tau_tip[i];
      }

      if (i1 > mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0), &afb_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size
          (1), &bfb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (i1 > ctcr_construc->vect_ind_iT.size(0)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
          ctcr_construc->vect_ind_iT.size(0), &dfb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      d4 = ctcr_construc->vect_ind_iT[(static_cast<int32_T>(nbT) +
        ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
      if (d4 != static_cast<int32_T>(muDoubleScalarFloor(d4))) {
        emlrtIntegerCheckR2012b(d4, &ed_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(d4) < 1) || (static_cast<int32_T>(d4) >
           mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d4), 1,
          mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2), &cfb_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      i = mem_deriv_propag_high->mem_B.size(0);
      if (i1 > i) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i,
          &efb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      i = mem_deriv_propag_high->mem_B.size(1);
      i2 = static_cast<int32_T>((2.0 * nbT + 6.0) + (static_cast<real_T>(loop_ub)
        + 1.0));
      if ((i2 < 1) || (i2 > i)) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i, &ffb_emlrtBCI, (emlrtConstCTX)&
          sp);
      }

      mem_deriv_propag_high->mem_B[(static_cast<int32_T>(nbT) +
        mem_deriv_propag_high->mem_B.size(0) * (i2 - 1)) - 1] =
        mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj[((static_cast<int32_T>(nbT)
        + mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) * loop_ub) +
        mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) *
        mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1) * (static_cast<
        int32_T>(d4) - 1)) - 1] - d;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }

    //  ========================= %
    //  ======== db3_dbc ======== %
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
      static_cast<int32_T>(ctcr_carac->nbT), &ab_emlrtRTEI, (emlrtConstCTX)&sp);
    if (i1 - 1 >= 0) {
      i7 = static_cast<int32_T>(muDoubleScalarFloor(nbT));
      d5 = ctcr_construc->vect_ind_iT[(i1 + ctcr_construc->vect_ind_iT.size(0) *
        2) - 1];
      d6 = ctcr_construc->vect_ind_iT[(i1 + ctcr_construc->vect_ind_iT.size(0) *
        2) - 1];
    }

    for (loop_ub = 0; loop_ub < i1; loop_ub++) {
      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2),
          &cy_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (nbT != i7) {
        emlrtIntegerCheckR2012b(nbT, &tc_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((i1 < 1) || (i1 > ctcr_construc->vect_ind_iT.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->vect_ind_iT.size(0),
          &kdb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (d5 != static_cast<int32_T>(muDoubleScalarFloor(d5))) {
        emlrtIntegerCheckR2012b(d5, &x_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(d5) < 1) || (static_cast<int32_T>(d5) >
           mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d5), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3), &dy_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      for (i = 0; i < 3; i++) {
        a[3 * i] = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[(3 * i + 9 *
          loop_ub) + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
          static_cast<int32_T>(d5) - 1)];
        a[3 * i + 1] = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i + 9 *
          loop_ub) + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
          static_cast<int32_T>(d5) - 1)) + 1];
        a[3 * i + 2] = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i + 9 *
          loop_ub) + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
          static_cast<int32_T>(d5) - 1)) + 2];
      }

      coder::internal::blas::mtimes(a, ctcr_load->tau_tip, y);
      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1),
          &ay_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (static_cast<int32_T>(nbT) != i7) {
        emlrtIntegerCheckR2012b(nbT, &vc_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if (i1 > ctcr_construc->vect_ind_iT.size(0)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->vect_ind_iT.size(0),
          &qdb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (d6 != static_cast<int32_T>(muDoubleScalarFloor(d6))) {
        emlrtIntegerCheckR2012b(d6, &w_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(d6) < 1) || (static_cast<int32_T>(d6) >
           mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d6), 1,
          mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(2), &by_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      b_mem_deriv_propag_high = mem_deriv_propag_high->mem_B.size(0);
      d = (2.0 * nbT + 6.0) + (static_cast<real_T>(loop_ub) + 1.0);
      if (d != static_cast<int32_T>(d)) {
        emlrtIntegerCheckR2012b(d, &y_emlrtDCI, (emlrtConstCTX)&sp);
      }

      i = mem_deriv_propag_high->mem_B.size(1);
      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i,
          &ey_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (nbT + 1.0 != static_cast<int32_T>(nbT + 1.0)) {
        emlrtIntegerCheckR2012b(nbT + 1.0, &id_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(nbT) + 1 < 1.0) || (static_cast<int32_T>(nbT) +
           1 > b_mem_deriv_propag_high)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT) + 1, 1,
          b_mem_deriv_propag_high, &xfb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      mem_deriv_propag_high->mem_B[static_cast<int32_T>(nbT) +
        mem_deriv_propag_high->mem_B.size(0) * (static_cast<int32_T>(d) - 1)] =
        mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[3 * loop_ub + 3 *
        mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) *
        (static_cast<int32_T>(d6) - 1)] - y[0];
      if ((nbT + 1.0) + 1.0 != static_cast<int32_T>((nbT + 1.0) + 1.0)) {
        emlrtIntegerCheckR2012b((nbT + 1.0) + 1.0, &id_emlrtDCI, (emlrtConstCTX)
          &sp);
      }

      if ((static_cast<int32_T>((nbT + 1.0) + 1.0) < 1) || (static_cast<int32_T>
           ((nbT + 1.0) + 1.0) > b_mem_deriv_propag_high)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 1.0), 1,
          b_mem_deriv_propag_high, &xfb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      mem_deriv_propag_high->mem_B[(static_cast<int32_T>((nbT + 1.0) + 1.0) +
        mem_deriv_propag_high->mem_B.size(0) * (static_cast<int32_T>(d) - 1)) -
        1] = mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[(3 * loop_ub + 3 *
        mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) *
        (static_cast<int32_T>(d6) - 1)) + 1] - y[1];
      if ((nbT + 1.0) + 2.0 != static_cast<int32_T>((nbT + 1.0) + 2.0)) {
        emlrtIntegerCheckR2012b((nbT + 1.0) + 2.0, &id_emlrtDCI, (emlrtConstCTX)
          &sp);
      }

      if ((static_cast<int32_T>((nbT + 1.0) + 2.0) < 1) || (static_cast<int32_T>
           ((nbT + 1.0) + 2.0) > b_mem_deriv_propag_high)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 2.0), 1,
          b_mem_deriv_propag_high, &xfb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      mem_deriv_propag_high->mem_B[(static_cast<int32_T>((nbT + 1.0) + 2.0) +
        mem_deriv_propag_high->mem_B.size(0) * (static_cast<int32_T>(d) - 1)) -
        1] = mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj[(3 * loop_ub + 3 *
        mem_deriv_propag_low->mem_dm0.mem_dm0_dbcj.size(1) *
        (static_cast<int32_T>(d6) - 1)) + 2] - y[2];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }

    //  ========================= %
    //  ======== db4_dbc ======== %
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
      static_cast<int32_T>(ctcr_carac->nbT), &bb_emlrtRTEI, (emlrtConstCTX)&sp);
    if (i1 - 1 >= 0) {
      i8 = static_cast<int32_T>(muDoubleScalarFloor(nbT));
      d7 = ctcr_construc->vect_ind_iT[(i1 + ctcr_construc->vect_ind_iT.size(0) *
        2) - 1];
      d8 = ctcr_construc->vect_ind_iT[(i1 + ctcr_construc->vect_ind_iT.size(0) *
        2) - 1];
    }

    for (loop_ub = 0; loop_ub < i1; loop_ub++) {
      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2),
          &hy_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (nbT != i8) {
        emlrtIntegerCheckR2012b(nbT, &uc_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((i1 < 1) || (i1 > ctcr_construc->vect_ind_iT.size(0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->vect_ind_iT.size(0),
          &odb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (d7 != static_cast<int32_T>(muDoubleScalarFloor(d7))) {
        emlrtIntegerCheckR2012b(d7, &bb_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(d7) < 1) || (static_cast<int32_T>(d7) >
           mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d7), 1,
          mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(3), &iy_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      for (i = 0; i < 3; i++) {
        a[3 * i] = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[(3 * i + 9 *
          loop_ub) + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
          static_cast<int32_T>(d7) - 1)];
        a[3 * i + 1] = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i + 9 *
          loop_ub) + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
          static_cast<int32_T>(d7) - 1)) + 1];
        a[3 * i + 2] = mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj[((3 * i + 9 *
          loop_ub) + 9 * mem_deriv_propag_low->mem_dR0.mem_dR0_dbcj.size(2) * (
          static_cast<int32_T>(d7) - 1)) + 2];
      }

      coder::internal::blas::mtimes(a, ctcr_load->f_tip, y);
      if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) || (
           static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
           mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
          (loop_ub) + 1U), 1, mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1),
          &fy_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (static_cast<int32_T>(nbT) != i8) {
        emlrtIntegerCheckR2012b(nbT, &xc_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if (i1 > ctcr_construc->vect_ind_iT.size(0)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, ctcr_construc->vect_ind_iT.size(0),
          &wdb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (d8 != static_cast<int32_T>(muDoubleScalarFloor(d8))) {
        emlrtIntegerCheckR2012b(d8, &ab_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(d8) < 1) || (static_cast<int32_T>(d8) >
           mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d8), 1,
          mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(2), &gy_emlrtBCI,
          (emlrtConstCTX)&sp);
      }

      b_mem_deriv_propag_high = mem_deriv_propag_high->mem_B.size(0);
      d = (2.0 * nbT + 6.0) + (static_cast<real_T>(loop_ub) + 1.0);
      if (d != static_cast<int32_T>(d)) {
        emlrtIntegerCheckR2012b(d, &cb_emlrtDCI, (emlrtConstCTX)&sp);
      }

      i = mem_deriv_propag_high->mem_B.size(1);
      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i,
          &jy_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (nbT + 4.0 != static_cast<int32_T>(nbT + 4.0)) {
        emlrtIntegerCheckR2012b(nbT + 4.0, &hd_emlrtDCI, (emlrtConstCTX)&sp);
      }

      if ((static_cast<int32_T>(nbT) + 4 < 1.0) || (static_cast<int32_T>(nbT) +
           4 > b_mem_deriv_propag_high)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT) + 4, 1,
          b_mem_deriv_propag_high, &wfb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      mem_deriv_propag_high->mem_B[(static_cast<int32_T>(nbT) +
        mem_deriv_propag_high->mem_B.size(0) * (static_cast<int32_T>(d) - 1)) +
        3] = mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[3 * loop_ub + 3 *
        mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) * (static_cast<
        int32_T>(d8) - 1)] - y[0];
      if ((nbT + 4.0) + 1.0 != static_cast<int32_T>((nbT + 4.0) + 1.0)) {
        emlrtIntegerCheckR2012b((nbT + 4.0) + 1.0, &hd_emlrtDCI, (emlrtConstCTX)
          &sp);
      }

      if ((static_cast<int32_T>((nbT + 4.0) + 1.0) < 1) || (static_cast<int32_T>
           ((nbT + 4.0) + 1.0) > b_mem_deriv_propag_high)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 1.0), 1,
          b_mem_deriv_propag_high, &wfb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      mem_deriv_propag_high->mem_B[(static_cast<int32_T>((nbT + 4.0) + 1.0) +
        mem_deriv_propag_high->mem_B.size(0) * (static_cast<int32_T>(d) - 1)) -
        1] = mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[(3 * loop_ub + 3 *
        mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) *
        (static_cast<int32_T>(d8) - 1)) + 1] - y[1];
      if ((nbT + 4.0) + 2.0 != static_cast<int32_T>((nbT + 4.0) + 2.0)) {
        emlrtIntegerCheckR2012b((nbT + 4.0) + 2.0, &hd_emlrtDCI, (emlrtConstCTX)
          &sp);
      }

      if ((static_cast<int32_T>((nbT + 4.0) + 2.0) < 1) || (static_cast<int32_T>
           ((nbT + 4.0) + 2.0) > b_mem_deriv_propag_high)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 2.0), 1,
          b_mem_deriv_propag_high, &wfb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      mem_deriv_propag_high->mem_B[(static_cast<int32_T>((nbT + 4.0) + 2.0) +
        mem_deriv_propag_high->mem_B.size(0) * (static_cast<int32_T>(d) - 1)) -
        1] = mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj[(3 * loop_ub + 3 *
        mem_deriv_propag_low->mem_dn0.mem_dn0_dbcj.size(1) *
        (static_cast<int32_T>(d8) - 1)) + 2] - y[2];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
  }

  //  =========================== %
  //  ======== db_dyu(0) ======== %
  //  (eq 35)
  if (ctcr_carac->nbT + 6.0 < 1.0) {
    i = 0;
    i1 = 0;
  } else {
    i = mem_deriv_propag_high->mem_B.size(0);
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &ky_emlrtBCI, (emlrtConstCTX)&sp);
    }

    d = static_cast<int32_T>(muDoubleScalarFloor(ctcr_carac->nbT + 6.0));
    if (ctcr_carac->nbT + 6.0 != d) {
      emlrtIntegerCheckR2012b(ctcr_carac->nbT + 6.0, &db_emlrtDCI,
        (emlrtConstCTX)&sp);
    }

    i = mem_deriv_propag_high->mem_B.size(0);
    if ((static_cast<int32_T>(ctcr_carac->nbT + 6.0) < 1) || (static_cast<
         int32_T>(ctcr_carac->nbT + 6.0) > i)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ctcr_carac->nbT + 6.0),
        1, i, &ly_emlrtBCI, (emlrtConstCTX)&sp);
    }

    i = static_cast<int32_T>(ctcr_carac->nbT + 6.0);
    i1 = mem_deriv_propag_high->mem_B.size(1);
    if (i1 < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i1, &my_emlrtBCI, (emlrtConstCTX)&sp);
    }

    if (ctcr_carac->nbT + 6.0 != d) {
      emlrtIntegerCheckR2012b(ctcr_carac->nbT + 6.0, &eb_emlrtDCI,
        (emlrtConstCTX)&sp);
    }

    i1 = mem_deriv_propag_high->mem_B.size(1);
    if ((static_cast<int32_T>(ctcr_carac->nbT + 6.0) < 1) ||
        (static_cast<int32_T>(ctcr_carac->nbT + 6.0) > i1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ctcr_carac->nbT + 6.0),
        1, i1, &ny_emlrtBCI, (emlrtConstCTX)&sp);
    }

    i1 = static_cast<int32_T>(ctcr_carac->nbT + 6.0);
  }

  b_iv[0] = i;
  b_iv[1] = i1;
  emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, ((coder::array<real_T, 2U> *)
    &bvp_prop->Bu)->size(), 2, &db_emlrtECI, (emlrtCTX)&sp);
  loop_ub = bvp_prop->Bu.size(1);
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = bvp_prop->Bu.size(0);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      mem_deriv_propag_high->mem_B[i1 + mem_deriv_propag_high->mem_B.size(0) * i]
        = bvp_prop->Bu[i1 + bvp_prop->Bu.size(0) * i];
    }
  }

  if (simulation_param->bool_Cs0) {
    i = simulation_param->pt_s0_LIT.size(1);
    for (tp_is0 = 0; tp_is0 < i; tp_is0++) {
      if (tp_is0 + 1 > simulation_param->pt_s0_LIT.size(1)) {
        emlrtDynamicBoundsCheckR2012b(tp_is0 + 1, 1,
          simulation_param->pt_s0_LIT.size(1), &ecb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      is0 = simulation_param->pt_s0_LIT[tp_is0];
      if (nbT != static_cast<int32_T>(muDoubleScalarFloor(nbT))) {
        emlrtIntegerCheckR2012b(nbT, &ic_emlrtDCI, (emlrtConstCTX)&sp);
      }

      i1 = static_cast<int32_T>(nbT);
      if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
           ctcr_construc->vect_ind_iT.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
          ctcr_construc->vect_ind_iT.size(0), &fcb_emlrtBCI, (emlrtConstCTX)&sp);
      }

      if (simulation_param->pt_s0_LIT[tp_is0] == ctcr_construc->vect_ind_iT[(
           static_cast<int32_T>(nbT) + ctcr_construc->vect_ind_iT.size(0) * 2) -
          1]) {
        //  =========================================== %
        //  ======= db_dtau0(L0) and db_df0(L0) ======= %
        //  (eq 35)
        //  ============================== %
        //  ======== db1_dtau(L0) ======== %
        if (nbT - 1.0 < 1.0) {
          i1 = 0;
        } else {
          i1 = mem_deriv_propag_high->mem_Bws0.size(0);
          if (i1 < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i1, &oy_emlrtBCI, (emlrtConstCTX)
              &sp);
          }

          if ((static_cast<int32_T>(nbT) - 1 < 1) || (static_cast<int32_T>(nbT)
               - 1 > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT) - 1, 1, i1,
              &py_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = static_cast<int32_T>(nbT) - 1;
        }

        b_mem_deriv_propag_high = mem_deriv_propag_high->mem_Bws0.size(1);
        if (b_mem_deriv_propag_high < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, b_mem_deriv_propag_high,
            &tfb_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if (b_mem_deriv_propag_high < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, 1, &tfb_emlrtBCI, (emlrtConstCTX)&
            sp);
        }

        if (b_mem_deriv_propag_high < 3) {
          emlrtDynamicBoundsCheckR2012b(3, 1, 2, &tfb_emlrtBCI, (emlrtConstCTX)&
            sp);
        }

        if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
             ctcr_construc->vect_ind_iT.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
            ctcr_construc->vect_ind_iT.size(0), &qcb_emlrtBCI, (emlrtConstCTX)&
            sp);
        }

        loop_ub = static_cast<int32_T>(nbT) - 1;
        d = ctcr_construc->vect_ind_iT[(static_cast<int32_T>(nbT) +
          ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
        d4 = static_cast<int32_T>(muDoubleScalarFloor(d));
        if (d != d4) {
          emlrtIntegerCheckR2012b(d, &fb_emlrtDCI, (emlrtConstCTX)&sp);
        }

        i2 = mem_deriv_propag_high->mem_Bws0.size(2);
        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i2)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i2,
            &qy_emlrtBCI, (emlrtConstCTX)&sp);
        }

        b_iv[0] = i1;
        b_iv[1] = 3;
        b_nbT[0] = static_cast<int32_T>(nbT) - 1;
        b_nbT[1] = 3;
        emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &b_nbT[0], 2, &eb_emlrtECI,
          (emlrtCTX)&sp);
        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            mem_deriv_propag_high->mem_Bws0[(i2 +
              mem_deriv_propag_high->mem_Bws0.size(0) * i1) +
              mem_deriv_propag_high->mem_Bws0.size(0) *
              mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d)
              - 1)] = 0.0;
          }
        }

        //  ============================== %
        //  ========= db1_df(L0) ========= %
        if (nbT - 1.0 < 1.0) {
          i1 = 0;
        } else {
          i1 = mem_deriv_propag_high->mem_Bws0.size(0);
          if (i1 < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i1, &ry_emlrtBCI, (emlrtConstCTX)
              &sp);
          }

          if ((static_cast<int32_T>(nbT) - 1 < 1) || (static_cast<int32_T>(nbT)
               - 1 > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT) - 1, 1, i1,
              &sy_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = static_cast<int32_T>(nbT) - 1;
        }

        b_mem_deriv_propag_high = mem_deriv_propag_high->mem_Bws0.size(1);
        if (b_mem_deriv_propag_high < 4) {
          emlrtDynamicBoundsCheckR2012b(4, 1, b_mem_deriv_propag_high,
            &sfb_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if (b_mem_deriv_propag_high < 5) {
          emlrtDynamicBoundsCheckR2012b(5, 1, 4, &sfb_emlrtBCI, (emlrtConstCTX)&
            sp);
        }

        if (b_mem_deriv_propag_high < 6) {
          emlrtDynamicBoundsCheckR2012b(6, 1, 5, &sfb_emlrtBCI, (emlrtConstCTX)&
            sp);
        }

        if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
             ctcr_construc->vect_ind_iT.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
            ctcr_construc->vect_ind_iT.size(0), &jdb_emlrtBCI, (emlrtConstCTX)&
            sp);
        }

        if (d != d4) {
          emlrtIntegerCheckR2012b(d, &gb_emlrtDCI, (emlrtConstCTX)&sp);
        }

        i2 = mem_deriv_propag_high->mem_Bws0.size(2);
        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i2)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i2,
            &ty_emlrtBCI, (emlrtConstCTX)&sp);
        }

        b_iv[0] = i1;
        b_iv[1] = 3;
        b_nbT[0] = static_cast<int32_T>(nbT) - 1;
        b_nbT[1] = 3;
        emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &b_nbT[0], 2, &fb_emlrtECI,
          (emlrtCTX)&sp);
        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            mem_deriv_propag_high->mem_Bws0[(i2 +
              mem_deriv_propag_high->mem_Bws0.size(0) * (i1 + 3)) +
              mem_deriv_propag_high->mem_Bws0.size(0) *
              mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d)
              - 1)] = 0.0;
          }
        }

        //  ============================== %
        //  ======== db2_dtau(L0) ======== %
        if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
             mem_bvp->mem_y.mem_t.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
            mem_bvp->mem_y.mem_t.size(0), &sdb_emlrtBCI, (emlrtConstCTX)&sp);
        }

        b = ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
              ctcr_construc->vect_ind_iT.size(0)));
        if (b) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
            ctcr_construc->vect_ind_iT.size(0), &udb_emlrtBCI, (emlrtConstCTX)&
            sp);
        }

        if (d != d4) {
          emlrtIntegerCheckR2012b(d, &wc_emlrtDCI, (emlrtConstCTX)&sp);
        }

        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
             mem_bvp->mem_y.mem_t.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
            mem_bvp->mem_y.mem_t.size(1), &tdb_emlrtBCI, (emlrtConstCTX)&sp);
        }

        b_gamma = mem_bvp->mem_y.mem_t[(static_cast<int32_T>(nbT) +
          mem_bvp->mem_y.mem_t.size(0) * (static_cast<int32_T>(d) - 1)) - 1];

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
        b_R_tmp = muDoubleScalarSin(b_gamma);
        c_R_tmp = muDoubleScalarCos(b_gamma);
        if (d != d4) {
          emlrtIntegerCheckR2012b(d, &hb_emlrtDCI, (emlrtConstCTX)&sp);
        }

        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
             mem_bvp->mem_T.size(2))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
            mem_bvp->mem_T.size(2), &vy_emlrtBCI, (emlrtConstCTX)&sp);
        }

        for (i1 = 0; i1 < 3; i1++) {
          a[3 * i1] = mem_bvp->mem_T[4 * i1 + 16 * (static_cast<int32_T>(d) - 1)];
          a[3 * i1 + 1] = mem_bvp->mem_T[(4 * i1 + 16 * (static_cast<int32_T>(d)
            - 1)) + 1];
          a[3 * i1 + 2] = mem_bvp->mem_T[(4 * i1 + 16 * (static_cast<int32_T>(d)
            - 1)) + 2];
        }

        if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
             ctcr_construc->K.size(2))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
            ctcr_construc->K.size(2), &uy_emlrtBCI, (emlrtConstCTX)&sp);
        }

        b_ctcr_construc = ctcr_construc->K[9 * (static_cast<int32_T>(nbT) - 1) +
          8];
        e_R_tmp[0] = c_R_tmp;
        e_R_tmp[1] = -b_R_tmp;
        e_R_tmp[2] = 0.0;
        e_R_tmp[3] = b_R_tmp;
        e_R_tmp[4] = c_R_tmp;
        e_R_tmp[5] = 0.0;
        e_R_tmp[6] = 0.0;
        e_R_tmp[7] = 0.0;
        e_R_tmp[8] = 1.0;
        for (i1 = 0; i1 < 3; i1++) {
          d1 = e_R_tmp[3 * i1];
          d2 = e_R_tmp[3 * i1 + 1];
          d3 = e_R_tmp[3 * i1 + 2];
          for (i2 = 0; i2 < 3; i2++) {
            f_R_tmp[i1 + 3 * i2] = (a[i2] * d1 + a[i2 + 3] * d2) + a[i2 + 6] *
              d3;
          }
        }

        b_mem_deriv_propag_high = mem_deriv_propag_high->mem_Bws0.size(1);
        i1 = mem_deriv_propag_high->mem_Bws0.size(0);
        if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) > i1))
        {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i1,
            &acb_emlrtBCI, (emlrtConstCTX)&sp);
        }

        i1 = mem_deriv_propag_high->mem_Bws0.size(2);
        if (d != d4) {
          emlrtIntegerCheckR2012b(d, &gc_emlrtDCI, (emlrtConstCTX)&sp);
        }

        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i1,
            &bcb_emlrtBCI, (emlrtConstCTX)&sp);
        }

        d1 = 0.0 / b_ctcr_construc;
        d2 = 0.0 / b_ctcr_construc;
        d3 = -1.0 / b_ctcr_construc;
        for (i1 = 0; i1 < 3; i1++) {
          if (i1 + 1 > b_mem_deriv_propag_high) {
            emlrtDynamicBoundsCheckR2012b(i1 + 1, 1, b_mem_deriv_propag_high,
              &mfb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>(nbT) +
            mem_deriv_propag_high->mem_Bws0.size(0) * i1) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) -
            1)) - 1] = (d1 * f_R_tmp[3 * i1] + d2 * f_R_tmp[3 * i1 + 1]) + d3 *
            f_R_tmp[3 * i1 + 2];
        }

        //  ============================== %
        //  ========= db2_df(L0) ========= %
        b_mem_deriv_propag_high = mem_deriv_propag_high->mem_Bws0.size(1);
        i1 = mem_deriv_propag_high->mem_Bws0.size(0);
        if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) > i1))
        {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i1,
            &wy_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
             ctcr_construc->vect_ind_iT.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
            ctcr_construc->vect_ind_iT.size(0), &ieb_emlrtBCI, (emlrtConstCTX)&
            sp);
        }

        if (d != d4) {
          emlrtIntegerCheckR2012b(d, &ib_emlrtDCI, (emlrtConstCTX)&sp);
        }

        i1 = mem_deriv_propag_high->mem_Bws0.size(2);
        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i1,
            &xy_emlrtBCI, (emlrtConstCTX)&sp);
        }

        if (b_mem_deriv_propag_high < 4) {
          emlrtDynamicBoundsCheckR2012b(4, 1, b_mem_deriv_propag_high,
            &rfb_emlrtBCI, (emlrtConstCTX)&sp);
        }

        mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>(nbT) +
          mem_deriv_propag_high->mem_Bws0.size(0) * 3) +
          mem_deriv_propag_high->mem_Bws0.size(0) *
          mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) - 1))
          - 1] = 0.0;
        if (b_mem_deriv_propag_high < 5) {
          emlrtDynamicBoundsCheckR2012b(5, 1, 4, &rfb_emlrtBCI, (emlrtConstCTX)&
            sp);
        }

        mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>(nbT) +
          mem_deriv_propag_high->mem_Bws0.size(0) * 4) +
          mem_deriv_propag_high->mem_Bws0.size(0) *
          mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) - 1))
          - 1] = 0.0;
        if (b_mem_deriv_propag_high < 6) {
          emlrtDynamicBoundsCheckR2012b(6, 1, 5, &rfb_emlrtBCI, (emlrtConstCTX)&
            sp);
        }

        mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>(nbT) +
          mem_deriv_propag_high->mem_Bws0.size(0) * 5) +
          mem_deriv_propag_high->mem_Bws0.size(0) *
          mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) - 1))
          - 1] = 0.0;

        //  ============================== %
        //  ======== db3_dtau(L0) ======== %
        if (d != d4) {
          emlrtIntegerCheckR2012b(d, &jb_emlrtDCI, (emlrtConstCTX)&sp);
        }

        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
             mem_bvp->mem_T.size(2))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
            mem_bvp->mem_T.size(2), &yy_emlrtBCI, (emlrtConstCTX)&sp);
        }

        b_mem_deriv_propag_high = mem_deriv_propag_high->mem_Bws0.size(0);
        b_loop_ub = mem_deriv_propag_high->mem_Bws0.size(1);
        if (d != d4) {
          emlrtIntegerCheckR2012b(d, &kb_emlrtDCI, (emlrtConstCTX)&sp);
        }

        i1 = mem_deriv_propag_high->mem_Bws0.size(2);
        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i1,
            &aab_emlrtBCI, (emlrtConstCTX)&sp);
        }

        for (i1 = 0; i1 < 3; i1++) {
          if ((static_cast<int32_T>(nbT + 1.0) < 1) || (static_cast<int32_T>(nbT
                + 1.0) > b_mem_deriv_propag_high)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT + 1.0), 1,
              b_mem_deriv_propag_high, &qfb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (i1 + 1 > b_loop_ub) {
            emlrtDynamicBoundsCheckR2012b(i1 + 1, 1, b_loop_ub, &qfb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>(nbT + 1.0) +
            mem_deriv_propag_high->mem_Bws0.size(0) * i1) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) -
            1)) - 1] = -mem_bvp->mem_T[i1 + 16 * (static_cast<int32_T>(d) - 1)];
          if ((static_cast<int32_T>((nbT + 1.0) + 1.0) < 1) ||
              (static_cast<int32_T>((nbT + 1.0) + 1.0) > b_mem_deriv_propag_high))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 1.0),
              1, b_mem_deriv_propag_high, &qfb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (i1 + 1 > b_loop_ub) {
            emlrtDynamicBoundsCheckR2012b(i1 + 1, 1, b_loop_ub, &qfb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>((nbT + 1.0) +
            1.0) + mem_deriv_propag_high->mem_Bws0.size(0) * i1) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) -
            1)) - 1] = -mem_bvp->mem_T[(i1 + 16 * (static_cast<int32_T>(d) - 1))
            + 4];
          if ((static_cast<int32_T>((nbT + 1.0) + 2.0) < 1) ||
              (static_cast<int32_T>((nbT + 1.0) + 2.0) > b_mem_deriv_propag_high))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 2.0),
              1, b_mem_deriv_propag_high, &qfb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (i1 + 1 > b_loop_ub) {
            emlrtDynamicBoundsCheckR2012b(i1 + 1, 1, b_loop_ub, &qfb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>((nbT + 1.0) +
            2.0) + mem_deriv_propag_high->mem_Bws0.size(0) * i1) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) -
            1)) - 1] = -mem_bvp->mem_T[(i1 + 16 * (static_cast<int32_T>(d) - 1))
            + 8];
        }

        //  ============================== %
        //  ========= db3_df(L0) ========= %
        b_mem_deriv_propag_high = mem_deriv_propag_high->mem_Bws0.size(0);
        b_loop_ub = mem_deriv_propag_high->mem_Bws0.size(1);
        if (d != d4) {
          emlrtIntegerCheckR2012b(d, &lb_emlrtDCI, (emlrtConstCTX)&sp);
        }

        i1 = mem_deriv_propag_high->mem_Bws0.size(2);
        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i1,
            &bab_emlrtBCI, (emlrtConstCTX)&sp);
        }

        for (i1 = 0; i1 < 3; i1++) {
          if ((static_cast<int32_T>(nbT + 1.0) < 1) || (static_cast<int32_T>(nbT
                + 1.0) > b_mem_deriv_propag_high)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT + 1.0), 1,
              b_mem_deriv_propag_high, &pfb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (i1 + 4 > b_loop_ub) {
            emlrtDynamicBoundsCheckR2012b(i1 + 4, 1, b_loop_ub, &pfb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>(nbT + 1.0) +
            mem_deriv_propag_high->mem_Bws0.size(0) * (i1 + 3)) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) -
            1)) - 1] = 0.0;
          if ((static_cast<int32_T>((nbT + 1.0) + 1.0) < 1) ||
              (static_cast<int32_T>((nbT + 1.0) + 1.0) > b_mem_deriv_propag_high))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 1.0),
              1, b_mem_deriv_propag_high, &pfb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (i1 + 4 > b_loop_ub) {
            emlrtDynamicBoundsCheckR2012b(i1 + 4, 1, b_loop_ub, &pfb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>((nbT + 1.0) +
            1.0) + mem_deriv_propag_high->mem_Bws0.size(0) * (i1 + 3)) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) -
            1)) - 1] = 0.0;
          if ((static_cast<int32_T>((nbT + 1.0) + 2.0) < 1) ||
              (static_cast<int32_T>((nbT + 1.0) + 2.0) > b_mem_deriv_propag_high))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 1.0) + 2.0),
              1, b_mem_deriv_propag_high, &pfb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (i1 + 4 > b_loop_ub) {
            emlrtDynamicBoundsCheckR2012b(i1 + 4, 1, b_loop_ub, &pfb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>((nbT + 1.0) +
            2.0) + mem_deriv_propag_high->mem_Bws0.size(0) * (i1 + 3)) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) -
            1)) - 1] = 0.0;
        }

        //  ============================== %
        //  ======== db4_dtau(L0) ======== %
        b_mem_deriv_propag_high = mem_deriv_propag_high->mem_Bws0.size(0);
        b_loop_ub = mem_deriv_propag_high->mem_Bws0.size(1);
        if (d != d4) {
          emlrtIntegerCheckR2012b(d, &mb_emlrtDCI, (emlrtConstCTX)&sp);
        }

        i1 = mem_deriv_propag_high->mem_Bws0.size(2);
        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i1,
            &cab_emlrtBCI, (emlrtConstCTX)&sp);
        }

        for (i1 = 0; i1 < 3; i1++) {
          if ((static_cast<int32_T>(nbT + 4.0) < 1) || (static_cast<int32_T>(nbT
                + 4.0) > b_mem_deriv_propag_high)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT + 4.0), 1,
              b_mem_deriv_propag_high, &ofb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (i1 + 1 > b_loop_ub) {
            emlrtDynamicBoundsCheckR2012b(i1 + 1, 1, b_loop_ub, &ofb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>(nbT + 4.0) +
            mem_deriv_propag_high->mem_Bws0.size(0) * i1) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) -
            1)) - 1] = 0.0;
          if ((static_cast<int32_T>((nbT + 4.0) + 1.0) < 1) ||
              (static_cast<int32_T>((nbT + 4.0) + 1.0) > b_mem_deriv_propag_high))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 1.0),
              1, b_mem_deriv_propag_high, &ofb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (i1 + 1 > b_loop_ub) {
            emlrtDynamicBoundsCheckR2012b(i1 + 1, 1, b_loop_ub, &ofb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>((nbT + 4.0) +
            1.0) + mem_deriv_propag_high->mem_Bws0.size(0) * i1) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) -
            1)) - 1] = 0.0;
          if ((static_cast<int32_T>((nbT + 4.0) + 2.0) < 1) ||
              (static_cast<int32_T>((nbT + 4.0) + 2.0) > b_mem_deriv_propag_high))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 2.0),
              1, b_mem_deriv_propag_high, &ofb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (i1 + 1 > b_loop_ub) {
            emlrtDynamicBoundsCheckR2012b(i1 + 1, 1, b_loop_ub, &ofb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>((nbT + 4.0) +
            2.0) + mem_deriv_propag_high->mem_Bws0.size(0) * i1) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) -
            1)) - 1] = 0.0;
        }

        //  ============================== %
        //  ========= db4_df(L0) ========= %
        if (d != d4) {
          emlrtIntegerCheckR2012b(d, &nb_emlrtDCI, (emlrtConstCTX)&sp);
        }

        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
             mem_bvp->mem_T.size(2))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
            mem_bvp->mem_T.size(2), &dab_emlrtBCI, (emlrtConstCTX)&sp);
        }

        b_mem_deriv_propag_high = mem_deriv_propag_high->mem_Bws0.size(0);
        b_loop_ub = mem_deriv_propag_high->mem_Bws0.size(1);
        if (d != d4) {
          emlrtIntegerCheckR2012b(d, &ob_emlrtDCI, (emlrtConstCTX)&sp);
        }

        i1 = mem_deriv_propag_high->mem_Bws0.size(2);
        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i1,
            &eab_emlrtBCI, (emlrtConstCTX)&sp);
        }

        for (i1 = 0; i1 < 3; i1++) {
          if ((static_cast<int32_T>(nbT + 4.0) < 1) || (static_cast<int32_T>(nbT
                + 4.0) > b_mem_deriv_propag_high)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT + 4.0), 1,
              b_mem_deriv_propag_high, &nfb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (i1 + 4 > b_loop_ub) {
            emlrtDynamicBoundsCheckR2012b(i1 + 4, 1, b_loop_ub, &nfb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>(nbT + 4.0) +
            mem_deriv_propag_high->mem_Bws0.size(0) * (i1 + 3)) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) -
            1)) - 1] = -mem_bvp->mem_T[i1 + 16 * (static_cast<int32_T>(d) - 1)];
          if ((static_cast<int32_T>((nbT + 4.0) + 1.0) < 1) ||
              (static_cast<int32_T>((nbT + 4.0) + 1.0) > b_mem_deriv_propag_high))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 1.0),
              1, b_mem_deriv_propag_high, &nfb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (i1 + 4 > b_loop_ub) {
            emlrtDynamicBoundsCheckR2012b(i1 + 4, 1, b_loop_ub, &nfb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>((nbT + 4.0) +
            1.0) + mem_deriv_propag_high->mem_Bws0.size(0) * (i1 + 3)) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) -
            1)) - 1] = -mem_bvp->mem_T[(i1 + 16 * (static_cast<int32_T>(d) - 1))
            + 4];
          if ((static_cast<int32_T>((nbT + 4.0) + 2.0) < 1) ||
              (static_cast<int32_T>((nbT + 4.0) + 2.0) > b_mem_deriv_propag_high))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>((nbT + 4.0) + 2.0),
              1, b_mem_deriv_propag_high, &nfb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (i1 + 4 > b_loop_ub) {
            emlrtDynamicBoundsCheckR2012b(i1 + 4, 1, b_loop_ub, &nfb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>((nbT + 4.0) +
            2.0) + mem_deriv_propag_high->mem_Bws0.size(0) * (i1 + 3)) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(d) -
            1)) - 1] = -mem_bvp->mem_T[(i1 + 16 * (static_cast<int32_T>(d) - 1))
            + 8];
        }
      } else {
        boolean_T b1;

        //  =========================================== %
        //  ======= db_dtau0(s0) and db_df0(s0) ======= %
        //  (eq 35)
        //  ============================== %
        //  ======== db1_dtau(s0) ======== %
        for (int32_T b_i{0}; b_i <= i1 - 2; b_i++) {
          if ((b_i + 1 < 1) || (b_i + 1 >
                                mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size
                                (0))) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0),
              &fab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((b_i + 1 < 1) || (b_i + 1 > ctcr_construc->vect_ind_iT.size(0))) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
              ctcr_construc->vect_ind_iT.size(0), &pcb_emlrtBCI, (emlrtConstCTX)
              &sp);
          }

          d = ctcr_construc->vect_ind_iT[b_i + ctcr_construc->vect_ind_iT.size(0)
            * 2];
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &pb_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
               mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2),
              &gab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(3),
              &hab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          b_mem_deriv_propag_high = mem_deriv_propag_high->mem_Bws0.size(1);
          i2 = mem_deriv_propag_high->mem_Bws0.size(0);
          if ((b_i + 1 < 1) || (b_i + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i2, &iab_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if (is0 != static_cast<int32_T>(muDoubleScalarFloor(is0))) {
            emlrtIntegerCheckR2012b(is0, &qb_emlrtDCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_high->mem_Bws0.size(2);
          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1, i2,
              &jab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (b_mem_deriv_propag_high < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, b_mem_deriv_propag_high,
              &vfb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[b_i +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(is0)
            - 1)] = mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0[(b_i +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 * (
            static_cast<int32_T>(d) - 1)) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 *
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2) * (
            static_cast<int32_T>(is0) - 1)];
          if (b_mem_deriv_propag_high < 2) {
            emlrtDynamicBoundsCheckR2012b(2, 1, 1, &vfb_emlrtBCI, (emlrtConstCTX)
              &sp);
          }

          mem_deriv_propag_high->mem_Bws0[(b_i +
            mem_deriv_propag_high->mem_Bws0.size(0)) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(is0)
            - 1)] = mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0[((b_i +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0)) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 * (
            static_cast<int32_T>(d) - 1)) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 *
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2) * (
            static_cast<int32_T>(is0) - 1)];
          if (b_mem_deriv_propag_high < 3) {
            emlrtDynamicBoundsCheckR2012b(3, 1, 2, &vfb_emlrtBCI, (emlrtConstCTX)
              &sp);
          }

          mem_deriv_propag_high->mem_Bws0[(b_i +
            mem_deriv_propag_high->mem_Bws0.size(0) * 2) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(is0)
            - 1)] = mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0[((b_i +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 2) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 * (
            static_cast<int32_T>(d) - 1)) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 *
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2) * (
            static_cast<int32_T>(is0) - 1)];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }

        //  ============================== %
        //  ======== db2_dtau(s0) ======== %
        ctcr_construc_tmp = ctcr_construc->K[9 * (static_cast<int32_T>(nbT) - 1)
          + 8];
        b = ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
              ctcr_construc->vect_ind_iT.size(0)));
        is_tmp = ctcr_construc->vect_ind_iT[(static_cast<int32_T>(nbT) +
          ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
        b1 = ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
               mem_bvp->mem_y.mem_t.size(0)));
        d = static_cast<int32_T>(muDoubleScalarFloor(is_tmp));
        b_gamma = mem_bvp->mem_y.mem_t[(static_cast<int32_T>(nbT) +
          mem_bvp->mem_y.mem_t.size(0) * (static_cast<int32_T>(is_tmp) - 1)) - 1];
        b_R_tmp = muDoubleScalarSin(b_gamma);
        c_R_tmp = muDoubleScalarCos(b_gamma);
        b_gamma = mem_bvp->mem_y.mem_t[(static_cast<int32_T>(nbT) +
          mem_bvp->mem_y.mem_t.size(0) * (static_cast<int32_T>(is_tmp) - 1)) - 1];
        d_R_tmp = muDoubleScalarSin(b_gamma);
        R_tmp = muDoubleScalarCos(b_gamma);
        for (loop_ub = 0; loop_ub < 3; loop_ub++) {
          if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
               ctcr_construc->K.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
              ctcr_construc->K.size(2), &kab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          st.site = &rb_emlrtRSI;
          if (b) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
              ctcr_construc->vect_ind_iT.size(0), &scb_emlrtBCI, &st);
          }

          //  ======================================================================= %
          //
          //  This function computes the partial derivative of rigid transformation
          //  matrix, from the base B0 to the current s, associated to the tube i=nbT
          //  w.r.t. the vector torque t0 applied at s0
          //
          //  ====================
          //  ====== INPUTS ======
          //
          //  is0               : (int ∊ [1 , nbP])       Index of the loaded point curvilinear abscissa
          //  is                : (int ∊ [1 , nbP])       Index of the current curvilinear abscissa
          //  j                 : (int ∊ [1 , 3])         Index of the component x,y or z on which the derivation is proceeded
          //  nbT               : (int > 0)               Number of tubes of the CTCR
          //  mem_T             : (4 x 4 x nbP)           Matrix memory of the B0(0)Ts values
          //  mem_y             : (class)                 Matrix memory of the y(s) values
          //  mem_dR0_dtaus0    : (3 x 3 x 3 x nbP x nbP) Matrix memory of the dR0(s)_dtau(s0) partial derivatives
          //  mem_dti_dtaus0    : (nbT x 3 x nbP x nbP)   Matrix memory of the dti(s)_dtau(s0) partial derivatives
          //
          //  ====================
          //  ===== OUTPUTS ======
          //
          //  dB0nbTRsdtaus0    : (3x3)                   Value of the partial derivative
          //
          //  ======================================================================= %
          if (b1) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
              mem_bvp->mem_y.mem_t.size(0), &xdb_emlrtBCI, &st);
          }

          if (is_tmp != d) {
            emlrtIntegerCheckR2012b(is_tmp, &yc_emlrtDCI, &st);
          }

          if ((static_cast<int32_T>(is_tmp) < 1) || (static_cast<int32_T>(is_tmp)
               > mem_bvp->mem_y.mem_t.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is_tmp), 1,
              mem_bvp->mem_y.mem_t.size(1), &ydb_emlrtBCI, &st);
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
          if ((static_cast<int32_T>(is_tmp) < 1) || (static_cast<int32_T>(is_tmp)
               > mem_bvp->mem_y.mem_t.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is_tmp), 1,
              mem_bvp->mem_y.mem_t.size(1), &geb_emlrtBCI, &st);
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
          if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
               mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0),
              &keb_emlrtBCI, &st);
          }

          if ((static_cast<int32_T>(is_tmp) < 1) || (static_cast<int32_T>(is_tmp)
               > mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is_tmp), 1,
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(2),
              &leb_emlrtBCI, &st);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(3),
              &meb_emlrtBCI, &st);
          }

          b_gamma = mem_deriv_propag_low->mem_dti.mem_dti_dtaus0[(((static_cast<
            int32_T>(nbT) + mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0)
            * loop_ub) + mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) *
            3 * (static_cast<int32_T>(is_tmp) - 1)) +
            mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(0) * 3 *
            mem_deriv_propag_low->mem_dti.mem_dti_dtaus0.size(2) * (static_cast<
            int32_T>(is0) - 1)) - 1];
          if ((static_cast<int32_T>(is_tmp) < 1) || (static_cast<int32_T>(is_tmp)
               > mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is_tmp), 1,
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3),
              &tbb_emlrtBCI, &st);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(4))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(4),
              &ubb_emlrtBCI, &st);
          }

          if ((static_cast<int32_T>(is_tmp) < 1) || (static_cast<int32_T>(is_tmp)
               > mem_bvp->mem_T.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is_tmp), 1,
              mem_bvp->mem_T.size(2), &vbb_emlrtBCI, &st);
          }

          e_R_tmp[0] = c_R_tmp;
          e_R_tmp[1] = -b_R_tmp;
          e_R_tmp[2] = 0.0;
          e_R_tmp[3] = b_R_tmp;
          e_R_tmp[4] = c_R_tmp;
          e_R_tmp[5] = 0.0;
          f_R_tmp[0] = R_tmp;
          f_R_tmp[3] = -d_R_tmp;
          f_R_tmp[6] = 0.0;
          f_R_tmp[1] = d_R_tmp;
          f_R_tmp[4] = R_tmp;
          f_R_tmp[7] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            b_loop_ub = iv1[i2];
            e_R_tmp[i2 + 6] = b_loop_ub;
            f_R_tmp[3 * i2 + 2] = b_loop_ub;
            d4 = f_R_tmp[3 * i2];
            d1 = f_R_tmp[3 * i2 + 1];
            for (i3 = 0; i3 < 3; i3++) {
              a[i2 + 3 * i3] = static_cast<real_T>(iv[i3]) * d4 +
                static_cast<real_T>(iv[i3 + 3]) * d1;
            }
          }

          for (i2 = 0; i2 < 9; i2++) {
            a[i2] *= b_gamma;
          }

          for (i2 = 0; i2 < 3; i2++) {
            for (i3 = 0; i3 < 3; i3++) {
              i4 = 3 * i3 + 1;
              i5 = 3 * i3 + 2;
              b_loop_ub = i2 + 3 * i3;
              f_R_tmp[b_loop_ub] = (mem_bvp->mem_T[i2 + 16 *
                                    (static_cast<int32_T>(is_tmp) - 1)] * a[3 *
                                    i3] + mem_bvp->mem_T[(i2 + 16 * (
                static_cast<int32_T>(is_tmp) - 1)) + 4] * a[i4]) +
                mem_bvp->mem_T[(i2 + 16 * (static_cast<int32_T>(is_tmp) - 1)) +
                8] * a[i5];
              b_mem_deriv_propag_low[b_loop_ub] =
                (mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[((i2 + 9 * loop_ub)
                  + 27 * (static_cast<int32_T>(is_tmp) - 1)) + 27 *
                 mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                  static_cast<int32_T>(is0) - 1)] * e_R_tmp[3 * i3] +
                 mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((i2 + 9 *
                    loop_ub) + 27 * (static_cast<int32_T>(is_tmp) - 1)) + 27 *
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                   static_cast<int32_T>(is0) - 1)) + 3] * e_R_tmp[i4]) +
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((i2 + 9 * loop_ub)
                + 27 * (static_cast<int32_T>(is_tmp) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
                static_cast<int32_T>(is0) - 1)) + 6] * e_R_tmp[i5];
            }

            y[i2] = static_cast<real_T>(iv1[i2]) / ctcr_construc_tmp;
          }

          for (i2 = 0; i2 < 9; i2++) {
            b_mem_deriv_propag_low[i2] += f_R_tmp[i2];
          }

          d4 = 0.0;
          d1 = y[0];
          d2 = y[1];
          d3 = y[2];
          for (i2 = 0; i2 < 3; i2++) {
            d4 += ((d1 * b_mem_deriv_propag_low[3 * i2] + d2 *
                    b_mem_deriv_propag_low[3 * i2 + 1]) + d3 *
                   b_mem_deriv_propag_low[3 * i2 + 2]) * ctcr_load->tau_tip[i2];
          }

          if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
               mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0),
              &teb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (is_tmp != d) {
            emlrtIntegerCheckR2012b(is_tmp, &cd_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is_tmp) < 1) || (static_cast<int32_T>(is_tmp)
               > mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is_tmp), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2),
              &ueb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(3),
              &veb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_high->mem_Bws0.size(0);
          if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i2,
              &web_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_high->mem_Bws0.size(1);
          if (loop_ub + 1 > i2) {
            emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, i2, &xeb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_high->mem_Bws0.size(2);
          if (is0 != static_cast<int32_T>(muDoubleScalarFloor(is0))) {
            emlrtIntegerCheckR2012b(is0, &dd_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1, i2,
              &yeb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>(nbT) +
            mem_deriv_propag_high->mem_Bws0.size(0) * loop_ub) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(is0)
            - 1)) - 1] = mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0[(((
            static_cast<int32_T>(nbT) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * loop_ub) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 * (
            static_cast<int32_T>(is_tmp) - 1)) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(0) * 3 *
            mem_deriv_propag_low->mem_duzi.mem_duzi_dtaus0.size(2) * (
            static_cast<int32_T>(is0) - 1)) - 1] - d4;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }

        //  ============================== %
        //  ======== db3_dtau(s0) ======== %
        b = ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
              ctcr_construc->vect_ind_iT.size(0)));
        d = ctcr_construc->vect_ind_iT[(static_cast<int32_T>(nbT) +
          ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
        d4 = static_cast<int32_T>(muDoubleScalarFloor(d));
        d1 = ctcr_load->tau_tip[0];
        d2 = ctcr_load->tau_tip[1];
        d3 = ctcr_load->tau_tip[2];
        for (loop_ub = 0; loop_ub < 3; loop_ub++) {
          if (b) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
              ctcr_construc->vect_ind_iT.size(0), &tcb_emlrtBCI, (emlrtConstCTX)
              &sp);
          }

          if (d != d4) {
            emlrtIntegerCheckR2012b(d, &sb_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
               mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3),
              &nab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(4))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(4),
              &oab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i2 = 0; i2 < 3; i2++) {
            a[3 * i2] = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[((3 * i2 +
              9 * loop_ub) + 27 * (static_cast<int32_T>(d) - 1)) + 27 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
              static_cast<int32_T>(is0) - 1)];
            a[3 * i2 + 1] = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((3 *
              i2 + 9 * loop_ub) + 27 * (static_cast<int32_T>(d) - 1)) + 27 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
              static_cast<int32_T>(is0) - 1)) + 1];
            a[3 * i2 + 2] = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((3 *
              i2 + 9 * loop_ub) + 27 * (static_cast<int32_T>(d) - 1)) + 27 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
              static_cast<int32_T>(is0) - 1)) + 2];
          }

          if (d != d4) {
            emlrtIntegerCheckR2012b(d, &rb_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
               mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2),
              &lab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(3),
              &mab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          b_mem_deriv_propag_high = mem_deriv_propag_high->mem_Bws0.size(0);
          i2 = mem_deriv_propag_high->mem_Bws0.size(1);
          if (loop_ub + 1 > i2) {
            emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, i2, &pab_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if (is0 != static_cast<int32_T>(muDoubleScalarFloor(is0))) {
            emlrtIntegerCheckR2012b(is0, &tb_emlrtDCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_high->mem_Bws0.size(2);
          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1, i2,
              &qab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i2 = 0; i2 < 3; i2++) {
            i3 = static_cast<int32_T>((static_cast<uint32_T>(i2) +
              static_cast<uint32_T>(nbT)) + 1U);
            if ((i3 < 1) || (i3 > b_mem_deriv_propag_high)) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, b_mem_deriv_propag_high,
                &ldb_emlrtBCI, (emlrtConstCTX)&sp);
            }

            mem_deriv_propag_high->mem_Bws0[((i3 +
              mem_deriv_propag_high->mem_Bws0.size(0) * loop_ub) +
              mem_deriv_propag_high->mem_Bws0.size(0) *
              mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>
              (is0) - 1)) - 1] = mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0
              [((i2 + 3 * loop_ub) + 9 * (static_cast<int32_T>(d) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dtaus0.size(2) * (
              static_cast<int32_T>(is0) - 1)] - ((a[i2] * d1 + a[i2 + 3] * d2) +
              a[i2 + 6] * d3);
          }

          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }

        //  ============================== %
        //  ======== db4_dtau(s0) ======== %
        b = ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
              ctcr_construc->vect_ind_iT.size(0)));
        d = ctcr_construc->vect_ind_iT[(static_cast<int32_T>(nbT) +
          ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
        d4 = static_cast<int32_T>(muDoubleScalarFloor(d));
        d1 = ctcr_load->f_tip[0];
        d2 = ctcr_load->f_tip[1];
        d3 = ctcr_load->f_tip[2];
        for (loop_ub = 0; loop_ub < 3; loop_ub++) {
          if (b) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
              ctcr_construc->vect_ind_iT.size(0), &idb_emlrtBCI, (emlrtConstCTX)
              &sp);
          }

          if (d != d4) {
            emlrtIntegerCheckR2012b(d, &vb_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
               mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3),
              &tab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(4))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(4),
              &uab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i2 = 0; i2 < 3; i2++) {
            a[3 * i2] = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[((3 * i2 +
              9 * loop_ub) + 27 * (static_cast<int32_T>(d) - 1)) + 27 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
              static_cast<int32_T>(is0) - 1)];
            a[3 * i2 + 1] = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((3 *
              i2 + 9 * loop_ub) + 27 * (static_cast<int32_T>(d) - 1)) + 27 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
              static_cast<int32_T>(is0) - 1)) + 1];
            a[3 * i2 + 2] = mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0[(((3 *
              i2 + 9 * loop_ub) + 27 * (static_cast<int32_T>(d) - 1)) + 27 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dtaus0.size(3) * (
              static_cast<int32_T>(is0) - 1)) + 2];
          }

          if (d != d4) {
            emlrtIntegerCheckR2012b(d, &ub_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
               mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2),
              &rab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(3),
              &sab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          b_mem_deriv_propag_high = mem_deriv_propag_high->mem_Bws0.size(0);
          i2 = mem_deriv_propag_high->mem_Bws0.size(1);
          if (loop_ub + 1 > i2) {
            emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, i2, &vab_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if (is0 != static_cast<int32_T>(muDoubleScalarFloor(is0))) {
            emlrtIntegerCheckR2012b(is0, &wb_emlrtDCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_high->mem_Bws0.size(2);
          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1, i2,
              &wab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i2 = 0; i2 < 3; i2++) {
            i3 = static_cast<int32_T>((static_cast<uint32_T>(i2) +
              static_cast<uint32_T>(nbT)) + 4U);
            if ((i3 < 1) || (i3 > b_mem_deriv_propag_high)) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, b_mem_deriv_propag_high,
                &ndb_emlrtBCI, (emlrtConstCTX)&sp);
            }

            mem_deriv_propag_high->mem_Bws0[((i3 +
              mem_deriv_propag_high->mem_Bws0.size(0) * loop_ub) +
              mem_deriv_propag_high->mem_Bws0.size(0) *
              mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>
              (is0) - 1)) - 1] = mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0
              [((i2 + 3 * loop_ub) + 9 * (static_cast<int32_T>(d) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dtaus0.size(2) * (
              static_cast<int32_T>(is0) - 1)] - ((a[i2] * d1 + a[i2 + 3] * d2) +
              a[i2 + 6] * d3);
          }

          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }

        //  ============================== %
        //  ========= db1_df(s0) ========= %
        for (int32_T b_i{0}; b_i <= i1 - 2; b_i++) {
          if ((b_i + 1 < 1) || (b_i + 1 >
                                mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size
                                (0))) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0),
              &xab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((b_i + 1 < 1) || (b_i + 1 > ctcr_construc->vect_ind_iT.size(0))) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
              ctcr_construc->vect_ind_iT.size(0), &mdb_emlrtBCI, (emlrtConstCTX)
              &sp);
          }

          d = ctcr_construc->vect_ind_iT[b_i + ctcr_construc->vect_ind_iT.size(0)
            * 2];
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &xb_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
               mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2),
              &yab_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(3),
              &abb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          b_mem_deriv_propag_high = mem_deriv_propag_high->mem_Bws0.size(1);
          i2 = mem_deriv_propag_high->mem_Bws0.size(0);
          if ((b_i + 1 < 1) || (b_i + 1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i2, &bbb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if (is0 != static_cast<int32_T>(muDoubleScalarFloor(is0))) {
            emlrtIntegerCheckR2012b(is0, &yb_emlrtDCI, (emlrtConstCTX)&sp);
          }

          i2 = mem_deriv_propag_high->mem_Bws0.size(2);
          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) > i2))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1, i2,
              &cbb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (b_mem_deriv_propag_high < 4) {
            emlrtDynamicBoundsCheckR2012b(4, 1, b_mem_deriv_propag_high,
              &ufb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[(b_i +
            mem_deriv_propag_high->mem_Bws0.size(0) * 3) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(is0)
            - 1)] = mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0[(b_i +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 * (
            static_cast<int32_T>(d) - 1)) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 *
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2) *
            (static_cast<int32_T>(is0) - 1)];
          if (b_mem_deriv_propag_high < 5) {
            emlrtDynamicBoundsCheckR2012b(5, 1, 4, &ufb_emlrtBCI, (emlrtConstCTX)
              &sp);
          }

          mem_deriv_propag_high->mem_Bws0[(b_i +
            mem_deriv_propag_high->mem_Bws0.size(0) * 4) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(is0)
            - 1)] = mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0[((b_i +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0)) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 * (
            static_cast<int32_T>(d) - 1)) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 *
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2) *
            (static_cast<int32_T>(is0) - 1)];
          if (b_mem_deriv_propag_high < 6) {
            emlrtDynamicBoundsCheckR2012b(6, 1, 5, &ufb_emlrtBCI, (emlrtConstCTX)
              &sp);
          }

          mem_deriv_propag_high->mem_Bws0[(b_i +
            mem_deriv_propag_high->mem_Bws0.size(0) * 5) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(is0)
            - 1)] = mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0[((b_i +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 2) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 * (
            static_cast<int32_T>(d) - 1)) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 *
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2) *
            (static_cast<int32_T>(is0) - 1)];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }

        //  ============================== %
        //  ========= db2_df(s0) ========= %
        b = ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
              ctcr_construc->vect_ind_iT.size(0)));
        is_tmp = ctcr_construc->vect_ind_iT[(static_cast<int32_T>(nbT) +
          ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
        b1 = ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
               mem_bvp->mem_y.mem_t.size(0)));
        d = static_cast<int32_T>(muDoubleScalarFloor(is_tmp));
        b_gamma = mem_bvp->mem_y.mem_t[(static_cast<int32_T>(nbT) +
          mem_bvp->mem_y.mem_t.size(0) * (static_cast<int32_T>(is_tmp) - 1)) - 1];
        b_R_tmp = muDoubleScalarSin(b_gamma);
        c_R_tmp = muDoubleScalarCos(b_gamma);
        b_gamma = mem_bvp->mem_y.mem_t[(static_cast<int32_T>(nbT) +
          mem_bvp->mem_y.mem_t.size(0) * (static_cast<int32_T>(is_tmp) - 1)) - 1];
        d_R_tmp = muDoubleScalarSin(b_gamma);
        R_tmp = muDoubleScalarCos(b_gamma);
        for (loop_ub = 0; loop_ub < 3; loop_ub++) {
          if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
               ctcr_construc->K.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
              ctcr_construc->K.size(2), &dbb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          st.site = &sb_emlrtRSI;
          if (b) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
              ctcr_construc->vect_ind_iT.size(0), &pdb_emlrtBCI, &st);
          }

          //  ======================================================================= %
          //
          //  This function computes the partial derivative of rigid transformation
          //  matrix, from the base B0 to the current s, associated to the tube i=nbT
          //  w.r.t. the vector force f0 applied at s0
          //
          //  ====================
          //  ====== INPUTS ======
          //
          //  is0           : (int ∊ [1 , nbP])        Index of the loaded point curvilinear abscissa
          //  is            : (int ∊ [1 , nbP])        Index of the current curvilinear abscissa
          //  j             : (int ∊ [1 , 3])          Index of the component x,y or z on which the derivation is proceeded
          //  nbT           : (int > 0)                Number of tubes of the CTCR
          //  mem_T         : (4 x 4 x nbP)            Matrix memory of the B0(0)Ts values
          //  mem_y         : (class)                  Matrix memory of the y(s) values
          //  mem_dR0_dfs0  : (3 x 3 x 3 x nbP x nbP)  Matrix memory of the dR0(s)_df(s0) partial derivatives
          //  mem_dti_dfs0  : (nbT x 3 x nbP x nbP)    Matrix memory of the dti(s)_df(s0) partial derivatives
          //
          //  ====================
          //  ===== OUTPUTS ======
          //
          //  dB0nbTRsdfs0  : (3 x 3)                  Value of the partial derivative
          //
          //  ======================================================================= %
          if (b1) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
              mem_bvp->mem_y.mem_t.size(0), &eeb_emlrtBCI, &st);
          }

          if (is_tmp != d) {
            emlrtIntegerCheckR2012b(is_tmp, &bd_emlrtDCI, &st);
          }

          if ((static_cast<int32_T>(is_tmp) < 1) || (static_cast<int32_T>(is_tmp)
               > mem_bvp->mem_y.mem_t.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is_tmp), 1,
              mem_bvp->mem_y.mem_t.size(1), &feb_emlrtBCI, &st);
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
          if ((static_cast<int32_T>(is_tmp) < 1) || (static_cast<int32_T>(is_tmp)
               > mem_bvp->mem_y.mem_t.size(1))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is_tmp), 1,
              mem_bvp->mem_y.mem_t.size(1), &jeb_emlrtBCI, &st);
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
          if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
               mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0), &qeb_emlrtBCI,
              &st);
          }

          if ((static_cast<int32_T>(is_tmp) < 1) || (static_cast<int32_T>(is_tmp)
               > mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is_tmp), 1,
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(2), &reb_emlrtBCI,
              &st);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(3), &seb_emlrtBCI,
              &st);
          }

          b_gamma = mem_deriv_propag_low->mem_dti.mem_dti_dfs0
            [(((static_cast<int32_T>(nbT) +
                mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * loop_ub) +
               mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 * (
                static_cast<int32_T>(is_tmp) - 1)) +
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(0) * 3 *
              mem_deriv_propag_low->mem_dti.mem_dti_dfs0.size(2) * (static_cast<
               int32_T>(is0) - 1)) - 1];
          if ((static_cast<int32_T>(is_tmp) < 1) || (static_cast<int32_T>(is_tmp)
               > mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is_tmp), 1,
              mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3), &wbb_emlrtBCI,
              &st);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(4))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(4), &xbb_emlrtBCI,
              &st);
          }

          if ((static_cast<int32_T>(is_tmp) < 1) || (static_cast<int32_T>(is_tmp)
               > mem_bvp->mem_T.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is_tmp), 1,
              mem_bvp->mem_T.size(2), &ybb_emlrtBCI, &st);
          }

          e_R_tmp[0] = c_R_tmp;
          e_R_tmp[1] = -b_R_tmp;
          e_R_tmp[2] = 0.0;
          e_R_tmp[3] = b_R_tmp;
          e_R_tmp[4] = c_R_tmp;
          e_R_tmp[5] = 0.0;
          f_R_tmp[0] = R_tmp;
          f_R_tmp[3] = -d_R_tmp;
          f_R_tmp[6] = 0.0;
          f_R_tmp[1] = d_R_tmp;
          f_R_tmp[4] = R_tmp;
          f_R_tmp[7] = 0.0;
          for (i1 = 0; i1 < 3; i1++) {
            b_loop_ub = iv1[i1];
            e_R_tmp[i1 + 6] = b_loop_ub;
            f_R_tmp[3 * i1 + 2] = b_loop_ub;
            d4 = f_R_tmp[3 * i1];
            d1 = f_R_tmp[3 * i1 + 1];
            for (i2 = 0; i2 < 3; i2++) {
              a[i1 + 3 * i2] = static_cast<real_T>(iv[i2]) * d4 +
                static_cast<real_T>(iv[i2 + 3]) * d1;
            }
          }

          for (i1 = 0; i1 < 9; i1++) {
            a[i1] *= b_gamma;
          }

          for (i1 = 0; i1 < 3; i1++) {
            for (i2 = 0; i2 < 3; i2++) {
              i3 = 3 * i2 + 1;
              i4 = 3 * i2 + 2;
              b_loop_ub = i1 + 3 * i2;
              f_R_tmp[b_loop_ub] = (mem_bvp->mem_T[i1 + 16 *
                                    (static_cast<int32_T>(is_tmp) - 1)] * a[3 *
                                    i2] + mem_bvp->mem_T[(i1 + 16 * (
                static_cast<int32_T>(is_tmp) - 1)) + 4] * a[i3]) +
                mem_bvp->mem_T[(i1 + 16 * (static_cast<int32_T>(is_tmp) - 1)) +
                8] * a[i4];
              b_mem_deriv_propag_low[b_loop_ub] =
                (mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[((i1 + 9 * loop_ub)
                  + 27 * (static_cast<int32_T>(is_tmp) - 1)) + 27 *
                 mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                  static_cast<int32_T>(is0) - 1)] * e_R_tmp[3 * i2] +
                 mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((i1 + 9 * loop_ub)
                   + 27 * (static_cast<int32_T>(is_tmp) - 1)) + 27 *
                  mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                   static_cast<int32_T>(is0) - 1)) + 3] * e_R_tmp[i3]) +
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((i1 + 9 * loop_ub)
                + 27 * (static_cast<int32_T>(is_tmp) - 1)) + 27 *
                mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (
                static_cast<int32_T>(is0) - 1)) + 6] * e_R_tmp[i4];
            }

            y[i1] = static_cast<real_T>(iv1[i1]) / ctcr_construc_tmp;
          }

          for (i1 = 0; i1 < 9; i1++) {
            b_mem_deriv_propag_low[i1] += f_R_tmp[i1];
          }

          d4 = 0.0;
          d1 = y[0];
          d2 = y[1];
          d3 = y[2];
          for (i1 = 0; i1 < 3; i1++) {
            d4 += ((d1 * b_mem_deriv_propag_low[3 * i1] + d2 *
                    b_mem_deriv_propag_low[3 * i1 + 1]) + d3 *
                   b_mem_deriv_propag_low[3 * i1 + 2]) * ctcr_load->tau_tip[i1];
          }

          if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
               mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0),
              &gfb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if (is_tmp != d) {
            emlrtIntegerCheckR2012b(is_tmp, &fd_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is_tmp) < 1) || (static_cast<int32_T>(is_tmp)
               > mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is_tmp), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2),
              &hfb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(3),
              &ifb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_high->mem_Bws0.size(0);
          if ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1, i1,
              &jfb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_high->mem_Bws0.size(1);
          if (loop_ub + 4 > i1) {
            emlrtDynamicBoundsCheckR2012b(loop_ub + 4, 1, i1, &kfb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_high->mem_Bws0.size(2);
          if (is0 != static_cast<int32_T>(muDoubleScalarFloor(is0))) {
            emlrtIntegerCheckR2012b(is0, &gd_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1, i1,
              &lfb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          mem_deriv_propag_high->mem_Bws0[((static_cast<int32_T>(nbT) +
            mem_deriv_propag_high->mem_Bws0.size(0) * (loop_ub + 3)) +
            mem_deriv_propag_high->mem_Bws0.size(0) *
            mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>(is0)
            - 1)) - 1] = mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0[(((
            static_cast<int32_T>(nbT) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * loop_ub) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 * (
            static_cast<int32_T>(is_tmp) - 1)) +
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(0) * 3 *
            mem_deriv_propag_low->mem_duzi.mem_duzi_dfs0.size(2) *
            (static_cast<int32_T>(is0) - 1)) - 1] - d4;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }

        //  ============================== %
        //  ========= db3_df(s0) ========= %
        b = ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
              ctcr_construc->vect_ind_iT.size(0)));
        d = ctcr_construc->vect_ind_iT[(static_cast<int32_T>(nbT) +
          ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
        d4 = static_cast<int32_T>(muDoubleScalarFloor(d));
        d1 = ctcr_load->tau_tip[0];
        d2 = ctcr_load->tau_tip[1];
        d3 = ctcr_load->tau_tip[2];
        for (loop_ub = 0; loop_ub < 3; loop_ub++) {
          if (b) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
              ctcr_construc->vect_ind_iT.size(0), &rdb_emlrtBCI, (emlrtConstCTX)
              &sp);
          }

          if (d != d4) {
            emlrtIntegerCheckR2012b(d, &bc_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
               mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
              mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3), &gbb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(4))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(4), &hbb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            a[3 * i1] = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[((3 * i1 + 9 *
              loop_ub) + 27 * (static_cast<int32_T>(d) - 1)) + 27 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (static_cast<
              int32_T>(is0) - 1)];
            a[3 * i1 + 1] = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((3 * i1
              + 9 * loop_ub) + 27 * (static_cast<int32_T>(d) - 1)) + 27 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) *
              (static_cast<int32_T>(is0) - 1)) + 1];
            a[3 * i1 + 2] = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((3 * i1
              + 9 * loop_ub) + 27 * (static_cast<int32_T>(d) - 1)) + 27 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) *
              (static_cast<int32_T>(is0) - 1)) + 2];
          }

          if (d != d4) {
            emlrtIntegerCheckR2012b(d, &ac_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
               mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
              mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2), &ebb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(3), &fbb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          b_mem_deriv_propag_high = mem_deriv_propag_high->mem_Bws0.size(0);
          i1 = mem_deriv_propag_high->mem_Bws0.size(1);
          if (loop_ub + 4 > i1) {
            emlrtDynamicBoundsCheckR2012b(loop_ub + 4, 1, i1, &ibb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if (is0 != static_cast<int32_T>(muDoubleScalarFloor(is0))) {
            emlrtIntegerCheckR2012b(is0, &cc_emlrtDCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_high->mem_Bws0.size(2);
          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1, i1,
              &jbb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            i2 = static_cast<int32_T>((static_cast<uint32_T>(i1) +
              static_cast<uint32_T>(nbT)) + 1U);
            if ((i2 < 1) || (i2 > b_mem_deriv_propag_high)) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, b_mem_deriv_propag_high,
                &aeb_emlrtBCI, (emlrtConstCTX)&sp);
            }

            mem_deriv_propag_high->mem_Bws0[((i2 +
              mem_deriv_propag_high->mem_Bws0.size(0) * (loop_ub + 3)) +
              mem_deriv_propag_high->mem_Bws0.size(0) *
              mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>
              (is0) - 1)) - 1] = mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0[((i1
              + 3 * loop_ub) + 9 * (static_cast<int32_T>(d) - 1)) + 9 *
              mem_deriv_propag_low->mem_dm0.mem_dm0_dfs0.size(2) *
              (static_cast<int32_T>(is0) - 1)] - ((a[i1] * d1 + a[i1 + 3] * d2)
              + a[i1 + 6] * d3);
          }

          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }

        //  ============================== %
        //  ========= db4_df(s0) ========= %
        b = ((static_cast<int32_T>(nbT) < 1) || (static_cast<int32_T>(nbT) >
              ctcr_construc->vect_ind_iT.size(0)));
        d = ctcr_construc->vect_ind_iT[(static_cast<int32_T>(nbT) +
          ctcr_construc->vect_ind_iT.size(0) * 2) - 1];
        d4 = static_cast<int32_T>(muDoubleScalarFloor(d));
        d1 = ctcr_load->f_tip[0];
        d2 = ctcr_load->f_tip[1];
        d3 = ctcr_load->f_tip[2];
        for (loop_ub = 0; loop_ub < 3; loop_ub++) {
          if (b) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
              ctcr_construc->vect_ind_iT.size(0), &vdb_emlrtBCI, (emlrtConstCTX)
              &sp);
          }

          if (d != d4) {
            emlrtIntegerCheckR2012b(d, &ec_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
               mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
              mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3), &mbb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(4))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(4), &nbb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            a[3 * i1] = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[((3 * i1 + 9 *
              loop_ub) + 27 * (static_cast<int32_T>(d) - 1)) + 27 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) * (static_cast<
              int32_T>(is0) - 1)];
            a[3 * i1 + 1] = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((3 * i1
              + 9 * loop_ub) + 27 * (static_cast<int32_T>(d) - 1)) + 27 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) *
              (static_cast<int32_T>(is0) - 1)) + 1];
            a[3 * i1 + 2] = mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0[(((3 * i1
              + 9 * loop_ub) + 27 * (static_cast<int32_T>(d) - 1)) + 27 *
              mem_deriv_propag_low->mem_dR0.mem_dR0_dfs0.size(3) *
              (static_cast<int32_T>(is0) - 1)) + 2];
          }

          if (d != d4) {
            emlrtIntegerCheckR2012b(d, &dc_emlrtDCI, (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
               mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
              mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2), &kbb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) >
               mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(3))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1,
              mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(3), &lbb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          b_mem_deriv_propag_high = mem_deriv_propag_high->mem_Bws0.size(0);
          i1 = mem_deriv_propag_high->mem_Bws0.size(1);
          if (loop_ub + 4 > i1) {
            emlrtDynamicBoundsCheckR2012b(loop_ub + 4, 1, i1, &obb_emlrtBCI,
              (emlrtConstCTX)&sp);
          }

          if (is0 != static_cast<int32_T>(muDoubleScalarFloor(is0))) {
            emlrtIntegerCheckR2012b(is0, &fc_emlrtDCI, (emlrtConstCTX)&sp);
          }

          i1 = mem_deriv_propag_high->mem_Bws0.size(2);
          if ((static_cast<int32_T>(is0) < 1) || (static_cast<int32_T>(is0) > i1))
          {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is0), 1, i1,
              &pbb_emlrtBCI, (emlrtConstCTX)&sp);
          }

          for (i1 = 0; i1 < 3; i1++) {
            i2 = static_cast<int32_T>((static_cast<uint32_T>(i1) +
              static_cast<uint32_T>(nbT)) + 4U);
            if ((i2 < 1) || (i2 > b_mem_deriv_propag_high)) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, b_mem_deriv_propag_high,
                &deb_emlrtBCI, (emlrtConstCTX)&sp);
            }

            mem_deriv_propag_high->mem_Bws0[((i2 +
              mem_deriv_propag_high->mem_Bws0.size(0) * (loop_ub + 3)) +
              mem_deriv_propag_high->mem_Bws0.size(0) *
              mem_deriv_propag_high->mem_Bws0.size(1) * (static_cast<int32_T>
              (is0) - 1)) - 1] = mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0[((i1
              + 3 * loop_ub) + 9 * (static_cast<int32_T>(d) - 1)) + 9 *
              mem_deriv_propag_low->mem_dn0.mem_dn0_dfs0.size(2) *
              (static_cast<int32_T>(is0) - 1)] - ((a[i1] * d1 + a[i1 + 3] * d2)
              + a[i1 + 6] * d3);
          }

          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (Deriv_Propag_DBDX_Construc.cpp)
