//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_Add_Force_var_mex.cpp
//
// Code generation for function '_coder_Add_Force_var_mex'
//

// Include files
#include "_coder_Add_Force_var_mex.h"
#include "Add_Force_var_data.h"
#include "Add_Force_var_initialize.h"
#include "Add_Force_var_terminate.h"
#include "_coder_Add_Force_var_api.h"
#include "rt_nonfinite.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void Add_Force_var_mexFunction(int32_T nlhs, mxArray *plhs[3], int32_T nrhs,
                               const mxArray *prhs[4])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs[3];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        13, "Add_Force_var");
  }
  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 13,
                        "Add_Force_var");
  }
  // Call the function.
  Add_Force_var_api(prhs, nlhs, outputs);
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
  mexAtExit(&Add_Force_var_atexit);
  // Module initialization.
  Add_Force_var_initialize();
  try {
    // Dispatch the entry-point.
    Add_Force_var_mexFunction(nlhs, plhs, nrhs, prhs);
    // Module termination.
    Add_Force_var_terminate();
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

// End of code generation (_coder_Add_Force_var_mex.cpp)
