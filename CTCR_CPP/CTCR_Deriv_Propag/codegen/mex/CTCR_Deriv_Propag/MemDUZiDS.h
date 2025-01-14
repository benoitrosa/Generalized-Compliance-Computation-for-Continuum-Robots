//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// MemDUZiDS.h
//
// Code generation for function 'MemDUZiDS'
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
class MemDUZiDS {
public:
  coder::array<real_T, 3U> mem_duzi_duzj0_ds;
  coder::array<real_T, 3U> mem_duzi_dm0j0_ds;
  coder::array<real_T, 3U> mem_duzi_dn0j0_ds;
  coder::array<real_T, 3U> mem_duzi_dtcj_ds;
  coder::array<real_T, 3U> mem_duzi_dbcj_ds;
  coder::array<real_T, 4U> mem_duzi_dtaus0_ds;
  coder::array<real_T, 4U> mem_duzi_dfs0_ds;
};

// End of code generation (MemDUZiDS.h)
