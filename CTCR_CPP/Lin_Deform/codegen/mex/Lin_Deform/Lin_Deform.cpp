//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Lin_Deform.cpp
//
// Code generation for function 'Lin_Deform'
//

// Include files
#include "Lin_Deform.h"
#include "CTCRConstruc.h"
#include "Lin_Deform_data.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    31,           // lineNo
    "Lin_Deform", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Lin_Deform.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    42,           // lineNo
    "Lin_Deform", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Lin_Deform.m" // pathName
};

static emlrtRTEInfo emlrtRTEI{
    35,           // lineNo
    18,           // colNo
    "Lin_Deform", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Lin_Deform.m" // pName
};

static emlrtBCInfo emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    36,           // lineNo
    51,           // colNo
    "mem_is0",    // aName
    "Lin_Deform", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Lin_Deform.m", // pName
    0                      // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    37,                     // lineNo
    66,                     // colNo
    "ctcr_shape_def_jacob", // aName
    "Lin_Deform",           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Lin_Deform.m", // pName
    0                      // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    38,             // lineNo
    66,             // colNo
    "mem_Cs0_init", // aName
    "Lin_Deform",   // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Lin_Deform.m", // pName
    0                      // checkKind
};

static emlrtDCInfo emlrtDCI{
    38,           // lineNo
    69,           // colNo
    "Lin_Deform", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Lin_Deform.m", // pName
    1                      // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    38,             // lineNo
    69,             // colNo
    "mem_Cs0_init", // aName
    "Lin_Deform",   // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Lin_Deform.m", // pName
    0                      // checkKind
};

static emlrtBCInfo e_emlrtBCI{
    -1,           // iFirst
    -1,           // iLast
    38,           // lineNo
    83,           // colNo
    "delta_f0",   // aName
    "Lin_Deform", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Lin_Deform.m", // pName
    0                      // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    37,           // lineNo
    36,           // colNo
    "Lin_Deform", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Lin_Deform.m", // pName
    1                      // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    37,                     // lineNo
    36,                     // colNo
    "ctcr_shape_def_jacob", // aName
    "Lin_Deform",           // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Lin_Deform.m", // pName
    0                      // checkKind
};

static emlrtRTEInfo c_emlrtRTEI{
    32,           // lineNo
    5,            // colNo
    "Lin_Deform", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Lin_Deform.m" // pName
};

