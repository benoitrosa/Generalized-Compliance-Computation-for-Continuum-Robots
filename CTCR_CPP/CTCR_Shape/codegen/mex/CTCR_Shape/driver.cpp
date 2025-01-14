//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// driver.cpp
//
// Code generation for function 'driver'
//

// Include files
#include "driver.h"
#include "BVPProp.h"
#include "BVP_Resolv.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCRLoad.h"
#include "CTCR_Shape_data.h"
#include "CTCR_Shape_internal_types.h"
#include "CTCR_Shape_internal_types1.h"
#include "MemBVP.h"
#include "MemDerivPropagLow.h"
#include "anonymous_function.h"
#include "checkFinite.h"
#include "checkStoppingCriteria.h"
#include "eml_int_forloop_overflow_check.h"
#include "factoryConstruct.h"
#include "hasFiniteBounds.h"
#include "linearLeastSquares.h"
#include "projectBox.h"
#include "rt_nonfinite.h"
#include "xcopy.h"
#include "xgemv.h"
#include "blas.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo w_emlrtRSI{
    1,        // lineNo
    "driver", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+levenbergMarquardt/driver.p" // pathName
};

static emlrtRTEInfo g_emlrtRTEI{
    1,        // lineNo
    1,        // colNo
    "driver", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+levenbergMarquardt/driver.p" // pName
};

static emlrtECInfo emlrtECI{
    1,        // nDims
    1,        // lineNo
    1,        // colNo
    "driver", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+levenbergMarquardt/driver.p" // pName
};

static emlrtBCInfo w_emlrtBCI{
    -1,       // iFirst
    -1,       // iLast
    1,        // lineNo
    1,        // colNo
    "",       // aName
    "driver", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+levenbergMarquardt/driver.p", // pName
    0                               // checkKind
};

static emlrtECInfo b_emlrtECI{
    -1,       // nDims
    1,        // lineNo
    1,        // colNo
    "driver", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+levenbergMarquardt/driver.p" // pName
};

// Function Declarations
static void plus(const emlrtStack &sp, coder::array<real_T, 1U> &in1,
                 const coder::array<real_T, 1U> &in2,
                 const coder::array<real_T, 1U> &in3);

// Function Definitions
static void plus(const emlrtStack &sp, coder::array<real_T, 1U> &in1,
                 const coder::array<real_T, 1U> &in2,
                 const coder::array<real_T, 1U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&g_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = in2[i * stride_0_0] + in3[i * stride_1_0];
  }
}

