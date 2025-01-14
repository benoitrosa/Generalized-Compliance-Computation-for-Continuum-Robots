//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Add_Force_var_terminate.cpp
//
// Code generation for function 'Add_Force_var_terminate'
//

// Include files
#include "Add_Force_var_terminate.h"
#include "Add_Force_var_data.h"
#include "_coder_Add_Force_var_mex.h"
#include "rt_nonfinite.h"

// Function Definitions
void Add_Force_var_atexit()
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

void Add_Force_var_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (Add_Force_var_terminate.cpp)
