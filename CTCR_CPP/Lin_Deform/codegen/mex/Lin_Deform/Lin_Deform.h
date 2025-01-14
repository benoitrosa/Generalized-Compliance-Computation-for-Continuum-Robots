//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Lin_Deform.h
//
// Code generation for function 'Lin_Deform'
//

#pragma once

// Include files
#include "CTCRConstruc.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void Lin_Deform(const emlrtStack *sp, const coder::array<real_T, 1U> &mem_is0,
                const coder::array<real_T, 2U> &delta_f0,
                const coder::array<real_T, 2U> &ctcr_shape_init,
                const CTCRConstruc *ctcr_construc_init,
                const coder::array<real_T, 4U> &mem_Cs0_init,
                coder::array<real_T, 2U> &ctcr_shape_def_jacob,
                real_T *time_comp_lin_deform);

// End of code generation (Lin_Deform.h)
