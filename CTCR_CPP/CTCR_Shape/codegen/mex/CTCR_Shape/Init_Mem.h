//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Init_Mem.h
//
// Code generation for function 'Init_Mem'
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

class BVPProp;

class MemBVP;

class MemDerivPropagLow;

class MemDerivPropagHigh;

class MemCJ;

// Function Declarations
void Init_Mem(const emlrtStack &sp, const CTCRConstruc *ctcr_construc,
              const CTCRCarac *ctcr_carac, const BVPProp *bvp_prop,
              MemBVP *mem_bvp, MemDerivPropagLow *mem_deriv_propag_low,
              MemDerivPropagHigh *mem_deriv_propag_high, MemCJ *mem_CJ);

// End of code generation (Init_Mem.h)