// Function Definitions
void Lin_Deform(const emlrtStack *sp, const coder::array<real_T, 1U> &mem_is0,
                const coder::array<real_T, 2U> &delta_f0,
                const coder::array<real_T, 2U> &ctcr_shape_init,
                const CTCRConstruc *ctcr_construc_init,
                const coder::array<real_T, 4U> &mem_Cs0_init,
                coder::array<real_T, 2U> &ctcr_shape_def_jacob,
                real_T *time_comp_lin_deform)
{
  emlrtStack st;
  emlrtTimespec expl_temp;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  //  ======================================================================= %
  //
  //  This function computes the deformation of the CTCR, by linearization of
  //  the deformation, when a force variation is applied
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  mem_is0               : (int) (nbF x 1)       Vector with the index of the
  //  loaded points delta_f0              : (nbF x 3)             Matrix with
  //  the force variaitons vectors (row i for force i)
  //                        | with nbF : the number of forces applied on the
  //                        CTCR
  //  ctcr_shape_init       : (3 x nbP)             Initial CTCR shape before
  //  applying the force variation ctcr_construc_init    : (class) Robot
  //  features related to the model settings for the initial shape mem_Cs0_init
  //  : (3 x 3 x nbP x nbP)   The Generalized Compliance Matrix associated to
  //  the initial shape
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  ctcr_shape_def_jacob  : (3 x nbF)             Deformed CTCR shape, due to
  //  the force variations, computed using the Generalized Compliance Matrix
  //                        | with nbF : the number of forces applied on the
  //                        CTCR
  //  time_comp_lin_deform  : (float)               [s] Computation time to
  //  linearize the CTCR deformations
  //
  //  ======================================================================= %
  st.site = &emlrtRSI;
  expl_temp = coder::tic(st);
  ctcr_shape_def_jacob.set_size(&c_emlrtRTEI, sp, 3, ctcr_shape_init.size(1));
  loop_ub = 3 * ctcr_shape_init.size(1);
  for (i = 0; i < loop_ub; i++) {
    ctcr_shape_def_jacob[i] = ctcr_shape_init[i];
  }
  i = mem_is0.size(0);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    loop_ub = static_cast<int32_T>(ctcr_construc_init->nbP +
                                   (1.0 - ctcr_construc_init->ind_origin));
    emlrtForLoopVectorCheckR2021a(ctcr_construc_init->ind_origin, 1.0,
                                  ctcr_construc_init->nbP, mxDOUBLE_CLASS,
                                  loop_ub, &emlrtRTEI, (emlrtConstCTX)sp);
    for (int32_T is{0}; is < loop_ub; is++) {
      real_T b_ctcr_shape_def_jacob[3];
      real_T b_is;
      int32_T i1;
      b_is = ctcr_construc_init->ind_origin + static_cast<real_T>(is);
      if (b_i + 1 > mem_is0.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, mem_is0.size(0), &emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (b_i + 1 > delta_f0.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, delta_f0.size(0), &e_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(b_is) < 1) ||
          (static_cast<int32_T>(b_is) > mem_Cs0_init.size(2))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_is), 1,
                                      mem_Cs0_init.size(2), &c_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (mem_is0[b_i] !=
          static_cast<int32_T>(muDoubleScalarFloor(mem_is0[b_i]))) {
        emlrtIntegerCheckR2012b(mem_is0[b_i], &emlrtDCI, (emlrtConstCTX)sp);
      }
      i1 = static_cast<int32_T>(mem_is0[b_i]);
      if ((i1 < 1) || (i1 > mem_Cs0_init.size(3))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, mem_Cs0_init.size(3), &d_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(b_is) < 1) ||
          (static_cast<int32_T>(b_is) > ctcr_shape_def_jacob.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_is), 1,
                                      ctcr_shape_def_jacob.size(1), &b_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (b_is != static_cast<int32_T>(muDoubleScalarFloor(b_is))) {
        emlrtIntegerCheckR2012b(b_is, &b_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(b_is) < 1) ||
          (static_cast<int32_T>(b_is) > ctcr_shape_def_jacob.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_is), 1,
                                      ctcr_shape_def_jacob.size(1), &f_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      for (int32_T i2{0}; i2 < 3; i2++) {
        b_ctcr_shape_def_jacob[i2] =
            ctcr_shape_def_jacob[i2 + 3 * (static_cast<int32_T>(b_is) - 1)] +
            ((mem_Cs0_init[((i2 + 36 * (static_cast<int32_T>(b_is) - 1)) +
                            36 * mem_Cs0_init.size(2) * (i1 - 1)) +
                           18] *
                  delta_f0[b_i] +
              mem_Cs0_init[((i2 + 36 * (static_cast<int32_T>(b_is) - 1)) +
                            36 * mem_Cs0_init.size(2) * (i1 - 1)) +
                           24] *
                  delta_f0[b_i + delta_f0.size(0)]) +
             mem_Cs0_init[((i2 + 36 * (static_cast<int32_T>(b_is) - 1)) +
                           36 * mem_Cs0_init.size(2) * (i1 - 1)) +
                          30] *
                 delta_f0[b_i + delta_f0.size(0) * 2]);
      }
      ctcr_shape_def_jacob[3 * (static_cast<int32_T>(b_is) - 1)] =
          b_ctcr_shape_def_jacob[0];
      ctcr_shape_def_jacob[3 * (static_cast<int32_T>(b_is) - 1) + 1] =
          b_ctcr_shape_def_jacob[1];
      ctcr_shape_def_jacob[3 * (static_cast<int32_T>(b_is) - 1) + 2] =
          b_ctcr_shape_def_jacob[2];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  st.site = &b_emlrtRSI;
  *time_comp_lin_deform = coder::toc(st, expl_temp.tv_sec, expl_temp.tv_nsec);
}

// End of code generation (Lin_Deform.cpp)
