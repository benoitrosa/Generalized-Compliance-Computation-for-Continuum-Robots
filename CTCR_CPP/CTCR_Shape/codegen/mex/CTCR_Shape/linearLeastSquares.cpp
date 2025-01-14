//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// linearLeastSquares.cpp
//
// Code generation for function 'linearLeastSquares'
//

// Include files
#include "linearLeastSquares.h"
#include "CTCR_Shape_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo tc_emlrtRSI{
    1,                    // lineNo
    "linearLeastSquares", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+levenbergMarquardt/linearLeastSquares.p" // pathName
};

static emlrtRSInfo uc_emlrtRSI{
    93,                   // lineNo
    "validateattributes", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/lang/"
    "validateattributes.m" // pathName
};

static emlrtRSInfo vc_emlrtRSI{
    63,       // lineNo
    "xgeqp3", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo wc_emlrtRSI{
    98,             // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo xc_emlrtRSI{
    138,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo yc_emlrtRSI{
    141,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo ad_emlrtRSI{
    143,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo bd_emlrtRSI{
    148,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo cd_emlrtRSI{
    151,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo dd_emlrtRSI{
    154,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo ed_emlrtRSI{
    158,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo fd_emlrtRSI{
    31,         // lineNo
    "xunormqr", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

static emlrtRSInfo gd_emlrtRSI{
    102,              // lineNo
    "ceval_xunormqr", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

static emlrtRSInfo hd_emlrtRSI{
    62,      // lineNo
    "xtrsv", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "xtrsv.m" // pathName
};

static emlrtRSInfo id_emlrtRSI{
    75,           // lineNo
    "xtrsv_blas", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "xtrsv.m" // pathName
};

static emlrtBCInfo fu_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    1,                    // lineNo
    1,                    // colNo
    "",                   // aName
    "linearLeastSquares", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+levenbergMarquardt/linearLeastSquares.p", // pName
    0                                           // checkKind
};

static emlrtECInfo y_emlrtECI{
    -1,                   // nDims
    1,                    // lineNo
    1,                    // colNo
    "linearLeastSquares", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+levenbergMarquardt/linearLeastSquares.p" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    10,             // lineNo
    23,             // colNo
    "validatesize", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+valattr/"
    "validatesize.m" // pName
};

static emlrtRTEInfo eb_emlrtRTEI{
    15,             // lineNo
    19,             // colNo
    "validatesize", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+valattr/"
    "validatesize.m" // pName
};

static emlrtRTEInfo fb_emlrtRTEI{
    18,              // lineNo
    23,              // colNo
    "validatenumel", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+valattr/"
    "validatenumel.m" // pName
};

static emlrtRTEInfo gb_emlrtRTEI{
    44,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" // pName
};

static emlrtRTEInfo hb_emlrtRTEI{
    47,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" // pName
};

static emlrtRTEInfo de_emlrtRTEI{
    1,                    // lineNo
    1,                    // colNo
    "linearLeastSquares", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/optimlib/+optim/+coder/"
    "+levenbergMarquardt/linearLeastSquares.p" // pName
};

static emlrtRTEInfo ee_emlrtRTEI{
    92,       // lineNo
    22,       // colNo
    "xgeqp3", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pName
};

static emlrtRTEInfo fe_emlrtRTEI{
    105,      // lineNo
    1,        // colNo
    "xgeqp3", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pName
};

static emlrtRTEInfo ge_emlrtRTEI{
    97,       // lineNo
    5,        // colNo
    "xgeqp3", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pName
};

// Function Definitions
namespace coder {
namespace optim {
namespace coder {
namespace levenbergMarquardt {
void linearLeastSquares(const emlrtStack &sp, ::coder::array<real_T, 2U> &lhs,
                        ::coder::array<real_T, 1U> &rhs,
                        ::coder::array<real_T, 1U> &dx, int32_T m, int32_T n)
{
  static const char_T b_fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                  '_', 'd', 'o', 'r', 'm', 'q', 'r'};
  static const char_T fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'e', 'q', 'p', '3'};
  ptrdiff_t incx_t;
  ptrdiff_t info_t;
  ptrdiff_t lda_t;
  array<ptrdiff_t, 1U> jpvt_t;
  array<real_T, 1U> tau;
  array<int32_T, 1U> jpvt;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T sz[2];
  int32_T t0_f2[2];
  int32_T i;
  int32_T ma;
  int32_T minmana;
  int32_T na;
  char_T DIAGA1;
  char_T TRANSA1;
  char_T UPLO1;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  t0_f2[0] = m;
  t0_f2[1] = n;
  st.site = &tc_emlrtRSI;
  b_st.site = &uc_emlrtRSI;
  sz[0] = m;
  sz[1] = n;
  p = true;
  for (ma = 0; ma < 2; ma++) {
    if ((!p) || (t0_f2[ma] != sz[ma])) {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &db_emlrtRTEI,
                                  "MATLAB:validateattributes:badSizeArray",
                                  "MATLAB:validateattributes:badSizeArray", 0);
  }
  p = true;
  for (ma = 0; ma < 2; ma++) {
    if ((!p) || (t0_f2[ma] != lhs.size(ma))) {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &eb_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:incorrectSize", 3, 4, 5, "Input");
  }
  t0_f2[0] = m;
  t0_f2[1] = 1;
  st.site = &tc_emlrtRSI;
  b_st.site = &uc_emlrtRSI;
  sz[0] = m;
  sz[1] = 1;
  p = true;
  for (ma = 0; ma < 2; ma++) {
    if ((!p) || (t0_f2[ma] != sz[ma])) {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &db_emlrtRTEI,
                                  "MATLAB:validateattributes:badSizeArray",
                                  "MATLAB:validateattributes:badSizeArray", 0);
  }
  p = true;
  for (ma = 0; ma < 2; ma++) {
    if (p) {
      if (ma + 1 <= 1) {
        i = rhs.size(0);
      } else {
        i = 1;
      }
      if (t0_f2[ma] != i) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &eb_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:incorrectSize", 3, 4, 5, "Input");
  }
  st.site = &tc_emlrtRSI;
  b_st.site = &uc_emlrtRSI;
  if (dx.size(0) != n) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &fb_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectNumel",
        "MATLAB:incorrectNumel", 5, 4, 5, "input", 12, n);
  }
  jpvt.set_size(&de_emlrtRTEI, &sp, n);
  for (i = 0; i < n; i++) {
    jpvt[i] = 0;
  }
  st.site = &tc_emlrtRSI;
  b_st.site = &vc_emlrtRSI;
  ma = lhs.size(0);
  na = lhs.size(1);
  minmana = muIntScalarMin_sint32(ma, na);
  tau.set_size(&ee_emlrtRTEI, &b_st, minmana);
  if ((lhs.size(0) == 0) || (lhs.size(1) == 0) || (m < 1) || (n < 1)) {
    tau.set_size(&ge_emlrtRTEI, &b_st, minmana);
    for (i = 0; i < minmana; i++) {
      tau[i] = 0.0;
    }
    c_st.site = &wc_emlrtRSI;
    if (n > 2147483646) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (ma = 0; ma < n; ma++) {
      jpvt[ma] = ma + 1;
    }
  } else {
    jpvt_t.set_size(&fe_emlrtRTEI, &b_st, n);
    for (i = 0; i < n; i++) {
      jpvt_t[i] = (ptrdiff_t)0.0;
    }
    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)m, (ptrdiff_t)n, &(lhs.data())[0],
                            (ptrdiff_t)lhs.size(0), &(jpvt_t.data())[0],
                            &(tau.data())[0]);
    c_st.site = &xc_emlrtRSI;
    if ((int32_T)info_t != 0) {
      p = true;
      if ((int32_T)info_t != -4) {
        if ((int32_T)info_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&c_st, &gb_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &fname[0], 12, (int32_T)info_t);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      c_st.site = &yc_emlrtRSI;
      if (n > 2147483646) {
        d_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (na = 0; na < n; na++) {
        c_st.site = &ad_emlrtRSI;
        if (m > 2147483646) {
          d_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(d_st);
        }
        for (i = 0; i < m; i++) {
          lhs[na * ma + i] = rtNaN;
        }
      }
      na = muIntScalarMin_sint32(m, n) + 1;
      c_st.site = &bd_emlrtRSI;
      for (ma = 0; ma <= na - 2; ma++) {
        tau[ma] = rtNaN;
      }
      c_st.site = &cd_emlrtRSI;
      if ((na <= minmana) && (minmana > 2147483646)) {
        d_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (ma = na; ma <= minmana; ma++) {
        tau[ma - 1] = 0.0;
      }
      c_st.site = &dd_emlrtRSI;
      for (ma = 0; ma < n; ma++) {
        jpvt[ma] = ma + 1;
      }
    } else {
      c_st.site = &ed_emlrtRSI;
      if (n > 2147483646) {
        d_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(d_st);
      }
      for (ma = 0; ma < n; ma++) {
        jpvt[ma] = (int32_T)jpvt_t[ma];
      }
    }
  }
  st.site = &tc_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  if ((lhs.size(0) != 0) && (lhs.size(1) != 0) && (rhs.size(0) != 0)) {
    info_t = (ptrdiff_t)rhs.size(0);
    i = lhs.size(0);
    minmana = lhs.size(1);
    info_t = LAPACKE_dormqr(102, 'L', 'T', info_t, (ptrdiff_t)1,
                            (ptrdiff_t)muIntScalarMin_sint32(i, minmana),
                            &(lhs.data())[0], (ptrdiff_t)lhs.size(0),
                            &(tau.data())[0], &(rhs.data())[0], info_t);
    c_st.site = &gd_emlrtRSI;
    if ((int32_T)info_t != 0) {
      boolean_T b_p;
      p = true;
      b_p = false;
      if ((int32_T)info_t == -7) {
        b_p = true;
      } else if ((int32_T)info_t == -9) {
        b_p = true;
      } else if ((int32_T)info_t == -10) {
        b_p = true;
      }
      if (!b_p) {
        if ((int32_T)info_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&c_st, &gb_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(
              &c_st, &hb_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &b_fname[0], 12,
              (int32_T)info_t);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      na = rhs.size(0);
      rhs.set_size(&de_emlrtRTEI, &b_st, na);
      for (i = 0; i < na; i++) {
        rhs[i] = rtNaN;
      }
    }
  }
  if (n < 1) {
    na = 0;
  } else {
    i = rhs.size(0);
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &fu_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i = rhs.size(0);
    if (n > i) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i, &fu_emlrtBCI, (emlrtConstCTX)&sp);
    }
    na = n;
  }
  t0_f2[0] = 1;
  t0_f2[1] = na;
  st.site = &tc_emlrtRSI;
  internal::indexShapeCheck(st, rhs.size(0), t0_f2);
  st.site = &tc_emlrtRSI;
  tau.set_size(&de_emlrtRTEI, &st, na);
  for (i = 0; i < na; i++) {
    tau[i] = rhs[i];
  }
  if (n >= 1) {
    b_st.site = &hd_emlrtRSI;
    c_st.site = &id_emlrtRSI;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    info_t = (ptrdiff_t)n;
    lda_t = (ptrdiff_t)m;
    incx_t = (ptrdiff_t)1;
    dtrsv(&UPLO1, &TRANSA1, &DIAGA1, &info_t, &(lhs.data())[0], &lda_t,
          &(tau.data())[0], &incx_t);
  }
  i = dx.size(0);
  if (i != tau.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(i, tau.size(0), &y_emlrtECI,
                                    (emlrtConstCTX)&sp);
  }
  dx.set_size(&de_emlrtRTEI, &sp, tau.size(0));
  na = tau.size(0);
  for (i = 0; i < na; i++) {
    dx[i] = tau[i];
  }
  na = jpvt.size(0);
  for (i = 0; i < na; i++) {
    if ((jpvt[i] < 1) || (jpvt[i] > tau.size(0))) {
      emlrtDynamicBoundsCheckR2012b(jpvt[i], 1, tau.size(0), &fu_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
  }
  if (jpvt.size(0) != tau.size(0)) {
    emlrtSubAssignSizeCheck1dR2017a(jpvt.size(0), tau.size(0), &y_emlrtECI,
                                    (emlrtConstCTX)&sp);
  }
  na = tau.size(0);
  for (i = 0; i < na; i++) {
    dx[jpvt[i] - 1] = tau[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace levenbergMarquardt
} // namespace coder
} // namespace optim
} // namespace coder

// End of code generation (linearLeastSquares.cpp)
