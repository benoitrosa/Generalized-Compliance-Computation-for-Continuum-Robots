//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// pinv.cpp
//
// Code generation for function 'pinv'
//

// Include files
#include "pinv.h"
#include "CTCR_Deriv_Propag_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "svd.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo fc_emlrtRSI{
    42,         // lineNo
    "eml_pinv", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/pinv.m" // pathName
};

static emlrtRSInfo gc_emlrtRSI{
    46,         // lineNo
    "eml_pinv", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/pinv.m" // pathName
};

static emlrtRSInfo hc_emlrtRSI{
    57,         // lineNo
    "eml_pinv", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/pinv.m" // pathName
};

static emlrtRSInfo ic_emlrtRSI{
    68,         // lineNo
    "eml_pinv", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/pinv.m" // pathName
};

static emlrtRSInfo jc_emlrtRSI{
    69,         // lineNo
    "eml_pinv", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/pinv.m" // pathName
};

static emlrtRSInfo kc_emlrtRSI{
    72,         // lineNo
    "eml_pinv", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/pinv.m" // pathName
};

static emlrtRSInfo lc_emlrtRSI{
    29,             // lineNo
    "anyNonFinite", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "anyNonFinite.m" // pathName
};

static emlrtRSInfo mc_emlrtRSI{
    44,          // lineNo
    "vAllOrAny", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "vAllOrAny.m" // pathName
};

static emlrtRSInfo nc_emlrtRSI{
    103,                  // lineNo
    "flatVectorAllOrAny", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "vAllOrAny.m" // pathName
};

static emlrtRSInfo bd_emlrtRSI{
    37,      // lineNo
    "xscal", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "xscal.m" // pathName
};

static emlrtRSInfo cd_emlrtRSI{
    49,           // lineNo
    "xscal_blas", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "xscal.m" // pathName
};

static emlrtRSInfo dd_emlrtRSI{
    75,      // lineNo
    "xgemm", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "xgemm.m" // pathName
};

static emlrtRSInfo ed_emlrtRSI{
    92,           // lineNo
    "xgemm_blas", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "xgemm.m" // pathName
};

static emlrtRTEInfo jb_emlrtRTEI{
    39,     // lineNo
    1,      // colNo
    "pinv", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/pinv.m" // pName
};

static emlrtRTEInfo kb_emlrtRTEI{
    43,     // lineNo
    5,      // colNo
    "pinv", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/matfun/pinv.m" // pName
};

// Function Definitions
namespace coder {
void eml_pinv(const emlrtStack &sp, const ::coder::array<real_T, 2U> &A,
              real_T tol, ::coder::array<real_T, 2U> &X)
{
  ptrdiff_t incx_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t n_t;
  array<real_T, 2U> U;
  array<real_T, 2U> V;
  array<real_T, 1U> s;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T a;
  real_T beta1;
  int32_T k;
  int32_T n;
  int32_T r;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  n = A.size(1);
  X.set_size(&jb_emlrtRTEI, &sp, A.size(1), A.size(0));
  r = A.size(0) * A.size(1);
  for (k = 0; k < r; k++) {
    X[k] = 0.0;
  }
  if ((A.size(0) != 0) && (A.size(1) != 0)) {
    boolean_T p;
    st.site = &fc_emlrtRSI;
    b_st.site = &lc_emlrtRSI;
    c_st.site = &mc_emlrtRSI;
    p = true;
    d_st.site = &nc_emlrtRSI;
    if (r > 2147483646) {
      e_st.site = &t_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (k = 0; k < r; k++) {
      if ((!p) || (muDoubleScalarIsInf(A[k]) || muDoubleScalarIsNaN(A[k]))) {
        p = false;
      }
    }
    if (!p) {
      X.set_size(&kb_emlrtRTEI, &sp, A.size(1), A.size(0));
      for (k = 0; k < r; k++) {
        X[k] = rtNaN;
      }
    } else {
      st.site = &gc_emlrtRSI;
      internal::svd(st, A, U, s, V);
      r = 0;
      st.site = &hc_emlrtRSI;
      if (A.size(1) > 2147483646) {
        b_st.site = &t_emlrtRSI;
        check_forloop_overflow_error(b_st);
      }
      k = 0;
      while ((k <= n - 1) && (s[k] > tol)) {
        r++;
        k++;
      }
      if (r > 0) {
        st.site = &ic_emlrtRSI;
        if (r > 2147483646) {
          b_st.site = &t_emlrtRSI;
          check_forloop_overflow_error(b_st);
        }
        for (k = 0; k < r; k++) {
          a = 1.0 / s[k];
          st.site = &jc_emlrtRSI;
          if (n >= 1) {
            b_st.site = &bd_emlrtRSI;
            c_st.site = &cd_emlrtRSI;
            n_t = (ptrdiff_t)n;
            incx_t = (ptrdiff_t)1;
            dscal(&n_t, &a, &V[k * n], &incx_t);
          }
        }
        st.site = &kc_emlrtRSI;
        b_st.site = &dd_emlrtRSI;
        c_st.site = &ed_emlrtRSI;
        a = 1.0;
        beta1 = 0.0;
        TRANSB1 = 'C';
        TRANSA1 = 'N';
        incx_t = (ptrdiff_t)A.size(1);
        n_t = (ptrdiff_t)A.size(0);
        k_t = (ptrdiff_t)r;
        lda_t = (ptrdiff_t)A.size(1);
        ldb_t = (ptrdiff_t)A.size(0);
        ldc_t = (ptrdiff_t)A.size(1);
        dgemm(&TRANSA1, &TRANSB1, &incx_t, &n_t, &k_t, &a, &(V.data())[0],
              &lda_t, &(U.data())[0], &ldb_t, &beta1, &(X.data())[0], &ldc_t);
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (pinv.cpp)
