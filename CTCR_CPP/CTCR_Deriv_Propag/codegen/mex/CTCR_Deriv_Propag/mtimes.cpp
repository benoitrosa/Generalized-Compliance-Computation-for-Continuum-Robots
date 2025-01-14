//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// mtimes.cpp
//
// Code generation for function 'mtimes'
//

// Include files
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "coder_array.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo gd_emlrtRSI{
    142,      // lineNo
    "mtimes", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" // pathName
};

static emlrtRSInfo hd_emlrtRSI{
    178,           // lineNo
    "mtimes_blas", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" // pathName
};

static emlrtRTEInfo ac_emlrtRTEI{
    218,      // lineNo
    20,       // colNo
    "mtimes", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" // pName
};

static emlrtRTEInfo bc_emlrtRTEI{
    140,      // lineNo
    5,        // colNo
    "mtimes", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+blas/"
    "mtimes.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
namespace blas {
void mtimes(const real_T A[9], const real_T B[3], real_T C[3])
{
  real_T d;
  real_T d1;
  real_T d2;
  d = B[0];
  d1 = B[1];
  d2 = B[2];
  for (int32_T i{0}; i < 3; i++) {
    int32_T aoffset;
    aoffset = i * 3;
    C[i] = (A[aoffset] * d + A[aoffset + 1] * d1) + A[aoffset + 2] * d2;
  }
}

void mtimes(const emlrtStack &sp, const ::coder::array<real_T, 2U> &A,
            const ::coder::array<real_T, 2U> &B, ::coder::array<real_T, 2U> &C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((A.size(0) == 0) || (A.size(1) == 0) || (B.size(0) == 0) ||
      (B.size(1) == 0)) {
    int32_T loop_ub;
    C.set_size(&bc_emlrtRTEI, &sp, A.size(0), B.size(1));
    loop_ub = A.size(0) * B.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      C[i] = 0.0;
    }
  } else {
    st.site = &gd_emlrtRSI;
    b_st.site = &hd_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A.size(0);
    n_t = (ptrdiff_t)B.size(1);
    k_t = (ptrdiff_t)A.size(1);
    lda_t = (ptrdiff_t)A.size(0);
    ldb_t = (ptrdiff_t)B.size(0);
    ldc_t = (ptrdiff_t)A.size(0);
    C.set_size(&ac_emlrtRTEI, &b_st, A.size(0), B.size(1));
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1,
          &(((::coder::array<real_T, 2U> *)&A)->data())[0], &lda_t,
          &(((::coder::array<real_T, 2U> *)&B)->data())[0], &ldb_t, &beta1,
          &(C.data())[0], &ldc_t);
  }
}

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (mtimes.cpp)
