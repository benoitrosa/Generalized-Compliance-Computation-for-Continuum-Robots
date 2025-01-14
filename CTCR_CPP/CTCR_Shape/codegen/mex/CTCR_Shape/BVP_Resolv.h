//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// BVP_Resolv.h
//
// Code generation for function 'BVP_Resolv'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
class CTCRConstruc;

class CTCRCarac;

class CTCRLoad;

class BVPProp;

class MemBVP;

class MemDerivPropagLow;

// Function Declarations
void BVP_Resolv_anonFcn1(const emlrtStack &sp,
                         const CTCRConstruc &ctcr_construc,
                         const CTCRCarac &ctcr_carac, const CTCRLoad &ctcr_load,
                         const BVPProp &bvp_prop, const MemBVP &mem_bvp,
                         const MemDerivPropagLow &mem_deriv_propag_low,
                         const coder::array<real_T, 1U> &IC,
                         coder::array<real_T, 2U> &varargout_1,
                         coder::array<real_T, 2U> &varargout_2);

// End of code generation (BVP_Resolv.h)
