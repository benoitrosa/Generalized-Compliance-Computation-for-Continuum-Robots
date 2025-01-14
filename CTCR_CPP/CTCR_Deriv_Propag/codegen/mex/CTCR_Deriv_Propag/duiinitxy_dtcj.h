//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// duiinitxy_dtcj.h
//
// Code generation for function 'duiinitxy_dtcj'
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
void duiinitxy_dtcj(const emlrtStack &sp, real_T is,
                    const coder::array<real_T, 2U> &Rc, real_T i, real_T j,
                    const coder::array<real_T, 2U> &theta_c,
                    const coder::array<real_T, 2U> &vect_ind_iT,
                    real_T ind_origin, real_T duiinitxydtcj[2]);

// End of code generation (duiinitxy_dtcj.h)
