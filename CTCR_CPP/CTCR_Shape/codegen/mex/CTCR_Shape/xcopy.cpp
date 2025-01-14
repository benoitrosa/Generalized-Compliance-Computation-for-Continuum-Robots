//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// xcopy.cpp
//
// Code generation for function 'xcopy'
//

// Include files
#include "xcopy.h"
#include "CTCR_Shape_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo lc_emlrtRSI{
    38,      // lineNo
    "xcopy", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "xcopy.m" // pathName
};

static emlrtRSInfo mc_emlrtRSI{
    69,      // lineNo
    "xcopy", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+refblas/"
    "xcopy.m" // pathName
};

// Function Definitions
namespace coder {
namespace internal {
namespace blas {
void xcopy(const emlrtStack &sp, int32_T n, ::coder::array<real_T, 1U> &y,
           int32_T iy0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &lc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &mc_emlrtRSI;
  if (n > 2147483646) {
    c_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < n; k++) {
    y[(iy0 + k) - 1] = 0.0;
  }
}

void xcopy(const emlrtStack &sp, int32_T n, ::coder::array<real_T, 2U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &lc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &mc_emlrtRSI;
  if (n > 2147483646) {
    c_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < n; k++) {
    y[k] = rtNaN;
  }
}

void xcopy(const emlrtStack &sp, int32_T n, ::coder::array<real_T, 2U> &y,
           int32_T iy0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &lc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &mc_emlrtRSI;
  if (n > 2147483646) {
    c_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < n; k++) {
    y[(iy0 + k) - 1] = 0.0;
  }
}

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (xcopy.cpp)
