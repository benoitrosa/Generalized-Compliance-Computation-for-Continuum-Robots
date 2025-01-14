//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Lin_Deform_terminate.cpp
//
// Code generation for function 'Lin_Deform_terminate'
//

// Include files
#include "Lin_Deform_terminate.h"
#include "Lin_Deform_data.h"
#include "_coder_Lin_Deform_mex.h"
#include "rt_nonfinite.h"

// Function Definitions
void Lin_Deform_atexit()
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

void Lin_Deform_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (Lin_Deform_terminate.cpp)
