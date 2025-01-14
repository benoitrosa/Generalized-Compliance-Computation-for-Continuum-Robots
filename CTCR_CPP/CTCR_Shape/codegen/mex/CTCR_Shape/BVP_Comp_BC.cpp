//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// BVP_Comp_BC.cpp
//
// Code generation for function 'BVP_Comp_BC'
//

// Include files
#include "BVP_Comp_BC.h"
#include "BVPProp.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCRLoad.h"
#include "CTCR_Shape_data.h"
#include "MemBVP.h"
#include "MemY.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRTEInfo bb_emlrtRTEI{
    38,            // lineNo
    14,            // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m" // pName
};

static emlrtDCInfo sq_emlrtDCI{
    43,            // lineNo
    54,            // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    1                       // checkKind
};

static emlrtBCInfo lt_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    43,                     // lineNo
    54,                     // colNo
    "mem_bvp.mem_y.mem_m0", // aName
    "BVP_Comp_BC",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtDCInfo tq_emlrtDCI{
    43,            // lineNo
    99,            // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    1                       // checkKind
};

static emlrtBCInfo mt_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    43,                     // lineNo
    99,                     // colNo
    "mem_bvp.mem_y.mem_n0", // aName
    "BVP_Comp_BC",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtDCInfo uq_emlrtDCI{
    51,            // lineNo
    35,            // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    1                       // checkKind
};

static emlrtBCInfo nt_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    51,              // lineNo
    35,              // colNo
    "mem_bvp.mem_T", // aName
    "BVP_Comp_BC",   // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtDCInfo vq_emlrtDCI{
    54,            // lineNo
    39,            // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    1                       // checkKind
};

static emlrtBCInfo ot_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    54,              // lineNo
    39,              // colNo
    "mem_bvp.mem_T", // aName
    "BVP_Comp_BC",   // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtECInfo x_emlrtECI{
    1,             // nDims
    69,            // lineNo
    27,            // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m" // pName
};

static emlrtDCInfo wq_emlrtDCI{
    37,            // lineNo
    5,             // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    1                       // checkKind
};

static emlrtDCInfo xq_emlrtDCI{
    37,            // lineNo
    5,             // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    4                       // checkKind
};

static emlrtBCInfo pt_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    43,            // lineNo
    66,            // colNo
    "vect_ind_iT", // aName
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtDCInfo yq_emlrtDCI{
    43,            // lineNo
    66,            // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    1                       // checkKind
};

static emlrtBCInfo qt_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    39,                     // lineNo
    51,                     // colNo
    "mem_bvp.mem_y.mem_uz", // aName
    "BVP_Comp_BC",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtBCInfo rt_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    39,                     // lineNo
    54,                     // colNo
    "mem_bvp.mem_y.mem_uz", // aName
    "BVP_Comp_BC",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtDCInfo ar_emlrtDCI{
    39,            // lineNo
    54,            // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    1                       // checkKind
};

static emlrtBCInfo st_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    39,            // lineNo
    66,            // colNo
    "vect_ind_iT", // aName
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtBCInfo tt_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    39,             // lineNo
    22,             // colNo
    "vect_uzi_tip", // aName
    "BVP_Comp_BC",  // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtBCInfo ut_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    43,            // lineNo
    111,           // colNo
    "vect_ind_iT", // aName
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtDCInfo br_emlrtDCI{
    43,            // lineNo
    111,           // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    1                       // checkKind
};

static emlrtBCInfo vt_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    51,            // lineNo
    47,            // colNo
    "vect_ind_iT", // aName
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtDCInfo cr_emlrtDCI{
    51,            // lineNo
    47,            // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    1                       // checkKind
};

static emlrtBCInfo wt_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    54,                    // lineNo
    84,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "BVP_Comp_BC",         // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtDCInfo dr_emlrtDCI{
    54,            // lineNo
    84,            // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    1                       // checkKind
};

static emlrtBCInfo xt_emlrtBCI{
    -1,                    // iFirst
    -1,                    // iLast
    54,                    // lineNo
    88,                    // colNo
    "mem_bvp.mem_y.mem_t", // aName
    "BVP_Comp_BC",         // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtDCInfo er_emlrtDCI{
    54,            // lineNo
    88,            // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    1                       // checkKind
};

static emlrtBCInfo yt_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    54,            // lineNo
    100,           // colNo
    "vect_ind_iT", // aName
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtDCInfo fr_emlrtDCI{
    63,            // lineNo
    5,             // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    1                       // checkKind
};

