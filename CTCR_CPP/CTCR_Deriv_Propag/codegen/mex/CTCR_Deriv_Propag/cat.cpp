//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// cat.cpp
//
// Code generation for function 'cat'
//

// Include files
#include "cat.h"
#include "CTCR_Deriv_Propag_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo yb_emlrtRSI{
    130,   // lineNo
    "cat", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/cat.m" // pathName
};

static emlrtRTEInfo hb_emlrtRTEI{
    106,   // lineNo
    1,     // colNo
    "cat", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/cat.m" // pName
};

static emlrtRTEInfo ib_emlrtRTEI{
    114,   // lineNo
    9,     // colNo
    "cat", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/cat.m" // pName
};

// Function Definitions
namespace coder {
void cat(const emlrtStack &sp, const ::coder::array<real_T, 3U> &varargin_1,
         const real_T varargin_2[48], const real_T varargin_3[48],
         const ::coder::array<real_T, 3U> &varargin_4,
         const ::coder::array<real_T, 3U> &varargin_5,
         ::coder::array<real_T, 3U> &y)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b;
  int32_T iy;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  y.set_size(&hb_emlrtRTEI, &sp, 4, 4, varargin_1.size(2));
  iy = varargin_1.size(2) << 4;
  for (b = 0; b < iy; b++) {
    y[b] = varargin_1[b];
  }
  y.set_size(&ib_emlrtRTEI, &sp, 4, 4,
             ((varargin_1.size(2) + varargin_4.size(2)) + varargin_5.size(2)) +
                 6);
  for (int32_T j{0}; j < 48; j++) {
    y[iy + j] = varargin_2[j];
  }
  for (int32_T j{0}; j < 48; j++) {
    y[(iy + j) + 48] = varargin_3[j];
  }
  b = varargin_4.size(2) << 4;
  st.site = &yb_emlrtRSI;
  if (b > 2147483646) {
    b_st.site = &t_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T j{0}; j < b; j++) {
    y[(iy + j) + 96] = varargin_4[j];
  }
  if (b - 1 < 0) {
    iy += 95;
  } else {
    iy = (iy + b) + 95;
  }
  b = varargin_5.size(2) << 4;
  st.site = &yb_emlrtRSI;
  if (b > 2147483646) {
    b_st.site = &t_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T j{0}; j < b; j++) {
    y[(iy + j) + 1] = varargin_5[j];
  }
}

} // namespace coder

// End of code generation (cat.cpp)
