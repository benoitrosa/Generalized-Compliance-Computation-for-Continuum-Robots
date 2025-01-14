//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// tic.cpp
//
// Code generation for function 'tic'
//

// Include files
#include "tic.h"
#include "Lin_Deform_data.h"
#include "rt_nonfinite.h"
#include "emlrt.h"

// Variable Definitions
static emlrtRSInfo c_emlrtRSI{
    31,    // lineNo
    "tic", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/timefun/tic.m" // pathName
};

// Function Definitions
namespace coder {
emlrtTimespec tic(const emlrtStack &sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec tstart;
  int32_T status;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &c_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &d_emlrtRSI;
  c_st.site = &e_emlrtRSI;
  status = emlrtClockGettimeMonotonic(&tstart);
  d_st.site = &f_emlrtRSI;
  if (status != 0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &b_emlrtRTEI, "Coder:toolbox:CoderTimeCallFailed",
        "Coder:toolbox:CoderTimeCallFailed", 5, 4, 26, &cv[0], 12, status);
  }
  return tstart;
}

} // namespace coder

// End of code generation (tic.cpp)