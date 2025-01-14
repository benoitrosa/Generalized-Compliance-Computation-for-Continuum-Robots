//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CTCR_Shape.h
//
// Code generation for function 'CTCR_Shape'
//

#pragma once

// Include files
#include "BVPProp.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCRLoad.h"
#include "CTCR_Shape_types.h"
#include "MemBVP.h"
#include "MemCJ.h"
#include "MemDerivPropagHigh.h"
#include "MemDerivPropagLow.h"
#include "SimulationParam.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void CTCR_Shape(const emlrtStack *sp, const coder::array<real_T, 1U> &IC,
                SimulationParam *simulation_param, const CTCRCarac *ctcr_carac,
                const CTCRLoad *ctcr_load, const CTCRConstruc *ctcr_construc,
                coder::array<real_T, 2U> &ctcr_shape, MemBVP *mem_bvp,
                BVPProp *bvp_prop, MemDerivPropagLow *mem_deriv_propag_low,
                MemDerivPropagHigh *mem_deriv_propag_high, MemCJ *mem_CJ,
                real_T *exitflag, struct0_T *output);

// End of code generation (CTCR_Shape.h)
