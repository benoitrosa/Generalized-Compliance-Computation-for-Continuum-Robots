//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// IVP_Int.h
//
// Code generation for function 'IVP_Int'
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
class CTCRConstruc;

class CTCRCarac;

class MemBVP;

class MemDerivPropagLow;

// Function Declarations
void IVP_Int(const emlrtStack &sp, const CTCRConstruc *ctcr_construc,
             const CTCRCarac *ctcr_carac, MemBVP *mem_bvp,
             MemDerivPropagLow *mem_deriv_propag_low);

// End of code generation (IVP_Int.h)
