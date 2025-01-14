//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// duiinitxy_dtcj.cpp
//
// Code generation for function 'duiinitxy_dtcj'
//

// Include files
#include "duiinitxy_dtcj.h"
#include "CTCR_Deriv_Propag_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo v_emlrtRSI{
    31,               // lineNo
    "duiinitxy_dtcj", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/duiinitxy_dtcj.m" // pathName
};

static emlrtBCInfo emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    31,               // lineNo
    53,               // colNo
    "theta_c",        // aName
    "duiinitxy_dtcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/duiinitxy_dtcj.m", // pName
    0                          // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    27,            // lineNo
    47,            // colNo
    "vect_ind_iT", // aName
    "phi",         // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/phi.m", // pName
    0               // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,    // iFirst
    -1,    // iLast
    33,    // lineNo
    20,    // colNo
    "Rc",  // aName
    "phi", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/phi.m", // pName
    0               // checkKind
};

// Function Definitions
void duiinitxy_dtcj(const emlrtStack &sp, real_T is,
                    const coder::array<real_T, 2U> &Rc, real_T i, real_T j,
                    const coder::array<real_T, 2U> &theta_c,
                    const coder::array<real_T, 2U> &vect_ind_iT,
                    real_T ind_origin, real_T duiinitxydtcj[2])
{
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  //  ======================================================================= %
  //
  //  This function computes the partial derivative of u*i|x,y(s) w.r.t.
  //  the rotation of the tubes tc
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  is              : (int ∊ [1 , nbP])  Index of the current curvilinear
  //  abscissa Rc [m]          : (1 x nbT) [m]      Vector of the radii of
  //  curvature of the tubes (index i for tube i) i               : (int ∊ [1 ,
  //  nbT])  Index of the tube associated to the computed phi value j : (int ∊
  //  [1 , nbT])  Index of the tube associated to the translation used for the
  //  partial derivative theta_c         : (1 x nbT)          Vector of the
  //  tubes rotations in [rad] vect_ind_iT     : (int) (nbT x 3)    Matrix
  //  filled with the discrezisation index corresponding to the discontinuity
  //  points of the tubes ind_origin      : (int ∊ [1 , nbP])  Index
  //  corresponding to the base frame origin
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  duiinitxydtcj   : (2x1)              Value of the partial derivative
  //
  //  ======================================================================= %
  duiinitxydtcj[0] = 0.0;
  duiinitxydtcj[1] = 0.0;
  if (i == j) {
    real_T b_R_tmp[9];
    real_T a[3];
    real_T b_phi[3];
    real_T R_tmp;
    real_T R_tmp_tmp;
    real_T phi;
    if ((static_cast<int32_T>(i) < 1) ||
        (static_cast<int32_T>(i) > theta_c.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i), 1, theta_c.size(1),
                                    &emlrtBCI, (emlrtConstCTX)&sp);
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
    st.site = &v_emlrtRSI;
    //  =======================================================================
    //  %
    //
    //  This function computes the phi function as described by equation (27e)
    //
    //  ====================
    //  ====== INPUTS ======
    //
    //  is            : (int ∊ [1 , nbP])  Index of the current curvilinear
    //  abscissa Rc            : (1 x nbT) [m]      Vector of the radii of
    //  curvature of the tubes (index i for tube i) i             : (int ∊ [1 ,
    //  nbT])  Index of the tube vect_ind_iT   : (int) (nbT x 3)    Matrix
    //  filled with the discrezisation index corresponding to the discontinuity
    //  points of the tubes ind_origin    : (int ∊ [1 , nbP])  Index
    //  corresponding to the base frame origin
    //
    //  ====================
    //  ===== OUTPUTS ======
    //
    //  phi           : (float) Value of the phi function
    //
    //  =======================================================================
    //  %
    if ((static_cast<int32_T>(i) < 1) ||
        (static_cast<int32_T>(i) > vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i), 1,
                                    vect_ind_iT.size(0), &b_emlrtBCI, &st);
    }
    phi = 0.0;
    if ((muDoubleScalarMax(
             ind_origin,
             vect_ind_iT[(static_cast<int32_T>(i) + vect_ind_iT.size(0)) -
                         1]) <= is) &&
        (is <= vect_ind_iT[(static_cast<int32_T>(i) + vect_ind_iT.size(0) * 2) -
                           1])) {
      if ((static_cast<int32_T>(i) < 1) ||
          (static_cast<int32_T>(i) > Rc.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i), 1, Rc.size(1),
                                      &c_emlrtBCI, &st);
      }
      phi = 1.0 / Rc[static_cast<int32_T>(i) - 1];
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
    b_phi[0] = phi;
    b_phi[1] = 0.0;
    b_phi[2] = 0.0;
    for (int32_T b_i{0}; b_i < 3; b_i++) {
      int8_T i1;
      int8_T i2;
      R_tmp_tmp = 0.0;
      i1 = iv[b_i];
      i2 = iv[b_i + 3];
      for (int32_T i3{0}; i3 < 3; i3++) {
        R_tmp_tmp += ((static_cast<real_T>(i1) * b_R_tmp[3 * i3] +
                       static_cast<real_T>(i2) * b_R_tmp[3 * i3 + 1]) +
                      0.0 * b_R_tmp[3 * i3 + 2]) *
                     b_phi[i3];
      }
      a[b_i] = R_tmp_tmp;
    }
    duiinitxydtcj[0] = a[0];
    duiinitxydtcj[1] = a[1];
  }
}

// End of code generation (duiinitxy_dtcj.cpp)
