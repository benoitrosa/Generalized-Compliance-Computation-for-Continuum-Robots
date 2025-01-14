//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CTCRLoad.h
//
// Code generation for function 'CTCRLoad'
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

// Type Definitions
class CTCRLoad {
public:
  real_T tau_tip[3];
  real_T f_tip[3];
  real_T load_lim_1[2];
  real_T tau_dist_1[3];
  real_T f_dist_1[3];
  real_T load_lim_2[2];
  real_T tau_dist_2[3];
  real_T f_dist_2[3];
};

// End of code generation (CTCRLoad.h)
