//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Add_Force_var.h
//
// Code generation for function 'Add_Force_var'
//

#pragma once

// Include files
#include "CTCRConstruc.h"
#include "CTCRLoad.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void Add_Force_var(const emlrtStack *sp, const coder::array<real_T, 1U> &prc_s0,
                   const coder::array<real_T, 2U> &delta_f0,
                   const CTCRConstruc *ctcr_construc, const CTCRLoad *ctcr_load,
                   CTCRConstruc *ctcr_construc_new, CTCRLoad *ctcr_load_new,
                   coder::array<real_T, 1U> &mem_is0);

// End of code generation (Add_Force_var.h)
