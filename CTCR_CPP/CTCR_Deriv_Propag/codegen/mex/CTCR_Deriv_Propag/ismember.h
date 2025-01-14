//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ismember.h
//
// Code generation for function 'ismember'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
boolean_T isMember(const emlrtStack &sp, real_T a,
                   const ::coder::array<real_T, 1U> &s);

}

// End of code generation (ismember.h)
