//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// projectBox.h
//
// Code generation for function 'projectBox'
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
namespace optim {
namespace coder {
namespace levenbergMarquardt {
real_T projectBox(const emlrtStack &sp, const ::coder::array<real_T, 1U> &x,
                  const ::coder::array<real_T, 1U> &dx,
                  const ::coder::array<boolean_T, 1U> &hasLB,
                  const ::coder::array<boolean_T, 1U> &hasUB);

}
} // namespace coder
} // namespace optim
} // namespace coder

// End of code generation (projectBox.h)
