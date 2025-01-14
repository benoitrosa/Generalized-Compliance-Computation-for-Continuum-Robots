//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// MemY.h
//
// Code generation for function 'MemY'
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

// Type Definitions
class MemY {
public:
  coder::array<real_T, 2U> mem_t;
  coder::array<real_T, 2U> mem_uz;
  coder::array<real_T, 2U> mem_m0;
  coder::array<real_T, 2U> mem_n0;
  coder::array<real_T, 3U> mem_R0;
  coder::array<real_T, 2U> mem_p0;
};

// End of code generation (MemY.h)
