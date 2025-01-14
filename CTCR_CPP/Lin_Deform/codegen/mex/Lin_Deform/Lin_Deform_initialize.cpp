//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Lin_Deform_initialize.cpp
//
// Code generation for function 'Lin_Deform_initialize'
//

// Include files
#include "Lin_Deform_initialize.h"
#include "Lin_Deform_data.h"
#include "_coder_Lin_Deform_mex.h"
#include "rt_nonfinite.h"

// Function Declarations
static void Lin_Deform_once();

// Function Definitions
static void Lin_Deform_once()
{
  mex_InitInfAndNan();
}

void Lin_Deform_initialize()
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
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    Lin_Deform_once();
  }
}

// End of code generation (Lin_Deform_initialize.cpp)
