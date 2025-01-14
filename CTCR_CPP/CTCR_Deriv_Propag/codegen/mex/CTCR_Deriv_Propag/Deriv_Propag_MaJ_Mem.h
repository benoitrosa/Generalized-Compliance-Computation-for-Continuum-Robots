//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Deriv_Propag_MaJ_Mem.h
//
// Code generation for function 'Deriv_Propag_MaJ_Mem'
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
class CTCRCarac;

class CTCRConstruc;

class MemBVP;

class MemDerivPropagLow;

class SimulationParam;

// Function Declarations
void Deriv_Propag_MaJ_Mem(const emlrtStack &sp, real_T is,
                          const CTCRCarac *ctcr_carac,
                          const CTCRConstruc *ctcr_construc,
                          const MemBVP *mem_bvp,
                          MemDerivPropagLow *mem_deriv_propag_low,
                          const SimulationParam *simulation_param);

// End of code generation (Deriv_Propag_MaJ_Mem.h)
