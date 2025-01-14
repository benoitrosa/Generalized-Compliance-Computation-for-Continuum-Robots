//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// Deriv_Propag_DBDX_Construc.h
//
// Code generation for function 'Deriv_Propag_DBDX_Construc'
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

class CTCRCarac;

class CTCRLoad;

class BVPProp;

class SimulationParam;

class MemDerivPropagLow;

class MemDerivPropagHigh;

// Function Declarations
void Deriv_Propag_DBDX_Construc(const emlrtStack &sp, const MemBVP *mem_bvp,
                                const CTCRConstruc *ctcr_construc,
                                const CTCRCarac *ctcr_carac,
                                const CTCRLoad *ctcr_load,
                                const BVPProp *bvp_prop,
                                const SimulationParam *simulation_param,
                                const MemDerivPropagLow *mem_deriv_propag_low,
                                MemDerivPropagHigh *mem_deriv_propag_high);

// End of code generation (Deriv_Propag_DBDX_Construc.h)
