//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// duiinitxy_dbcj.cpp
//
// Code generation for function 'duiinitxy_dbcj'
//

// Include files
#include "duiinitxy_dbcj.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo w_emlrtRSI{
    33,               // lineNo
    "duiinitxy_dbcj", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/duiinitxy_dbcj.m" // pathName
};

static emlrtBCInfo d_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    33,               // lineNo
    40,               // colNo
    "theta_c",        // aName
    "duiinitxy_dbcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/duiinitxy_dbcj.m", // pName
    0                          // checkKind
};

static emlrtBCInfo e_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    29,            // lineNo
    50,            // colNo
    "vect_ind_iT", // aName
    "dphi_dbcj",   // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dphi_dbcj.m", // pName
    0                     // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    30,            // lineNo
    35,            // colNo
    "vect_ind_iT", // aName
    "dphi_dbcj",   // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dphi_dbcj.m", // pName
    0                     // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    35,          // lineNo
    30,          // colNo
    "Rc",        // aName
    "dphi_dbcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dphi_dbcj.m", // pName
    0                     // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    35,          // lineNo
    42,          // colNo
    "vect_res",  // aName
    "dphi_dbcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dphi_dbcj.m", // pName
    0                     // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    39,          // lineNo
    29,          // colNo
    "Rc",        // aName
    "dphi_dbcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dphi_dbcj.m", // pName
    0                     // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    39,          // lineNo
    41,          // colNo
    "vect_res",  // aName
    "dphi_dbcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dphi_dbcj.m", // pName
    0                     // checkKind
};

