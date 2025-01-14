//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CTCR_Shape.cpp
//
// Code generation for function 'CTCR_Shape'
//

// Include files
#include "CTCR_Shape.h"
#include "BVPProp.h"
#include "BVP_Bu_Construc.h"
#include "BVP_Comp_BC.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCRLoad.h"
#include "CTCR_Shape_data.h"
#include "CTCR_Shape_internal_types1.h"
#include "CTCR_Shape_mexutil.h"
#include "CTCR_Shape_types.h"
#include "IVP_Int.h"
#include "Init_Mem.h"
#include "MemBVP.h"
#include "MemCJ.h"
#include "MemDUZi.h"
#include "MemDerivPropagHigh.h"
#include "MemDerivPropagLow.h"
#include "MemY.h"
#include "SimulationParam.h"
#include "anonymous_function.h"
#include "driver.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include <cstdio>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    42,           // lineNo
    "CTCR_Shape", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/CTCR_Shape.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    45,           // lineNo
    "BVP_Resolv", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    56,           // lineNo
    "BVP_Resolv", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    76,           // lineNo
    "BVP_Resolv", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    78,           // lineNo
    "BVP_Resolv", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    101,          // lineNo
    "BVP_Resolv", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    112,          // lineNo
    "BVP_Resolv", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    124,          // lineNo
    "BVP_Resolv", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    125,          // lineNo
    "BVP_Resolv", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    1,                                                           // lineNo
    "fsolve",                                                    // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/optim/eml/fsolve.p" // pathName
};

static emlrtRSInfo o_emlrtRSI{
    1,         // lineNo
    "checkX0", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+validate/checkX0.p" // pathName
};

static emlrtRSInfo p_emlrtRSI{
    16,    // lineNo
    "all", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/all.m" // pathName
};

static emlrtRSInfo q_emlrtRSI{
    57,         // lineNo
    "allOrAny", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "allOrAny.m" // pathName
};

static emlrtRSInfo r_emlrtRSI{
    106,                   // lineNo
    "applyToMultipleDims", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "applyToMultipleDims.m" // pathName
};

static emlrtRSInfo t_emlrtRSI{
    56,                                                             // lineNo
    "@(x)coder.internal.allOrAny(op,x,coder.internal.indexInt(1))", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "allOrAny.m" // pathName
};

static emlrtRSInfo u_emlrtRSI{
    143,        // lineNo
    "allOrAny", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "allOrAny.m" // pathName
};

static emlrtRSInfo jd_emlrtRSI{
    35,        // lineNo
    "fprintf", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/iofun/fprintf.m" // pathName
};

static emlrtRSInfo ld_emlrtRSI{
    51,                  // lineNo
    "reshapeSizeChecks", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pathName
};

static emlrtMCInfo emlrtMCI{
    66,        // lineNo
    18,        // colNo
    "fprintf", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/iofun/fprintf.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    116,          // lineNo
    18,           // colNo
    "BVP_Resolv", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m" // pName
};

static emlrtBCInfo hf_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    125,             // lineNo
    55,              // colNo
    "mem_bvp.mem_T", // aName
    "BVP_Resolv",    // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m", // pName
    0                      // checkKind
};

static emlrtRTEInfo s_emlrtRTEI{
    81,                  // lineNo
    23,                  // colNo
    "reshapeSizeChecks", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pName
};

static emlrtRTEInfo t_emlrtRTEI{
    74,                  // lineNo
    13,                  // colNo
    "reshapeSizeChecks", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    126,               // lineNo
    9,                 // colNo
    "computeDimsData", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "reshapeSizeChecks.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    1,         // lineNo
    1,         // colNo
    "checkX0", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+validate/checkX0.p" // pName
};

static emlrtBCInfo if_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    117,               // lineNo
    116,               // colNo
    "bvp_prop.IC_opt", // aName
    "BVP_Resolv",      // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m", // pName
    0                      // checkKind
};

