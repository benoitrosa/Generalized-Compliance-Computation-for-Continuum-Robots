//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// hasFiniteBounds.cpp
//
// Code generation for function 'hasFiniteBounds'
//

// Include files
#include "hasFiniteBounds.h"
#include "CTCR_Shape_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo x_emlrtRSI{
    1,                 // lineNo
    "hasFiniteBounds", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+utils/hasFiniteBounds.p" // pathName
};

static emlrtBCInfo of_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    1,                 // lineNo
    1,                 // colNo
    "",                // aName
    "hasFiniteBounds", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+utils/hasFiniteBounds.p", // pName
    0                           // checkKind
};

// Function Definitions
namespace coder {
namespace optim {
namespace coder {
namespace utils {
void hasFiniteBounds(const emlrtStack &sp, int32_T nvar,
                     ::coder::array<boolean_T, 1U> &hasLB,
                     ::coder::array<boolean_T, 1U> &hasUB)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &x_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nvar > 2147483646) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T k{0}; k < nvar; k++) {
    int32_T i;
    i = hasLB.size(0);
    if ((k + 1 < 1) || (k + 1 > i)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i, &of_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    hasLB[k] = false;
    i = hasUB.size(0);
    if (k + 1 > i) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i, &of_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    hasUB[k] = false;
  }
}

} // namespace utils
} // namespace coder
} // namespace optim
} // namespace coder

// End of code generation (hasFiniteBounds.cpp)
