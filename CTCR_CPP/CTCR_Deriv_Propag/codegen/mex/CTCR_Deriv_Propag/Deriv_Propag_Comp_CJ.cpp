//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Deriv_Propag_Comp_CJ.cpp
//
// Code generation for function 'Deriv_Propag_Comp_CJ'
//

// Include files
#include "Deriv_Propag_Comp_CJ.h"
#include "BVPProp.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCR_Deriv_Propag_data.h"
#include "MemCJ.h"
#include "MemDerivPropagHigh.h"
#include "SimulationParam.h"
#include "mtimes.h"
#include "pinv.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo tb_emlrtRSI{
    94,                  // lineNo
    "eml_mtimes_helper", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" // pathName
};

static emlrtRSInfo ac_emlrtRSI{
    47,                     // lineNo
    "Deriv_Propag_Comp_CJ", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pathName
};

static emlrtRSInfo bc_emlrtRSI{
    59,                     // lineNo
    "Deriv_Propag_Comp_CJ", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pathName
};

static emlrtRSInfo cc_emlrtRSI{
    77,                     // lineNo
    "Deriv_Propag_Comp_CJ", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pathName
};

static emlrtRSInfo dc_emlrtRSI{
    25,     // lineNo
    "pinv", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/pinv.m" // pathName
};

static emlrtRSInfo ec_emlrtRSI{
    27,     // lineNo
    "pinv", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/pinv.m" // pathName
};

static emlrtRSInfo fd_emlrtRSI{
    69,                  // lineNo
    "eml_mtimes_helper", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" // pathName
};

static emlrtRTEInfo cb_emlrtRTEI{
    44,                     // lineNo
    13,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pName
};

static emlrtBCInfo bgb_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    46,                            // lineNo
    53,                            // colNo
    "mem_deriv_propag_high.mem_E", // aName
    "Deriv_Propag_Comp_CJ",        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    0                                       // checkKind
};

static emlrtDCInfo ld_emlrtDCI{
    46,                     // lineNo
    55,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    1                                       // checkKind
};

static emlrtBCInfo cgb_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    46,                            // lineNo
    55,                            // colNo
    "mem_deriv_propag_high.mem_E", // aName
    "Deriv_Propag_Comp_CJ",        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    0                                       // checkKind
};

static emlrtDCInfo md_emlrtDCI{
    46,                     // lineNo
    61,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    1                                       // checkKind
};

static emlrtBCInfo dgb_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    46,                            // lineNo
    61,                            // colNo
    "mem_deriv_propag_high.mem_E", // aName
    "Deriv_Propag_Comp_CJ",        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    0                                       // checkKind
};

static emlrtDCInfo nd_emlrtDCI{
    56,                     // lineNo
    66,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    1                                       // checkKind
};

static emlrtBCInfo egb_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    56,                            // lineNo
    66,                            // colNo
    "mem_deriv_propag_high.mem_E", // aName
    "Deriv_Propag_Comp_CJ",        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    0                                       // checkKind
};

static emlrtDCInfo od_emlrtDCI{
    56,                     // lineNo
    72,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    1                                       // checkKind
};

static emlrtBCInfo fgb_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    56,                            // lineNo
    72,                            // colNo
    "mem_deriv_propag_high.mem_E", // aName
    "Deriv_Propag_Comp_CJ",        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo ggb_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    56,                            // lineNo
    80,                            // colNo
    "mem_deriv_propag_high.mem_E", // aName
    "Deriv_Propag_Comp_CJ",        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    0                                       // checkKind
};

static emlrtDCInfo pd_emlrtDCI{
    57,                     // lineNo
    66,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    1                                       // checkKind
};

static emlrtBCInfo hgb_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    57,                            // lineNo
    66,                            // colNo
    "mem_deriv_propag_high.mem_B", // aName
    "Deriv_Propag_Comp_CJ",        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    0                                       // checkKind
};

static emlrtDCInfo qd_emlrtDCI{
    57,                     // lineNo
    72,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    1                                       // checkKind
};

