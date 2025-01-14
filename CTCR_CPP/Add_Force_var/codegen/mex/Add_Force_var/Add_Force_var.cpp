//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Add_Force_var.cpp
//
// Code generation for function 'Add_Force_var'
//

// Include files
#include "Add_Force_var.h"
#include "Add_Force_var_data.h"
#include "CTCRConstruc.h"
#include "CTCRLoad.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    39,              // lineNo
    "Add_Force_var", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    39,     // lineNo
    "find", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    144,        // lineNo
    "eml_find", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    402,                  // lineNo
    "find_first_indices", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    382,                  // lineNo
    "find_first_indices", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    20,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" // pathName
};

static emlrtECInfo emlrtECI{
    -1,              // nDims
    39,              // lineNo
    9,               // colNo
    "Add_Force_var", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m" // pName
};

static emlrtBCInfo emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    45,              // lineNo
    100,             // colNo
    "delta_f0",      // aName
    "Add_Force_var", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    47,                              // lineNo
    94,                              // colNo
    "ctcr_construc_new.vect_f_dist", // aName
    "Add_Force_var",                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    48,              // lineNo
    74,              // colNo
    "delta_f0",      // aName
    "Add_Force_var", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,                              // iFirst
    -1,                              // iLast
    47,                              // lineNo
    45,                              // colNo
    "ctcr_construc_new.vect_f_dist", // aName
    "Add_Force_var",                 // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtRTEInfo emlrtRTEI{
    81,         // lineNo
    1,          // colNo
    "eml_find", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo b_emlrtRTEI{
    392,                  // lineNo
    1,                    // colNo
    "find_first_indices", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtBCInfo e_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    38,                     // lineNo
    48,                     // colNo
    "ctcr_construc.vect_z", // aName
    "Add_Force_var",        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    38,              // lineNo
    60,              // colNo
    "prc_s0",        // aName
    "Add_Force_var", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    39,              // lineNo
    17,              // colNo
    "mem_is0",       // aName
    "Add_Force_var", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    40,                     // lineNo
    48,                     // colNo
    "ctcr_construc.vect_z", // aName
    "Add_Force_var",        // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    40,              // lineNo
    56,              // colNo
    "mem_is0",       // aName
    "Add_Force_var", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    40,              // lineNo
    16,              // colNo
    "mem_s0",        // aName
    "Add_Force_var", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtBCInfo k_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    44,              // lineNo
    20,              // colNo
    "mem_is0",       // aName
    "Add_Force_var", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtBCInfo l_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    47,              // lineNo
    102,             // colNo
    "mem_is0",       // aName
    "Add_Force_var", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtBCInfo m_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    48,                           // lineNo
    111,                          // colNo
    "ctcr_construc_new.vect_res", // aName
    "Add_Force_var",              // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtBCInfo n_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    48,              // lineNo
    119,             // colNo
    "mem_is0",       // aName
    "Add_Force_var", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtBCInfo o_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    47,              // lineNo
    53,              // colNo
    "mem_is0",       // aName
    "Add_Force_var", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtBCInfo p_emlrtBCI{
    1,                     // iFirst
    1,                     // iLast
    45,                    // lineNo
    82,                    // colNo
    "ctcr_load_new.f_tip", // aName
    "Add_Force_var",       // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m", // pName
    0                         // checkKind
};

static emlrtRTEInfo d_emlrtRTEI{
    31,              // lineNo
    5,               // colNo
    "Add_Force_var", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m" // pName
};

static emlrtRTEInfo e_emlrtRTEI{
    32,              // lineNo
    5,               // colNo
    "Add_Force_var", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m" // pName
};

static emlrtRTEInfo f_emlrtRTEI{
    39,              // lineNo
    32,              // colNo
    "Add_Force_var", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/Add_Force_var.m" // pName
};

// Function Definitions
void Add_Force_var(const emlrtStack *sp, const coder::array<real_T, 1U> &prc_s0,
                   const coder::array<real_T, 2U> &delta_f0,
                   const CTCRConstruc *ctcr_construc, const CTCRLoad *ctcr_load,
                   CTCRConstruc *ctcr_construc_new, CTCRLoad *ctcr_load_new,
                   coder::array<real_T, 1U> &mem_is0)
{
  coder::array<real_T, 1U> mem_s0;
  coder::array<boolean_T, 1U> x;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T i;
  int32_T idx;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  ======================================================================= %
  //
  //  This function computes the index of the loaded points and modified the
  //  robot features ctcr_construc to includes the force variations
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  prc_s0                : (_ x 1)   Vector with the curvilinear abscissa of
  //  the loaded points in pourcent of the CTCR length delta_f0              :
  //  (_ x 3)   Matrix with the force variaitons vectors (row i for force i)
  //  ctcr_construc         : (class)   Robot features related to the model
  //  settings ctcr_load             : (class)   Robot loads
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  ctcr_construc_new     : (class)   Robot features related to the model
  //  settings after including the force variations ctcr_load_new         :
  //  (class)   Robot loads after including the force variations mem_is0 : (_ x
  //  1)   Vector of the index of the loaded points
  //
  //  ======================================================================= %
  //  ======== Preparing ======== %
  *ctcr_construc_new = *ctcr_construc;
  *ctcr_load_new = *ctcr_load;
  mem_is0.set_size(&d_emlrtRTEI, sp, prc_s0.size(0));
  idx = prc_s0.size(0);
  mem_s0.set_size(&e_emlrtRTEI, sp, prc_s0.size(0));
  for (i = 0; i < idx; i++) {
    mem_is0[i] = 0.0;
    mem_s0[i] = 0.0;
  }
  //  For each vector force, find the corresponding discretization point
  i = prc_s0.size(0);
  for (int32_T i_f{0}; i_f < i; i_f++) {
    real_T mem_des_s0;
    int32_T ii;
    int32_T ii_data;
    int32_T k;
    uint32_T tmp_data;
    boolean_T exitg1;
    //  ========= Points d'application ========= %
    if (ctcr_construc->vect_z.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(ctcr_construc->vect_z.size(1), 1,
                                    ctcr_construc->vect_z.size(1), &e_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (i_f + 1 > prc_s0.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i_f + 1, 1, prc_s0.size(0), &f_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    mem_des_s0 = ctcr_construc->vect_z[ctcr_construc->vect_z.size(1) - 1] *
                 prc_s0[i_f] / 100.0;
    st.site = &emlrtRSI;
    x.set_size(&f_emlrtRTEI, &st, ctcr_construc->vect_z.size(1));
    idx = ctcr_construc->vect_z.size(1);
    for (ii = 0; ii < idx; ii++) {
      x[ii] = (ctcr_construc->vect_z[ii] >= mem_des_s0);
    }
    b_st.site = &b_emlrtRSI;
    k = (x.size(0) >= 1);
    if (k > x.size(0)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    c_st.site = &c_emlrtRSI;
    idx = 0;
    d_st.site = &e_emlrtRSI;
    if (x.size(0) > 2147483646) {
      e_st.site = &f_emlrtRSI;
      coder::check_forloop_overflow_error(e_st);
    }
    ii = 0;
    exitg1 = false;
    while ((!exitg1) && (ii <= x.size(0) - 1)) {
      if (x[ii]) {
        idx = 1;
        ii_data = ii + 1;
        exitg1 = true;
      } else {
        ii++;
      }
    }
    if (idx > k) {
      emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (k == 1) {
      if (idx == 0) {
        k = 0;
      }
    } else {
      d_st.site = &d_emlrtRSI;
      coder::internal::indexShapeCheck();
      k = (idx >= 1);
    }
    for (ii = 0; ii < k; ii++) {
      tmp_data = static_cast<uint32_T>(ii_data);
    }
    if (k != 1) {
      emlrtSubAssignSizeCheck1dR2017a(1, 0, &emlrtECI, (emlrtConstCTX)sp);
    }
    if (i_f + 1 > mem_is0.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i_f + 1, 1, mem_is0.size(0), &g_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    mem_is0[i_f] = tmp_data;
    if (i_f + 1 > mem_is0.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i_f + 1, 1, mem_is0.size(0), &i_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    mem_des_s0 = mem_is0[i_f];
    if ((static_cast<int32_T>(mem_des_s0) < 1) ||
        (static_cast<int32_T>(mem_des_s0) > ctcr_construc->vect_z.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(mem_des_s0), 1,
                                    ctcr_construc->vect_z.size(1), &h_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (i_f + 1 > mem_s0.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i_f + 1, 1, mem_s0.size(0), &j_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    mem_s0[i_f] = ctcr_construc->vect_z[static_cast<int32_T>(mem_des_s0) - 1];
    //  ========= Add vectors forces in ctcr_construc ========= %
    if (i_f + 1 > mem_is0.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i_f + 1, 1, mem_is0.size(0), &k_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (mem_des_s0 == ctcr_construc->nbP) {
      if (i_f + 1 > delta_f0.size(0)) {
        emlrtDynamicBoundsCheckR2012b(i_f + 1, 1, delta_f0.size(0), &emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      emlrtDynamicBoundsCheckR2012b(2, 1, 1, &p_emlrtBCI, (emlrtConstCTX)sp);
    } else {
      real_T b_ctcr_construc_new;
      real_T ctcr_construc_new_idx_2;
      if (i_f + 1 > mem_is0.size(0)) {
        emlrtDynamicBoundsCheckR2012b(i_f + 1, 1, mem_is0.size(0), &l_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(mem_des_s0) < 1) ||
          (static_cast<int32_T>(mem_des_s0) >
           ctcr_construc_new->vect_f_dist.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(mem_des_s0), 1,
                                      ctcr_construc_new->vect_f_dist.size(1),
                                      &b_emlrtBCI, (emlrtConstCTX)sp);
      }
      if (i_f + 1 > delta_f0.size(0)) {
        emlrtDynamicBoundsCheckR2012b(i_f + 1, 1, delta_f0.size(0), &c_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (i_f + 1 > mem_is0.size(0)) {
        emlrtDynamicBoundsCheckR2012b(i_f + 1, 1, mem_is0.size(0), &n_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(mem_des_s0) < 1) ||
          (static_cast<int32_T>(mem_des_s0) >
           ctcr_construc_new->vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(mem_des_s0), 1,
                                      ctcr_construc_new->vect_res.size(1),
                                      &m_emlrtBCI, (emlrtConstCTX)sp);
      }
      b_ctcr_construc_new =
          ctcr_construc_new->vect_res[static_cast<int32_T>(mem_des_s0) - 1];
      if (i_f + 1 > mem_is0.size(0)) {
        emlrtDynamicBoundsCheckR2012b(i_f + 1, 1, mem_is0.size(0), &o_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((static_cast<int32_T>(mem_des_s0) < 1) ||
          (static_cast<int32_T>(mem_des_s0) >
           ctcr_construc_new->vect_f_dist.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(mem_des_s0), 1,
                                      ctcr_construc_new->vect_f_dist.size(1),
                                      &d_emlrtBCI, (emlrtConstCTX)sp);
      }
      idx = static_cast<int32_T>(mem_is0[i_f]) - 1;
      mem_des_s0 = ctcr_construc_new->vect_f_dist[3 * idx + 1] +
                   delta_f0[i_f + delta_f0.size(0)] / b_ctcr_construc_new;
      ctcr_construc_new_idx_2 =
          ctcr_construc_new->vect_f_dist[3 * idx + 2] +
          delta_f0[i_f + delta_f0.size(0) * 2] / b_ctcr_construc_new;
      ctcr_construc_new->vect_f_dist[3 * idx] =
          ctcr_construc_new->vect_f_dist[3 * idx] +
          delta_f0[i_f] / b_ctcr_construc_new;
      ctcr_construc_new->vect_f_dist[3 * idx + 1] = mem_des_s0;
      ctcr_construc_new->vect_f_dist[3 * idx + 2] = ctcr_construc_new_idx_2;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (Add_Force_var.cpp)
