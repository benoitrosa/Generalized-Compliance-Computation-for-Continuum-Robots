//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// cat.h
//
// Code generation for function 'cat'
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
void cat(const emlrtStack &sp, const ::coder::array<real_T, 3U> &varargin_1,
         const real_T varargin_2[48], const real_T varargin_3[48],
         const ::coder::array<real_T, 3U> &varargin_4,
         const ::coder::array<real_T, 3U> &varargin_5,
         ::coder::array<real_T, 3U> &y);

}

// End of code generation (cat.h)
