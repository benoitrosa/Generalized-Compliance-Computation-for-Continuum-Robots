//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// MemBVP.h
//
// Code generation for function 'MemBVP'
//

#pragma once

// Include files
#include "MemY.h"
#include "MemYS.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Definitions
class MemBVP {
public:
  MemY mem_y;
  MemYS mem_ys;
  coder::array<real_T, 3U> mem_uixy;
  coder::array<real_T, 2U> mem_u0;
  coder::array<real_T, 3U> mem_T;
  coder::array<real_T, 3U> mem_inv_sum_Ki;
};

// End of code generation (MemBVP.h)