static emlrtBCInfo jf_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    117,                      // lineNo
    143,                      // colNo
    "ctcr_construc.vect_res", // aName
    "BVP_Resolv",             // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m", // pName
    0                      // checkKind
};

static emlrtDCInfo pq_emlrtDCI{
    117,          // lineNo
    143,          // colNo
    "BVP_Resolv", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m", // pName
    1                      // checkKind
};

static emlrtBCInfo kf_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    117,                         // lineNo
    169,                         // colNo
    "ctcr_construc.vect_ind_iT", // aName
    "BVP_Resolv",                // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m", // pName
    0                      // checkKind
};

static emlrtBCInfo lf_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    117,                                           // lineNo
    57,                                            // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj", // aName
    "BVP_Resolv",                                  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m", // pName
    0                      // checkKind
};

static emlrtBCInfo mf_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    117,                                           // lineNo
    60,                                            // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj", // aName
    "BVP_Resolv",                                  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m", // pName
    0                      // checkKind
};

static emlrtBCInfo nf_emlrtBCI{
    -1,                                            // iFirst
    -1,                                            // iLast
    117,                                           // lineNo
    63,                                            // colNo
    "mem_deriv_propag_low.mem_duzi.mem_duzi_dbcj", // aName
    "BVP_Resolv",                                  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m", // pName
    0                      // checkKind
};

static emlrtDCInfo qq_emlrtDCI{
    117,          // lineNo
    63,           // colNo
    "BVP_Resolv", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m", // pName
    1                      // checkKind
};

static emlrtRTEInfo uc_emlrtRTEI{
    48,        // lineNo
    17,        // colNo
    "BVPProp", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
    "ss/BVPProp.m" // pName
};

static emlrtRTEInfo vc_emlrtRTEI{
    51,        // lineNo
    17,        // colNo
    "BVPProp", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Cla"
    "ss/BVPProp.m" // pName
};

static emlrtRTEInfo wc_emlrtRTEI{
    51,           // lineNo
    5,            // colNo
    "BVP_Resolv", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m" // pName
};

static emlrtRTEInfo
    xc_emlrtRTEI{
        14,         // lineNo
        1,          // colNo
        "isfinite", // fName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/"
        "isfinite.m" // pName
    };

static emlrtRTEInfo yc_emlrtRTEI{
    125,          // lineNo
    5,            // colNo
    "BVP_Resolv", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m" // pName
};

static emlrtRSInfo md_emlrtRSI{
    66,        // lineNo
    "fprintf", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/iofun/fprintf.m" // pathName
};

// Function Declarations
static real_T emlrt_marshallIn(const emlrtStack &sp,
                               const mxArray *a__output_of_feval_,
                               const char_T *identifier);

static const mxArray *feval(const emlrtStack &sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            emlrtMCInfo &location);

// Function Definitions
static real_T emlrt_marshallIn(const emlrtStack &sp,
                               const mxArray *a__output_of_feval_,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(a__output_of_feval_), &thisId);
  emlrtDestroyArray(&a__output_of_feval_);
  return y;
}

static const mxArray *feval(const emlrtStack &sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            emlrtMCInfo &location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 1, &m, 3, &pArrays[0],
                               "feval", true, &location);
}

