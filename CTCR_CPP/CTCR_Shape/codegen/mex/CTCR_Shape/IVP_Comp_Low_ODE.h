//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// IVP_Comp_Low_ODE.h
//
// Code generation for function 'IVP_Comp_Low_ODE'
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

class CTCRCarac;

class CTCRConstruc;

class MemDerivPropagLow;

// Function Declarations
void IVP_Comp_Low_ODE(const emlrtStack &sp, real_T is, const MemBVP *mem_bvp,
                      const CTCRCarac *ctcr_carac,
                      const CTCRConstruc *ctcr_construc,
                      MemDerivPropagLow *mem_deriv_propag_low);

// End of code generation (IVP_Comp_Low_ODE.h)
