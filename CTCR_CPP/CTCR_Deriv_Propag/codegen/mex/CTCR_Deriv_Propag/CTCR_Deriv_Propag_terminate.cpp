//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CTCR_Deriv_Propag_terminate.cpp
//
// Code generation for function 'CTCR_Deriv_Propag_terminate'
//

// Include files
#include "CTCR_Deriv_Propag_terminate.h"
#include "CTCR_Deriv_Propag_data.h"
#include "_coder_CTCR_Deriv_Propag_mex.h"
#include "rt_nonfinite.h"

// Function Definitions
void CTCR_Deriv_Propag_atexit()
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

void CTCR_Deriv_Propag_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (CTCR_Deriv_Propag_terminate.cpp)