void CTCR_Shape(const emlrtStack *sp, const coder::array<real_T, 1U> &IC,
                SimulationParam *simulation_param, const CTCRCarac *ctcr_carac,
                const CTCRLoad *ctcr_load, const CTCRConstruc *ctcr_construc,
                coder::array<real_T, 2U> &ctcr_shape, MemBVP *mem_bvp,
                BVPProp *bvp_prop, MemDerivPropagLow *mem_deriv_propag_low,
                MemDerivPropagHigh *mem_deriv_propag_high, MemCJ *mem_CJ,
                real_T *exitflag, struct0_T *output)
{
  static const int32_T b_iv[2]{1, 7};
  static const int32_T iv1[2]{1, 27};
  static const char_T b_u[27]{' ', '=', '=', ' ', 'O', 'p', 't', 'i',  'm',
                              'i', 'z', 'a', 't', 'i', 'o', 'n', ' ',  'p',
                              'r', 'o', 'b', 'l', 'e', 'm', ' ', '\\', 'n'};
  static const char_T u[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  coder::anonymous_function myfun;
  coder::array<real_T, 2U> a__1;
  coder::array<real_T, 2U> jacobian;
  coder::array<real_T, 1U> IC_opt;
  coder::array<real_T, 1U> b_expl_temp;
  coder::array<real_T, 1U> c_expl_temp;
  coder::array<boolean_T, 1U> b;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack k_st;
  emlrtStack st;
  emlrtStack *r;
  emlrtTimespec expl_temp;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  real_T resnorm;
  int32_T emptyDimValue;
  int32_T i;
  int32_T iT;
  int32_T nx;
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  k_st.prev = &j_st;
  k_st.tls = j_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  ======================================================================= %
  //
  //  This function computes the robot shape
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  IC                    : (nbT+6 x 1)   Initial value for yu(0)
  //  simulation_param      : (class)       Model settings
  //  ctcr_carac            : (class)       Robot features
  //  ctcr_load             : (class)       Robot loads
  //  ctcr_construc         : (class)       Robot features related to the model
  //  settings
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  ctcr_shape            : (3 x nbP)     Robot 3D shape
  //  mem_bvp               : (class)       Memory of the BVP variables
  //  bvp_prop              : (class)       Results of the BVP resolution
  //  mem_deriv_propag_low  : (class)       Memory of the low-level derivatives
  //  mem_deriv_propag_high : (class)       Memory of the high-level partial
  //  derivatives mem_CJ                : (class)       Memory of the
  //  Generalized Compliance Matrix and the Joint Jacobian simulation_param :
  //  (class)       Model settings ctcr_construc         : (class)       Robot
  //  features related to the model settings exitflag              : (sign int)
  //  Exitflag of fsolve output                : (object)      Output of fsolve
  //  giving information about the optimization process
  //
  //  ======================================================================= %
  //  ================
  //  ==== Solving the BVP ====
  st.site = &emlrtRSI;
  //  ======================================================================= %
  //
  //  This function solves the BVP
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  IC                        : (nbT+6 x 1)   Initial value for yu(0)
  //  ctcr_construc             : (class)       Robot features related to the
  //  model settings simulation_param          : (class)       Model settings
  //  ctcr_carac                : (class)       Robot features
  //  ctcr_act                  : (class)       Robot actuation
  //  ctcr_load                 : (class)       Robot loads
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  mem_bvp                   : (class)       Memory of the BVP variables
  //  bvp_prop                  : (class)       Results of the BVP resolution
  //  ctcr_shape                : (3 x nbP)     Robot shape
  //  mem_deriv_propag_low      : (class)       Memory of the low-level
  //  derivatives mem_deriv_propag_high     : (class)       Memory of the
  //  high-level partial derivatives mem_CJ                    : (class) Memory
  //  of the Generalized Compliance Matrix and the Joint Jacobian
  //  simulation_param          : (class)       Model settings
  //  exitflag                  : (sign int)    Exitflag of fsolve
  //  output                    : (object)      Output of fsolve giving
  //  information about the optimization process
  //
  //  ======================================================================= %
  //  ========================================================== %
  //  ======================= Preparing ======================== %
  //  Init timer
  b_st.site = &b_emlrtRSI;
  expl_temp = coder::tic(b_st);
  //  ========================================================== %
  //  =========== Auto optimization loop with fsolve =========== %
  //  ====== Constructor ======
  bvp_prop->vect_tol.set_size(&uc_emlrtRTEI, &st, 0, 0);
  bvp_prop->norm_tol.size[0] = 0;
  bvp_prop->norm_tol.size[1] = 0;
  bvp_prop->clk_bvp.size[0] = 0;
  bvp_prop->clk_bvp.size[1] = 0;
  bvp_prop->Bu.set_size(&vc_emlrtRTEI, &st, 0, 0);
  //  BVP prop initialization
  bvp_prop->IC_opt.set_size(&wc_emlrtRTEI, &st, IC.size(0), 1);
  nx = IC.size(0);
  for (i = 0; i < nx; i++) {
    bvp_prop->IC_opt[i] = IC[i];
  }
  //  IC initialization
  bvp_prop->nb_iter = 0.0;
  //  1               % Iteration number initialzation
  //  Memories initialization
  b_st.site = &c_emlrtRSI;
  Init_Mem(b_st, ctcr_construc, ctcr_carac, bvp_prop, mem_bvp,
           mem_deriv_propag_low, mem_deriv_propag_high, mem_CJ);
  //  ========================================= %
  //  ======== Settings for the solver ======== %
  //  ========================================= %
  //  ============ Solving the BVP ============ %
  myfun.workspace.ctcr_construc = *ctcr_construc;
  myfun.workspace.ctcr_carac = *ctcr_carac;
  myfun.workspace.ctcr_load = *ctcr_load;
  myfun.workspace.bvp_prop = *bvp_prop;
  myfun.workspace.mem_bvp = *mem_bvp;
  myfun.workspace.mem_deriv_propag_low = *mem_deriv_propag_low;
  b_st.site = &d_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  if (IC.size(0) == 0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &v_emlrtRTEI,
                                  "optimlib_codegen:common:EmptyX",
                                  "optimlib_codegen:common:EmptyX", 0);
  }
  b.set_size(&xc_emlrtRTEI, &c_st, IC.size(0));
  nx = IC.size(0);
  for (i = 0; i < nx; i++) {
    b[i] = ((!muDoubleScalarIsInf(IC[i])) && (!muDoubleScalarIsNaN(IC[i])));
  }
  d_st.site = &o_emlrtRSI;
  e_st.site = &p_emlrtRSI;
  f_st.site = &q_emlrtRSI;
  g_st.site = &r_emlrtRSI;
  h_st.site = &s_emlrtRSI;
  i_st.site = &t_emlrtRSI;
  y = true;
  j_st.site = &u_emlrtRSI;
  if (b.size(0) > 2147483646) {
    k_st.site = &v_emlrtRSI;
    coder::check_forloop_overflow_error(k_st);
  }
  nx = 1;
  exitg1 = false;
  while ((!exitg1) && (nx <= b.size(0))) {
    if (!b[nx - 1]) {
      y = false;
      exitg1 = true;
    } else {
      nx++;
    }
  }
  if (!y) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &v_emlrtRTEI, "optimlib_codegen:common:InfNaNComplexDetected",
        "optimlib_codegen:common:InfNaNComplexDetected", 3, 4, 2, "x0");
  }
  c_st.site = &n_emlrtRSI;
  resnorm = coder::optim::coder::levenbergMarquardt::driver(
      c_st, myfun, IC, IC_opt, a__1, output->algorithm, b_expl_temp,
      c_expl_temp, jacobian, exitflag, output->iterations, output->funcCount,
      output->stepsize, output->firstorderopt);
  if (*exitflag > 0.0) {
    c_st.site = &n_emlrtRSI;
    if (resnorm > 4.7121609153872423E-8) {
      *exitflag = -2.0;
    }
  }
  b_st.site = &e_emlrtRSI;
  //  ======================================================================= %
  //
  //  This function is used in the fsolve function to integrate the IVP, to
  //  compute the residual and optionally to compute manually the optimization
  //  Jacobian
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  IC                    : (nbT+6 x 1)       Initial value for yu(0) (see
  //  Table 5) simulation_param      : (class)           Model settings
  //  ctcr_construc         : (class)           Robot features related to the
  //  model settings ctcr_carac            : (class)           Robot features
  //  ctcr_load             : (class)           Robot loads
  //  ctcr_act              : (class)           Robot actuation
  //  bvp_prop              : (class)           Results of the BVP resolution
  //  mem_bvp               : (class)           Memory of the BVP variables
  //  mem_deriv_propag_low  : (class)           Memory of the low-level
  //  derivatives
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  error                 : (nbT+6 x 1)       Residual vector (b in the paper)
  //  jacobianMatrix        : (nbT+6 x nbT+6)   Optimization Jacobian
  //  bvp_prop              : (class)           Results of the BVP resolution
  //  mem_bvp               : (class)           Memory of the BVP variables
  //  mem_deriv_propag_low  : (class)           Memory of the low-level
  //  derivatives
  //
  //  ======================================================================= %
  //  IC initialization
  bvp_prop->IC_opt.set_size(&mc_emlrtRTEI, &b_st, IC_opt.size(0), 1);
  nx = IC_opt.size(0);
  for (i = 0; i < nx; i++) {
    bvp_prop->IC_opt[i] = IC_opt[i];
  }
  //  Including the IC in the BVP memories
  c_st.site = &ab_emlrtRSI;
  //  ======================================================================= %
  //
  //  This function initializes the state vector initial value
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  bvp_prop              : (class)   Results of the BVP resolution
  //  mem_bvp               : (class)   Memory of the BVP variables
  //  ctcr_construc         : (class)   Robot features related to the model
  //  settings ctcr_carac            : (class)   Robot features
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  mem_bvp               : (class)   Memory of the BVP variables
  //
  //  ======================================================================= %
  //  uzi(0i) initialization
  i = static_cast<int32_T>(ctcr_carac->nbT);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
                                static_cast<int32_T>(ctcr_carac->nbT),
                                &h_emlrtRTEI, &c_st);
  for (iT = 0; iT < i; iT++) {
    if ((static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) >
         IC_opt.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U), 1,
          IC_opt.size(0), &ab_emlrtBCI, &c_st);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) >
         mem_bvp->mem_y.mem_uz.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U), 1,
          mem_bvp->mem_y.mem_uz.size(0), &bb_emlrtBCI, &c_st);
    }
    emptyDimValue = ctcr_construc->vect_ind_iT.size(0);
    if ((static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) >
         emptyDimValue)) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U), 1,
          emptyDimValue, &db_emlrtBCI, &c_st);
    }
    resnorm = ctcr_construc->vect_ind_iT[iT];
    if (resnorm != static_cast<int32_T>(muDoubleScalarFloor(resnorm))) {
      emlrtIntegerCheckR2012b(resnorm, &io_emlrtDCI, &c_st);
    }
    if ((static_cast<int32_T>(resnorm) < 1) ||
        (static_cast<int32_T>(resnorm) > mem_bvp->mem_y.mem_uz.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(resnorm), 1,
                                    mem_bvp->mem_y.mem_uz.size(1), &cb_emlrtBCI,
                                    &c_st);
    }
    mem_bvp->mem_y.mem_uz[iT + mem_bvp->mem_y.mem_uz.size(0) *
                                   (static_cast<int32_T>(resnorm) - 1)] =
        IC_opt[iT];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&c_st);
    }
  }
  //  m0(0) and n0(0) initialization
  emptyDimValue =
      static_cast<int32_T>(muDoubleScalarFloor(ctcr_construc->ind_origin));
  if (ctcr_construc->ind_origin != emptyDimValue) {
    emlrtIntegerCheckR2012b(ctcr_construc->ind_origin, &go_emlrtDCI, &c_st);
  }
  if ((static_cast<int32_T>(ctcr_construc->ind_origin) < 1) ||
      (static_cast<int32_T>(ctcr_construc->ind_origin) >
       mem_bvp->mem_y.mem_m0.size(1))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(ctcr_construc->ind_origin), 1,
        mem_bvp->mem_y.mem_m0.size(1), &x_emlrtBCI, &c_st);
  }
  nx = static_cast<int32_T>(ctcr_construc->ind_origin);
  if (ctcr_carac->nbT + 1.0 !=
      static_cast<int32_T>(muDoubleScalarFloor(ctcr_carac->nbT + 1.0))) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT + 1.0, &ko_emlrtDCI, &c_st);
  }
  if ((static_cast<int32_T>(ctcr_carac->nbT + 1.0) < 1) ||
      (static_cast<int32_T>(ctcr_carac->nbT + 1.0) > IC_opt.size(0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ctcr_carac->nbT + 1.0),
                                  1, IC_opt.size(0), &fb_emlrtBCI, &c_st);
  }
  mem_bvp->mem_y.mem_m0[3 * (nx - 1)] =
      IC_opt[static_cast<int32_T>(ctcr_carac->nbT + 1.0) - 1];
  if ((ctcr_carac->nbT + 1.0) + 1.0 != static_cast<int32_T>(muDoubleScalarFloor(
                                           (ctcr_carac->nbT + 1.0) + 1.0))) {
    emlrtIntegerCheckR2012b((ctcr_carac->nbT + 1.0) + 1.0, &ko_emlrtDCI, &c_st);
  }
  if ((static_cast<int32_T>((ctcr_carac->nbT + 1.0) + 1.0) < 1) ||
      (static_cast<int32_T>((ctcr_carac->nbT + 1.0) + 1.0) > IC_opt.size(0))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>((ctcr_carac->nbT + 1.0) + 1.0), 1, IC_opt.size(0),
        &fb_emlrtBCI, &c_st);
  }
  mem_bvp->mem_y.mem_m0[3 * (nx - 1) + 1] =
      IC_opt[static_cast<int32_T>((ctcr_carac->nbT + 1.0) + 1.0) - 1];
  if ((ctcr_carac->nbT + 1.0) + 2.0 != static_cast<int32_T>(muDoubleScalarFloor(
                                           (ctcr_carac->nbT + 1.0) + 2.0))) {
    emlrtIntegerCheckR2012b((ctcr_carac->nbT + 1.0) + 2.0, &ko_emlrtDCI, &c_st);
  }
  if ((static_cast<int32_T>((ctcr_carac->nbT + 1.0) + 2.0) < 1) ||
      (static_cast<int32_T>((ctcr_carac->nbT + 1.0) + 2.0) > IC_opt.size(0))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>((ctcr_carac->nbT + 1.0) + 2.0), 1, IC_opt.size(0),
        &fb_emlrtBCI, &c_st);
  }
  mem_bvp->mem_y.mem_m0[3 * (nx - 1) + 2] =
      IC_opt[static_cast<int32_T>((ctcr_carac->nbT + 1.0) + 2.0) - 1];
  if (ctcr_construc->ind_origin != emptyDimValue) {
    emlrtIntegerCheckR2012b(ctcr_construc->ind_origin, &ho_emlrtDCI, &c_st);
  }
  if ((static_cast<int32_T>(ctcr_construc->ind_origin) < 1) ||
      (static_cast<int32_T>(ctcr_construc->ind_origin) >
       mem_bvp->mem_y.mem_n0.size(1))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(ctcr_construc->ind_origin), 1,
        mem_bvp->mem_y.mem_n0.size(1), &y_emlrtBCI, &c_st);
  }
  if (ctcr_carac->nbT + 4.0 !=
      static_cast<int32_T>(muDoubleScalarFloor(ctcr_carac->nbT + 4.0))) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT + 4.0, &jo_emlrtDCI, &c_st);
  }
  if ((static_cast<int32_T>(ctcr_carac->nbT + 4.0) < 1) ||
      (static_cast<int32_T>(ctcr_carac->nbT + 4.0) > IC_opt.size(0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ctcr_carac->nbT + 4.0),
                                  1, IC_opt.size(0), &eb_emlrtBCI, &c_st);
  }
  mem_bvp->mem_y.mem_n0[3 * (nx - 1)] =
      IC_opt[static_cast<int32_T>(ctcr_carac->nbT + 4.0) - 1];
  if ((ctcr_carac->nbT + 4.0) + 1.0 != static_cast<int32_T>(muDoubleScalarFloor(
                                           (ctcr_carac->nbT + 4.0) + 1.0))) {
    emlrtIntegerCheckR2012b((ctcr_carac->nbT + 4.0) + 1.0, &jo_emlrtDCI, &c_st);
  }
  if ((static_cast<int32_T>((ctcr_carac->nbT + 4.0) + 1.0) < 1) ||
      (static_cast<int32_T>((ctcr_carac->nbT + 4.0) + 1.0) > IC_opt.size(0))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>((ctcr_carac->nbT + 4.0) + 1.0), 1, IC_opt.size(0),
        &eb_emlrtBCI, &c_st);
  }
  mem_bvp->mem_y.mem_n0[3 * (nx - 1) + 1] =
      IC_opt[static_cast<int32_T>((ctcr_carac->nbT + 4.0) + 1.0) - 1];
  if ((ctcr_carac->nbT + 4.0) + 2.0 != static_cast<int32_T>(muDoubleScalarFloor(
                                           (ctcr_carac->nbT + 4.0) + 2.0))) {
    emlrtIntegerCheckR2012b((ctcr_carac->nbT + 4.0) + 2.0, &jo_emlrtDCI, &c_st);
  }
  if ((static_cast<int32_T>((ctcr_carac->nbT + 4.0) + 2.0) < 1) ||
      (static_cast<int32_T>((ctcr_carac->nbT + 4.0) + 2.0) > IC_opt.size(0))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>((ctcr_carac->nbT + 4.0) + 2.0), 1, IC_opt.size(0),
        &eb_emlrtBCI, &c_st);
  }
  mem_bvp->mem_y.mem_n0[3 * (nx - 1) + 2] =
      IC_opt[static_cast<int32_T>((ctcr_carac->nbT + 4.0) + 2.0) - 1];
  //  IVP integration
  c_st.site = &bb_emlrtRSI;
  IVP_Int(c_st, ctcr_construc, ctcr_carac, mem_bvp, mem_deriv_propag_low);
  //  Computing manually the BVP optimization Jacobian
  c_st.site = &cb_emlrtRSI;
  BVP_Bu_Construc(c_st, mem_bvp, mem_deriv_propag_low, ctcr_construc,
                  ctcr_carac, ctcr_load, bvp_prop->Bu);
  //  Distal boundaries conditions comparaison expected / calculated from IC
  c_st.site = &db_emlrtRSI;
  BVP_Comp_BC(c_st, mem_bvp, bvp_prop, ctcr_carac, ctcr_construc, ctcr_load);
  //  Setting the output
  //  Setting the manually computed optimization jacobian
  //  ======================================= %
  //  ======== Results of the solver ======== %
  bvp_prop->nb_iter = output->iterations;
  //  Iterations number
  //  ==================
  //  ==== Case n°1 : Problem
  if (*exitflag <= -1.0) {
    simulation_param->bool_problem_opt = true;
    if (simulation_param->bool_disp_terminal) {
      b_st.site = &f_emlrtRSI;
      c_st.site = &jd_emlrtRSI;
      b_y = nullptr;
      m = emlrtCreateCharArray(2, &b_iv[0]);
      emlrtInitCharArrayR2013a(&c_st, 7, m, &u[0]);
      emlrtAssign(&b_y, m);
      c_y = nullptr;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&c_st, 27, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      d_st.site = &md_emlrtRSI;
      emlrt_marshallIn(d_st,
                       feval(d_st, b_y, emlrt_marshallOut(1.0), c_y, emlrtMCI),
                       "<output of feval>");
    }
    //  ==================
    //  ==== Case n°2 : BVP solved
  } else {
    simulation_param->bool_problem_opt = false;
    b_st.site = &g_emlrtRSI;
    BVP_Bu_Construc(b_st, mem_bvp, mem_deriv_propag_low, ctcr_construc,
                    ctcr_carac, ctcr_load, bvp_prop->Bu);
    //  Update the partial derivative duzi_dbcj since it depends on the optimal
    //  yu(0)
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
                                  static_cast<int32_T>(ctcr_carac->nbT),
                                  &r_emlrtRTEI, &st);
    for (iT = 0; iT < i; iT++) {
      real_T d;
      if ((static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) >
           bvp_prop->IC_opt.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U), 1,
            bvp_prop->IC_opt.size(0), &if_emlrtBCI, &st);
      }
      emptyDimValue = ctcr_construc->vect_res.size(1);
      nx = ctcr_construc->vect_ind_iT.size(0);
      if ((static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) > nx)) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U), 1, nx,
            &kf_emlrtBCI, &st);
      }
      resnorm = ctcr_construc->vect_ind_iT[iT];
      d = static_cast<int32_T>(muDoubleScalarFloor(resnorm));
      if (resnorm != d) {
        emlrtIntegerCheckR2012b(resnorm, &pq_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(resnorm) < 1) ||
          (static_cast<int32_T>(resnorm) > emptyDimValue)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(resnorm), 1,
                                      emptyDimValue, &jf_emlrtBCI, &st);
      }
      if ((static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) >
           mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U), 1,
            mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0), &lf_emlrtBCI,
            &st);
      }
      if ((static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) < 1) ||
          (static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) >
           mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U), 1,
            mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1), &mf_emlrtBCI,
            &st);
      }
      if (resnorm != d) {
        emlrtIntegerCheckR2012b(resnorm, &qq_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(resnorm) < 1) ||
          (static_cast<int32_T>(resnorm) >
           mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2))) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(resnorm), 1,
            mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(2), &nf_emlrtBCI,
            &st);
      }
      mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj
          [(iT + mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) * iT) +
           mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(0) *
               mem_deriv_propag_low->mem_duzi.mem_duzi_dbcj.size(1) *
               (static_cast<int32_T>(resnorm) - 1)] =
          -bvp_prop->IC_opt[iT] /
          ctcr_construc->vect_res[static_cast<int32_T>(resnorm) - 1];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
  }
  bvp_prop->clk_bvp.size[0] = 1;
  bvp_prop->clk_bvp.size[1] = 1;
  b_st.site = &h_emlrtRSI;
  r = &b_st;
  resnorm = coder::toc(r, expl_temp.tv_sec, expl_temp.tv_nsec);
  bvp_prop->clk_bvp.data[0] = resnorm;
  //  Computation time
  if (mem_bvp->mem_T.size(2) < 1) {
    i = 0;
  } else {
    if (mem_bvp->mem_T.size(2) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, mem_bvp->mem_T.size(2), &hf_emlrtBCI,
                                    &b_st);
    }
    i = mem_bvp->mem_T.size(2);
  }
  c_st.site = &i_emlrtRSI;
  nx = 3 * i;
  d_st.site = &ld_emlrtRSI;
  emptyDimValue = static_cast<int32_T>(static_cast<uint32_T>(nx) / 3U);
  if (emptyDimValue > nx) {
    emlrtErrorWithMessageIdR2018a(&d_st, &u_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  iT = 3;
  if (i > 3) {
    iT = i;
  }
  if (emptyDimValue > muIntScalarMax_sint32(nx, iT)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &t_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if (3 * emptyDimValue != nx) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &s_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  ctcr_shape.set_size(&yc_emlrtRTEI, &b_st, 3, emptyDimValue);
  for (i = 0; i < emptyDimValue; i++) {
    ctcr_shape[3 * i] = mem_bvp->mem_T[16 * i + 12];
    ctcr_shape[3 * i + 1] = mem_bvp->mem_T[16 * i + 13];
    ctcr_shape[3 * i + 2] = mem_bvp->mem_T[16 * i + 14];
  }
  //  Extraction of the robot 3D shape
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (CTCR_Shape.cpp)
