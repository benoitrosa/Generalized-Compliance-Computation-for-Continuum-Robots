//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dB0nbTRs_dtcj.h
//
// Code generation for function 'dB0nbTRs_dtcj'
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

// Type Declarations
class MemY;

// Function Declarations
void dB0nbTRs_dtcj(const emlrtStack &sp, real_T is, real_T j, real_T nbT,
                   const coder::array<real_T, 3U> &mem_T, const MemY &mem_y,
                   const coder::array<real_T, 4U> &mem_dR0_dtcj,
                   const coder::array<real_T, 3U> &mem_dti_dtcj,
                   real_T dB0nbTRsdtcj[9]);

// End of code generation (dB0nbTRs_dtcj.h)
