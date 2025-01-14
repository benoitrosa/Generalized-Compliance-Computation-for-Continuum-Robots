//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CTCR_Shape_internal_types1.h
//
// Code generation for function 'CTCR_Shape_internal_types1'
//

#pragma once

// Include files
#include "BVPProp.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCRLoad.h"
#include "MemBVP.h"
#include "MemDerivPropagLow.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Definitions
struct struct_T {
  CTCRConstruc ctcr_construc;
  CTCRCarac ctcr_carac;
  CTCRLoad ctcr_load;
  BVPProp bvp_prop;
  MemBVP mem_bvp;
  MemDerivPropagLow mem_deriv_propag_low;
};

// End of code generation (CTCR_Shape_internal_types1.h)
