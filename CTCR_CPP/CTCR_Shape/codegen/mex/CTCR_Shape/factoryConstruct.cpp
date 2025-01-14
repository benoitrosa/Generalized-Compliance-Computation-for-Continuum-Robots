//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// factoryConstruct.cpp
//
// Code generation for function 'factoryConstruct'
//

// Include files
#include "factoryConstruct.h"
#include "CTCR_Shape_internal_types.h"
#include "anonymous_function.h"
#include "hasFiniteBounds.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo kc_emlrtRSI{
    1,                  // lineNo
    "factoryConstruct", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+utils/+FiniteDifferences/factoryConstruct.p" // pathName
};

static emlrtRTEInfo tc_emlrtRTEI{
    1,                  // lineNo
    1,                  // colNo
    "factoryConstruct", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+utils/+FiniteDifferences/factoryConstruct.p" // pName
};

// Function Definitions
namespace coder {
namespace optim {
namespace coder {
namespace utils {
namespace FiniteDifferences {
void factoryConstruct(const emlrtStack &sp, const b_anonymous_function nonlin,
                      int32_T nVar, int32_T mCeq, b_struct_T &obj)
{
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  obj.nonlin = nonlin;
  obj.f_1 = 0.0;
  obj.cEq_1.set_size(&tc_emlrtRTEI, &sp, mCeq);
  obj.f_2 = 0.0;
  obj.cEq_2.set_size(&tc_emlrtRTEI, &sp, mCeq);
  obj.nVar = nVar;
  obj.mIneq = 0;
  obj.mEq = mCeq;
  obj.numEvals = 0;
  obj.SpecifyObjectiveGradient = true;
  obj.SpecifyConstraintGradient = false;
  obj.isEmptyNonlcon = (mCeq == 0);
  obj.hasLB.set_size(&tc_emlrtRTEI, &sp, nVar);
  obj.hasUB.set_size(&tc_emlrtRTEI, &sp, nVar);
  obj.FiniteDifferenceType = 0;
  st.site = &kc_emlrtRSI;
  hasFiniteBounds(st, nVar, obj.hasLB, obj.hasUB);
  obj.hasBounds = false;
}

} // namespace FiniteDifferences
} // namespace utils
} // namespace coder
} // namespace optim
} // namespace coder

// End of code generation (factoryConstruct.cpp)
