//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// MemDerivPropagLow.h
//
// Code generation for function 'MemDerivPropagLow'
//

#pragma once

// Include files
#include "MemDM0.h"
#include "MemDM0DS.h"
#include "MemDN0.h"
#include "MemDN0DS.h"
#include "MemDP0.h"
#include "MemDP0DS.h"
#include "MemDR0.h"
#include "MemDR0DS.h"
#include "MemDT0.h"
#include "MemDTi.h"
#include "MemDTiDS.h"
#include "MemDU0.h"
#include "MemDUZi.h"
#include "MemDUZiDS.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Definitions
class MemDerivPropagLow {
public:
  MemDU0 mem_du0;
  MemDM0 mem_dm0;
  MemDM0DS mem_dm0_ds;
  MemDN0 mem_dn0;
  MemDN0DS mem_dn0_ds;
  MemDTi mem_dti;
  MemDTiDS mem_dti_ds;
  MemDUZi mem_duzi;
  MemDUZiDS mem_duzi_ds;
  MemDR0 mem_dR0;
  MemDR0DS mem_dR0_ds;
  MemDP0 mem_dP0;
  MemDP0DS mem_dP0_ds;
  MemDT0 mem_dT0;
};

// End of code generation (MemDerivPropagLow.h)
