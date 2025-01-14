//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Add_Force_var_initialize.cpp
//
// Code generation for function 'Add_Force_var_initialize'
//

// Include files
#include "Add_Force_var_initialize.h"
#include "Add_Force_var_data.h"
#include "_coder_Add_Force_var_mex.h"
#include "rt_nonfinite.h"

// Function Declarations
static void Add_Force_var_once();

// Function Definitions
static void Add_Force_var_once()
{
  mex_InitInfAndNan();
}

void Add_Force_var_initialize()
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
    Add_Force_var_once();
  }
}

// End of code generation (Add_Force_var_initialize.cpp)
