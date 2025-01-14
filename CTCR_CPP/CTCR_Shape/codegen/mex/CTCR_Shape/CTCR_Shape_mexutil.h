//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CTCR_Shape_mexutil.h
//
// Code generation for function 'CTCR_Shape_mexutil'
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
real_T c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId);

real_T emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId);

const mxArray *emlrt_marshallOut(const real_T u);

// End of code generation (CTCR_Shape_mexutil.h)
