//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CTCRConstruc.h
//
// Code generation for function 'CTCRConstruc'
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
class CTCRConstruc {
public:
  real_T nbP;
  coder::array<real_T, 3U> K;
  coder::array<real_T, 2U> vect_ind_iT;
  real_T ind_origin;
  coder::array<real_T, 2U> vect_z;
  coder::array<real_T, 2U> vect_res;
  coder::array<real_T, 3U> ui_init;
  coder::array<real_T, 3U> pos_init;
  coder::array<real_T, 2U> vect_tau_dist;
  coder::array<real_T, 2U> vect_f_dist;
};

// End of code generation (CTCRConstruc.h)
