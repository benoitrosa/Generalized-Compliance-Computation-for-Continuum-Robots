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

} // namespace blas
} // namespace internal
} // namespace coder

// End of code generation (mtimes.cpp)
