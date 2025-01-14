//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// BVP_Comp_BC.h
//
// Code generation for function 'BVP_Comp_BC'
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

class BVPProp;

class CTCRCarac;

class CTCRConstruc;

class CTCRLoad;

// Function Declarations
void BVP_Comp_BC(const emlrtStack &sp, const MemBVP *mem_bvp, BVPProp *bvp_prop,
                 const CTCRCarac *ctcr_carac, const CTCRConstruc *ctcr_construc,
                 const CTCRLoad *ctcr_load);

// End of code generation (BVP_Comp_BC.h)
