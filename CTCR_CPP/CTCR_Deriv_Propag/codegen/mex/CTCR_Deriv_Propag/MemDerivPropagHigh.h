//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// MemDerivPropagHigh.h
//
// Code generation for function 'MemDerivPropagHigh'
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
class MemDerivPropagHigh {
public:
  coder::array<real_T, 2U> mem_B;
  coder::array<real_T, 3U> mem_Bws0;
  coder::array<real_T, 3U> mem_E;
  coder::array<real_T, 4U> mem_Ews0;
};

// End of code generation (MemDerivPropagHigh.h)
