//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// MemDTiDS.h
//
// Code generation for function 'MemDTiDS'
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

// Type Definitions
class MemDTiDS {
public:
  coder::array<real_T, 3U> mem_dti_duzj0_ds;
  coder::array<real_T, 3U> mem_dti_dm0j0_ds;
  coder::array<real_T, 3U> mem_dti_dn0j0_ds;
  coder::array<real_T, 3U> mem_dti_dtcj_ds;
  coder::array<real_T, 3U> mem_dti_dbcj_ds;
  coder::array<real_T, 4U> mem_dti_dtaus0_ds;
  coder::array<real_T, 4U> mem_dti_dfs0_ds;
};

// End of code generation (MemDTiDS.h)
