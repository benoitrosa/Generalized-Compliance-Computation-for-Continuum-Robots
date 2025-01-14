//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_CTCR_Shape_api.cpp
//
// Code generation for function '_coder_CTCR_Shape_api'
//

// Include files
#include "_coder_CTCR_Shape_api.h"
#include "BVPProp.h"
#include "CTCRCarac.h"
#include "CTCRConstruc.h"
#include "CTCRLoad.h"
#include "CTCR_Shape.h"
#include "CTCR_Shape_data.h"
#include "CTCR_Shape_mexutil.h"
#include "CTCR_Shape_types.h"
#include "MemBVP.h"
#include "MemCJ.h"
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
#include "MemDerivPropagHigh.h"
#include "MemDerivPropagLow.h"
#include "MemY.h"
#include "MemYS.h"
#include "SimulationParam.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "coder_bounded_array.h"

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 1U> &ret);

static boolean_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 3U> &y);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[2]);

static const mxArray *b_emlrt_marshallOut(const coder::array<real_T, 3U> &u);

static const mxArray *b_emlrt_marshallOut(const coder::array<real_T, 2U> &u);

static const mxArray *b_emlrt_marshallOut(const coder::array<real_T, 5U> &u);

static const mxArray *b_emlrt_marshallOut(const coder::array<real_T, 4U> &u);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 3U> &ret);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[3]);

static const mxArray *c_emlrt_marshallOut(const coder::array<real_T, 2U> &u);

static const mxArray *c_emlrt_marshallOut(const coder::array<real_T, 3U> &u);

static const mxArray *c_emlrt_marshallOut(const coder::array<real_T, 4U> &u);

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[2]);

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 3U> &ret);

static boolean_T d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId);

static const mxArray *d_emlrt_marshallOut(const coder::array<real_T, 3U> &u);

static const mxArray *d_emlrt_marshallOut(const coder::array<real_T, 4U> &u);

static const mxArray *d_emlrt_marshallOut(const coder::array<real_T, 2U> &u);

static void e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static const mxArray *e_emlrt_marshallOut(const coder::array<real_T, 4U> &u);

static const mxArray *e_emlrt_marshallOut(const coder::array<real_T, 3U> &u);

static const mxArray *e_emlrt_marshallOut(const coder::array<real_T, 2U> &u);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             CTCRConstruc &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *ctcr_construc,
                             const char_T *identifier, CTCRConstruc &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 2U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 3U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, real_T y[3]);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, CTCRLoad &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *ctcr_load,
                             const char_T *identifier, CTCRLoad &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, CTCRCarac &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *ctcr_carac,
                             const char_T *identifier, CTCRCarac &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *IC,
                             const char_T *identifier,
                             coder::array<real_T, 1U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 1U> &y);

static void emlrt_marshallIn(const emlrtStack &sp,
                             const mxArray *simulation_param,
                             const char_T *identifier, SimulationParam &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             SimulationParam &y);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const struct0_T u);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const CTCRConstruc &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const SimulationParam &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemCJ &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const MemDerivPropagHigh &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemDT0 &u);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 4U> &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const MemDP0DS &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemDP0 &u);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 5U> &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const MemDR0DS &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemDR0 &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const MemDUZiDS &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemDUZi &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const MemDTiDS &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemDTi &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const MemDN0DS &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const MemDerivPropagLow &u);

static const mxArray *emlrt_marshallOut(const real_T u_data[],
                                        const int32_T u_size[2]);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const BVPProp &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemBVP &u);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 3U> &u);

static void f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static const mxArray *f_emlrt_marshallOut(const coder::array<real_T, 4U> &u);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 1U> &ret)
{
  static const int32_T dims{-1};
  int32_T i;
  boolean_T b{true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret.prealloc(i);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, i);
  ret.set(static_cast<real_T *>(emlrtMxGetData(src)), ret.size(0));
  emlrtDestroyArray(&src);
}

