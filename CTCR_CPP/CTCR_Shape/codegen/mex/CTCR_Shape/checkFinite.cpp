//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// checkFinite.cpp
//
// Code generation for function 'checkFinite'
//

// Include files
#include "checkFinite.h"
#include "CTCR_Shape_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo jc_emlrtRSI{
    1,             // lineNo
    "checkFinite", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+validate/checkFinite.p" // pathName
};

static emlrtRTEInfo cb_emlrtRTEI{
    1,             // lineNo
    1,             // colNo
    "checkFinite", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+validate/checkFinite.p" // pName
};

static emlrtBCInfo du_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    1,             // lineNo
    1,             // colNo
    "",            // aName
    "checkFinite", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+validate/checkFinite.p", // pName
    0                          // checkKind
};

// Function Definitions
namespace coder {
namespace optim {
namespace coder {
namespace validate {
boolean_T checkFinite(const emlrtStack &sp, const ::coder::array<real_T, 2U> &x,
                      int32_T m)
{
  emlrtStack b_st;
  emlrtStack st;
  boolean_T evalOK;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (x.size(0) != m) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &cb_emlrtRTEI, "optimlib_codegen:common:IncorrectSizeObjective",
        "optimlib_codegen:common:IncorrectSizeObjective", 2, 12, m);
  }
  evalOK = true;
  st.site = &jc_emlrtRSI;
  if (m > 2147483646) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T i{0}; i < m; i++) {
    if (evalOK) {
      real_T b_x;
      int32_T b_i;
      b_i = x.size(0);
      if (i + 1 > b_i) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, b_i, &du_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      b_x = x[i];
      if (muDoubleScalarIsInf(b_x) || muDoubleScalarIsNaN(b_x)) {
        evalOK = false;
      }
    } else {
      evalOK = false;
    }
  }
  return evalOK;
}

boolean_T checkFinite(const emlrtStack &sp, const ::coder::array<real_T, 2U> &x,
                      int32_T m, int32_T n)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b;
  int32_T i;
  boolean_T evalOK;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((m == 1) || (n == 1)) {
    i = m * n;
    if (x.size(0) * x.size(1) != i) {
      emlrtErrorWithMessageIdR2018a(
          &sp, &cb_emlrtRTEI, "optimlib_codegen:common:IncorrectSizeObjective",
          "optimlib_codegen:common:IncorrectSizeObjective", 2, 12, i);
    }
  } else if ((m > 1) && (n > 1) && (x.size(0) * x.size(1) != m * n)) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &cb_emlrtRTEI,
        "optimlib_codegen:common:IncorrectSizeObjectiveJacobian",
        "optimlib_codegen:common:IncorrectSizeObjectiveJacobian", 4, 12, m, 12,
        n);
  }
  evalOK = true;
  b = m * n;
  st.site = &jc_emlrtRSI;
  if (b > 2147483646) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T b_i{0}; b_i < b; b_i++) {
    if (evalOK) {
      real_T b_x;
      i = x.size(0) * x.size(1);
      if ((b_i + 1 < 1) || (b_i + 1 > i)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &du_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      b_x = x[b_i];
      if (muDoubleScalarIsInf(b_x) || muDoubleScalarIsNaN(b_x)) {
        evalOK = false;
      }
    } else {
      evalOK = false;
    }
  }
  return evalOK;
}

} // namespace validate
} // namespace coder
} // namespace optim
} // namespace coder

// End of code generation (checkFinite.cpp)
