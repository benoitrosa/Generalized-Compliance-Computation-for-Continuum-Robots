//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dB0nbTRs_dtcj.cpp
//
// Code generation for function 'dB0nbTRs_dtcj'
//

// Include files
#include "dB0nbTRs_dtcj.h"
#include "CTCR_Deriv_Propag_data.h"
#include "MemY.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtBCInfo k_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    29,              // lineNo
    37,              // colNo
    "mem_dR0_dtcj",  // aName
    "dB0nbTRs_dtcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dtcj.m", // pName
    0                         // checkKind
};

static emlrtBCInfo l_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    29,              // lineNo
    39,              // colNo
    "mem_dR0_dtcj",  // aName
    "dB0nbTRs_dtcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dtcj.m", // pName
    0                         // checkKind
};

static emlrtBCInfo m_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    30,              // lineNo
    37,              // colNo
    "mem_T",         // aName
    "dB0nbTRs_dtcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dtcj.m", // pName
    0                         // checkKind
};

static emlrtBCInfo n_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    29,              // lineNo
    60,              // colNo
    "mem_y.mem_t",   // aName
    "dB0nbTRs_dtcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dtcj.m", // pName
    0                         // checkKind
};

static emlrtBCInfo o_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    29,              // lineNo
    64,              // colNo
    "mem_y.mem_t",   // aName
    "dB0nbTRs_dtcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dtcj.m", // pName
    0                         // checkKind
};

static emlrtDCInfo emlrtDCI{
    29,              // lineNo
    64,              // colNo
    "dB0nbTRs_dtcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dtcj.m", // pName
    1                         // checkKind
};

static emlrtBCInfo p_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    30,              // lineNo
    76,              // colNo
    "mem_y.mem_t",   // aName
    "dB0nbTRs_dtcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dtcj.m", // pName
    0                         // checkKind
};

static emlrtBCInfo q_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    30,              // lineNo
    94,              // colNo
    "mem_dti_dtcj",  // aName
    "dB0nbTRs_dtcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dtcj.m", // pName
    0                         // checkKind
};

static emlrtBCInfo r_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    30,              // lineNo
    98,              // colNo
    "mem_dti_dtcj",  // aName
    "dB0nbTRs_dtcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dtcj.m", // pName
    0                         // checkKind
};

static emlrtBCInfo s_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    30,              // lineNo
    100,             // colNo
    "mem_dti_dtcj",  // aName
    "dB0nbTRs_dtcj", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Maths_Fun"
    "ctions/dB0nbTRs_dtcj.m", // pName
    0                         // checkKind
};

