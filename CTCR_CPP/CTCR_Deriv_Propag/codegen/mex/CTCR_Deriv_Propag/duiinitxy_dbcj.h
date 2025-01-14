//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// duiinitxy_dbcj.h
//
// Code generation for function 'duiinitxy_dbcj'
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
void duiinitxy_dbcj(const emlrtStack &sp, real_T is,
                    const coder::array<real_T, 2U> &vect_res,
                    const coder::array<real_T, 2U> &Rc, real_T i, real_T j,
                    const coder::array<real_T, 2U> &theta_c,
                    const coder::array<real_T, 2U> &vect_ind_iT,
                    real_T ind_origin, real_T nbT, real_T duiinitxydbcj[2]);

// End of code generation (duiinitxy_dbcj.h)
