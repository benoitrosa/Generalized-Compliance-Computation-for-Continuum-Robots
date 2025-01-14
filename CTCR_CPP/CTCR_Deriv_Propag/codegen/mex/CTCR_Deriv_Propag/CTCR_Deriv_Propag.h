//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CTCR_Deriv_Propag.h
//
// Code generation for function 'CTCR_Deriv_Propag'
//

#pragma once

// Include files
#include "BVPProp.h"
#include "CTCRAct.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCRLoad.h"
#include "MemBVP.h"
#include "MemCJ.h"
#include "MemDerivPropagHigh.h"
#include "MemDerivPropagLow.h"
#include "SimulationParam.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
real_T CTCR_Deriv_Propag(const emlrtStack *sp, const CTCRCarac *ctcr_carac,
                         const CTCRConstruc *ctcr_construc,
                         const CTCRAct *ctcr_act, const CTCRLoad *ctcr_load,
                         const MemBVP *mem_bvp, const BVPProp *bvp_prop,
                         const SimulationParam *simulation_param,
                         MemDerivPropagLow *mem_deriv_propag_low,
                         MemDerivPropagHigh *mem_deriv_propag_high,
                         MemCJ *mem_CJ);

// End of code generation (CTCR_Deriv_Propag.h)
