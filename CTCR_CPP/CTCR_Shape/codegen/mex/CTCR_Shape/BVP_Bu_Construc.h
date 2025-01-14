//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// BVP_Bu_Construc.h
//
// Code generation for function 'BVP_Bu_Construc'
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
class MemBVP;

class MemDerivPropagLow;

class CTCRConstruc;

class CTCRCarac;

class CTCRLoad;

// Function Declarations
void BVP_Bu_Construc(const emlrtStack &sp, const MemBVP *mem_bvp,
                     const MemDerivPropagLow *mem_deriv_propag_low,
                     const CTCRConstruc *ctcr_construc,
                     const CTCRCarac *ctcr_carac, const CTCRLoad *ctcr_load,
                     coder::array<real_T, 2U> &Bu);

// End of code generation (BVP_Bu_Construc.h)
