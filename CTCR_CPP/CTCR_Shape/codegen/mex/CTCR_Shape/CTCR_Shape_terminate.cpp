//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CTCR_Shape_terminate.cpp
//
// Code generation for function 'CTCR_Shape_terminate'
//

// Include files
#include "CTCR_Shape_terminate.h"
#include "CTCR_Shape_data.h"
#include "_coder_CTCR_Shape_mex.h"
#include "rt_nonfinite.h"

// Function Definitions
void CTCR_Shape_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void CTCR_Shape_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (CTCR_Shape_terminate.cpp)
