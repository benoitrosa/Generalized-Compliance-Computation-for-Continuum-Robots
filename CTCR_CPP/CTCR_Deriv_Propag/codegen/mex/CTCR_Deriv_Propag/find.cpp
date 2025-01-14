//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// find.cpp
//
// Code generation for function 'find'
//

// Include files
#include "find.h"
#include "CTCR_Deriv_Propag_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo q_emlrtRSI{
    144,        // lineNo
    "eml_find", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo r_emlrtRSI{
    382,                  // lineNo
    "find_first_indices", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo s_emlrtRSI{
    402,                  // lineNo
    "find_first_indices", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRTEInfo b_emlrtRTEI{
    392,                  // lineNo
    1,                    // colNo
    "find_first_indices", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo fb_emlrtRTEI{
    369,    // lineNo
    24,     // colNo
    "find", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo gb_emlrtRTEI{
    144,    // lineNo
    9,      // colNo
    "find", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

// Function Definitions
namespace coder {
void eml_find(const emlrtStack &sp, const ::coder::array<boolean_T, 1U> &x,
              ::coder::array<int32_T, 1U> &i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T nx;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x.size(0);
  st.site = &q_emlrtRSI;
  idx = 0;
  i.set_size(&fb_emlrtRTEI, &st, x.size(0));
  b_st.site = &r_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &t_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx - 1)) {
    if (x[ii]) {
      idx++;
      i[idx - 1] = ii + 1;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x.size(0) == 1) {
    if (idx == 0) {
      i.set_size(&gb_emlrtRTEI, &st, 0);
    }
  } else {
    int32_T b_iv[2];
    if (idx < 1) {
      nx = 0;
    } else {
      nx = idx;
    }
    b_iv[0] = 1;
    b_iv[1] = nx;
    b_st.site = &s_emlrtRSI;
    internal::indexShapeCheck(b_st, i.size(0), b_iv);
    i.set_size(&gb_emlrtRTEI, &st, nx);
  }
}

} // namespace coder

// End of code generation (find.cpp)