static emlrtBCInfo igb_emlrtBCI{
    -1,                            // iFirst
    -1,                            // iLast
    57,                            // lineNo
    72,                            // colNo
    "mem_deriv_propag_high.mem_B", // aName
    "Deriv_Propag_Comp_CJ",        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    0                                       // checkKind
};

static emlrtECInfo gb_emlrtECI{
    1,                      // nDims
    59,                     // lineNo
    36,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pName
};

static emlrtECInfo hb_emlrtECI{
    2,                      // nDims
    59,                     // lineNo
    36,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pName
};

static emlrtBCInfo jgb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    59,                     // lineNo
    30,                     // colNo
    "mem_CJ.mem_J",         // aName
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    0                                       // checkKind
};

static emlrtECInfo ib_emlrtECI{
    -1,                     // nDims
    59,                     // lineNo
    13,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pName
};

static emlrtBCInfo kgb_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    75,                           // lineNo
    50,                           // colNo
    "simulation_param.pt_s0_LIT", // aName
    "Deriv_Propag_Comp_CJ",       // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo lgb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    77,                     // lineNo
    55,                     // colNo
    "Ews0",                 // aName
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    0                                       // checkKind
};

static emlrtDCInfo rd_emlrtDCI{
    77,                     // lineNo
    58,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    1                                       // checkKind
};

static emlrtBCInfo mgb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    77,                     // lineNo
    58,                     // colNo
    "Ews0",                 // aName
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo ngb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    77,                     // lineNo
    85,                     // colNo
    "Bws0",                 // aName
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    0                                       // checkKind
};

static emlrtECInfo jb_emlrtECI{
    1,                      // nDims
    77,                     // lineNo
    46,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pName
};

static emlrtECInfo kb_emlrtECI{
    2,                      // nDims
    77,                     // lineNo
    46,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pName
};

static emlrtBCInfo ogb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    77,                     // lineNo
    36,                     // colNo
    "mem_CJ.mem_Cs0",       // aName
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    0                                       // checkKind
};

static emlrtBCInfo pgb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    77,                     // lineNo
    39,                     // colNo
    "mem_CJ.mem_Cs0",       // aName
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m", // pName
    0                                       // checkKind
};

static emlrtECInfo lb_emlrtECI{
    -1,                     // nDims
    77,                     // lineNo
    17,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    138,                   // lineNo
    23,                    // colNo
    "dynamic_size_checks", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" // pName
};

static emlrtRTEInfo eb_emlrtRTEI{
    133,                   // lineNo
    23,                    // colNo
    "dynamic_size_checks", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/"
    "eml_mtimes_helper.m" // pName
};

static emlrtRTEInfo md_emlrtRTEI{
    46,                     // lineNo
    9,                      // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pName
};

static emlrtRTEInfo nd_emlrtRTEI{
    25,     // lineNo
    22,     // colNo
    "pinv", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/pinv.m" // pName
};

static emlrtRTEInfo od_emlrtRTEI{
    47,                     // lineNo
    9,                      // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pName
};

static emlrtRTEInfo pd_emlrtRTEI{
    57,                     // lineNo
    36,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pName
};

static emlrtRTEInfo qd_emlrtRTEI{
    59,                     // lineNo
    36,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pName
};

static emlrtRTEInfo rd_emlrtRTEI{
    77,                     // lineNo
    76,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pName
};

static emlrtRTEInfo sd_emlrtRTEI{
    77,                     // lineNo
    46,                     // colNo
    "Deriv_Propag_Comp_CJ", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Deriv_Pro"
    "pag_Functions/Deriv_Propag_Comp_CJ.m" // pName
};

// Function Declarations
static void binary_expand_op(const emlrtStack &sp,
                             coder::array<real_T, 2U> &in1,
                             const MemDerivPropagHigh *in2, real_T in3,
                             const SimulationParam *in4, int32_T in5);

