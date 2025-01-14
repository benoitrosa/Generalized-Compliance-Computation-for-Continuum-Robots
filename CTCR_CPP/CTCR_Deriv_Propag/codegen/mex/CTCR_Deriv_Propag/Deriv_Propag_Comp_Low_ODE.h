//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Deriv_Propag_Comp_Low_ODE.h
//
// Code generation for function 'Deriv_Propag_Comp_Low_ODE'
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

class CTCRAct;

class CTCRConstruc;

class SimulationParam;

class MemDerivPropagLow;

// Function Declarations
void Deriv_Propag_Comp_Low_ODE(const emlrtStack &sp, real_T is,
                               const MemBVP *mem_bvp,
                               const CTCRCarac *ctcr_carac,
                               const CTCRAct *ctcr_act,
                               const CTCRConstruc *ctcr_construc,
                               const SimulationParam *simulation_param,
                               MemDerivPropagLow *mem_deriv_propag_low);

// End of code generation (Deriv_Propag_Comp_Low_ODE.h)
