//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// BVP_Resolv.cpp
//
// Code generation for function 'BVP_Resolv'
//

// Include files
#include "BVP_Resolv.h"
#include "BVPProp.h"
#include "BVP_Bu_Construc.h"
#include "BVP_Comp_BC.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCRLoad.h"
#include "CTCR_Shape_data.h"
#include "IVP_Int.h"
#include "MemBVP.h"
#include "MemDerivPropagLow.h"
#include "MemY.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo y_emlrtRSI{
    72,           // lineNo
    "BVP_Resolv", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Resolv.m" // pathName
};

static emlrtRTEInfo nc_emlrtRTEI{
    55,                   // lineNo
    5,                    // colNo
    "BVP_BC_Comp_Fsolve", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_BC_Comp_Fsolve.m" // pName
};

static emlrtRTEInfo oc_emlrtRTEI{
    59,                   // lineNo
    9,                    // colNo
    "BVP_BC_Comp_Fsolve", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_BC_Comp_Fsolve.m" // pName
};

// Function Definitions
void BVP_Resolv_anonFcn1(const emlrtStack &sp,
                         const CTCRConstruc &ctcr_construc,
                         const CTCRCarac &ctcr_carac, const CTCRLoad &ctcr_load,
                         const BVPProp &bvp_prop, const MemBVP &mem_bvp,
                         const MemDerivPropagLow &mem_deriv_propag_low,
                         const coder::array<real_T, 1U> &IC,
                         coder::array<real_T, 2U> &varargout_1,
                         coder::array<real_T, 2U> &varargout_2)
{
  BVPProp b_bvp_prop;
  MemBVP b_mem_bvp;
  MemDerivPropagLow b_mem_deriv_propag_low;
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &y_emlrtRSI;
  b_bvp_prop = bvp_prop;
  //  ======================================================================= %
  //
  //  This function is used in the fsolve function to integrate the IVP, to
  //  compute the residual and optionally to compute manually the optimization
  //  Jacobian
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  IC                    : (nbT+6 x 1)       Initial value for yu(0) (see
  //  Table 5) simulation_param      : (class)           Model settings
  //  ctcr_construc         : (class)           Robot features related to the
  //  model settings ctcr_carac            : (class)           Robot features
  //  ctcr_load             : (class)           Robot loads
  //  ctcr_act              : (class)           Robot actuation
  //  bvp_prop              : (class)           Results of the BVP resolution
  //  mem_bvp               : (class)           Memory of the BVP variables
  //  mem_deriv_propag_low  : (class)           Memory of the low-level
  //  derivatives
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  error                 : (nbT+6 x 1)       Residual vector (b in the paper)
  //  jacobianMatrix        : (nbT+6 x nbT+6)   Optimization Jacobian
  //  bvp_prop              : (class)           Results of the BVP resolution
  //  mem_bvp               : (class)           Memory of the BVP variables
  //  mem_deriv_propag_low  : (class)           Memory of the low-level
  //  derivatives
  //
  //  ======================================================================= %
  //  IC initialization
  b_bvp_prop.IC_opt.set_size(&mc_emlrtRTEI, &st, IC.size(0), 1);
  loop_ub = IC.size(0);
  for (i = 0; i < loop_ub; i++) {
    b_bvp_prop.IC_opt[i] = IC[i];
  }
  //  Including the IC in the BVP memories
  b_st.site = &ab_emlrtRSI;
  b_mem_bvp = mem_bvp;
  //  ======================================================================= %
  //
  //  This function initializes the state vector initial value
  //
  //  ====================
  //  ====== INPUTS ======
  //
  //  bvp_prop              : (class)   Results of the BVP resolution
  //  mem_bvp               : (class)   Memory of the BVP variables
  //  ctcr_construc         : (class)   Robot features related to the model
  //  settings ctcr_carac            : (class)   Robot features
  //
  //  ====================
  //  ===== OUTPUTS ======
  //
  //  mem_bvp               : (class)   Memory of the BVP variables
  //
  //  ======================================================================= %
  //  uzi(0i) initialization
  i = static_cast<int32_T>(ctcr_carac.nbT);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, ctcr_carac.nbT, mxDOUBLE_CLASS,
                                static_cast<int32_T>(ctcr_carac.nbT),
                                &h_emlrtRTEI, &b_st);
  for (loop_ub = 0; loop_ub < i; loop_ub++) {
    real_T d;
    if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
         IC.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U), 1,
          IC.size(0), &ab_emlrtBCI, &b_st);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
         b_mem_bvp.mem_y.mem_uz.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U), 1,
          b_mem_bvp.mem_y.mem_uz.size(0), &bb_emlrtBCI, &b_st);
    }
    if ((static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) < 1) ||
        (static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U) >
         ctcr_construc.vect_ind_iT.size(0))) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(loop_ub) + 1U), 1,
          ctcr_construc.vect_ind_iT.size(0), &db_emlrtBCI, &b_st);
    }
    d = ctcr_construc.vect_ind_iT[loop_ub];
    if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
      emlrtIntegerCheckR2012b(d, &io_emlrtDCI, &b_st);
    }
    if ((static_cast<int32_T>(d) < 1) ||
        (static_cast<int32_T>(d) > b_mem_bvp.mem_y.mem_uz.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                    b_mem_bvp.mem_y.mem_uz.size(1),
                                    &cb_emlrtBCI, &b_st);
    }
    b_mem_bvp.mem_y.mem_uz[loop_ub + b_mem_bvp.mem_y.mem_uz.size(0) *
                                         (static_cast<int32_T>(d) - 1)] =
        IC[loop_ub];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }
  }
  //  m0(0) and n0(0) initialization
  i = static_cast<int32_T>(muDoubleScalarFloor(ctcr_construc.ind_origin));
  if (ctcr_construc.ind_origin != i) {
    emlrtIntegerCheckR2012b(ctcr_construc.ind_origin, &go_emlrtDCI, &b_st);
  }
  if ((static_cast<int32_T>(ctcr_construc.ind_origin) < 1) ||
      (static_cast<int32_T>(ctcr_construc.ind_origin) >
       b_mem_bvp.mem_y.mem_m0.size(1))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(ctcr_construc.ind_origin), 1,
        b_mem_bvp.mem_y.mem_m0.size(1), &x_emlrtBCI, &b_st);
  }
  if (ctcr_carac.nbT + 1.0 !=
      static_cast<int32_T>(muDoubleScalarFloor(ctcr_carac.nbT + 1.0))) {
    emlrtIntegerCheckR2012b(ctcr_carac.nbT + 1.0, &ko_emlrtDCI, &b_st);
  }
  if ((static_cast<int32_T>(ctcr_carac.nbT + 1.0) < 1) ||
      (static_cast<int32_T>(ctcr_carac.nbT + 1.0) > IC.size(0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ctcr_carac.nbT + 1.0), 1,
                                  IC.size(0), &fb_emlrtBCI, &b_st);
  }
  b_mem_bvp.mem_y
      .mem_m0[3 * (static_cast<int32_T>(ctcr_construc.ind_origin) - 1)] =
      IC[static_cast<int32_T>(ctcr_carac.nbT + 1.0) - 1];
  if ((ctcr_carac.nbT + 1.0) + 1.0 !=
      static_cast<int32_T>(muDoubleScalarFloor((ctcr_carac.nbT + 1.0) + 1.0))) {
    emlrtIntegerCheckR2012b((ctcr_carac.nbT + 1.0) + 1.0, &ko_emlrtDCI, &b_st);
  }
  if ((static_cast<int32_T>((ctcr_carac.nbT + 1.0) + 1.0) < 1) ||
      (static_cast<int32_T>((ctcr_carac.nbT + 1.0) + 1.0) > IC.size(0))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>((ctcr_carac.nbT + 1.0) + 1.0), 1, IC.size(0),
        &fb_emlrtBCI, &b_st);
  }
  b_mem_bvp.mem_y
      .mem_m0[3 * (static_cast<int32_T>(ctcr_construc.ind_origin) - 1) + 1] =
      IC[static_cast<int32_T>((ctcr_carac.nbT + 1.0) + 1.0) - 1];
  if ((ctcr_carac.nbT + 1.0) + 2.0 !=
      static_cast<int32_T>(muDoubleScalarFloor((ctcr_carac.nbT + 1.0) + 2.0))) {
    emlrtIntegerCheckR2012b((ctcr_carac.nbT + 1.0) + 2.0, &ko_emlrtDCI, &b_st);
  }
  if ((static_cast<int32_T>((ctcr_carac.nbT + 1.0) + 2.0) < 1) ||
      (static_cast<int32_T>((ctcr_carac.nbT + 1.0) + 2.0) > IC.size(0))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>((ctcr_carac.nbT + 1.0) + 2.0), 1, IC.size(0),
        &fb_emlrtBCI, &b_st);
  }
  b_mem_bvp.mem_y
      .mem_m0[3 * (static_cast<int32_T>(ctcr_construc.ind_origin) - 1) + 2] =
      IC[static_cast<int32_T>((ctcr_carac.nbT + 1.0) + 2.0) - 1];
  if (ctcr_construc.ind_origin != i) {
    emlrtIntegerCheckR2012b(ctcr_construc.ind_origin, &ho_emlrtDCI, &b_st);
  }
  if ((static_cast<int32_T>(ctcr_construc.ind_origin) < 1) ||
      (static_cast<int32_T>(ctcr_construc.ind_origin) >
       b_mem_bvp.mem_y.mem_n0.size(1))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>(ctcr_construc.ind_origin), 1,
        b_mem_bvp.mem_y.mem_n0.size(1), &y_emlrtBCI, &b_st);
  }
  if (ctcr_carac.nbT + 4.0 !=
      static_cast<int32_T>(muDoubleScalarFloor(ctcr_carac.nbT + 4.0))) {
    emlrtIntegerCheckR2012b(ctcr_carac.nbT + 4.0, &jo_emlrtDCI, &b_st);
  }
  if ((static_cast<int32_T>(ctcr_carac.nbT + 4.0) < 1) ||
      (static_cast<int32_T>(ctcr_carac.nbT + 4.0) > IC.size(0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(ctcr_carac.nbT + 4.0), 1,
                                  IC.size(0), &eb_emlrtBCI, &b_st);
  }
  b_mem_bvp.mem_y
      .mem_n0[3 * (static_cast<int32_T>(ctcr_construc.ind_origin) - 1)] =
      IC[static_cast<int32_T>(ctcr_carac.nbT + 4.0) - 1];
  if ((ctcr_carac.nbT + 4.0) + 1.0 !=
      static_cast<int32_T>(muDoubleScalarFloor((ctcr_carac.nbT + 4.0) + 1.0))) {
    emlrtIntegerCheckR2012b((ctcr_carac.nbT + 4.0) + 1.0, &jo_emlrtDCI, &b_st);
  }
  if ((static_cast<int32_T>((ctcr_carac.nbT + 4.0) + 1.0) < 1) ||
      (static_cast<int32_T>((ctcr_carac.nbT + 4.0) + 1.0) > IC.size(0))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>((ctcr_carac.nbT + 4.0) + 1.0), 1, IC.size(0),
        &eb_emlrtBCI, &b_st);
  }
  b_mem_bvp.mem_y
      .mem_n0[3 * (static_cast<int32_T>(ctcr_construc.ind_origin) - 1) + 1] =
      IC[static_cast<int32_T>((ctcr_carac.nbT + 4.0) + 1.0) - 1];
  if ((ctcr_carac.nbT + 4.0) + 2.0 !=
      static_cast<int32_T>(muDoubleScalarFloor((ctcr_carac.nbT + 4.0) + 2.0))) {
    emlrtIntegerCheckR2012b((ctcr_carac.nbT + 4.0) + 2.0, &jo_emlrtDCI, &b_st);
  }
  if ((static_cast<int32_T>((ctcr_carac.nbT + 4.0) + 2.0) < 1) ||
      (static_cast<int32_T>((ctcr_carac.nbT + 4.0) + 2.0) > IC.size(0))) {
    emlrtDynamicBoundsCheckR2012b(
        static_cast<int32_T>((ctcr_carac.nbT + 4.0) + 2.0), 1, IC.size(0),
        &eb_emlrtBCI, &b_st);
  }
  b_mem_bvp.mem_y
      .mem_n0[3 * (static_cast<int32_T>(ctcr_construc.ind_origin) - 1) + 2] =
      IC[static_cast<int32_T>((ctcr_carac.nbT + 4.0) + 2.0) - 1];
  //  IVP integration
  b_mem_deriv_propag_low = mem_deriv_propag_low;
  b_st.site = &bb_emlrtRSI;
  IVP_Int(b_st, &ctcr_construc, &ctcr_carac, &b_mem_bvp,
          &b_mem_deriv_propag_low);
  //  Computing manually the BVP optimization Jacobian
  b_st.site = &cb_emlrtRSI;
  BVP_Bu_Construc(b_st, &b_mem_bvp, &b_mem_deriv_propag_low, &ctcr_construc,
                  &ctcr_carac, &ctcr_load, b_bvp_prop.Bu);
  //  Distal boundaries conditions comparaison expected / calculated from IC
  b_st.site = &db_emlrtRSI;
  BVP_Comp_BC(b_st, &b_mem_bvp, &b_bvp_prop, &ctcr_carac, &ctcr_construc,
              &ctcr_load);
  //  Setting the output
  varargout_1.set_size(&nc_emlrtRTEI, &st, b_bvp_prop.vect_tol.size(0),
                       b_bvp_prop.vect_tol.size(1));
  loop_ub = b_bvp_prop.vect_tol.size(0) * b_bvp_prop.vect_tol.size(1);
  for (i = 0; i < loop_ub; i++) {
    varargout_1[i] = b_bvp_prop.vect_tol[i];
  }
  //  Setting the manually computed optimization jacobian
  varargout_2.set_size(&oc_emlrtRTEI, &st, b_bvp_prop.Bu.size(0),
                       b_bvp_prop.Bu.size(1));
  loop_ub = b_bvp_prop.Bu.size(0) * b_bvp_prop.Bu.size(1);
  for (i = 0; i < loop_ub; i++) {
    varargout_2[i] = b_bvp_prop.Bu[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (BVP_Resolv.cpp)