namespace coder {
namespace optim {
namespace coder {
namespace levenbergMarquardt {
real_T driver(const emlrtStack &sp, const anonymous_function &fun,
              const ::coder::array<real_T, 1U> &x0,
              ::coder::array<real_T, 1U> &x,
              ::coder::array<real_T, 2U> &fCurrent, char_T output_algorithm[19],
              ::coder::array<real_T, 1U> &lambda_lower,
              ::coder::array<real_T, 1U> &lambda_upper,
              ::coder::array<real_T, 2U> &jacobian, real_T *exitflag,
              real_T &output_iterations, real_T &output_funcCount,
              real_T &output_stepsize, real_T &output_firstorderopt)
{
  static const char_T b_cv[19]{'l', 'e', 'v', 'e', 'n', 'b', 'e', 'r', 'g', '-',
                               'm', 'a', 'r', 'q', 'u', 'a', 'r', 'd', 't'};
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  b_anonymous_function b_this;
  array<real_T, 2U> augJacobian;
  array<real_T, 2U> fNew;
  array<real_T, 2U> varargout_1;
  array<real_T, 2U> varargout_2;
  array<real_T, 1U> dx;
  array<real_T, 1U> gradf;
  array<real_T, 1U> rhs;
  array<real_T, 1U> xp;
  array<boolean_T, 1U> hasLB;
  array<boolean_T, 1U> hasUB;
  b_struct_T vd_emlrtRSI;
  emlrtStack b_st;
  emlrtStack st;
  real_T absx;
  real_T b_gamma;
  real_T funDiff;
  real_T resnorm;
  real_T resnormNew;
  int32_T b_iv[2];
  int32_T b_exitflag;
  int32_T funcCount;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T iter;
  int32_T loop_ub;
  int32_T m;
  int32_T m_temp;
  int32_T n;
  boolean_T evalOK;
  boolean_T exitg1;
  boolean_T stepSuccessful;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  for (i = 0; i < 19; i++) {
    output_algorithm[i] = b_cv[i];
  }
  n = x0.size(0);
  funcCount = 1;
  gradf.set_size(&g_emlrtRTEI, &sp, x0.size(0));
  dx.set_size(&g_emlrtRTEI, &sp, x0.size(0));
  loop_ub = x0.size(0);
  for (i = 0; i < loop_ub; i++) {
    dx[i] = rtInf;
  }
  funDiff = rtInf;
  iter = 0;
  hasLB.set_size(&g_emlrtRTEI, &sp, x0.size(0));
  hasUB.set_size(&g_emlrtRTEI, &sp, x0.size(0));
  st.site = &w_emlrtRSI;
  utils::hasFiniteBounds(st, x0.size(0), hasLB, hasUB);
  x.set_size(&g_emlrtRTEI, &sp, x0.size(0));
  loop_ub = x0.size(0);
  for (i = 0; i < loop_ub; i++) {
    x[i] = x0[i];
  }
  st.site = &w_emlrtRSI;
  b_st.site = &s_emlrtRSI;
  BVP_Resolv_anonFcn1(
      b_st, fun.workspace.ctcr_construc, fun.workspace.ctcr_carac,
      fun.workspace.ctcr_load, fun.workspace.bvp_prop, fun.workspace.mem_bvp,
      fun.workspace.mem_deriv_propag_low, x0, varargout_1, jacobian);
  m_temp = varargout_1.size(0);
  m = varargout_1.size(0);
  fCurrent.set_size(&g_emlrtRTEI, &sp, varargout_1.size(0), 1);
  fNew.set_size(&g_emlrtRTEI, &sp, varargout_1.size(0), 1);
  st.site = &w_emlrtRSI;
  if (varargout_1.size(0) > 2147483646) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (b_exitflag = 0; b_exitflag < m; b_exitflag++) {
    if (b_exitflag + 1 > varargout_1.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_exitflag + 1, 1, varargout_1.size(0),
                                    &w_emlrtBCI, (emlrtConstCTX)&sp);
    }
    if (b_exitflag + 1 > fCurrent.size(0)) {
      emlrtDynamicBoundsCheckR2012b(b_exitflag + 1, 1, fCurrent.size(0),
                                    &w_emlrtBCI, (emlrtConstCTX)&sp);
    }
    fCurrent[b_exitflag] = varargout_1[b_exitflag];
  }
  i = varargout_1.size(0) + x0.size(0);
  augJacobian.set_size(&g_emlrtRTEI, &sp, i, x0.size(0));
  rhs.set_size(&g_emlrtRTEI, &sp, i);
  st.site = &w_emlrtRSI;
  i1 = varargout_1.size(0) + x0.size(0);
  LAPACKE_dlacpy_work(102, 'A', (ptrdiff_t)varargout_1.size(0),
                      (ptrdiff_t)x0.size(0), &(jacobian.data())[0],
                      (ptrdiff_t)varargout_1.size(0), &(augJacobian.data())[0],
                      (ptrdiff_t)i1);
  if (varargout_1.size(0) < 1) {
    resnorm = 0.0;
  } else {
    n_t = (ptrdiff_t)varargout_1.size(0);
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    resnorm = ddot(&n_t, &fCurrent[0], &incx_t, &fCurrent[0], &incy_t);
  }
  st.site = &w_emlrtRSI;
  evalOK = validate::checkFinite(st, fCurrent, varargout_1.size(0));
  if (!evalOK) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &g_emlrtRTEI, "optimlib_codegen:common:NonFiniteInitialObjective",
        "optimlib_codegen:common:NonFiniteInitialObjective", 0);
  }
  st.site = &w_emlrtRSI;
  utils::FiniteDifferences::factoryConstruct(st, b_this, x0.size(0),
                                             varargout_1.size(0), vd_emlrtRSI);
  b_gamma = 1.0;
  st.site = &w_emlrtRSI;
  st.site = &w_emlrtRSI;
  if (x0.size(0) > 2147483646) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (b_exitflag = 0; b_exitflag < n; b_exitflag++) {
    st.site = &w_emlrtRSI;
    internal::blas::xcopy(st, n, augJacobian, (i * (b_exitflag + 1) - n) + 1);
    i2 = (m_temp + b_exitflag) + 1;
    if ((i2 < 1) || (i2 > augJacobian.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, augJacobian.size(0), &w_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if (b_exitflag + 1 > augJacobian.size(1)) {
      emlrtDynamicBoundsCheckR2012b(b_exitflag + 1, 1, augJacobian.size(1),
                                    &w_emlrtBCI, (emlrtConstCTX)&sp);
    }
    augJacobian[(i2 + augJacobian.size(0) * b_exitflag) - 1] = 1.0;
  }
  st.site = &w_emlrtRSI;
  LAPACKE_dlacpy_work(102, 'A', (ptrdiff_t)varargout_1.size(0),
                      (ptrdiff_t)x0.size(0), &(augJacobian.data())[0],
                      (ptrdiff_t)i1, &(jacobian.data())[0],
                      (ptrdiff_t)varargout_1.size(0));
  st.site = &w_emlrtRSI;
  evalOK = validate::checkFinite(st, augJacobian, i, x0.size(0));
  if (!evalOK) {
    emlrtErrorWithMessageIdR2018a(
        &sp, &g_emlrtRTEI, "optimlib_codegen:common:NonFiniteInitialJacobian",
        "optimlib_codegen:common:NonFiniteInitialJacobian", 0);
  }
  st.site = &w_emlrtRSI;
  internal::blas::xgemv(varargout_1.size(0), x0.size(0), jacobian,
                        varargout_1.size(0), fCurrent, gradf);
  xp.set_size(&g_emlrtRTEI, &sp, gradf.size(0));
  loop_ub = gradf.size(0);
  for (i1 = 0; i1 < loop_ub; i1++) {
    xp[i1] = -gradf[i1];
  }
  st.site = &w_emlrtRSI;
  projectBox(st, x0, xp, hasLB, hasUB);
  if (gradf.size(0) == 0) {
    resnormNew = 0.0;
  } else {
    resnormNew = 0.0;
    i1 = gradf.size(0);
    for (loop_ub = 0; loop_ub < i1; loop_ub++) {
      absx = muDoubleScalarAbs(gradf[loop_ub]);
      if (muDoubleScalarIsNaN(absx) || (absx > resnormNew)) {
        resnormNew = absx;
      }
    }
  }
  absx = muDoubleScalarMax(resnormNew, 1.0);
  stepSuccessful = true;
  st.site = &w_emlrtRSI;
  b_exitflag = checkStoppingCriteria(gradf, absx, x0, dx);
  exitg1 = false;
  while ((!exitg1) && (b_exitflag == -5)) {
    boolean_T guard1;
    st.site = &w_emlrtRSI;
    varargout_1.set_size(&g_emlrtRTEI, &st, fCurrent.size(0), 1);
    loop_ub = fCurrent.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      varargout_1[i1] = -fCurrent[i1];
    }
    if (m_temp >= 1) {
      n_t = (ptrdiff_t)m_temp;
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      dcopy(&n_t, &varargout_1[0], &incx_t, &(rhs.data())[0], &incy_t);
    }
    st.site = &w_emlrtRSI;
    internal::blas::xcopy(st, n, rhs, m_temp + 1);
    st.site = &w_emlrtRSI;
    linearLeastSquares(st, augJacobian, rhs, dx, i, n);
    if ((x.size(0) != dx.size(0)) && ((x.size(0) != 1) && (dx.size(0) != 1))) {
      emlrtDimSizeImpxCheckR2021b(x.size(0), dx.size(0), &emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    if (x.size(0) == dx.size(0)) {
      xp.set_size(&g_emlrtRTEI, &sp, x.size(0));
      loop_ub = x.size(0);
      for (i1 = 0; i1 < loop_ub; i1++) {
        xp[i1] = x[i1] + dx[i1];
      }
    } else {
      st.site = &w_emlrtRSI;
      plus(st, xp, x, dx);
    }
    st.site = &w_emlrtRSI;
    b_st.site = &s_emlrtRSI;
    BVP_Resolv_anonFcn1(
        b_st, fun.workspace.ctcr_construc, fun.workspace.ctcr_carac,
        fun.workspace.ctcr_load, fun.workspace.bvp_prop, fun.workspace.mem_bvp,
        fun.workspace.mem_deriv_propag_low, xp, varargout_1, varargout_2);
    if (m < 1) {
      i1 = 0;
    } else {
      if (augJacobian.size(0) < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, augJacobian.size(0), &w_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if ((m_temp < 1) || (m_temp > augJacobian.size(0))) {
        emlrtDynamicBoundsCheckR2012b(m_temp, 1, augJacobian.size(0),
                                      &w_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = m_temp;
    }
    b_iv[0] = i1;
    b_iv[1] = augJacobian.size(1);
    emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, varargout_2.size(), 2,
                                  &b_emlrtECI, (emlrtCTX)&sp);
    loop_ub = varargout_2.size(1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_exitflag = varargout_2.size(0);
      for (i2 = 0; i2 < b_exitflag; i2++) {
        augJacobian[i2 + augJacobian.size(0) * i1] =
            varargout_2[i2 + varargout_2.size(0) * i1];
      }
    }
    st.site = &w_emlrtRSI;
    if (m_temp > 2147483646) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (b_exitflag = 0; b_exitflag < m; b_exitflag++) {
      if (b_exitflag + 1 > varargout_1.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_exitflag + 1, 1, varargout_1.size(0),
                                      &w_emlrtBCI, (emlrtConstCTX)&sp);
      }
      if (b_exitflag + 1 > fNew.size(0)) {
        emlrtDynamicBoundsCheckR2012b(b_exitflag + 1, 1, fNew.size(0),
                                      &w_emlrtBCI, (emlrtConstCTX)&sp);
      }
      fNew[b_exitflag] = varargout_1[b_exitflag];
    }
    if (m_temp < 1) {
      resnormNew = 0.0;
    } else {
      n_t = (ptrdiff_t)m_temp;
      incx_t = (ptrdiff_t)1;
      incy_t = (ptrdiff_t)1;
      resnormNew = ddot(&n_t, &fNew[0], &incx_t, &fNew[0], &incy_t);
    }
    st.site = &w_emlrtRSI;
    evalOK = validate::checkFinite(st, fNew, m_temp);
    funcCount++;
    guard1 = false;
    if ((resnormNew < resnorm) && evalOK) {
      iter++;
      funDiff = muDoubleScalarAbs(resnormNew - resnorm) / resnorm;
      fCurrent.set_size(&g_emlrtRTEI, &sp, fNew.size(0), 1);
      loop_ub = fNew.size(0);
      for (i1 = 0; i1 < loop_ub; i1++) {
        fCurrent[i1] = fNew[i1];
      }
      resnorm = resnormNew;
      st.site = &w_emlrtRSI;
      LAPACKE_dlacpy_work(102, 'A', (ptrdiff_t)m, (ptrdiff_t)n,
                          &(augJacobian.data())[0], (ptrdiff_t)(m_temp + n),
                          &(jacobian.data())[0], (ptrdiff_t)m);
      st.site = &w_emlrtRSI;
      evalOK = validate::checkFinite(st, jacobian, m_temp, n);
      if (evalOK) {
        if (x.size(0) != xp.size(0)) {
          emlrtSubAssignSizeCheck1dR2017a(x.size(0), xp.size(0), &b_emlrtECI,
                                          (emlrtConstCTX)&sp);
        }
        x.set_size(&g_emlrtRTEI, &sp, xp.size(0));
        loop_ub = xp.size(0);
        for (i1 = 0; i1 < loop_ub; i1++) {
          x[i1] = xp[i1];
        }
        if (stepSuccessful) {
          b_gamma *= 0.1;
        }
        stepSuccessful = true;
        guard1 = true;
      } else {
        b_exitflag = 2;
        st.site = &w_emlrtRSI;
        internal::blas::xcopy(st, m_temp * n, jacobian);
        exitg1 = true;
      }
    } else {
      b_gamma *= 10.0;
      stepSuccessful = false;
      st.site = &w_emlrtRSI;
      LAPACKE_dlacpy_work(102, 'A', (ptrdiff_t)m, (ptrdiff_t)n,
                          &(jacobian.data())[0], (ptrdiff_t)m,
                          &(augJacobian.data())[0], (ptrdiff_t)(m_temp + n));
      guard1 = true;
    }
    if (guard1) {
      st.site = &w_emlrtRSI;
      resnormNew = muDoubleScalarSqrt(b_gamma);
      st.site = &w_emlrtRSI;
      if (n > 2147483646) {
        b_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(b_st);
      }
      for (b_exitflag = 0; b_exitflag < n; b_exitflag++) {
        st.site = &w_emlrtRSI;
        internal::blas::xcopy(st, n, augJacobian,
                              (i * (b_exitflag + 1) - n) + 1);
        i1 = (m_temp + b_exitflag) + 1;
        if ((i1 < 1) || (i1 > augJacobian.size(0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, augJacobian.size(0), &w_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (b_exitflag + 1 > augJacobian.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_exitflag + 1, 1, augJacobian.size(1),
                                        &w_emlrtBCI, (emlrtConstCTX)&sp);
        }
        augJacobian[(i1 + augJacobian.size(0) * b_exitflag) - 1] = resnormNew;
      }
      st.site = &w_emlrtRSI;
      internal::blas::xgemv(m_temp, n, jacobian, m_temp, fCurrent, gradf);
      xp.set_size(&g_emlrtRTEI, &sp, gradf.size(0));
      loop_ub = gradf.size(0);
      for (i1 = 0; i1 < loop_ub; i1++) {
        xp[i1] = -gradf[i1];
      }
      st.site = &w_emlrtRSI;
      projectBox(st, x, xp, hasLB, hasUB);
      st.site = &w_emlrtRSI;
      b_exitflag = b_checkStoppingCriteria(gradf, absx, funDiff, x, dx,
                                           funcCount, stepSuccessful, iter);
      if (b_exitflag != -5) {
        exitg1 = true;
      }
    }
  }
  if (gradf.size(0) == 0) {
    output_firstorderopt = 0.0;
  } else {
    output_firstorderopt = 0.0;
    i = gradf.size(0);
    for (loop_ub = 0; loop_ub < i; loop_ub++) {
      absx = muDoubleScalarAbs(gradf[loop_ub]);
      if (muDoubleScalarIsNaN(absx) || (absx > output_firstorderopt)) {
        output_firstorderopt = absx;
      }
    }
  }
  if (dx.size(0) == 0) {
    output_stepsize = 0.0;
  } else {
    n_t = (ptrdiff_t)dx.size(0);
    incx_t = (ptrdiff_t)1;
    output_stepsize = dnrm2(&n_t, &(dx.data())[0], &incx_t);
  }
  lambda_lower.set_size(&g_emlrtRTEI, &sp, x0.size(0));
  loop_ub = x0.size(0);
  lambda_upper.set_size(&g_emlrtRTEI, &sp, x0.size(0));
  for (i = 0; i < loop_ub; i++) {
    lambda_lower[i] = 0.0;
    lambda_upper[i] = 0.0;
  }
  *exitflag = b_exitflag;
  output_iterations = iter;
  output_funcCount = funcCount;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return resnorm;
}

} // namespace levenbergMarquardt
} // namespace coder
} // namespace optim
} // namespace coder

// End of code generation (driver.cpp)