// Function Definitions
void dB0nbTRs_dtcj(const emlrtStack &sp, real_T is, real_T j, real_T nbT,
                   const coder::array<real_T, 3U> &mem_T, const MemY &mem_y,
                   const coder::array<real_T, 4U> &mem_dR0_dtcj,
                   const coder::array<real_T, 3U> &mem_dti_dtcj,
                   real_T dB0nbTRsdtcj[9])
{
  static const int8_T b_iv[3]{0, 0, 1};
  real_T a[9];
  real_T e_R_tmp[9];
  real_T f_R_tmp[9];
  real_T R_tmp;
  real_T b_R_tmp;
  real_T b_b;
  real_T b_gamma;
  real_T c_R_tmp;
  real_T d_R_tmp;
  int32_T R_tmp_tmp;
  boolean_T b;
  //  ======================================================================= %
  //
  //  This function computes the partial derivative of rigid transformation
  //  matrix, from the base B0 to the current s, associated to the tube i=nbT
  //  w.r.t. the rotation of the tubes tc
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  is                : (int ∊ [1 , nbP])   Index of the current curvilinear
  //  abscissa j                 : (int ∊ [1 , nbT])   Index of the tube
  //  associated to the derivation w.r.t. tcj nbT               : (int > 0)
  //  Number of tubes of the CTCR mem_T             : (4 x 4 x nbP)       Matrix
  //  memory of the B0(0)Ts values mem_y             : (class) Matrix memory of
  //  the y(s) values mem_dR0_dtcj      : (3 x 3 x nbT x nbP) Matrix memory of
  //  the dR0(s)_dtcj partial derivatives mem_dti_dtcj      : (nbT x nbT x nbP)
  //  Matrix memory of the dti(s)_dtcj partial derivatives
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  dB0nbTRsdtcj      : (3x3)               Value of the partial derivative
  //
  //  ======================================================================= %
  b = ((static_cast<int32_T>(nbT) < 1) ||
       (static_cast<int32_T>(nbT) > mem_y.mem_t.size(0)));
  if (b) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
                                  mem_y.mem_t.size(0), &n_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if (is != static_cast<int32_T>(muDoubleScalarFloor(is))) {
    emlrtIntegerCheckR2012b(is, &emlrtDCI, (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(is) < 1) ||
      (static_cast<int32_T>(is) > mem_y.mem_t.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                  mem_y.mem_t.size(1), &o_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  b_gamma = mem_y.mem_t[(static_cast<int32_T>(nbT) +
                         mem_y.mem_t.size(0) * (static_cast<int32_T>(is) - 1)) -
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
  b_R_tmp = muDoubleScalarCos(b_gamma);
  if ((static_cast<int32_T>(is) < 1) ||
      (static_cast<int32_T>(is) > mem_y.mem_t.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                  mem_y.mem_t.size(1), &p_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  b_gamma = mem_y.mem_t[(static_cast<int32_T>(nbT) +
                         mem_y.mem_t.size(0) * (static_cast<int32_T>(is) - 1)) -
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
  c_R_tmp = muDoubleScalarSin(b_gamma);
  d_R_tmp = muDoubleScalarCos(b_gamma);
  if ((static_cast<int32_T>(nbT) < 1) ||
      (static_cast<int32_T>(nbT) > mem_dti_dtcj.size(0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nbT), 1,
                                  mem_dti_dtcj.size(0), &q_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(j) < 1) ||
      (static_cast<int32_T>(j) > mem_dti_dtcj.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                  mem_dti_dtcj.size(1), &r_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(is) < 1) ||
      (static_cast<int32_T>(is) > mem_dti_dtcj.size(2))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                  mem_dti_dtcj.size(2), &s_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  b_b = mem_dti_dtcj[((static_cast<int32_T>(nbT) +
                       mem_dti_dtcj.size(0) * (static_cast<int32_T>(j) - 1)) +
                      mem_dti_dtcj.size(0) * mem_dti_dtcj.size(1) *
                          (static_cast<int32_T>(is) - 1)) -
                     1];
  if ((static_cast<int32_T>(j) < 1) ||
      (static_cast<int32_T>(j) > mem_dR0_dtcj.size(2))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                  mem_dR0_dtcj.size(2), &k_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(is) < 1) ||
      (static_cast<int32_T>(is) > mem_dR0_dtcj.size(3))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1,
                                  mem_dR0_dtcj.size(3), &l_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if ((static_cast<int32_T>(is) < 1) ||
      (static_cast<int32_T>(is) > mem_T.size(2))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(is), 1, mem_T.size(2),
                                  &m_emlrtBCI, (emlrtConstCTX)&sp);
  }
  e_R_tmp[0] = b_R_tmp;
  e_R_tmp[1] = -R_tmp;
  e_R_tmp[2] = 0.0;
  e_R_tmp[3] = R_tmp;
  e_R_tmp[4] = b_R_tmp;
  e_R_tmp[5] = 0.0;
  f_R_tmp[0] = d_R_tmp;
  f_R_tmp[3] = -c_R_tmp;
  f_R_tmp[6] = 0.0;
  f_R_tmp[1] = c_R_tmp;
  f_R_tmp[4] = d_R_tmp;
  f_R_tmp[7] = 0.0;
  for (int32_T i{0}; i < 3; i++) {
    R_tmp_tmp = b_iv[i];
    e_R_tmp[i + 6] = R_tmp_tmp;
    f_R_tmp[3 * i + 2] = R_tmp_tmp;
    b_gamma = f_R_tmp[3 * i];
    d_R_tmp = f_R_tmp[3 * i + 1];
    for (int32_T i1{0}; i1 < 3; i1++) {
      a[i + 3 * i1] = static_cast<real_T>(iv[i1]) * b_gamma +
                      static_cast<real_T>(iv[i1 + 3]) * d_R_tmp;
    }
  }
  for (int32_T i{0}; i < 9; i++) {
    a[i] *= b_b;
  }
  for (int32_T i{0}; i < 3; i++) {
    for (int32_T i1{0}; i1 < 3; i1++) {
      int32_T i2;
      int32_T i3;
      i2 = 3 * i1 + 1;
      i3 = 3 * i1 + 2;
      R_tmp_tmp = i + 3 * i1;
      f_R_tmp[R_tmp_tmp] =
          (mem_T[i + 16 * (static_cast<int32_T>(is) - 1)] * a[3 * i1] +
           mem_T[(i + 16 * (static_cast<int32_T>(is) - 1)) + 4] * a[i2]) +
          mem_T[(i + 16 * (static_cast<int32_T>(is) - 1)) + 8] * a[i3];
      dB0nbTRsdtcj[R_tmp_tmp] =
          (mem_dR0_dtcj[(i + 9 * (static_cast<int32_T>(j) - 1)) +
                        9 * mem_dR0_dtcj.size(2) *
                            (static_cast<int32_T>(is) - 1)] *
               e_R_tmp[3 * i1] +
           mem_dR0_dtcj[((i + 9 * (static_cast<int32_T>(j) - 1)) +
                         9 * mem_dR0_dtcj.size(2) *
                             (static_cast<int32_T>(is) - 1)) +
                        3] *
               e_R_tmp[i2]) +
          mem_dR0_dtcj[((i + 9 * (static_cast<int32_T>(j) - 1)) +
                        9 * mem_dR0_dtcj.size(2) *
                            (static_cast<int32_T>(is) - 1)) +
                       6] *
              e_R_tmp[i3];
    }
  }
  for (int32_T i{0}; i < 9; i++) {
    dB0nbTRsdtcj[i] += f_R_tmp[i];
  }
}

// End of code generation (dB0nbTRs_dtcj.cpp)
