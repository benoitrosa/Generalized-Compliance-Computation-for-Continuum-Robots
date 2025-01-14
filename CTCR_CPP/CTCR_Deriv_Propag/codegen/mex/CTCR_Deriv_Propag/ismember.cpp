//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ismember.cpp
//
// Code generation for function 'ismember'
//

// Include files
#include "ismember.h"
#include "CTCR_Deriv_Propag_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo kb_emlrtRSI{
    163,        // lineNo
    "isMember", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/ismember.m" // pathName
};

// Function Definitions
namespace coder {
boolean_T isMember(const emlrtStack &sp, real_T a,
                   const ::coder::array<real_T, 1U> &s)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T tf;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  tf = false;
  st.site = &kb_emlrtRSI;
  if (s.size(0) > 2147483646) {
    b_st.site = &t_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= s.size(0) - 1)) {
    if (a == s[k]) {
      tf = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  return tf;
}

} // namespace coder

// End of code generation (ismember.cpp)
