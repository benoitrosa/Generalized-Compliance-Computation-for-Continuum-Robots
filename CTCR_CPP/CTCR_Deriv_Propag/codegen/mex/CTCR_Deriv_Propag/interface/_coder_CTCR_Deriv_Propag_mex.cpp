//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_CTCR_Deriv_Propag_mex.cpp
//
// Code generation for function '_coder_CTCR_Deriv_Propag_mex'
//

// Include files
#include "_coder_CTCR_Deriv_Propag_mex.h"
#include "CTCR_Deriv_Propag_data.h"
#include "CTCR_Deriv_Propag_initialize.h"
#include "CTCR_Deriv_Propag_terminate.h"
#include "_coder_CTCR_Deriv_Propag_api.h"
#include "rt_nonfinite.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void CTCR_Deriv_Propag_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T nrhs,
                                   const mxArray *prhs[10])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs[4];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 10) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 10, 4,
                        17, "CTCR_Deriv_Propag");
  }
  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 17,
                        "CTCR_Deriv_Propag");
  }
  // Call the function.
  CTCR_Deriv_Propag_api(prhs, nlhs, outputs);
  // Copy over outputs to the caller.
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&CTCR_Deriv_Propag_atexit);
  // Module initialization.
  CTCR_Deriv_Propag_initialize();
  try {
    // Dispatch the entry-point.
    CTCR_Deriv_Propag_mexFunction(nlhs, plhs, nrhs, prhs);
    // Module termination.
    CTCR_Deriv_Propag_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_CTCR_Deriv_Propag_mex.cpp)
