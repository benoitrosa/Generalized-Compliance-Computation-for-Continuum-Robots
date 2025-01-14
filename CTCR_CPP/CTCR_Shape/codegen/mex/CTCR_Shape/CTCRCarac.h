//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CTCRCarac.h
//
// Code generation for function 'CTCRCarac'
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
class CTCRCarac {
public:
  real_T nbT;
  coder::array<real_T, 2U> stiff;
  real_T coeff_poiss;
  coder::array<real_T, 2U> Rc;
  coder::array<real_T, 2U> Lr;
  coder::array<real_T, 2U> Lc;
  coder::array<real_T, 2U> L;
};

// End of code generation (CTCRCarac.h)
