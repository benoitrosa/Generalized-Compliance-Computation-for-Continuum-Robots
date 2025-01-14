//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CTCR_Shape_initialize.cpp
//
// Code generation for function 'CTCR_Shape_initialize'
//

// Include files
#include "CTCR_Shape_initialize.h"
#include "CTCR_Shape_data.h"
#include "_coder_CTCR_Shape_mex.h"
#include "rt_nonfinite.h"

// Function Declarations
static void CTCR_Shape_once();

// Function Definitions
static void CTCR_Shape_once()
{
  mex_InitInfAndNan();
}

void CTCR_Shape_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
                          "optimization_toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    CTCR_Shape_once();
  }
}

// End of code generation (CTCR_Shape_initialize.cpp)
