//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// IVP_MaJ_Mem.h
//
// Code generation for function 'IVP_MaJ_Mem'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
class MemBVP;

class CTCRConstruc;

class MemDerivPropagLow;

// Function Declarations
void IVP_MaJ_Mem(const emlrtStack &sp, real_T is, MemBVP *mem_bvp,
                 const CTCRConstruc *ctcr_construc,
                 MemDerivPropagLow *mem_deriv_propag_low);

// End of code generation (IVP_MaJ_Mem.h)