static boolean_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = d_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 3U> &y)
{
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[2])
{
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const coder::array<real_T, 3U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[3];
  int32_T i;
  y = nullptr;
  b_iv[0] = 3;
  b_iv[1] = u.size(1);
  b_iv[2] = u.size(2);
  m = emlrtCreateNumericArray(3, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(2); b_i++) {
    for (int32_T c_i{0}; c_i < u.size(1); c_i++) {
      pData[i] = u[3 * c_i + 3 * u.size(1) * b_i];
      pData[i + 1] = u[(3 * c_i + 3 * u.size(1) * b_i) + 1];
      pData[i + 2] = u[(3 * c_i + 3 * u.size(1) * b_i) + 2];
      i += 3;
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const coder::array<real_T, 2U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[2];
  int32_T i;
  y = nullptr;
  b_iv[0] = u.size(0);
  b_iv[1] = u.size(1);
  m = emlrtCreateNumericArray(2, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(1); b_i++) {
    for (int32_T c_i{0}; c_i < u.size(0); c_i++) {
      pData[i] = u[c_i + u.size(0) * b_i];
      i++;
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const coder::array<real_T, 5U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[5];
  int32_T i;
  y = nullptr;
  for (i = 0; i < 5; i++) {
    b_iv[i] = u.size(i);
  }
  m = emlrtCreateNumericArray(5, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(4); b_i++) {
    for (int32_T c_i{0}; c_i < u.size(3); c_i++) {
      for (int32_T d_i{0}; d_i < 3; d_i++) {
        for (int32_T e_i{0}; e_i < 4; e_i++) {
          pData[i] =
              u[((4 * e_i + 16 * d_i) + 48 * c_i) + 48 * u.size(3) * b_i];
          pData[i + 1] =
              u[(((4 * e_i + 16 * d_i) + 48 * c_i) + 48 * u.size(3) * b_i) + 1];
          pData[i + 2] =
              u[(((4 * e_i + 16 * d_i) + 48 * c_i) + 48 * u.size(3) * b_i) + 2];
          pData[i + 3] =
              u[(((4 * e_i + 16 * d_i) + 48 * c_i) + 48 * u.size(3) * b_i) + 3];
          i += 4;
        }
      }
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const coder::array<real_T, 4U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[4];
  int32_T i;
  y = nullptr;
  b_iv[0] = u.size(0);
  b_iv[1] = 3;
  b_iv[2] = u.size(2);
  b_iv[3] = u.size(3);
  m = emlrtCreateNumericArray(4, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(3); b_i++) {
    for (int32_T c_i{0}; c_i < u.size(2); c_i++) {
      for (int32_T d_i{0}; d_i < u.size(0); d_i++) {
        pData[i] =
            u[(d_i + u.size(0) * 3 * c_i) + u.size(0) * 3 * u.size(2) * b_i];
        i++;
      }
      for (int32_T d_i{0}; d_i < u.size(0); d_i++) {
        pData[i] = u[((d_i + u.size(0)) + u.size(0) * 3 * c_i) +
                     u.size(0) * 3 * u.size(2) * b_i];
        i++;
      }
      for (int32_T d_i{0}; d_i < u.size(0); d_i++) {
        pData[i] = u[((d_i + u.size(0) * 2) + u.size(0) * 3 * c_i) +
                     u.size(0) * 3 * u.size(2) * b_i];
        i++;
      }
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y)
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 3U> &ret)
{
  static const int32_T dims[3]{3, 3, -1};
  int32_T b_iv[3];
  boolean_T bv[3]{false, false, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 3U,
                            (const void *)&dims[0], &bv[0], &b_iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, b_iv[0], b_iv[1],
               b_iv[2]);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[3])
{
  static const int32_T dims[2]{1, 3};
  real_T(*r)[3];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[3])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  ret[2] = (*r)[2];
  emlrtDestroyArray(&src);
}

static const mxArray *c_emlrt_marshallOut(const coder::array<real_T, 2U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[2];
  int32_T i;
  y = nullptr;
  b_iv[0] = 3;
  b_iv[1] = u.size(1);
  m = emlrtCreateNumericArray(2, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(1); b_i++) {
    pData[i] = u[3 * b_i];
    pData[i + 1] = u[3 * b_i + 1];
    pData[i + 2] = u[3 * b_i + 2];
    i += 3;
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const coder::array<real_T, 4U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[4];
  int32_T i;
  y = nullptr;
  b_iv[0] = 3;
  b_iv[1] = 3;
  b_iv[2] = 3;
  b_iv[3] = u.size(3);
  m = emlrtCreateNumericArray(4, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(3); b_i++) {
    for (int32_T c_i{0}; c_i < 3; c_i++) {
      for (int32_T d_i{0}; d_i < 3; d_i++) {
        pData[i] = u[(3 * d_i + 9 * c_i) + 27 * b_i];
        pData[i + 1] = u[((3 * d_i + 9 * c_i) + 27 * b_i) + 1];
        pData[i + 2] = u[((3 * d_i + 9 * c_i) + 27 * b_i) + 2];
        i += 3;
      }
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const coder::array<real_T, 3U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[3];
  int32_T i;
  y = nullptr;
  b_iv[0] = u.size(0);
  b_iv[1] = u.size(1);
  b_iv[2] = u.size(2);
  m = emlrtCreateNumericArray(3, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(2); b_i++) {
    for (int32_T c_i{0}; c_i < u.size(1); c_i++) {
      for (int32_T d_i{0}; d_i < u.size(0); d_i++) {
        pData[i] = u[(d_i + u.size(0) * c_i) + u.size(0) * u.size(1) * b_i];
        i++;
      }
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[2])
{
  static const int32_T dims[2]{1, 2};
  real_T(*r)[2];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[2])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{1, -1};
  int32_T b_iv[2];
  boolean_T bv[2]{false, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &b_iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, b_iv[0], b_iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static boolean_T d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  boolean_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "logical", false, 0U,
                          (const void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 3U> &ret)
{
  static const int32_T dims[3]{3, -1, -1};
  int32_T b_iv[3];
  boolean_T bv[3]{false, true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 3U,
                            (const void *)&dims[0], &bv[0], &b_iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, b_iv[0], b_iv[1],
               b_iv[2]);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static const mxArray *d_emlrt_marshallOut(const coder::array<real_T, 3U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[3];
  int32_T i;
  y = nullptr;
  b_iv[0] = u.size(0);
  b_iv[1] = 3;
  b_iv[2] = u.size(2);
  m = emlrtCreateNumericArray(3, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(2); b_i++) {
    for (int32_T c_i{0}; c_i < u.size(0); c_i++) {
      pData[i] = u[c_i + u.size(0) * 3 * b_i];
      i++;
    }
    for (int32_T c_i{0}; c_i < u.size(0); c_i++) {
      pData[i] = u[(c_i + u.size(0)) + u.size(0) * 3 * b_i];
      i++;
    }
    for (int32_T c_i{0}; c_i < u.size(0); c_i++) {
      pData[i] = u[(c_i + u.size(0) * 2) + u.size(0) * 3 * b_i];
      i++;
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const coder::array<real_T, 4U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[4];
  int32_T i;
  y = nullptr;
  b_iv[0] = 4;
  b_iv[1] = 4;
  b_iv[2] = u.size(2);
  b_iv[3] = u.size(3);
  m = emlrtCreateNumericArray(4, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(3); b_i++) {
    for (int32_T c_i{0}; c_i < u.size(2); c_i++) {
      for (int32_T d_i{0}; d_i < 4; d_i++) {
        pData[i] = u[(4 * d_i + 16 * c_i) + 16 * u.size(2) * b_i];
        pData[i + 1] = u[((4 * d_i + 16 * c_i) + 16 * u.size(2) * b_i) + 1];
        pData[i + 2] = u[((4 * d_i + 16 * c_i) + 16 * u.size(2) * b_i) + 2];
        pData[i + 3] = u[((4 * d_i + 16 * c_i) + 16 * u.size(2) * b_i) + 3];
        i += 4;
      }
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const coder::array<real_T, 2U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[2];
  int32_T b_i;
  int32_T i;
  y = nullptr;
  b_iv[0] = u.size(0);
  b_iv[1] = u.size(1);
  m = emlrtCreateNumericArray(2, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  b_i = 0;
  while (b_i < u.size(1)) {
    for (b_i = 0; b_i < u.size(0); b_i++) {
      pData[i] = u[b_i];
      i++;
    }
    b_i = 1;
  }
  emlrtAssign(&y, m);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{-1, 3};
  int32_T b_iv[2];
  boolean_T bv[2]{true, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &b_iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, b_iv[0], b_iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static const mxArray *e_emlrt_marshallOut(const coder::array<real_T, 4U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[4];
  int32_T i;
  y = nullptr;
  b_iv[0] = 4;
  b_iv[1] = 4;
  b_iv[2] = 3;
  b_iv[3] = u.size(3);
  m = emlrtCreateNumericArray(4, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(3); b_i++) {
    for (int32_T c_i{0}; c_i < 3; c_i++) {
      for (int32_T d_i{0}; d_i < 4; d_i++) {
        pData[i] = u[(4 * d_i + 16 * c_i) + 48 * b_i];
        pData[i + 1] = u[((4 * d_i + 16 * c_i) + 48 * b_i) + 1];
        pData[i + 2] = u[((4 * d_i + 16 * c_i) + 48 * b_i) + 2];
        pData[i + 3] = u[((4 * d_i + 16 * c_i) + 48 * b_i) + 3];
        i += 4;
      }
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *e_emlrt_marshallOut(const coder::array<real_T, 3U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[3];
  int32_T i;
  y = nullptr;
  b_iv[0] = 6;
  b_iv[1] = u.size(1);
  b_iv[2] = u.size(2);
  m = emlrtCreateNumericArray(3, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(2); b_i++) {
    for (int32_T c_i{0}; c_i < u.size(1); c_i++) {
      for (int32_T d_i{0}; d_i < 6; d_i++) {
        pData[i + d_i] = u[(d_i + 6 * c_i) + 6 * u.size(1) * b_i];
      }
      i += 6;
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *e_emlrt_marshallOut(const coder::array<real_T, 2U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[2];
  int32_T i;
  y = nullptr;
  b_iv[0] = 1;
  b_iv[1] = u.size(1);
  m = emlrtCreateNumericArray(2, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(1); b_i++) {
    pData[i] = u[b_i];
    i++;
  }
  emlrtAssign(&y, m);
  return y;
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             CTCRConstruc &y)
{
  emlrtMsgIdentifier thisId;
  const mxArray *propValues[10];
  const char_T *propClasses[10]{"CTCRConstruc", "CTCRConstruc", "CTCRConstruc",
                                "CTCRConstruc", "CTCRConstruc", "CTCRConstruc",
                                "CTCRConstruc", "CTCRConstruc", "CTCRConstruc",
                                "CTCRConstruc"};
  const char_T *propNames[10]{
      "nbP",      "K",       "vect_ind_iT", "ind_origin",    "vect_z",
      "vect_res", "ui_init", "pos_init",    "vect_tau_dist", "vect_f_dist"};
  for (int32_T i{0}; i < 10; i++) {
    propValues[i] = nullptr;
  }
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckMcosClass2017a((emlrtCTX)&sp, parentId, u, "CTCRConstruc");
  emlrtGetAllProperties((emlrtCTX)&sp, u, 0, 10, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  thisId.fIdentifier = "nbP";
  y.nbP = emlrt_marshallIn(sp, emlrtAlias(propValues[0]), &thisId);
  thisId.fIdentifier = "K";
  emlrt_marshallIn(sp, emlrtAlias(propValues[1]), &thisId, y.K);
  thisId.fIdentifier = "vect_ind_iT";
  b_emlrt_marshallIn(sp, emlrtAlias(propValues[2]), &thisId, y.vect_ind_iT);
  thisId.fIdentifier = "ind_origin";
  y.ind_origin = emlrt_marshallIn(sp, emlrtAlias(propValues[3]), &thisId);
  thisId.fIdentifier = "vect_z";
  emlrt_marshallIn(sp, emlrtAlias(propValues[4]), &thisId, y.vect_z);
  thisId.fIdentifier = "vect_res";
  emlrt_marshallIn(sp, emlrtAlias(propValues[5]), &thisId, y.vect_res);
  thisId.fIdentifier = "ui_init";
  b_emlrt_marshallIn(sp, emlrtAlias(propValues[6]), &thisId, y.ui_init);
  thisId.fIdentifier = "pos_init";
  b_emlrt_marshallIn(sp, emlrtAlias(propValues[7]), &thisId, y.pos_init);
  thisId.fIdentifier = "vect_tau_dist";
  c_emlrt_marshallIn(sp, emlrtAlias(propValues[8]), &thisId, y.vect_tau_dist);
  thisId.fIdentifier = "vect_f_dist";
  c_emlrt_marshallIn(sp, emlrtAlias(propValues[9]), &thisId, y.vect_f_dist);
  emlrtDestroyArrays(10, &propValues[0]);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *ctcr_construc,
                             const char_T *identifier, CTCRConstruc &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(ctcr_construc), &thisId, y);
  emlrtDestroyArray(&ctcr_construc);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 2U> &y)
{
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 3U> &y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, real_T y[3])
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, CTCRLoad &y)
{
  emlrtMsgIdentifier thisId;
  const mxArray *propValues[8];
  const char_T *propClasses[8]{"CTCRLoad", "CTCRLoad", "CTCRLoad", "CTCRLoad",
                               "CTCRLoad", "CTCRLoad", "CTCRLoad", "CTCRLoad"};
  const char_T *propNames[8]{"tau_tip",    "f_tip",    "load_lim_1",
                             "tau_dist_1", "f_dist_1", "load_lim_2",
                             "tau_dist_2", "f_dist_2"};
  for (int32_T i{0}; i < 8; i++) {
    propValues[i] = nullptr;
  }
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckMcosClass2017a((emlrtCTX)&sp, parentId, u, "CTCRLoad");
  emlrtGetAllProperties((emlrtCTX)&sp, u, 0, 8, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  thisId.fIdentifier = "tau_tip";
  emlrt_marshallIn(sp, emlrtAlias(propValues[0]), &thisId, y.tau_tip);
  thisId.fIdentifier = "f_tip";
  emlrt_marshallIn(sp, emlrtAlias(propValues[1]), &thisId, y.f_tip);
  thisId.fIdentifier = "load_lim_1";
  b_emlrt_marshallIn(sp, emlrtAlias(propValues[2]), &thisId, y.load_lim_1);
  thisId.fIdentifier = "tau_dist_1";
  emlrt_marshallIn(sp, emlrtAlias(propValues[3]), &thisId, y.tau_dist_1);
  thisId.fIdentifier = "f_dist_1";
  emlrt_marshallIn(sp, emlrtAlias(propValues[4]), &thisId, y.f_dist_1);
  thisId.fIdentifier = "load_lim_2";
  b_emlrt_marshallIn(sp, emlrtAlias(propValues[5]), &thisId, y.load_lim_2);
  thisId.fIdentifier = "tau_dist_2";
  emlrt_marshallIn(sp, emlrtAlias(propValues[6]), &thisId, y.tau_dist_2);
  thisId.fIdentifier = "f_dist_2";
  emlrt_marshallIn(sp, emlrtAlias(propValues[7]), &thisId, y.f_dist_2);
  emlrtDestroyArrays(8, &propValues[0]);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *ctcr_load,
                             const char_T *identifier, CTCRLoad &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(ctcr_load), &thisId, y);
  emlrtDestroyArray(&ctcr_load);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, CTCRCarac &y)
{
  emlrtMsgIdentifier thisId;
  const mxArray *propValues[7];
  const char_T *propClasses[7]{"CTCRCarac", "CTCRCarac", "CTCRCarac",
                               "CTCRCarac", "CTCRCarac", "CTCRCarac",
                               "CTCRCarac"};
  const char_T *propNames[7]{"nbT", "stiff", "coeff_poiss", "Rc", "Lr",
                             "Lc",  "L"};
  for (int32_T i{0}; i < 7; i++) {
    propValues[i] = nullptr;
  }
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckMcosClass2017a((emlrtCTX)&sp, parentId, u, "CTCRCarac");
  emlrtGetAllProperties((emlrtCTX)&sp, u, 0, 7, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  thisId.fIdentifier = "nbT";
  y.nbT = emlrt_marshallIn(sp, emlrtAlias(propValues[0]), &thisId);
  thisId.fIdentifier = "stiff";
  emlrt_marshallIn(sp, emlrtAlias(propValues[1]), &thisId, y.stiff);
  thisId.fIdentifier = "coeff_poiss";
  y.coeff_poiss = emlrt_marshallIn(sp, emlrtAlias(propValues[2]), &thisId);
  thisId.fIdentifier = "Rc";
  emlrt_marshallIn(sp, emlrtAlias(propValues[3]), &thisId, y.Rc);
  thisId.fIdentifier = "Lr";
  emlrt_marshallIn(sp, emlrtAlias(propValues[4]), &thisId, y.Lr);
  thisId.fIdentifier = "Lc";
  emlrt_marshallIn(sp, emlrtAlias(propValues[5]), &thisId, y.Lc);
  thisId.fIdentifier = "L";
  emlrt_marshallIn(sp, emlrtAlias(propValues[6]), &thisId, y.L);
  emlrtDestroyArrays(7, &propValues[0]);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *ctcr_carac,
                             const char_T *identifier, CTCRCarac &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(ctcr_carac), &thisId, y);
  emlrtDestroyArray(&ctcr_carac);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *IC,
                             const char_T *identifier,
                             coder::array<real_T, 1U> &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(IC), &thisId, y);
  emlrtDestroyArray(&IC);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 1U> &y)
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             SimulationParam &y)
{
  emlrtMsgIdentifier thisId;
  const mxArray *propValues[10];
  const char_T *propClasses[10]{"SimulationParam", "SimulationParam",
                                "SimulationParam", "SimulationParam",
                                "SimulationParam", "SimulationParam",
                                "SimulationParam", "SimulationParam",
                                "SimulationParam", "SimulationParam"};
  const char_T *propNames[10]{"res_step",         "opt_tol",
                              "epsilon_disct_pt", "nb_disct_pt",
                              "pt_s0_LIT",        "bool_J",
                              "bool_Cs0",         "flag_ctcr",
                              "bool_problem_opt", "bool_disp_terminal"};
  for (int32_T i{0}; i < 10; i++) {
    propValues[i] = nullptr;
  }
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckMcosClass2017a((emlrtCTX)&sp, parentId, u, "SimulationParam");
  emlrtGetAllProperties((emlrtCTX)&sp, u, 0, 10, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  thisId.fIdentifier = "res_step";
  y.res_step = emlrt_marshallIn(sp, emlrtAlias(propValues[0]), &thisId);
  thisId.fIdentifier = "opt_tol";
  y.opt_tol = emlrt_marshallIn(sp, emlrtAlias(propValues[1]), &thisId);
  thisId.fIdentifier = "epsilon_disct_pt";
  y.epsilon_disct_pt = emlrt_marshallIn(sp, emlrtAlias(propValues[2]), &thisId);
  thisId.fIdentifier = "nb_disct_pt";
  y.nb_disct_pt = emlrt_marshallIn(sp, emlrtAlias(propValues[3]), &thisId);
  thisId.fIdentifier = "pt_s0_LIT";
  emlrt_marshallIn(sp, emlrtAlias(propValues[4]), &thisId, y.pt_s0_LIT);
  thisId.fIdentifier = "bool_J";
  y.bool_J = b_emlrt_marshallIn(sp, emlrtAlias(propValues[5]), &thisId);
  thisId.fIdentifier = "bool_Cs0";
  y.bool_Cs0 = b_emlrt_marshallIn(sp, emlrtAlias(propValues[6]), &thisId);
  thisId.fIdentifier = "flag_ctcr";
  y.flag_ctcr = b_emlrt_marshallIn(sp, emlrtAlias(propValues[7]), &thisId);
  thisId.fIdentifier = "bool_problem_opt";
  y.bool_problem_opt =
      b_emlrt_marshallIn(sp, emlrtAlias(propValues[8]), &thisId);
  thisId.fIdentifier = "bool_disp_terminal";
  y.bool_disp_terminal =
      b_emlrt_marshallIn(sp, emlrtAlias(propValues[9]), &thisId);
  emlrtDestroyArrays(10, &propValues[0]);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp,
                             const mxArray *simulation_param,
                             const char_T *identifier, SimulationParam &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(simulation_param), &thisId, y);
  emlrtDestroyArray(&simulation_param);
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const struct0_T u)
{
  static const int32_T b_iv[2]{0, 0};
  static const int32_T iv1[2]{1, 19};
  static const int32_T iv2[2]{1, 0};
  static const char_T *sv[7]{"iterations",   "funcCount",     "stepsize",
                             "cgiterations", "firstorderopt", "algorithm",
                             "message"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, "iterations", emlrt_marshallOut(u.iterations), 0);
  emlrtSetFieldR2017b(y, 0, "funcCount", emlrt_marshallOut(u.funcCount), 1);
  emlrtSetFieldR2017b(y, 0, "stepsize", emlrt_marshallOut(u.stepsize), 2);
  b_y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&b_iv[0], mxDOUBLE_CLASS,
                              mxREAL);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "cgiterations", b_y, 3);
  emlrtSetFieldR2017b(y, 0, "firstorderopt", emlrt_marshallOut(u.firstorderopt),
                      4);
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 19, m, &u.algorithm[0]);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "algorithm", c_y, 5);
  d_y = nullptr;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "message", d_y, 6);
  return y;
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 3U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[3];
  int32_T i;
  y = nullptr;
  b_iv[0] = 3;
  b_iv[1] = 3;
  b_iv[2] = u.size(2);
  m = emlrtCreateNumericArray(3, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(2); b_i++) {
    for (int32_T c_i{0}; c_i < 3; c_i++) {
      pData[i] = u[3 * c_i + 9 * b_i];
      pData[i + 1] = u[(3 * c_i + 9 * b_i) + 1];
      pData[i + 2] = u[(3 * c_i + 9 * b_i) + 2];
      i += 3;
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const CTCRConstruc &u)
{
  const mxArray *propValues[10];
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m10;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *m7;
  const mxArray *m8;
  const mxArray *m9;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[2];
  int32_T i;
  const char_T *propClasses[10]{"CTCRConstruc", "CTCRConstruc", "CTCRConstruc",
                                "CTCRConstruc", "CTCRConstruc", "CTCRConstruc",
                                "CTCRConstruc", "CTCRConstruc", "CTCRConstruc",
                                "CTCRConstruc"};
  const char_T *propNames[10]{
      "nbP",      "K",       "vect_ind_iT", "ind_origin",    "vect_z",
      "vect_res", "ui_init", "pos_init",    "vect_tau_dist", "vect_f_dist"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  m6 = nullptr;
  m7 = nullptr;
  m8 = nullptr;
  m9 = nullptr;
  emlrtAssign(&y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "CTCRConstruc"));
  m = nullptr;
  emlrtAssign(&m, emlrt_marshallOut(u.nbP));
  propValues[0] = m;
  m1 = nullptr;
  emlrtAssign(&m1, emlrt_marshallOut(u.K));
  propValues[1] = m1;
  m2 = nullptr;
  b_y = nullptr;
  b_iv[0] = u.vect_ind_iT.size(0);
  b_iv[1] = 3;
  m10 = emlrtCreateNumericArray(2, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m10);
  i = 0;
  for (int32_T b_i{0}; b_i < u.vect_ind_iT.size(0); b_i++) {
    pData[i] = u.vect_ind_iT[b_i];
    i++;
  }
  for (int32_T b_i{0}; b_i < u.vect_ind_iT.size(0); b_i++) {
    pData[i] = u.vect_ind_iT[b_i + u.vect_ind_iT.size(0)];
    i++;
  }
  for (int32_T b_i{0}; b_i < u.vect_ind_iT.size(0); b_i++) {
    pData[i] = u.vect_ind_iT[b_i + u.vect_ind_iT.size(0) * 2];
    i++;
  }
  emlrtAssign(&b_y, m10);
  emlrtAssign(&m2, b_y);
  propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, emlrt_marshallOut(u.ind_origin));
  propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, e_emlrt_marshallOut(u.vect_z));
  propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, e_emlrt_marshallOut(u.vect_res));
  propValues[5] = m5;
  m6 = nullptr;
  emlrtAssign(&m6, b_emlrt_marshallOut(u.ui_init));
  propValues[6] = m6;
  m7 = nullptr;
  emlrtAssign(&m7, b_emlrt_marshallOut(u.pos_init));
  propValues[7] = m7;
  m8 = nullptr;
  emlrtAssign(&m8, c_emlrt_marshallOut(u.vect_tau_dist));
  propValues[8] = m8;
  m9 = nullptr;
  emlrtAssign(&m9, c_emlrt_marshallOut(u.vect_f_dist));
  propValues[9] = m9;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 10,
                        (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0,
                                                       "CTCRConstruc"));
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const SimulationParam &u)
{
  const mxArray *propValues[10];
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m10;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *m7;
  const mxArray *m8;
  const mxArray *m9;
  const mxArray *y;
  const char_T *propClasses[10]{"SimulationParam", "SimulationParam",
                                "SimulationParam", "SimulationParam",
                                "SimulationParam", "SimulationParam",
                                "SimulationParam", "SimulationParam",
                                "SimulationParam", "SimulationParam"};
  const char_T *propNames[10]{"res_step",         "opt_tol",
                              "epsilon_disct_pt", "nb_disct_pt",
                              "pt_s0_LIT",        "bool_J",
                              "bool_Cs0",         "flag_ctcr",
                              "bool_problem_opt", "bool_disp_terminal"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  m6 = nullptr;
  m7 = nullptr;
  m8 = nullptr;
  m9 = nullptr;
  emlrtAssign(&y,
              emlrtCreateClassInstance2022a((emlrtCTX)&sp, "SimulationParam"));
  m = nullptr;
  emlrtAssign(&m, emlrt_marshallOut(u.res_step));
  propValues[0] = m;
  m1 = nullptr;
  emlrtAssign(&m1, emlrt_marshallOut(u.opt_tol));
  propValues[1] = m1;
  m2 = nullptr;
  emlrtAssign(&m2, emlrt_marshallOut(u.epsilon_disct_pt));
  propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, emlrt_marshallOut(u.nb_disct_pt));
  propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, e_emlrt_marshallOut(u.pt_s0_LIT));
  propValues[4] = m4;
  m5 = nullptr;
  b_y = nullptr;
  m10 = emlrtCreateLogicalScalar(u.bool_J);
  emlrtAssign(&b_y, m10);
  emlrtAssign(&m5, b_y);
  propValues[5] = m5;
  m6 = nullptr;
  c_y = nullptr;
  m10 = emlrtCreateLogicalScalar(u.bool_Cs0);
  emlrtAssign(&c_y, m10);
  emlrtAssign(&m6, c_y);
  propValues[6] = m6;
  m7 = nullptr;
  d_y = nullptr;
  m10 = emlrtCreateLogicalScalar(u.flag_ctcr);
  emlrtAssign(&d_y, m10);
  emlrtAssign(&m7, d_y);
  propValues[7] = m7;
  m8 = nullptr;
  e_y = nullptr;
  m10 = emlrtCreateLogicalScalar(u.bool_problem_opt);
  emlrtAssign(&e_y, m10);
  emlrtAssign(&m8, e_y);
  propValues[8] = m8;
  m9 = nullptr;
  f_y = nullptr;
  m10 = emlrtCreateLogicalScalar(u.bool_disp_terminal);
  emlrtAssign(&f_y, m10);
  emlrtAssign(&m9, f_y);
  propValues[9] = m9;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 10,
                        (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0,
                                                       "SimulationParam"));
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemCJ &u)
{
  const mxArray *propValues[2];
  const mxArray *m;
  const mxArray *m1;
  const mxArray *y;
  const char_T *propClasses[2]{"MemCJ", "MemCJ"};
  const char_T *propNames[2]{"mem_Cs0", "mem_J"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  emlrtAssign(&y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemCJ"));
  m = nullptr;
  emlrtAssign(&m, f_emlrt_marshallOut(u.mem_Cs0));
  propValues[0] = m;
  m1 = nullptr;
  emlrtAssign(&m1, e_emlrt_marshallOut(u.mem_J));
  propValues[1] = m1;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 2, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(
      &y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0, "MemCJ"));
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const MemDerivPropagHigh &u)
{
  const mxArray *propValues[4];
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[3];
  int32_T i;
  const char_T *propClasses[4]{"MemDerivPropagHigh", "MemDerivPropagHigh",
                               "MemDerivPropagHigh", "MemDerivPropagHigh"};
  const char_T *propNames[4]{"mem_B", "mem_Bws0", "mem_E", "mem_Ews0"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  emlrtAssign(
      &y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDerivPropagHigh"));
  m = nullptr;
  emlrtAssign(&m, b_emlrt_marshallOut(u.mem_B));
  propValues[0] = m;
  m1 = nullptr;
  b_y = nullptr;
  b_iv[0] = u.mem_Bws0.size(0);
  b_iv[1] = 6;
  b_iv[2] = u.mem_Bws0.size(2);
  m4 = emlrtCreateNumericArray(3, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m4);
  i = 0;
  for (int32_T b_i{0}; b_i < u.mem_Bws0.size(2); b_i++) {
    for (int32_T c_i{0}; c_i < 6; c_i++) {
      for (int32_T d_i{0}; d_i < u.mem_Bws0.size(0); d_i++) {
        pData[i] = u.mem_Bws0[(d_i + u.mem_Bws0.size(0) * c_i) +
                              u.mem_Bws0.size(0) * 6 * b_i];
        i++;
      }
    }
  }
  emlrtAssign(&b_y, m4);
  emlrtAssign(&m1, b_y);
  propValues[1] = m1;
  m2 = nullptr;
  emlrtAssign(&m2, e_emlrt_marshallOut(u.mem_E));
  propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, f_emlrt_marshallOut(u.mem_Ews0));
  propValues[3] = m3;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 4, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0,
                                                       "MemDerivPropagHigh"));
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemDT0 &u)
{
  const mxArray *propValues[7];
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *y;
  const char_T *propClasses[7]{"MemDT0", "MemDT0", "MemDT0", "MemDT0",
                               "MemDT0", "MemDT0", "MemDT0"};
  const char_T *propNames[7]{"mem_dT0_duzj0", "mem_dT0_dm0j0", "mem_dT0_dn0j0",
                             "mem_dT0_dtcj",  "mem_dT0_dbcj",  "mem_dT0_dtaus0",
                             "mem_dT0_dfs0"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  m6 = nullptr;
  emlrtAssign(&y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDT0"));
  m = nullptr;
  emlrtAssign(&m, d_emlrt_marshallOut(u.mem_dT0_duzj0));
  propValues[0] = m;
  m1 = nullptr;
  emlrtAssign(&m1, e_emlrt_marshallOut(u.mem_dT0_dm0j0));
  propValues[1] = m1;
  m2 = nullptr;
  emlrtAssign(&m2, e_emlrt_marshallOut(u.mem_dT0_dn0j0));
  propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, d_emlrt_marshallOut(u.mem_dT0_dtcj));
  propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, d_emlrt_marshallOut(u.mem_dT0_dbcj));
  propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, b_emlrt_marshallOut(u.mem_dT0_dtaus0));
  propValues[5] = m5;
  m6 = nullptr;
  emlrtAssign(&m6, b_emlrt_marshallOut(u.mem_dT0_dfs0));
  propValues[6] = m6;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 7, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(
      &y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0, "MemDT0"));
  return y;
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 4U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[4];
  int32_T i;
  y = nullptr;
  b_iv[0] = 3;
  b_iv[1] = 3;
  b_iv[2] = u.size(2);
  b_iv[3] = u.size(3);
  m = emlrtCreateNumericArray(4, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(3); b_i++) {
    for (int32_T c_i{0}; c_i < u.size(2); c_i++) {
      for (int32_T d_i{0}; d_i < 3; d_i++) {
        pData[i] = u[(3 * d_i + 9 * c_i) + 9 * u.size(2) * b_i];
        pData[i + 1] = u[((3 * d_i + 9 * c_i) + 9 * u.size(2) * b_i) + 1];
        pData[i + 2] = u[((3 * d_i + 9 * c_i) + 9 * u.size(2) * b_i) + 2];
        i += 3;
      }
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemDP0DS &u)
{
  const mxArray *propValues[7];
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *y;
  const char_T *propClasses[7]{"MemDP0DS", "MemDP0DS", "MemDP0DS", "MemDP0DS",
                               "MemDP0DS", "MemDP0DS", "MemDP0DS"};
  const char_T *propNames[7]{"mem_dP0_duzj0_ds", "mem_dP0_dm0j0_ds",
                             "mem_dP0_dn0j0_ds", "mem_dP0_dtcj_ds",
                             "mem_dP0_dbcj_ds",  "mem_dP0_dtaus0_ds",
                             "mem_dP0_dfs0_ds"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  m6 = nullptr;
  emlrtAssign(&y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDP0DS"));
  m = nullptr;
  emlrtAssign(&m, b_emlrt_marshallOut(u.mem_dP0_duzj0_ds));
  propValues[0] = m;
  m1 = nullptr;
  emlrtAssign(&m1, emlrt_marshallOut(u.mem_dP0_dm0j0_ds));
  propValues[1] = m1;
  m2 = nullptr;
  emlrtAssign(&m2, emlrt_marshallOut(u.mem_dP0_dn0j0_ds));
  propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, b_emlrt_marshallOut(u.mem_dP0_dtcj_ds));
  propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, b_emlrt_marshallOut(u.mem_dP0_dbcj_ds));
  propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, emlrt_marshallOut(u.mem_dP0_dtaus0_ds));
  propValues[5] = m5;
  m6 = nullptr;
  emlrtAssign(&m6, emlrt_marshallOut(u.mem_dP0_dfs0_ds));
  propValues[6] = m6;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 7, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0,
                                                       "MemDP0DS"));
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemDP0 &u)
{
  const mxArray *propValues[7];
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *y;
  const char_T *propClasses[7]{"MemDP0", "MemDP0", "MemDP0", "MemDP0",
                               "MemDP0", "MemDP0", "MemDP0"};
  const char_T *propNames[7]{"mem_dP0_duzj0", "mem_dP0_dm0j0", "mem_dP0_dn0j0",
                             "mem_dP0_dtcj",  "mem_dP0_dbcj",  "mem_dP0_dtaus0",
                             "mem_dP0_dfs0"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  m6 = nullptr;
  emlrtAssign(&y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDP0"));
  m = nullptr;
  emlrtAssign(&m, b_emlrt_marshallOut(u.mem_dP0_duzj0));
  propValues[0] = m;
  m1 = nullptr;
  emlrtAssign(&m1, emlrt_marshallOut(u.mem_dP0_dm0j0));
  propValues[1] = m1;
  m2 = nullptr;
  emlrtAssign(&m2, emlrt_marshallOut(u.mem_dP0_dn0j0));
  propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, b_emlrt_marshallOut(u.mem_dP0_dtcj));
  propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, b_emlrt_marshallOut(u.mem_dP0_dbcj));
  propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, emlrt_marshallOut(u.mem_dP0_dtaus0));
  propValues[5] = m5;
  m6 = nullptr;
  emlrtAssign(&m6, emlrt_marshallOut(u.mem_dP0_dfs0));
  propValues[6] = m6;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 7, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(
      &y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0, "MemDP0"));
  return y;
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 5U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[5];
  int32_T i;
  y = nullptr;
  for (i = 0; i < 5; i++) {
    b_iv[i] = u.size(i);
  }
  m = emlrtCreateNumericArray(5, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(4); b_i++) {
    for (int32_T c_i{0}; c_i < u.size(3); c_i++) {
      for (int32_T d_i{0}; d_i < 3; d_i++) {
        for (int32_T e_i{0}; e_i < 3; e_i++) {
          pData[i] = u[((3 * e_i + 9 * d_i) + 27 * c_i) + 27 * u.size(3) * b_i];
          pData[i + 1] =
              u[(((3 * e_i + 9 * d_i) + 27 * c_i) + 27 * u.size(3) * b_i) + 1];
          pData[i + 2] =
              u[(((3 * e_i + 9 * d_i) + 27 * c_i) + 27 * u.size(3) * b_i) + 2];
          i += 3;
        }
      }
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemDR0DS &u)
{
  const mxArray *propValues[7];
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *y;
  const char_T *propClasses[7]{"MemDR0DS", "MemDR0DS", "MemDR0DS", "MemDR0DS",
                               "MemDR0DS", "MemDR0DS", "MemDR0DS"};
  const char_T *propNames[7]{"mem_dR0_duzj0_ds", "mem_dR0_dm0j0_ds",
                             "mem_dR0_dn0j0_ds", "mem_dR0_dtcj_ds",
                             "mem_dR0_dbcj_ds",  "mem_dR0_dtaus0_ds",
                             "mem_dR0_dfs0_ds"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  m6 = nullptr;
  emlrtAssign(&y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDR0DS"));
  m = nullptr;
  emlrtAssign(&m, emlrt_marshallOut(u.mem_dR0_duzj0_ds));
  propValues[0] = m;
  m1 = nullptr;
  emlrtAssign(&m1, c_emlrt_marshallOut(u.mem_dR0_dm0j0_ds));
  propValues[1] = m1;
  m2 = nullptr;
  emlrtAssign(&m2, c_emlrt_marshallOut(u.mem_dR0_dn0j0_ds));
  propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, emlrt_marshallOut(u.mem_dR0_dtcj_ds));
  propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, emlrt_marshallOut(u.mem_dR0_dbcj_ds));
  propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, emlrt_marshallOut(u.mem_dR0_dtaus0_ds));
  propValues[5] = m5;
  m6 = nullptr;
  emlrtAssign(&m6, emlrt_marshallOut(u.mem_dR0_dfs0_ds));
  propValues[6] = m6;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 7, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0,
                                                       "MemDR0DS"));
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemDR0 &u)
{
  const mxArray *propValues[7];
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *y;
  const char_T *propClasses[7]{"MemDR0", "MemDR0", "MemDR0", "MemDR0",
                               "MemDR0", "MemDR0", "MemDR0"};
  const char_T *propNames[7]{"mem_dR0_duzj0", "mem_dR0_dm0j0", "mem_dR0_dn0j0",
                             "mem_dR0_dtcj",  "mem_dR0_dbcj",  "mem_dR0_dtaus0",
                             "mem_dR0_dfs0"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  m6 = nullptr;
  emlrtAssign(&y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDR0"));
  m = nullptr;
  emlrtAssign(&m, emlrt_marshallOut(u.mem_dR0_duzj0));
  propValues[0] = m;
  m1 = nullptr;
  emlrtAssign(&m1, c_emlrt_marshallOut(u.mem_dR0_dm0j0));
  propValues[1] = m1;
  m2 = nullptr;
  emlrtAssign(&m2, c_emlrt_marshallOut(u.mem_dR0_dn0j0));
  propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, emlrt_marshallOut(u.mem_dR0_dtcj));
  propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, emlrt_marshallOut(u.mem_dR0_dbcj));
  propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, emlrt_marshallOut(u.mem_dR0_dtaus0));
  propValues[5] = m5;
  m6 = nullptr;
  emlrtAssign(&m6, emlrt_marshallOut(u.mem_dR0_dfs0));
  propValues[6] = m6;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 7, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(
      &y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0, "MemDR0"));
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const MemDUZiDS &u)
{
  const mxArray *propValues[7];
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *y;
  const char_T *propClasses[7]{"MemDUZiDS", "MemDUZiDS", "MemDUZiDS",
                               "MemDUZiDS", "MemDUZiDS", "MemDUZiDS",
                               "MemDUZiDS"};
  const char_T *propNames[7]{"mem_duzi_duzj0_ds", "mem_duzi_dm0j0_ds",
                             "mem_duzi_dn0j0_ds", "mem_duzi_dtcj_ds",
                             "mem_duzi_dbcj_ds",  "mem_duzi_dtaus0_ds",
                             "mem_duzi_dfs0_ds"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  m6 = nullptr;
  emlrtAssign(&y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDUZiDS"));
  m = nullptr;
  emlrtAssign(&m, c_emlrt_marshallOut(u.mem_duzi_duzj0_ds));
  propValues[0] = m;
  m1 = nullptr;
  emlrtAssign(&m1, d_emlrt_marshallOut(u.mem_duzi_dm0j0_ds));
  propValues[1] = m1;
  m2 = nullptr;
  emlrtAssign(&m2, d_emlrt_marshallOut(u.mem_duzi_dn0j0_ds));
  propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, c_emlrt_marshallOut(u.mem_duzi_dtcj_ds));
  propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, c_emlrt_marshallOut(u.mem_duzi_dbcj_ds));
  propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, b_emlrt_marshallOut(u.mem_duzi_dtaus0_ds));
  propValues[5] = m5;
  m6 = nullptr;
  emlrtAssign(&m6, b_emlrt_marshallOut(u.mem_duzi_dfs0_ds));
  propValues[6] = m6;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 7, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0,
                                                       "MemDUZiDS"));
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemDUZi &u)
{
  const mxArray *propValues[7];
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *y;
  const char_T *propClasses[7]{"MemDUZi", "MemDUZi", "MemDUZi", "MemDUZi",
                               "MemDUZi", "MemDUZi", "MemDUZi"};
  const char_T *propNames[7]{
      "mem_duzi_duzj0", "mem_duzi_dm0j0",  "mem_duzi_dn0j0", "mem_duzi_dtcj",
      "mem_duzi_dbcj",  "mem_duzi_dtaus0", "mem_duzi_dfs0"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  m6 = nullptr;
  emlrtAssign(&y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDUZi"));
  m = nullptr;
  emlrtAssign(&m, c_emlrt_marshallOut(u.mem_duzi_duzj0));
  propValues[0] = m;
  m1 = nullptr;
  emlrtAssign(&m1, d_emlrt_marshallOut(u.mem_duzi_dm0j0));
  propValues[1] = m1;
  m2 = nullptr;
  emlrtAssign(&m2, d_emlrt_marshallOut(u.mem_duzi_dn0j0));
  propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, c_emlrt_marshallOut(u.mem_duzi_dtcj));
  propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, c_emlrt_marshallOut(u.mem_duzi_dbcj));
  propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, b_emlrt_marshallOut(u.mem_duzi_dtaus0));
  propValues[5] = m5;
  m6 = nullptr;
  emlrtAssign(&m6, b_emlrt_marshallOut(u.mem_duzi_dfs0));
  propValues[6] = m6;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 7, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(
      &y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0, "MemDUZi"));
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemDTiDS &u)
{
  const mxArray *propValues[7];
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *y;
  const char_T *propClasses[7]{"MemDTiDS", "MemDTiDS", "MemDTiDS", "MemDTiDS",
                               "MemDTiDS", "MemDTiDS", "MemDTiDS"};
  const char_T *propNames[7]{"mem_dti_duzj0_ds", "mem_dti_dm0j0_ds",
                             "mem_dti_dn0j0_ds", "mem_dti_dtcj_ds",
                             "mem_dti_dbcj_ds",  "mem_dti_dtaus0_ds",
                             "mem_dti_dfs0_ds"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  m6 = nullptr;
  emlrtAssign(&y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDTiDS"));
  m = nullptr;
  emlrtAssign(&m, c_emlrt_marshallOut(u.mem_dti_duzj0_ds));
  propValues[0] = m;
  m1 = nullptr;
  emlrtAssign(&m1, d_emlrt_marshallOut(u.mem_dti_dm0j0_ds));
  propValues[1] = m1;
  m2 = nullptr;
  emlrtAssign(&m2, d_emlrt_marshallOut(u.mem_dti_dn0j0_ds));
  propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, c_emlrt_marshallOut(u.mem_dti_dtcj_ds));
  propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, c_emlrt_marshallOut(u.mem_dti_dbcj_ds));
  propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, b_emlrt_marshallOut(u.mem_dti_dtaus0_ds));
  propValues[5] = m5;
  m6 = nullptr;
  emlrtAssign(&m6, b_emlrt_marshallOut(u.mem_dti_dfs0_ds));
  propValues[6] = m6;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 7, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0,
                                                       "MemDTiDS"));
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemDTi &u)
{
  const mxArray *propValues[7];
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *y;
  const char_T *propClasses[7]{"MemDTi", "MemDTi", "MemDTi", "MemDTi",
                               "MemDTi", "MemDTi", "MemDTi"};
  const char_T *propNames[7]{"mem_dti_duzj0", "mem_dti_dm0j0", "mem_dti_dn0j0",
                             "mem_dti_dtcj",  "mem_dti_dbcj",  "mem_dti_dtaus0",
                             "mem_dti_dfs0"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  m6 = nullptr;
  emlrtAssign(&y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDTi"));
  m = nullptr;
  emlrtAssign(&m, c_emlrt_marshallOut(u.mem_dti_duzj0));
  propValues[0] = m;
  m1 = nullptr;
  emlrtAssign(&m1, d_emlrt_marshallOut(u.mem_dti_dm0j0));
  propValues[1] = m1;
  m2 = nullptr;
  emlrtAssign(&m2, d_emlrt_marshallOut(u.mem_dti_dn0j0));
  propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, c_emlrt_marshallOut(u.mem_dti_dtcj));
  propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, c_emlrt_marshallOut(u.mem_dti_dbcj));
  propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, b_emlrt_marshallOut(u.mem_dti_dtaus0));
  propValues[5] = m5;
  m6 = nullptr;
  emlrtAssign(&m6, b_emlrt_marshallOut(u.mem_dti_dfs0));
  propValues[6] = m6;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 7, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(
      &y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0, "MemDTi"));
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemDN0DS &u)
{
  const mxArray *propValues[7];
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *y;
  const char_T *propClasses[7]{"MemDN0DS", "MemDN0DS", "MemDN0DS", "MemDN0DS",
                               "MemDN0DS", "MemDN0DS", "MemDN0DS"};
  const char_T *propNames[7]{"mem_dn0_duzj0_ds", "mem_dn0_dm0j0_ds",
                             "mem_dn0_dn0j0_ds", "mem_dn0_dtcj_ds",
                             "mem_dn0_dbcj_ds",  "mem_dn0_dtaus0_ds",
                             "mem_dn0_dfs0_ds"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  m6 = nullptr;
  emlrtAssign(&y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDN0DS"));
  m = nullptr;
  emlrtAssign(&m, b_emlrt_marshallOut(u.mem_dn0_duzj0_ds));
  propValues[0] = m;
  m1 = nullptr;
  emlrtAssign(&m1, emlrt_marshallOut(u.mem_dn0_dm0j0_ds));
  propValues[1] = m1;
  m2 = nullptr;
  emlrtAssign(&m2, emlrt_marshallOut(u.mem_dn0_dn0j0_ds));
  propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, b_emlrt_marshallOut(u.mem_dn0_dtcj_ds));
  propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, b_emlrt_marshallOut(u.mem_dn0_dbcj_ds));
  propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, emlrt_marshallOut(u.mem_dn0_dtaus0_ds));
  propValues[5] = m5;
  m6 = nullptr;
  emlrtAssign(&m6, emlrt_marshallOut(u.mem_dn0_dfs0_ds));
  propValues[6] = m6;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 7, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0,
                                                       "MemDN0DS"));
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const MemDerivPropagLow &u)
{
  const mxArray *b_propValues[14];
  const mxArray *propValues[7];
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m10;
  const mxArray *m11;
  const mxArray *m12;
  const mxArray *m13;
  const mxArray *m14;
  const mxArray *m15;
  const mxArray *m16;
  const mxArray *m17;
  const mxArray *m18;
  const mxArray *m19;
  const mxArray *m2;
  const mxArray *m20;
  const mxArray *m21;
  const mxArray *m22;
  const mxArray *m23;
  const mxArray *m24;
  const mxArray *m25;
  const mxArray *m26;
  const mxArray *m27;
  const mxArray *m28;
  const mxArray *m29;
  const mxArray *m3;
  const mxArray *m30;
  const mxArray *m31;
  const mxArray *m32;
  const mxArray *m33;
  const mxArray *m34;
  const mxArray *m35;
  const mxArray *m36;
  const mxArray *m37;
  const mxArray *m38;
  const mxArray *m39;
  const mxArray *m4;
  const mxArray *m40;
  const mxArray *m41;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *m7;
  const mxArray *m8;
  const mxArray *m9;
  const mxArray *y;
  const char_T *e_propClasses[14]{
      "MemDerivPropagLow", "MemDerivPropagLow", "MemDerivPropagLow",
      "MemDerivPropagLow", "MemDerivPropagLow", "MemDerivPropagLow",
      "MemDerivPropagLow", "MemDerivPropagLow", "MemDerivPropagLow",
      "MemDerivPropagLow", "MemDerivPropagLow", "MemDerivPropagLow",
      "MemDerivPropagLow", "MemDerivPropagLow"};
  const char_T *e_propNames[14]{
      "mem_du0",    "mem_dm0",    "mem_dm0_ds", "mem_dn0",     "mem_dn0_ds",
      "mem_dti",    "mem_dti_ds", "mem_duzi",   "mem_duzi_ds", "mem_dR0",
      "mem_dR0_ds", "mem_dP0",    "mem_dP0_ds", "mem_dT0"};
  const char_T *b_propClasses[7]{"MemDM0", "MemDM0", "MemDM0", "MemDM0",
                                 "MemDM0", "MemDM0", "MemDM0"};
  const char_T *b_propNames[7]{
      "mem_dm0_duzj0", "mem_dm0_dm0j0",  "mem_dm0_dn0j0", "mem_dm0_dtcj",
      "mem_dm0_dbcj",  "mem_dm0_dtaus0", "mem_dm0_dfs0"};
  const char_T *c_propClasses[7]{"MemDM0DS", "MemDM0DS", "MemDM0DS", "MemDM0DS",
                                 "MemDM0DS", "MemDM0DS", "MemDM0DS"};
  const char_T *c_propNames[7]{"mem_dm0_duzj0_ds", "mem_dm0_dm0j0_ds",
                               "mem_dm0_dn0j0_ds", "mem_dm0_dtcj_ds",
                               "mem_dm0_dbcj_ds",  "mem_dm0_dtaus0_ds",
                               "mem_dm0_dfs0_ds"};
  const char_T *d_propClasses[7]{"MemDN0", "MemDN0", "MemDN0", "MemDN0",
                                 "MemDN0", "MemDN0", "MemDN0"};
  const char_T *d_propNames[7]{
      "mem_dn0_duzj0", "mem_dn0_dm0j0",  "mem_dn0_dn0j0", "mem_dn0_dtcj",
      "mem_dn0_dbcj",  "mem_dn0_dtaus0", "mem_dn0_dfs0"};
  const char_T *propClasses[7]{"MemDU0", "MemDU0", "MemDU0", "MemDU0",
                               "MemDU0", "MemDU0", "MemDU0"};
  const char_T *propNames[7]{"mem_du0_duzj0", "mem_du0_dm0j0", "mem_du0_dn0j0",
                             "mem_du0_dtcj",  "mem_du0_dbcj",  "mem_du0_dtaus0",
                             "mem_du0_dfs0"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  m6 = nullptr;
  m7 = nullptr;
  m8 = nullptr;
  m9 = nullptr;
  m10 = nullptr;
  m11 = nullptr;
  m12 = nullptr;
  m13 = nullptr;
  emlrtAssign(
      &y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDerivPropagLow"));
  m = nullptr;
  b_y = nullptr;
  m14 = nullptr;
  m15 = nullptr;
  m16 = nullptr;
  m17 = nullptr;
  m18 = nullptr;
  m19 = nullptr;
  m20 = nullptr;
  emlrtAssign(&b_y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDU0"));
  m14 = nullptr;
  emlrtAssign(&m14, b_emlrt_marshallOut(u.mem_du0.mem_du0_duzj0));
  propValues[0] = m14;
  m15 = nullptr;
  emlrtAssign(&m15, emlrt_marshallOut(u.mem_du0.mem_du0_dm0j0));
  propValues[1] = m15;
  m16 = nullptr;
  emlrtAssign(&m16, emlrt_marshallOut(u.mem_du0.mem_du0_dn0j0));
  propValues[2] = m16;
  m17 = nullptr;
  emlrtAssign(&m17, b_emlrt_marshallOut(u.mem_du0.mem_du0_dtcj));
  propValues[3] = m17;
  m18 = nullptr;
  emlrtAssign(&m18, b_emlrt_marshallOut(u.mem_du0.mem_du0_dbcj));
  propValues[4] = m18;
  m19 = nullptr;
  emlrtAssign(&m19, emlrt_marshallOut(u.mem_du0.mem_du0_dtaus0));
  propValues[5] = m19;
  m20 = nullptr;
  emlrtAssign(&m20, emlrt_marshallOut(u.mem_du0.mem_du0_dfs0));
  propValues[6] = m20;
  emlrtSetAllProperties((emlrtCTX)&sp, &b_y, 0, 7,
                        (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(&b_y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, b_y, 0,
                                                         "MemDU0"));
  emlrtAssign(&m, b_y);
  b_propValues[0] = m;
  m1 = nullptr;
  c_y = nullptr;
  m21 = nullptr;
  m22 = nullptr;
  m23 = nullptr;
  m24 = nullptr;
  m25 = nullptr;
  m26 = nullptr;
  m27 = nullptr;
  emlrtAssign(&c_y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDM0"));
  m21 = nullptr;
  emlrtAssign(&m21, b_emlrt_marshallOut(u.mem_dm0.mem_dm0_duzj0));
  propValues[0] = m21;
  m22 = nullptr;
  emlrtAssign(&m22, emlrt_marshallOut(u.mem_dm0.mem_dm0_dm0j0));
  propValues[1] = m22;
  m23 = nullptr;
  emlrtAssign(&m23, emlrt_marshallOut(u.mem_dm0.mem_dm0_dn0j0));
  propValues[2] = m23;
  m24 = nullptr;
  emlrtAssign(&m24, b_emlrt_marshallOut(u.mem_dm0.mem_dm0_dtcj));
  propValues[3] = m24;
  m25 = nullptr;
  emlrtAssign(&m25, b_emlrt_marshallOut(u.mem_dm0.mem_dm0_dbcj));
  propValues[4] = m25;
  m26 = nullptr;
  emlrtAssign(&m26, emlrt_marshallOut(u.mem_dm0.mem_dm0_dtaus0));
  propValues[5] = m26;
  m27 = nullptr;
  emlrtAssign(&m27, emlrt_marshallOut(u.mem_dm0.mem_dm0_dfs0));
  propValues[6] = m27;
  emlrtSetAllProperties((emlrtCTX)&sp, &c_y, 0, 7,
                        (const char_T **)&b_propNames[0],
                        (const char_T **)&b_propClasses[0], &propValues[0]);
  emlrtAssign(&c_y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, c_y, 0,
                                                         "MemDM0"));
  emlrtAssign(&m1, c_y);
  b_propValues[1] = m1;
  m2 = nullptr;
  d_y = nullptr;
  m28 = nullptr;
  m29 = nullptr;
  m30 = nullptr;
  m31 = nullptr;
  m32 = nullptr;
  m33 = nullptr;
  m34 = nullptr;
  emlrtAssign(&d_y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDM0DS"));
  m28 = nullptr;
  emlrtAssign(&m28, b_emlrt_marshallOut(u.mem_dm0_ds.mem_dm0_duzj0_ds));
  propValues[0] = m28;
  m29 = nullptr;
  emlrtAssign(&m29, emlrt_marshallOut(u.mem_dm0_ds.mem_dm0_dm0j0_ds));
  propValues[1] = m29;
  m30 = nullptr;
  emlrtAssign(&m30, emlrt_marshallOut(u.mem_dm0_ds.mem_dm0_dn0j0_ds));
  propValues[2] = m30;
  m31 = nullptr;
  emlrtAssign(&m31, b_emlrt_marshallOut(u.mem_dm0_ds.mem_dm0_dtcj_ds));
  propValues[3] = m31;
  m32 = nullptr;
  emlrtAssign(&m32, b_emlrt_marshallOut(u.mem_dm0_ds.mem_dm0_dbcj_ds));
  propValues[4] = m32;
  m33 = nullptr;
  emlrtAssign(&m33, emlrt_marshallOut(u.mem_dm0_ds.mem_dm0_dtaus0_ds));
  propValues[5] = m33;
  m34 = nullptr;
  emlrtAssign(&m34, emlrt_marshallOut(u.mem_dm0_ds.mem_dm0_dfs0_ds));
  propValues[6] = m34;
  emlrtSetAllProperties((emlrtCTX)&sp, &d_y, 0, 7,
                        (const char_T **)&c_propNames[0],
                        (const char_T **)&c_propClasses[0], &propValues[0]);
  emlrtAssign(&d_y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, d_y, 0,
                                                         "MemDM0DS"));
  emlrtAssign(&m2, d_y);
  b_propValues[2] = m2;
  m3 = nullptr;
  e_y = nullptr;
  m35 = nullptr;
  m36 = nullptr;
  m37 = nullptr;
  m38 = nullptr;
  m39 = nullptr;
  m40 = nullptr;
  m41 = nullptr;
  emlrtAssign(&e_y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemDN0"));
  m35 = nullptr;
  emlrtAssign(&m35, b_emlrt_marshallOut(u.mem_dn0.mem_dn0_duzj0));
  propValues[0] = m35;
  m36 = nullptr;
  emlrtAssign(&m36, emlrt_marshallOut(u.mem_dn0.mem_dn0_dm0j0));
  propValues[1] = m36;
  m37 = nullptr;
  emlrtAssign(&m37, emlrt_marshallOut(u.mem_dn0.mem_dn0_dn0j0));
  propValues[2] = m37;
  m38 = nullptr;
  emlrtAssign(&m38, b_emlrt_marshallOut(u.mem_dn0.mem_dn0_dtcj));
  propValues[3] = m38;
  m39 = nullptr;
  emlrtAssign(&m39, b_emlrt_marshallOut(u.mem_dn0.mem_dn0_dbcj));
  propValues[4] = m39;
  m40 = nullptr;
  emlrtAssign(&m40, emlrt_marshallOut(u.mem_dn0.mem_dn0_dtaus0));
  propValues[5] = m40;
  m41 = nullptr;
  emlrtAssign(&m41, emlrt_marshallOut(u.mem_dn0.mem_dn0_dfs0));
  propValues[6] = m41;
  emlrtSetAllProperties((emlrtCTX)&sp, &e_y, 0, 7,
                        (const char_T **)&d_propNames[0],
                        (const char_T **)&d_propClasses[0], &propValues[0]);
  emlrtAssign(&e_y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, e_y, 0,
                                                         "MemDN0"));
  emlrtAssign(&m3, e_y);
  b_propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, emlrt_marshallOut(sp, u.mem_dn0_ds));
  b_propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, emlrt_marshallOut(sp, u.mem_dti));
  b_propValues[5] = m5;
  m6 = nullptr;
  emlrtAssign(&m6, emlrt_marshallOut(sp, u.mem_dti_ds));
  b_propValues[6] = m6;
  m7 = nullptr;
  emlrtAssign(&m7, emlrt_marshallOut(sp, u.mem_duzi));
  b_propValues[7] = m7;
  m8 = nullptr;
  emlrtAssign(&m8, emlrt_marshallOut(sp, u.mem_duzi_ds));
  b_propValues[8] = m8;
  m9 = nullptr;
  emlrtAssign(&m9, emlrt_marshallOut(sp, u.mem_dR0));
  b_propValues[9] = m9;
  m10 = nullptr;
  emlrtAssign(&m10, emlrt_marshallOut(sp, u.mem_dR0_ds));
  b_propValues[10] = m10;
  m11 = nullptr;
  emlrtAssign(&m11, emlrt_marshallOut(sp, u.mem_dP0));
  b_propValues[11] = m11;
  m12 = nullptr;
  emlrtAssign(&m12, emlrt_marshallOut(sp, u.mem_dP0_ds));
  b_propValues[12] = m12;
  m13 = nullptr;
  emlrtAssign(&m13, emlrt_marshallOut(sp, u.mem_dT0));
  b_propValues[13] = m13;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 14,
                        (const char_T **)&e_propNames[0],
                        (const char_T **)&e_propClasses[0], &b_propValues[0]);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0,
                                                       "MemDerivPropagLow"));
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u_data[],
                                        const int32_T u_size[2])
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[2];
  int32_T b_i;
  int32_T i;
  y = nullptr;
  b_iv[0] = u_size[0];
  b_iv[1] = u_size[1];
  m = emlrtCreateNumericArray(2, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  b_i = 0;
  while (b_i < u_size[1]) {
    b_i = 0;
    while (b_i < u_size[0]) {
      pData[i] = u_data[0];
      i++;
      b_i = 1;
    }
    b_i = 1;
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const BVPProp &u)
{
  const mxArray *propValues[6];
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *y;
  const char_T *propClasses[6]{"BVPProp", "BVPProp", "BVPProp",
                               "BVPProp", "BVPProp", "BVPProp"};
  const char_T *propNames[6]{"vect_tol", "norm_tol", "clk_bvp",
                             "Bu",       "nb_iter",  "IC_opt"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  emlrtAssign(&y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "BVPProp"));
  m = nullptr;
  emlrtAssign(&m, d_emlrt_marshallOut(u.vect_tol));
  propValues[0] = m;
  m1 = nullptr;
  emlrtAssign(&m1, emlrt_marshallOut(u.norm_tol.data, u.norm_tol.size));
  propValues[1] = m1;
  m2 = nullptr;
  emlrtAssign(&m2, emlrt_marshallOut(u.clk_bvp.data, u.clk_bvp.size));
  propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, b_emlrt_marshallOut(u.Bu));
  propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, emlrt_marshallOut(u.nb_iter));
  propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, d_emlrt_marshallOut(u.IC_opt));
  propValues[5] = m5;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 6, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(
      &y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0, "BVPProp"));
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const MemBVP &u)
{
  const mxArray *b_propValues[6];
  const mxArray *propValues[6];
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m10;
  const mxArray *m11;
  const mxArray *m12;
  const mxArray *m13;
  const mxArray *m14;
  const mxArray *m15;
  const mxArray *m16;
  const mxArray *m17;
  const mxArray *m18;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *m7;
  const mxArray *m8;
  const mxArray *m9;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[3];
  int32_T i;
  const char_T *b_propClasses[6]{"MemYS", "MemYS", "MemYS",
                                 "MemYS", "MemYS", "MemYS"};
  const char_T *b_propNames[6]{"mem_ts",  "mem_uzs", "mem_m0s",
                               "mem_n0s", "mem_R0s", "mem_p0s"};
  const char_T *c_propClasses[6]{"MemBVP", "MemBVP", "MemBVP",
                                 "MemBVP", "MemBVP", "MemBVP"};
  const char_T *c_propNames[6]{"mem_y",  "mem_ys", "mem_uixy",
                               "mem_u0", "mem_T",  "mem_inv_sum_Ki"};
  const char_T *propClasses[6]{"MemY", "MemY", "MemY", "MemY", "MemY", "MemY"};
  const char_T *propNames[6]{"mem_t",  "mem_uz", "mem_m0",
                             "mem_n0", "mem_R0", "mem_p0"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  emlrtAssign(&y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemBVP"));
  m = nullptr;
  b_y = nullptr;
  m6 = nullptr;
  m7 = nullptr;
  m8 = nullptr;
  m9 = nullptr;
  m10 = nullptr;
  m11 = nullptr;
  emlrtAssign(&b_y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemY"));
  m6 = nullptr;
  emlrtAssign(&m6, b_emlrt_marshallOut(u.mem_y.mem_t));
  propValues[0] = m6;
  m7 = nullptr;
  emlrtAssign(&m7, b_emlrt_marshallOut(u.mem_y.mem_uz));
  propValues[1] = m7;
  m8 = nullptr;
  emlrtAssign(&m8, c_emlrt_marshallOut(u.mem_y.mem_m0));
  propValues[2] = m8;
  m9 = nullptr;
  emlrtAssign(&m9, c_emlrt_marshallOut(u.mem_y.mem_n0));
  propValues[3] = m9;
  m10 = nullptr;
  emlrtAssign(&m10, emlrt_marshallOut(u.mem_y.mem_R0));
  propValues[4] = m10;
  m11 = nullptr;
  emlrtAssign(&m11, c_emlrt_marshallOut(u.mem_y.mem_p0));
  propValues[5] = m11;
  emlrtSetAllProperties((emlrtCTX)&sp, &b_y, 0, 6,
                        (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(&b_y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, b_y, 0,
                                                         "MemY"));
  emlrtAssign(&m, b_y);
  b_propValues[0] = m;
  m1 = nullptr;
  c_y = nullptr;
  m12 = nullptr;
  m13 = nullptr;
  m14 = nullptr;
  m15 = nullptr;
  m16 = nullptr;
  m17 = nullptr;
  emlrtAssign(&c_y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "MemYS"));
  m12 = nullptr;
  emlrtAssign(&m12, b_emlrt_marshallOut(u.mem_ys.mem_ts));
  propValues[0] = m12;
  m13 = nullptr;
  emlrtAssign(&m13, b_emlrt_marshallOut(u.mem_ys.mem_uzs));
  propValues[1] = m13;
  m14 = nullptr;
  emlrtAssign(&m14, c_emlrt_marshallOut(u.mem_ys.mem_m0s));
  propValues[2] = m14;
  m15 = nullptr;
  emlrtAssign(&m15, c_emlrt_marshallOut(u.mem_ys.mem_n0s));
  propValues[3] = m15;
  m16 = nullptr;
  emlrtAssign(&m16, emlrt_marshallOut(u.mem_ys.mem_R0s));
  propValues[4] = m16;
  m17 = nullptr;
  emlrtAssign(&m17, c_emlrt_marshallOut(u.mem_ys.mem_p0s));
  propValues[5] = m17;
  emlrtSetAllProperties((emlrtCTX)&sp, &c_y, 0, 6,
                        (const char_T **)&b_propNames[0],
                        (const char_T **)&b_propClasses[0], &propValues[0]);
  emlrtAssign(&c_y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, c_y, 0,
                                                         "MemYS"));
  emlrtAssign(&m1, c_y);
  b_propValues[1] = m1;
  m2 = nullptr;
  d_y = nullptr;
  b_iv[0] = 2;
  b_iv[1] = u.mem_uixy.size(1);
  b_iv[2] = u.mem_uixy.size(2);
  m18 = emlrtCreateNumericArray(3, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m18);
  i = 0;
  for (int32_T b_i{0}; b_i < u.mem_uixy.size(2); b_i++) {
    for (int32_T c_i{0}; c_i < u.mem_uixy.size(1); c_i++) {
      pData[i] = u.mem_uixy[2 * c_i + 2 * u.mem_uixy.size(1) * b_i];
      pData[i + 1] = u.mem_uixy[(2 * c_i + 2 * u.mem_uixy.size(1) * b_i) + 1];
      i += 2;
    }
  }
  emlrtAssign(&d_y, m18);
  emlrtAssign(&m2, d_y);
  b_propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, c_emlrt_marshallOut(u.mem_u0));
  b_propValues[3] = m3;
  m4 = nullptr;
  e_y = nullptr;
  b_iv[0] = 4;
  b_iv[1] = 4;
  b_iv[2] = u.mem_T.size(2);
  m18 = emlrtCreateNumericArray(3, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m18);
  i = 0;
  for (int32_T b_i{0}; b_i < u.mem_T.size(2); b_i++) {
    for (int32_T c_i{0}; c_i < 4; c_i++) {
      pData[i] = u.mem_T[4 * c_i + 16 * b_i];
      pData[i + 1] = u.mem_T[(4 * c_i + 16 * b_i) + 1];
      pData[i + 2] = u.mem_T[(4 * c_i + 16 * b_i) + 2];
      pData[i + 3] = u.mem_T[(4 * c_i + 16 * b_i) + 3];
      i += 4;
    }
  }
  emlrtAssign(&e_y, m18);
  emlrtAssign(&m4, e_y);
  b_propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, emlrt_marshallOut(u.mem_inv_sum_Ki));
  b_propValues[5] = m5;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 6,
                        (const char_T **)&c_propNames[0],
                        (const char_T **)&c_propClasses[0], &b_propValues[0]);
  emlrtAssign(
      &y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0, "MemBVP"));
  return y;
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u)
{
  static const int32_T b_iv[2]{0, 0};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&b_iv[0], mxDOUBLE_CLASS,
                              mxREAL);
  emlrtMxSetData((mxArray *)m, &(((coder::array<real_T, 2U> *)&u)->data())[0]);
  emlrtSetDimensions((mxArray *)m, ((coder::array<real_T, 2U> *)&u)->size(), 2);
  emlrtAssign(&y, m);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{3, -1};
  int32_T b_iv[2];
  boolean_T bv[2]{false, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &b_iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, b_iv[0], b_iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static const mxArray *f_emlrt_marshallOut(const coder::array<real_T, 4U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[4];
  int32_T i;
  y = nullptr;
  b_iv[0] = 6;
  b_iv[1] = 6;
  b_iv[2] = u.size(2);
  b_iv[3] = u.size(3);
  m = emlrtCreateNumericArray(4, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(3); b_i++) {
    for (int32_T c_i{0}; c_i < u.size(2); c_i++) {
      for (int32_T d_i{0}; d_i < 6; d_i++) {
        for (int32_T e_i{0}; e_i < 6; e_i++) {
          pData[i + e_i] =
              u[((e_i + 6 * d_i) + 36 * c_i) + 36 * u.size(2) * b_i];
        }
        i += 6;
      }
    }
  }
  emlrtAssign(&y, m);
  return y;
}

void CTCR_Shape_api(const mxArray *const prhs[5], int32_T nlhs,
                    const mxArray *plhs[10])
{
  BVPProp bvp_prop;
  CTCRCarac ctcr_carac;
  CTCRConstruc ctcr_construc;
  CTCRLoad ctcr_load;
  MemBVP mem_bvp;
  MemCJ mem_CJ;
  MemDerivPropagHigh mem_deriv_propag_high;
  MemDerivPropagLow mem_deriv_propag_low;
  SimulationParam simulation_param;
  coder::array<real_T, 2U> ctcr_shape;
  coder::array<real_T, 1U> IC;
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  struct0_T output;
  real_T exitflag;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  // Marshall function inputs
  IC.no_free();
  emlrt_marshallIn(st, emlrtAlias(prhs[0]), "IC", IC);
  emlrt_marshallIn(st, emlrtAliasP(prhs[1]), "simulation_param",
                   simulation_param);
  emlrt_marshallIn(st, emlrtAliasP(prhs[2]), "ctcr_carac", ctcr_carac);
  emlrt_marshallIn(st, emlrtAliasP(prhs[3]), "ctcr_load", ctcr_load);
  emlrt_marshallIn(st, emlrtAliasP(prhs[4]), "ctcr_construc", ctcr_construc);
  // Invoke the target function
  CTCR_Shape(&st, IC, &simulation_param, &ctcr_carac, &ctcr_load,
             &ctcr_construc, ctcr_shape, &mem_bvp, &bvp_prop,
             &mem_deriv_propag_low, &mem_deriv_propag_high, &mem_CJ, &exitflag,
             &output);
  // Marshall function outputs
  ctcr_shape.no_free();
  plhs[0] = emlrt_marshallOut(ctcr_shape);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(st, mem_bvp);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(st, bvp_prop);
  }
  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(st, mem_deriv_propag_low);
  }
  if (nlhs > 4) {
    plhs[4] = emlrt_marshallOut(st, mem_deriv_propag_high);
  }
  if (nlhs > 5) {
    plhs[5] = emlrt_marshallOut(st, mem_CJ);
  }
  if (nlhs > 6) {
    plhs[6] = emlrt_marshallOut(st, simulation_param);
  }
  if (nlhs > 7) {
    plhs[7] = emlrt_marshallOut(st, ctcr_construc);
  }
  if (nlhs > 8) {
    plhs[8] = emlrt_marshallOut(exitflag);
  }
  if (nlhs > 9) {
    plhs[9] = emlrt_marshallOut(st, output);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

// End of code generation (_coder_CTCR_Shape_api.cpp)
