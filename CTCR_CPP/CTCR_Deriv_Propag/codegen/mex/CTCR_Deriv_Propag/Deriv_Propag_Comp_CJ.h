//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Deriv_Propag_Comp_CJ.h
//
// Code generation for function 'Deriv_Propag_Comp_CJ'
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

class SimulationParam;

class BVPProp;

class MemCJ;

class MemDerivPropagHigh;

// Function Declarations
void Deriv_Propag_Comp_CJ(const emlrtStack &sp,
                          const CTCRConstruc *ctcr_construc,
                          const CTCRCarac *ctcr_carac,
                          const SimulationParam *simulation_param,
                          const BVPProp *bvp_prop, MemCJ *mem_CJ,
                          const MemDerivPropagHigh *mem_deriv_propag_high);

// End of code generation (Deriv_Propag_Comp_CJ.h)