static void binary_expand_op(const emlrtStack &sp,
                             coder::array<real_T, 2U> &in1,
                             const MemDerivPropagHigh *in2, int32_T in3,
                             int32_T in4, real_T in5);

// Function Definitions
static void binary_expand_op(const emlrtStack &sp,
                             coder::array<real_T, 2U> &in1,
                             const MemDerivPropagHigh *in2, real_T in3,
                             const SimulationParam *in4, int32_T in5)
{
  coder::array<real_T, 2U> b_in2;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_in4;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_in4 = static_cast<int32_T>(in4->pt_s0_LIT[in5]);
  if (in1.size(0) == 1) {
    loop_ub = in2->mem_Ews0.size(0);
  } else {
    loop_ub = in1.size(0);
  }
  if (in1.size(1) == 1) {
    b_loop_ub = in2->mem_Ews0.size(1);
  } else {
    b_loop_ub = in1.size(1);
  }
  b_in2.set_size(&sd_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  stride_0_0 = (in2->mem_Ews0.size(0) != 1);
  stride_0_1 = (in2->mem_Ews0.size(1) != 1);
  stride_1_0 = (in1.size(0) != 1);
  stride_1_1 = (in1.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in2[i1 + b_in2.size(0) * i] =
          in2->mem_Ews0[((i1 * stride_0_0 + in2->mem_Ews0.size(0) * aux_0_1) +
                         in2->mem_Ews0.size(0) * in2->mem_Ews0.size(1) *
                             (static_cast<int32_T>(in3) - 1)) +
                        in2->mem_Ews0.size(0) * in2->mem_Ews0.size(1) *
                            in2->mem_Ews0.size(2) * (b_in4 - 1)] -
          in1[i1 * stride_1_0 + in1.size(0) * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  in1.set_size(&sd_emlrtRTEI, &sp, b_in2.size(0), b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_loop_ub = b_in2.size(0);
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in2[i1 + b_in2.size(0) * i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op(const emlrtStack &sp,
                             coder::array<real_T, 2U> &in1,
                             const MemDerivPropagHigh *in2, int32_T in3,
                             int32_T in4, real_T in5)
{
  coder::array<real_T, 2U> b_in2;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in1.size(0) == 1) {
    loop_ub = in2->mem_E.size(0);
  } else {
    loop_ub = in1.size(0);
  }
  i = in4 - in3;
  if (in1.size(1) == 1) {
    b_loop_ub = i;
  } else {
    b_loop_ub = in1.size(1);
  }
  b_in2.set_size(&qd_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  stride_0_0 = (in2->mem_E.size(0) != 1);
  stride_0_1 = (i != 1);
  stride_1_0 = (in1.size(0) != 1);
  stride_1_1 = (in1.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in2[i1 + b_in2.size(0) * i] =
          in2->mem_E[(i1 * stride_0_0 + in2->mem_E.size(0) * (in3 + aux_0_1)) +
                     in2->mem_E.size(0) * in2->mem_E.size(1) *
                         (static_cast<int32_T>(in5) - 1)] -
          in1[i1 * stride_1_0 + in1.size(0) * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  in1.set_size(&qd_emlrtRTEI, &sp, b_in2.size(0), b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_in2.size(0);
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in2[i1 + b_in2.size(0) * i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void Deriv_Propag_Comp_CJ(const emlrtStack &sp,
                          const CTCRConstruc *ctcr_construc,
                          const CTCRCarac *ctcr_carac,
                          const SimulationParam *simulation_param,
                          const BVPProp *bvp_prop, MemCJ *mem_CJ,
                          const MemDerivPropagHigh *mem_deriv_propag_high)
{
  coder::array<real_T, 2U> Eu;
  coder::array<real_T, 2U> b_mem_deriv_propag_high;
  coder::array<real_T, 2U> pinv_Bu;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 2U> y;
  emlrtStack b_st;
  emlrtStack st;
  real_T nbT;
  int32_T b_mem_CJ[2];
  int32_T i;
  int32_T innerDimA;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  //  ======================================================================= %
  //
  //  This function computes the Generalized Compliance Matrix and
  //  the Joint Jacobian using the High-Level derivatives Ex and Bx
  //  obtained thanks to the Low-Level derivatives computed by the Low-Level
  //  Derivative Propagation Method
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  ctcr_construc         : (class) Robot features related to the model
  //  settings ctcr_carac            : (class) Robot features simulation_param
  //  : (class) Model settings bvp_prop              : (class) Results of the
  //  BVP resolution mem_CJ                : (class) Memory of the Generalized
  //  Compliance Matrix and the Joint Jacobian mem_deriv_propag_high : (class)
  //  Memory of the high-level partial derivatives
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  mem_CJ                : (class) Memory of the Generalized Compliance
  //  Matrix and the Joint Jacobian
  //
  //  ======================================================================= %
  //  ========================================================== %
  //  ================== Getting input values ================== %
  nbT = ctcr_carac->nbT;
  //  ========================================================== %
  i = static_cast<int32_T>(ctcr_construc->nbP +
                           (1.0 - ctcr_construc->ind_origin));
  emlrtForLoopVectorCheckR2021a(ctcr_construc->ind_origin, 1.0,
                                ctcr_construc->nbP, mxDOUBLE_CLASS, i,
                                &cb_emlrtRTEI, (emlrtConstCTX)&sp);
  if (i - 1 >= 0) {
    if (ctcr_carac->nbT + 6.0 < 1.0) {
      innerDimA = 0;
    } else {
      if (mem_deriv_propag_high->mem_E.size(1) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1,
                                      mem_deriv_propag_high->mem_E.size(1),
                                      &bgb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if (ctcr_carac->nbT + 6.0 !=
          static_cast<int32_T>(muDoubleScalarFloor(ctcr_carac->nbT + 6.0))) {
        emlrtIntegerCheckR2012b(ctcr_carac->nbT + 6.0, &ld_emlrtDCI,
                                (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(ctcr_carac->nbT + 6.0) < 1) ||
          (static_cast<int32_T>(ctcr_carac->nbT + 6.0) >
           mem_deriv_propag_high->mem_E.size(1))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(ctcr_carac->nbT + 6.0), 1,
            mem_deriv_propag_high->mem_E.size(1), &cgb_emlrtBCI,
            (emlrtConstCTX)&sp);
      }
      innerDimA = static_cast<int32_T>(ctcr_carac->nbT + 6.0);
    }
  }
  for (int32_T is{0}; is < i; is++) {
    real_T b_is;
    int32_T b_loop_ub;
    int32_T b_simulation_param;
    int32_T i1;
    int32_T i2;
    int32_T i3;
    int32_T loop_ub;
    b_is = ctcr_construc->ind_origin + static_cast<real_T>(is);
    if (b_is != static_cast<int32_T>(muDoubleScalarFloor(b_is))) {
      emlrtIntegerCheckR2012b(b_is, &md_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(b_is) < 1) ||
        (static_cast<int32_T>(b_is) > mem_deriv_propag_high->mem_E.size(2))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_is), 1,
                                    mem_deriv_propag_high->mem_E.size(2),
                                    &dgb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    Eu.set_size(&md_emlrtRTEI, &sp, mem_deriv_propag_high->mem_E.size(0),
                innerDimA);
    for (i1 = 0; i1 < innerDimA; i1++) {
      loop_ub = mem_deriv_propag_high->mem_E.size(0);
      for (i2 = 0; i2 < loop_ub; i2++) {
        Eu[i2 + Eu.size(0) * i1] =
            mem_deriv_propag_high
                ->mem_E[(i2 + mem_deriv_propag_high->mem_E.size(0) * i1) +
                        mem_deriv_propag_high->mem_E.size(0) *
                            mem_deriv_propag_high->mem_E.size(1) *
                            (static_cast<int32_T>(b_is) - 1)];
      }
    }
    st.site = &ac_emlrtRSI;
    loop_ub = bvp_prop->Bu.size(0);
    if (bvp_prop->Bu.size(0) < bvp_prop->Bu.size(1)) {
      pinv_Bu.set_size(&nd_emlrtRTEI, &st, bvp_prop->Bu.size(1),
                       bvp_prop->Bu.size(0));
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = bvp_prop->Bu.size(1);
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          pinv_Bu[i2 + pinv_Bu.size(0) * i1] =
              bvp_prop->Bu[i1 + bvp_prop->Bu.size(0) * i2];
        }
      }
      b_st.site = &dc_emlrtRSI;
      coder::eml_pinv(b_st, pinv_Bu, simulation_param->opt_tol, r);
      pinv_Bu.set_size(&od_emlrtRTEI, &st, r.size(1), r.size(0));
      loop_ub = r.size(0);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = r.size(1);
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          pinv_Bu[i2 + pinv_Bu.size(0) * i1] = r[i1 + r.size(0) * i2];
        }
      }
    } else {
      b_st.site = &ec_emlrtRSI;
      coder::eml_pinv(b_st, bvp_prop->Bu, simulation_param->opt_tol, pinv_Bu);
    }
    if (simulation_param->bool_J) {
      real_T d;
      //  ========================================================== %
      //  ============= Articular jacobian computation ============= %
      //  (eq 16)
      d = 3.0 * nbT + 6.0;
      if (nbT + 7.0 > d) {
        i1 = 0;
        i2 = 0;
      } else {
        if (nbT + 7.0 != static_cast<int32_T>(muDoubleScalarFloor(nbT + 7.0))) {
          emlrtIntegerCheckR2012b(nbT + 7.0, &nd_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(nbT + 7.0) < 1) ||
            (static_cast<int32_T>(nbT + 7.0) >
             mem_deriv_propag_high->mem_E.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT + 7.0), 1,
                                        mem_deriv_propag_high->mem_E.size(1),
                                        &egb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        i1 = static_cast<int32_T>(nbT + 7.0) - 1;
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &od_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(d) < 1) ||
            (static_cast<int32_T>(d) > mem_deriv_propag_high->mem_E.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                        mem_deriv_propag_high->mem_E.size(1),
                                        &fgb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        i2 = static_cast<int32_T>(d);
      }
      if ((static_cast<int32_T>(b_is) < 1) ||
          (static_cast<int32_T>(b_is) > mem_deriv_propag_high->mem_E.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_is), 1,
                                      mem_deriv_propag_high->mem_E.size(2),
                                      &ggb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if (nbT + 7.0 > d) {
        i3 = 0;
        b_simulation_param = 0;
      } else {
        if (nbT + 7.0 != static_cast<int32_T>(muDoubleScalarFloor(nbT + 7.0))) {
          emlrtIntegerCheckR2012b(nbT + 7.0, &pd_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(nbT + 7.0) < 1) ||
            (static_cast<int32_T>(nbT + 7.0) >
             mem_deriv_propag_high->mem_B.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT + 7.0), 1,
                                        mem_deriv_propag_high->mem_B.size(1),
                                        &hgb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        i3 = static_cast<int32_T>(nbT + 7.0) - 1;
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &qd_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(d) < 1) ||
            (static_cast<int32_T>(d) > mem_deriv_propag_high->mem_B.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                        mem_deriv_propag_high->mem_B.size(1),
                                        &igb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_simulation_param = static_cast<int32_T>(d);
      }
      st.site = &bc_emlrtRSI;
      b_st.site = &fd_emlrtRSI;
      if (innerDimA != pinv_Bu.size(0)) {
        if (((mem_deriv_propag_high->mem_E.size(0) == 1) && (innerDimA == 1)) ||
            ((pinv_Bu.size(0) == 1) && (pinv_Bu.size(1) == 1))) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &eb_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &db_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      b_st.site = &tb_emlrtRSI;
      coder::internal::blas::mtimes(b_st, Eu, pinv_Bu, y);
      st.site = &bc_emlrtRSI;
      b_st.site = &fd_emlrtRSI;
      if (mem_deriv_propag_high->mem_B.size(0) != y.size(1)) {
        if (((y.size(0) == 1) && (y.size(1) == 1)) ||
            ((mem_deriv_propag_high->mem_B.size(0) == 1) &&
             (b_simulation_param - i3 == 1))) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &eb_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &db_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      loop_ub = b_simulation_param - i3;
      b_mem_deriv_propag_high.set_size(
          &pd_emlrtRTEI, &st, mem_deriv_propag_high->mem_B.size(0), loop_ub);
      for (b_simulation_param = 0; b_simulation_param < loop_ub;
           b_simulation_param++) {
        b_loop_ub = mem_deriv_propag_high->mem_B.size(0);
        for (int32_T tp_is0{0}; tp_is0 < b_loop_ub; tp_is0++) {
          b_mem_deriv_propag_high[tp_is0 + b_mem_deriv_propag_high.size(0) *
                                               b_simulation_param] =
              mem_deriv_propag_high
                  ->mem_B[tp_is0 + mem_deriv_propag_high->mem_B.size(0) *
                                       (i3 + b_simulation_param)];
        }
      }
      b_st.site = &tb_emlrtRSI;
      coder::internal::blas::mtimes(b_st, y, b_mem_deriv_propag_high, r);
      if ((mem_deriv_propag_high->mem_E.size(0) != r.size(0)) &&
          ((mem_deriv_propag_high->mem_E.size(0) != 1) && (r.size(0) != 1))) {
        emlrtDimSizeImpxCheckR2021b(mem_deriv_propag_high->mem_E.size(0),
                                    r.size(0), &gb_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      loop_ub = i2 - i1;
      if ((loop_ub != r.size(1)) && ((loop_ub != 1) && (r.size(1) != 1))) {
        emlrtDimSizeImpxCheckR2021b(loop_ub, r.size(1), &hb_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      i3 = mem_CJ->mem_J.size(2);
      if ((static_cast<int32_T>(b_is) < 1) ||
          (static_cast<int32_T>(b_is) > i3)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_is), 1, i3,
                                      &jgb_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if ((mem_deriv_propag_high->mem_E.size(0) == r.size(0)) &&
          (loop_ub == r.size(1))) {
        r.set_size(&qd_emlrtRTEI, &sp, mem_deriv_propag_high->mem_E.size(0),
                   loop_ub);
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_loop_ub = mem_deriv_propag_high->mem_E.size(0);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            r[i3 + r.size(0) * i2] =
                mem_deriv_propag_high
                    ->mem_E[(i3 +
                             mem_deriv_propag_high->mem_E.size(0) * (i1 + i2)) +
                            mem_deriv_propag_high->mem_E.size(0) *
                                mem_deriv_propag_high->mem_E.size(1) *
                                (static_cast<int32_T>(b_is) - 1)] -
                r[i3 + r.size(0) * i2];
          }
        }
      } else {
        st.site = &bc_emlrtRSI;
        binary_expand_op(st, r, mem_deriv_propag_high, i1, i2, b_is);
      }
      b_mem_CJ[0] = mem_CJ->mem_J.size(0);
      b_mem_CJ[1] = mem_CJ->mem_J.size(1);
      emlrtSubAssignSizeCheckR2012b(&b_mem_CJ[0], 2, r.size(), 2, &ib_emlrtECI,
                                    (emlrtCTX)&sp);
      loop_ub = r.size(1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = r.size(0);
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          mem_CJ->mem_J[(i2 + mem_CJ->mem_J.size(0) * i1) +
                        mem_CJ->mem_J.size(0) * mem_CJ->mem_J.size(1) *
                            (static_cast<int32_T>(b_is) - 1)] =
              r[i2 + r.size(0) * i1];
        }
      }
    }
    if (simulation_param->bool_Cs0) {
      //  ========================================================== %
      //  =============== Compliance Cs0 computation =============== %
      //  (eq 15)
      i1 = simulation_param->pt_s0_LIT.size(1);
      for (int32_T tp_is0{0}; tp_is0 < i1; tp_is0++) {
        if (tp_is0 + 1 > simulation_param->pt_s0_LIT.size(1)) {
          emlrtDynamicBoundsCheckR2012b(tp_is0 + 1, 1,
                                        simulation_param->pt_s0_LIT.size(1),
                                        &kgb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(b_is) < 1) ||
            (static_cast<int32_T>(b_is) >
             mem_deriv_propag_high->mem_Ews0.size(2))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_is), 1,
                                        mem_deriv_propag_high->mem_Ews0.size(2),
                                        &lgb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if (simulation_param->pt_s0_LIT[tp_is0] !=
            static_cast<int32_T>(
                muDoubleScalarFloor(simulation_param->pt_s0_LIT[tp_is0]))) {
          emlrtIntegerCheckR2012b(simulation_param->pt_s0_LIT[tp_is0],
                                  &rd_emlrtDCI, (emlrtConstCTX)&sp);
        }
        b_simulation_param =
            static_cast<int32_T>(simulation_param->pt_s0_LIT[tp_is0]);
        if ((b_simulation_param < 1) ||
            (b_simulation_param > mem_deriv_propag_high->mem_Ews0.size(3))) {
          emlrtDynamicBoundsCheckR2012b(b_simulation_param, 1,
                                        mem_deriv_propag_high->mem_Ews0.size(3),
                                        &mgb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        st.site = &cc_emlrtRSI;
        b_st.site = &fd_emlrtRSI;
        if (innerDimA != pinv_Bu.size(0)) {
          if (((mem_deriv_propag_high->mem_E.size(0) == 1) &&
               (innerDimA == 1)) ||
              ((pinv_Bu.size(0) == 1) && (pinv_Bu.size(1) == 1))) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &eb_emlrtRTEI,
                "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &db_emlrtRTEI, "MATLAB:innerdim", "MATLAB:innerdim", 0);
          }
        }
        b_st.site = &tb_emlrtRSI;
        coder::internal::blas::mtimes(b_st, Eu, pinv_Bu, y);
        st.site = &cc_emlrtRSI;
        if (b_simulation_param > mem_deriv_propag_high->mem_Bws0.size(2)) {
          emlrtDynamicBoundsCheckR2012b(b_simulation_param, 1,
                                        mem_deriv_propag_high->mem_Bws0.size(2),
                                        &ngb_emlrtBCI, &st);
        }
        b_st.site = &fd_emlrtRSI;
        if (mem_deriv_propag_high->mem_Bws0.size(0) != y.size(1)) {
          if (((y.size(0) == 1) && (y.size(1) == 1)) ||
              ((mem_deriv_propag_high->mem_Bws0.size(0) == 1) &&
               (mem_deriv_propag_high->mem_Bws0.size(1) == 1))) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &eb_emlrtRTEI,
                "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &db_emlrtRTEI, "MATLAB:innerdim", "MATLAB:innerdim", 0);
          }
        }
        b_mem_deriv_propag_high.set_size(
            &rd_emlrtRTEI, &st, mem_deriv_propag_high->mem_Bws0.size(0),
            mem_deriv_propag_high->mem_Bws0.size(1));
        loop_ub = mem_deriv_propag_high->mem_Bws0.size(1);
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_loop_ub = mem_deriv_propag_high->mem_Bws0.size(0);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            b_mem_deriv_propag_high[i3 + b_mem_deriv_propag_high.size(0) * i2] =
                mem_deriv_propag_high
                    ->mem_Bws0[(i3 +
                                mem_deriv_propag_high->mem_Bws0.size(0) * i2) +
                               mem_deriv_propag_high->mem_Bws0.size(0) *
                                   mem_deriv_propag_high->mem_Bws0.size(1) *
                                   (b_simulation_param - 1)];
          }
        }
        b_st.site = &tb_emlrtRSI;
        coder::internal::blas::mtimes(b_st, y, b_mem_deriv_propag_high, r);
        if ((mem_deriv_propag_high->mem_Ews0.size(0) != r.size(0)) &&
            ((mem_deriv_propag_high->mem_Ews0.size(0) != 1) &&
             (r.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(mem_deriv_propag_high->mem_Ews0.size(0),
                                      r.size(0), &jb_emlrtECI,
                                      (emlrtConstCTX)&sp);
        }
        loop_ub = mem_deriv_propag_high->mem_Ews0.size(1);
        if ((mem_deriv_propag_high->mem_Ews0.size(1) != r.size(1)) &&
            ((mem_deriv_propag_high->mem_Ews0.size(1) != 1) &&
             (r.size(1) != 1))) {
          emlrtDimSizeImpxCheckR2021b(mem_deriv_propag_high->mem_Ews0.size(1),
                                      r.size(1), &kb_emlrtECI,
                                      (emlrtConstCTX)&sp);
        }
        i2 = mem_CJ->mem_Cs0.size(2);
        if ((static_cast<int32_T>(b_is) < 1) ||
            (static_cast<int32_T>(b_is) > i2)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_is), 1, i2,
                                        &ogb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        i2 = mem_CJ->mem_Cs0.size(3);
        if (b_simulation_param > i2) {
          emlrtDynamicBoundsCheckR2012b(b_simulation_param, 1, i2,
                                        &pgb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if ((mem_deriv_propag_high->mem_Ews0.size(0) == r.size(0)) &&
            (mem_deriv_propag_high->mem_Ews0.size(1) == r.size(1))) {
          r.set_size(&sd_emlrtRTEI, &sp,
                     mem_deriv_propag_high->mem_Ews0.size(0),
                     mem_deriv_propag_high->mem_Ews0.size(1));
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_loop_ub = mem_deriv_propag_high->mem_Ews0.size(0);
            for (i3 = 0; i3 < b_loop_ub; i3++) {
              r[i3 + r.size(0) * i2] =
                  mem_deriv_propag_high->mem_Ews0
                      [((i3 + mem_deriv_propag_high->mem_Ews0.size(0) * i2) +
                        mem_deriv_propag_high->mem_Ews0.size(0) *
                            mem_deriv_propag_high->mem_Ews0.size(1) *
                            (static_cast<int32_T>(b_is) - 1)) +
                       mem_deriv_propag_high->mem_Ews0.size(0) *
                           mem_deriv_propag_high->mem_Ews0.size(1) *
                           mem_deriv_propag_high->mem_Ews0.size(2) *
                           (b_simulation_param - 1)] -
                  r[i3 + r.size(0) * i2];
            }
          }
        } else {
          st.site = &cc_emlrtRSI;
          binary_expand_op(st, r, mem_deriv_propag_high, b_is, simulation_param,
                           tp_is0);
        }
        b_mem_CJ[0] = mem_CJ->mem_Cs0.size(0);
        b_mem_CJ[1] = mem_CJ->mem_Cs0.size(1);
        emlrtSubAssignSizeCheckR2012b(&b_mem_CJ[0], 2, r.size(), 2,
                                      &lb_emlrtECI, (emlrtCTX)&sp);
        loop_ub = r.size(1);
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_loop_ub = r.size(0);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            mem_CJ->mem_Cs0[((i3 + mem_CJ->mem_Cs0.size(0) * i2) +
                             mem_CJ->mem_Cs0.size(0) * mem_CJ->mem_Cs0.size(1) *
                                 (static_cast<int32_T>(b_is) - 1)) +
                            mem_CJ->mem_Cs0.size(0) * mem_CJ->mem_Cs0.size(1) *
                                mem_CJ->mem_Cs0.size(2) *
                                (b_simulation_param - 1)] =
                r[i3 + r.size(0) * i2];
          }
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
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (Deriv_Propag_Comp_CJ.cpp)
