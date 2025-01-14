//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// SimulationParam.h
//
// Code generation for function 'SimulationParam'
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
class SimulationParam {
public:
  real_T res_step;
  real_T opt_tol;
  real_T epsilon_disct_pt;
  real_T nb_disct_pt;
  coder::array<real_T, 2U> pt_s0_LIT;
  boolean_T bool_J;
  boolean_T bool_Cs0;
  boolean_T flag_ctcr;
  boolean_T bool_problem_opt;
  boolean_T bool_disp_terminal;
};

// End of code generation (SimulationParam.h)
