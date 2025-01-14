//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// MemYS.h
//
// Code generation for function 'MemYS'
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
class MemYS {
public:
  coder::array<real_T, 2U> mem_ts;
  coder::array<real_T, 2U> mem_uzs;
  coder::array<real_T, 2U> mem_m0s;
  coder::array<real_T, 2U> mem_n0s;
  coder::array<real_T, 3U> mem_R0s;
  coder::array<real_T, 2U> mem_p0s;
};

// End of code generation (MemYS.h)
