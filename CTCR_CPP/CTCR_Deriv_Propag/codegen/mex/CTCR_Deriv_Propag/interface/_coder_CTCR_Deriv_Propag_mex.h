//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_CTCR_Deriv_Propag_mex.h
//
// Code generation for function '_coder_CTCR_Deriv_Propag_mex'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void CTCR_Deriv_Propag_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T nrhs,
                                   const mxArray *prhs[10]);

MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS();

// End of code generation (_coder_CTCR_Deriv_Propag_mex.h)