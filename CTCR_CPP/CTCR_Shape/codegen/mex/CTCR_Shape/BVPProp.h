//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// BVPProp.h
//
// Code generation for function 'BVPProp'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Definitions
class BVPProp {
public:
  coder::array<real_T, 2U> vect_tol;
  coder::bounded_array<real_T, 1U, 2U> norm_tol;
  coder::bounded_array<real_T, 1U, 2U> clk_bvp;
  coder::array<real_T, 2U> Bu;
  real_T nb_iter;
  coder::array<real_T, 2U> IC_opt;
};

// End of code generation (BVPProp.h)
