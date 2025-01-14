//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CTCR_Deriv_Propag_initialize.cpp
//
// Code generation for function 'CTCR_Deriv_Propag_initialize'
//

// Include files
#include "CTCR_Deriv_Propag_initialize.h"
#include "CTCR_Deriv_Propag_data.h"
#include "_coder_CTCR_Deriv_Propag_mex.h"
#include "rt_nonfinite.h"

// Function Declarations
static void CTCR_Deriv_Propag_once();

// Function Definitions
static void CTCR_Deriv_Propag_once()
{
  mex_InitInfAndNan();
}

void CTCR_Deriv_Propag_initialize()
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
    CTCR_Deriv_Propag_once();
  }
}

// End of code generation (CTCR_Deriv_Propag_initialize.cpp)