// Function Definitions
void duiinitxy_dbcj(const emlrtStack &sp, real_T is,
                    const coder::array<real_T, 2U> &vect_res,
                    const coder::array<real_T, 2U> &Rc, real_T i, real_T j,
                    const coder::array<real_T, 2U> &theta_c,
                    const coder::array<real_T, 2U> &vect_ind_iT,
                    real_T ind_origin, real_T nbT, real_T duiinitxydbcj[2])
{
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  //  ======================================================================= %
  //
  //  This function computes the partial derivative of u*i|x,y(s) w.r.t.
  //  the translation of the tubes bc
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  is              : (int ∊ [1 , nbP])  Index of the current curvilinear
  //  abscissa vect_res        : (1 x nbP_1)        Vector of the distances
  //  between one point and the next one Rc              : (1 x nbT) [m] Vector
  //  of the radii of curvature of the tubes (index i for tube i) i : (int ∊ [1
  //  , nbT])  Index of the tube associated to the computed phi value j : (int ∊
  //  [1 , nbT])  Index of the tube associated to the translation used for the
  //  partial derivative theta_c         : (1 x nbT)          Vector of the
  //  tubes rotations in [rad] vect_ind_iT     : (int) (nbT x 3)    Matrix
  //  filled with the discrezisation index corresponding to the discontinuity
  //  points of the tubes ind_origin      : (int ∊ [1 , nbP])  Index
  //  corresponding to the base frame origin nbT             : (int > 0) Number
  //  of tubes of the CTCR (nbT in the paper)
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  duiinitxydbcj   : (2x1)              Value of the partial derivative
  //
  //  ======================================================================= %
  duiinitxydbcj[0] = 0.0;
  duiinitxydbcj[1] = 0.0;
  if (i == j) {
    real_T b_R_tmp[9];
    real_T c_R_tmp[3];
    real_T R_tmp;
    real_T R_tmp_tmp;
    real_T dphidbcj;
    boolean_T b;
    boolean_T guard1;
    if ((static_cast<int32_T>(i) < 1) ||
        (static_cast<int32_T>(i) > theta_c.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i), 1, theta_c.size(1),
                                    &d_emlrtBCI, (emlrtConstCTX)&sp);
    }
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
    R_tmp_tmp = theta_c[static_cast<int32_T>(i) - 1];
    R_tmp = muDoubleScalarSin(R_tmp_tmp);
    R_tmp_tmp = muDoubleScalarCos(R_tmp_tmp);
    st.site = &w_emlrtRSI;
    //  =======================================================================
    //  %
    //
    //  This function computes the partial derivative of phi(s) w.r.t.
    //  the translation of the tubes bc
    //
    //  ====================
    //  ====== INPUTS ======
    //
    //  is            : (int ∊ [1 , nbP])  Index of the current curvilinear
    //  abscissa vect_res      : (1 x nbP)          Vector of the distances
    //  between one point and the next one Rc            : (1 x nbT) [m] Vector
    //  of the radii of curvature of the tubes (index i for tube i) i : (int ∊
    //  [1 , nbT])  Index of the tube associated to the computed phi value j :
    //  (int ∊ [1 , nbT])  Index of the tube associated to the translation used
    //  for the partial derivative vect_ind_iT   : (int) (nbT x 3)    Matrix
    //  filled with the discrezisation index corresponding to the discontinuity
    //  points of the tubes ind_origin    : (int ∊ [1 , nbP])  Index
    //  corresponding to the base frame origin nbT           : (int > 0) Number
    //  of tubes of the CTCR (nbT in the paper)
    //
    //  ====================
    //  ===== OUTPUTS ======
    //
    //  dphidbcj      : (float)            Value of the partial derivative
    //
    //  =======================================================================
    //  %
    b = ((static_cast<int32_T>(i) < 1) ||
         (static_cast<int32_T>(i) > vect_ind_iT.size(0)));
    if (b) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i), 1,
                                    vect_ind_iT.size(0), &e_emlrtBCI, &st);
    }
    if ((static_cast<int32_T>(i) < 1) ||
        (static_cast<int32_T>(i) > vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i), 1,
                                    vect_ind_iT.size(0), &f_emlrtBCI, &st);
    }
    dphidbcj = 0.0;
    guard1 = false;
    if (i == j) {
      real_T d;
      d = vect_ind_iT[(static_cast<int32_T>(i) + vect_ind_iT.size(0)) - 1];
      if ((is == muDoubleScalarMax(ind_origin, d)) && (d >= ind_origin)) {
        if ((static_cast<int32_T>(i) < 1) ||
            (static_cast<int32_T>(i) > Rc.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i), 1, Rc.size(1),
                                        &g_emlrtBCI, &st);
        }
        if ((static_cast<int32_T>(is) < 1) ||
            (static_cast<int32_T>(is) > vect_res.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                        vect_res.size(1), &h_emlrtBCI, &st);
        }
        dphidbcj = -1.0 / (Rc[static_cast<int32_T>(i) - 1] *
                           vect_res[static_cast<int32_T>(is) - 1]);
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1 &&
        ((i == j) && (!(i == nbT)) &&
         (is ==
          vect_ind_iT[(static_cast<int32_T>(i) + vect_ind_iT.size(0) * 2) -
                      1]))) {
      if ((static_cast<int32_T>(i) < 1) ||
          (static_cast<int32_T>(i) > Rc.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i), 1, Rc.size(1),
                                      &i_emlrtBCI, &st);
      }
      if ((static_cast<int32_T>(is) < 1) ||
          (static_cast<int32_T>(is) > vect_res.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                      vect_res.size(1), &j_emlrtBCI, &st);
      }
      dphidbcj = 1.0 / (Rc[static_cast<int32_T>(i) - 1] *
                        vect_res[static_cast<int32_T>(is) - 1]);
    }
    b_R_tmp[0] = R_tmp_tmp;
    b_R_tmp[3] = -R_tmp;
    b_R_tmp[6] = 0.0;
    b_R_tmp[1] = R_tmp;
    b_R_tmp[4] = R_tmp_tmp;
    b_R_tmp[7] = 0.0;
    b_R_tmp[2] = 0.0;
    b_R_tmp[5] = 0.0;
    b_R_tmp[8] = 1.0;
    for (int32_T b_i{0}; b_i < 3; b_i++) {
      c_R_tmp[b_i] = b_R_tmp[b_i] * dphidbcj + b_R_tmp[b_i + 3] * 0.0;
    }
    duiinitxydbcj[0] = c_R_tmp[0];
    duiinitxydbcj[1] = c_R_tmp[1];
  }
}

// End of code generation (duiinitxy_dbcj.cpp)