static emlrtBCInfo au_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    65,                // lineNo
    46,                // colNo
    "ctcr_construc.K", // aName
    "BVP_Comp_BC",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtBCInfo bu_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    65,            // lineNo
    15,            // colNo
    "expect_CL",   // aName
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtBCInfo cu_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    64,            // lineNo
    5,             // colNo
    "expect_CL",   // aName
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m", // pName
    0                       // checkKind
};

static emlrtRTEInfo yd_emlrtRTEI{
    37,            // lineNo
    5,             // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m" // pName
};

static emlrtRTEInfo ae_emlrtRTEI{
    43,            // lineNo
    5,             // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m" // pName
};

static emlrtRTEInfo be_emlrtRTEI{
    63,            // lineNo
    5,             // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m" // pName
};

static emlrtRTEInfo ce_emlrtRTEI{
    69,            // lineNo
    5,             // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m" // pName
};

static emlrtRTEInfo he_emlrtRTEI{
    69,            // lineNo
    27,            // colNo
    "BVP_Comp_BC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m" // pName
};

static emlrtRSInfo ud_emlrtRSI{
    69,            // lineNo
    "BVP_Comp_BC", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Comp_BC.m" // pathName
};

// Function Declarations
static void minus(const emlrtStack &sp, coder::array<real_T, 1U> &in1,
                  const coder::array<real_T, 1U> &in2);

// Function Definitions
static void minus(const emlrtStack &sp, coder::array<real_T, 1U> &in1,
                  const coder::array<real_T, 1U> &in2)
{
  coder::array<real_T, 1U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_in1.set_size(&he_emlrtRTEI, &sp, in1.size(0));
  stride_0_0 = (in2.size(0) != 1);
  loop_ub = in1.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = in1[i] - in2[i * stride_0_0];
  }
  in1.set_size(&he_emlrtRTEI, &sp, b_in1.size(0));
  loop_ub = b_in1.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void BVP_Comp_BC(const emlrtStack &sp, const MemBVP *mem_bvp, BVPProp *bvp_prop,
                 const CTCRCarac *ctcr_carac, const CTCRConstruc *ctcr_construc,
                 const CTCRLoad *ctcr_load)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  coder::array<real_T, 1U> comp_CL;
  coder::array<real_T, 1U> vect_uzi_tip;
  emlrtStack st;
  real_T R_tip[9];
  real_T a[9];
  real_T c_a[9];
  real_T f_Rtip[3];
  real_T tau_Rtip[3];
  real_T R_tmp;
  real_T b_a;
  real_T b_gamma;
  real_T d;
  real_T d1;
  int32_T i;
  int32_T loop_ub_tmp;
  boolean_T b;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  //  ======================================================================= %
  //
  //  This function is used to compute the boundary condition (= the residual b)
  //  Equation n°29
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  mem_bvp          : (class) Memory of the BVP variables
  //  bvp_prop         : (class) Results of the BVP resolution
  //  ctcr_carac       : (class) Robot features
  //  ctcr_construc    : (class) Robot features related to the model settings
  //  ctcr_load        : (class) Robot loads
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  bvp_prop         : (class) Results of the BVP resolution
  //
  //  ======================================================================= %
  //  ========================================================== %
  //  ================== Getting input values ================== %
  //  Concatenation of the uzi_end
  if (!(ctcr_carac->nbT >= 0.0)) {
    emlrtNonNegativeCheckR2012b(ctcr_carac->nbT, &xq_emlrtDCI,
                                (emlrtConstCTX)&sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(ctcr_carac->nbT));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &wq_emlrtDCI, (emlrtConstCTX)&sp);
  }
  vect_uzi_tip.set_size(&yd_emlrtRTEI, &sp,
                        static_cast<int32_T>(ctcr_carac->nbT));
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &wq_emlrtDCI, (emlrtConstCTX)&sp);
  }
  loop_ub_tmp = static_cast<int32_T>(ctcr_carac->nbT);
  for (int32_T iT{0}; iT < loop_ub_tmp; iT++) {
    vect_uzi_tip[iT] = 0.0;
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac->nbT, mxDOUBLE_CLASS,
                                static_cast<int32_T>(ctcr_carac->nbT),
                                &bb_emlrtRTEI, (emlrtConstCTX)&sp);
  for (int32_T iT{0}; iT < loop_ub_tmp; iT++) {
    if ((static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) >
         mem_bvp->mem_y.mem_uz.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U), 1,
          mem_bvp->mem_y.mem_uz.size(0), &qt_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) >
         ctcr_construc->vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U), 1,
          ctcr_construc->vect_ind_iT.size(0), &st_emlrtBCI, (emlrtConstCTX)&sp);
    }
    d = ctcr_construc->vect_ind_iT[iT + ctcr_construc->vect_ind_iT.size(0) * 2];
    if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
      emlrtIntegerCheckR2012b(d, &ar_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(d) < 1) ||
        (static_cast<int32_T>(d) > mem_bvp->mem_y.mem_uz.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                    mem_bvp->mem_y.mem_uz.size(1), &rt_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U) >
         vect_uzi_tip.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(iT) + 1U), 1,
          vect_uzi_tip.size(0), &tt_emlrtBCI, (emlrtConstCTX)&sp);
    }
    vect_uzi_tip[iT] =
        mem_bvp->mem_y.mem_uz[iT + mem_bvp->mem_y.mem_uz.size(0) *
                                       (static_cast<int32_T>(d) - 1)];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  //  Construction of the calculated distal BC
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &yq_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(ctcr_carac->nbT) < 1) ||
      (static_cast<int32_T>(ctcr_carac->nbT) >
       ctcr_construc->vect_ind_iT.size(0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ctcr_carac->nbT), 1,
                                  ctcr_construc->vect_ind_iT.size(0),
                                  &pt_emlrtBCI, (emlrtConstCTX)&sp);
  }
  d = ctcr_construc->vect_ind_iT[(static_cast<int32_T>(ctcr_carac->nbT) +
                                  ctcr_construc->vect_ind_iT.size(0) * 2) -
                                 1];
  if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
    emlrtIntegerCheckR2012b(d, &sq_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(d) < 1) ||
      (static_cast<int32_T>(d) > mem_bvp->mem_y.mem_m0.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                  mem_bvp->mem_y.mem_m0.size(1), &lt_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &br_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(ctcr_carac->nbT) < 1) ||
      (static_cast<int32_T>(ctcr_carac->nbT) >
       ctcr_construc->vect_ind_iT.size(0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ctcr_carac->nbT), 1,
                                  ctcr_construc->vect_ind_iT.size(0),
                                  &ut_emlrtBCI, (emlrtConstCTX)&sp);
  }
  d1 = ctcr_construc->vect_ind_iT[(static_cast<int32_T>(ctcr_carac->nbT) +
                                   ctcr_construc->vect_ind_iT.size(0) * 2) -
                                  1];
  if (d1 != static_cast<int32_T>(muDoubleScalarFloor(d1))) {
    emlrtIntegerCheckR2012b(d1, &tq_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(d1) < 1) ||
      (static_cast<int32_T>(d1) > mem_bvp->mem_y.mem_n0.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1,
                                  mem_bvp->mem_y.mem_n0.size(1), &mt_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  comp_CL.set_size(&ae_emlrtRTEI, &sp, vect_uzi_tip.size(0) + 6);
  loop_ub_tmp = vect_uzi_tip.size(0);
  for (int32_T iT{0}; iT < loop_ub_tmp; iT++) {
    comp_CL[iT] = vect_uzi_tip[iT];
  }
  comp_CL[vect_uzi_tip.size(0)] =
      mem_bvp->mem_y.mem_m0[3 * (static_cast<int32_T>(d) - 1)];
  comp_CL[vect_uzi_tip.size(0) + 3] =
      mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(d1) - 1)];
  comp_CL[vect_uzi_tip.size(0) + 1] =
      mem_bvp->mem_y.mem_m0[3 * (static_cast<int32_T>(d) - 1) + 1];
  comp_CL[vect_uzi_tip.size(0) + 4] =
      mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(d1) - 1) + 1];
  comp_CL[vect_uzi_tip.size(0) + 2] =
      mem_bvp->mem_y.mem_m0[3 * (static_cast<int32_T>(d) - 1) + 2];
  comp_CL[vect_uzi_tip.size(0) + 5] =
      mem_bvp->mem_y.mem_n0[3 * (static_cast<int32_T>(d1) - 1) + 2];
  //  ======== Construction of the expected boudary conditions ======== %
  //  Rotation from RB0 --> Rtip
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &cr_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(ctcr_carac->nbT) < 1) ||
      (static_cast<int32_T>(ctcr_carac->nbT) >
       ctcr_construc->vect_ind_iT.size(0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ctcr_carac->nbT), 1,
                                  ctcr_construc->vect_ind_iT.size(0),
                                  &vt_emlrtBCI, (emlrtConstCTX)&sp);
  }
  d = ctcr_construc->vect_ind_iT[(static_cast<int32_T>(ctcr_carac->nbT) +
                                  ctcr_construc->vect_ind_iT.size(0) * 2) -
                                 1];
  if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
    emlrtIntegerCheckR2012b(d, &uq_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(d) < 1) ||
      (static_cast<int32_T>(d) > mem_bvp->mem_T.size(2))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                  mem_bvp->mem_T.size(2), &nt_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  for (int32_T iT{0}; iT < 3; iT++) {
    R_tip[3 * iT] = mem_bvp->mem_T[4 * iT + 16 * (static_cast<int32_T>(d) - 1)];
    R_tip[3 * iT + 1] =
        mem_bvp->mem_T[(4 * iT + 16 * (static_cast<int32_T>(d) - 1)) + 1];
    R_tip[3 * iT + 2] =
        mem_bvp->mem_T[(4 * iT + 16 * (static_cast<int32_T>(d) - 1)) + 2];
  }
  //  Rotation from RB0 --> Rtip
  if (ctcr_carac->nbT != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT, &dr_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(ctcr_carac->nbT) < 1) ||
      (static_cast<int32_T>(ctcr_carac->nbT) > mem_bvp->mem_y.mem_t.size(0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ctcr_carac->nbT), 1,
                                  mem_bvp->mem_y.mem_t.size(0), &wt_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  b = ((static_cast<int32_T>(ctcr_carac->nbT) < 1) ||
       (static_cast<int32_T>(ctcr_carac->nbT) >
        ctcr_construc->vect_ind_iT.size(0)));
  if (b) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ctcr_carac->nbT), 1,
                                  ctcr_construc->vect_ind_iT.size(0),
                                  &yt_emlrtBCI, (emlrtConstCTX)&sp);
  }
  d = ctcr_construc->vect_ind_iT[(static_cast<int32_T>(ctcr_carac->nbT) +
                                  ctcr_construc->vect_ind_iT.size(0) * 2) -
                                 1];
  d1 = static_cast<int32_T>(muDoubleScalarFloor(d));
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &er_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(d) < 1) ||
      (static_cast<int32_T>(d) > mem_bvp->mem_y.mem_t.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                  mem_bvp->mem_y.mem_t.size(1), &xt_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  b_gamma = mem_bvp->mem_y.mem_t[(static_cast<int32_T>(ctcr_carac->nbT) +
                                  mem_bvp->mem_y.mem_t.size(0) *
                                      (static_cast<int32_T>(d) - 1)) -
                                 1];
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
  R_tmp = muDoubleScalarSin(b_gamma);
  b_gamma = muDoubleScalarCos(b_gamma);
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &vq_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(d) < 1) ||
      (static_cast<int32_T>(d) > mem_bvp->mem_T.size(2))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                  mem_bvp->mem_T.size(2), &ot_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  for (i = 0; i < 3; i++) {
    a[3 * i] = mem_bvp->mem_T[4 * i + 16 * (static_cast<int32_T>(d) - 1)];
    a[3 * i + 1] =
        mem_bvp->mem_T[(4 * i + 16 * (static_cast<int32_T>(d) - 1)) + 1];
    a[3 * i + 2] =
        mem_bvp->mem_T[(4 * i + 16 * (static_cast<int32_T>(d) - 1)) + 2];
  }
  //  Transforming R_tip expressed in RB0 to Rtip
  coder::internal::blas::mtimes(R_tip, ctcr_load->tau_tip, tau_Rtip);
  //  Transforming f_tip expressed in RB0 to Rtip
  coder::internal::blas::mtimes(R_tip, ctcr_load->f_tip, f_Rtip);
  //  Computing the expected distal value
  i = static_cast<int32_T>(muDoubleScalarFloor(ctcr_carac->nbT + 6.0));
  if (ctcr_carac->nbT + 6.0 != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT + 6.0, &fr_emlrtDCI,
                            (emlrtConstCTX)&sp);
  }
  loop_ub_tmp = static_cast<int32_T>(ctcr_carac->nbT + 6.0);
  vect_uzi_tip.set_size(&be_emlrtRTEI, &sp, loop_ub_tmp);
  if (ctcr_carac->nbT + 6.0 != i) {
    emlrtIntegerCheckR2012b(ctcr_carac->nbT + 6.0, &fr_emlrtDCI,
                            (emlrtConstCTX)&sp);
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    vect_uzi_tip[i] = 0.0;
  }
  if ((loop_ub_tmp - 5 < 1) ||
      (static_cast<int32_T>(ctcr_carac->nbT + 6.0) - 5 > loop_ub_tmp)) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(ctcr_carac->nbT + 6.0) - 5, 1,
        static_cast<int32_T>(ctcr_carac->nbT + 6.0), &cu_emlrtBCI,
        (emlrtConstCTX)&sp);
  }
  vect_uzi_tip[static_cast<int32_T>(ctcr_carac->nbT + 6.0) - 6] = tau_Rtip[0];
  if ((static_cast<int32_T>((static_cast<real_T>(loop_ub_tmp) - 5.0) + 1.0) <
       1) ||
      (static_cast<int32_T>(
           (static_cast<real_T>(static_cast<int32_T>(ctcr_carac->nbT + 6.0)) -
            5.0) +
           1.0) > loop_ub_tmp)) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(
            (static_cast<real_T>(static_cast<int32_T>(ctcr_carac->nbT + 6.0)) -
             5.0) +
            1.0),
        1, static_cast<int32_T>(ctcr_carac->nbT + 6.0), &cu_emlrtBCI,
        (emlrtConstCTX)&sp);
  }
  vect_uzi_tip[static_cast<int32_T>((static_cast<real_T>(static_cast<int32_T>(
                                         ctcr_carac->nbT + 6.0)) -
                                     5.0) +
                                    1.0) -
               1] = tau_Rtip[1];
  if ((static_cast<int32_T>(
           (static_cast<real_T>(static_cast<int32_T>(ctcr_carac->nbT + 6.0)) -
            5.0) +
           2.0) < 1) ||
      (static_cast<int32_T>(
           (static_cast<real_T>(static_cast<int32_T>(ctcr_carac->nbT + 6.0)) -
            5.0) +
           2.0) > loop_ub_tmp)) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(
            (static_cast<real_T>(static_cast<int32_T>(ctcr_carac->nbT + 6.0)) -
             5.0) +
            2.0),
        1, static_cast<int32_T>(ctcr_carac->nbT + 6.0), &cu_emlrtBCI,
        (emlrtConstCTX)&sp);
  }
  vect_uzi_tip[static_cast<int32_T>((static_cast<real_T>(static_cast<int32_T>(
                                         ctcr_carac->nbT + 6.0)) -
                                     5.0) +
                                    2.0) -
               1] = tau_Rtip[2];
  if ((static_cast<int32_T>(
           (static_cast<real_T>(static_cast<int32_T>(ctcr_carac->nbT + 6.0)) -
            5.0) +
           3.0) < 1) ||
      (static_cast<int32_T>(
           (static_cast<real_T>(static_cast<int32_T>(ctcr_carac->nbT + 6.0)) -
            5.0) +
           3.0) > loop_ub_tmp)) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(
            (static_cast<real_T>(static_cast<int32_T>(ctcr_carac->nbT + 6.0)) -
             5.0) +
            3.0),
        1, static_cast<int32_T>(ctcr_carac->nbT + 6.0), &cu_emlrtBCI,
        (emlrtConstCTX)&sp);
  }
  vect_uzi_tip[static_cast<int32_T>((static_cast<real_T>(static_cast<int32_T>(
                                         ctcr_carac->nbT + 6.0)) -
                                     5.0) +
                                    3.0) -
               1] = f_Rtip[0];
  if ((static_cast<int32_T>(
           (static_cast<real_T>(static_cast<int32_T>(ctcr_carac->nbT + 6.0)) -
            5.0) +
           4.0) < 1) ||
      (static_cast<int32_T>(
           (static_cast<real_T>(static_cast<int32_T>(ctcr_carac->nbT + 6.0)) -
            5.0) +
           4.0) > loop_ub_tmp)) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(
            (static_cast<real_T>(static_cast<int32_T>(ctcr_carac->nbT + 6.0)) -
             5.0) +
            4.0),
        1, static_cast<int32_T>(ctcr_carac->nbT + 6.0), &cu_emlrtBCI,
        (emlrtConstCTX)&sp);
  }
  vect_uzi_tip[static_cast<int32_T>((static_cast<real_T>(static_cast<int32_T>(
                                         ctcr_carac->nbT + 6.0)) -
                                     5.0) +
                                    4.0) -
               1] = f_Rtip[1];
  if (((static_cast<real_T>(static_cast<int32_T>(ctcr_carac->nbT + 6.0)) -
        5.0) +
           5.0 <
       1.0) ||
      (static_cast<int32_T>(
           (static_cast<real_T>(static_cast<int32_T>(ctcr_carac->nbT + 6.0)) -
            5.0) +
           5.0) > loop_ub_tmp)) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(
            (static_cast<real_T>(static_cast<int32_T>(ctcr_carac->nbT + 6.0)) -
             5.0) +
            5.0),
        1, static_cast<int32_T>(ctcr_carac->nbT + 6.0), &cu_emlrtBCI,
        (emlrtConstCTX)&sp);
  }
  vect_uzi_tip[static_cast<int32_T>((static_cast<real_T>(static_cast<int32_T>(
                                         ctcr_carac->nbT + 6.0)) -
                                     5.0) +
                                    5.0) -
               1] = f_Rtip[2];
  if ((static_cast<int32_T>(ctcr_carac->nbT) < 1) ||
      (static_cast<int32_T>(ctcr_carac->nbT) > ctcr_construc->K.size(2))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ctcr_carac->nbT), 1,
                                  ctcr_construc->K.size(2), &au_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  b_a = 1.0 /
        ctcr_construc->K[9 * (static_cast<int32_T>(ctcr_carac->nbT) - 1) + 8];
  R_tip[0] = b_gamma;
  R_tip[1] = -R_tmp;
  R_tip[2] = 0.0;
  R_tip[3] = R_tmp;
  R_tip[4] = b_gamma;
  R_tip[5] = 0.0;
  R_tip[6] = 0.0;
  R_tip[7] = 0.0;
  R_tip[8] = 1.0;
  for (i = 0; i < 3; i++) {
    d = R_tip[3 * i];
    d1 = R_tip[3 * i + 1];
    b_gamma = R_tip[3 * i + 2];
    for (int32_T iT{0}; iT < 3; iT++) {
      c_a[i + 3 * iT] = (a[iT] * d + a[iT + 3] * d1) + a[iT + 6] * b_gamma;
    }
  }
  b_gamma = 0.0;
  for (i = 0; i < 3; i++) {
    b_gamma += ((b_a * 0.0 * c_a[3 * i] + b_a * 0.0 * c_a[3 * i + 1]) +
                b_a * c_a[3 * i + 2]) *
               ctcr_load->tau_tip[i];
  }
  if ((vect_uzi_tip.size(0) - 6 < 1) ||
      (vect_uzi_tip.size(0) - 6 > vect_uzi_tip.size(0))) {
    emlrtDynamicBoundsCheckR2012b(vect_uzi_tip.size(0) - 6, 1,
                                  vect_uzi_tip.size(0), &bu_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  vect_uzi_tip[vect_uzi_tip.size(0) - 7] = b_gamma;
  //  ================ Boudary conditions comparaison ================= %
  if ((comp_CL.size(0) != vect_uzi_tip.size(0)) &&
      ((comp_CL.size(0) != 1) && (vect_uzi_tip.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(comp_CL.size(0), vect_uzi_tip.size(0),
                                &x_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (comp_CL.size(0) == vect_uzi_tip.size(0)) {
    loop_ub_tmp = comp_CL.size(0);
    for (i = 0; i < loop_ub_tmp; i++) {
      comp_CL[i] = comp_CL[i] - vect_uzi_tip[i];
    }
  } else {
    st.site = &ud_emlrtRSI;
    minus(st, comp_CL, vect_uzi_tip);
  }
  bvp_prop->vect_tol.set_size(&ce_emlrtRTEI, &sp, comp_CL.size(0), 1);
  loop_ub_tmp = comp_CL.size(0);
  for (i = 0; i < loop_ub_tmp; i++) {
    bvp_prop->vect_tol[i] = comp_CL[i];
  }
  if (comp_CL.size(0) == 0) {
    b_gamma = 0.0;
  } else {
    n_t = (ptrdiff_t)comp_CL.size(0);
    incx_t = (ptrdiff_t)1;
    b_gamma = dnrm2(&n_t, &bvp_prop->vect_tol[0], &incx_t);
  }
  bvp_prop->norm_tol.size[0] = 1;
  bvp_prop->norm_tol.size[1] = 1;
  bvp_prop->norm_tol.data[0] = b_gamma;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (BVP_Comp_BC.cpp)
