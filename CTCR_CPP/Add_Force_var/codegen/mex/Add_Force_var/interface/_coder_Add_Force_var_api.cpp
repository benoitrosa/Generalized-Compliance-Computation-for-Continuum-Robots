//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_Add_Force_var_api.cpp
//
// Code generation for function '_coder_Add_Force_var_api'
//

// Include files
#include "_coder_Add_Force_var_api.h"
#include "Add_Force_var.h"
#include "Add_Force_var_data.h"
#include "CTCRConstruc.h"
#include "CTCRLoad.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 1U> &ret);

static real_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[2]);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 3U> &y);

static const mxArray *b_emlrt_marshallOut(const coder::array<real_T, 2U> &u);

static const mxArray *b_emlrt_marshallOut(const real_T u[2]);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 3U> &ret);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[3]);

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[2]);

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 3U> &ret);

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static void e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 2U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *delta_f0,
                             const char_T *identifier,
                             coder::array<real_T, 2U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 1U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *prc_s0,
                             const char_T *identifier,
                             coder::array<real_T, 1U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *ctcr_construc,
                             const char_T *identifier, CTCRConstruc &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             CTCRConstruc &y);

static real_T emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 3U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *ctcr_load,
                             const char_T *identifier, CTCRLoad &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, CTCRLoad &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, real_T y[3]);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 1U> &u);

static const mxArray *emlrt_marshallOut(const real_T u[3]);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const CTCRLoad &u);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 3U> &u);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const CTCRConstruc &u);

static void f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static void g_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static void h_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

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

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[2])
{
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
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
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

static const mxArray *b_emlrt_marshallOut(const coder::array<real_T, 2U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T i;
  y = nullptr;
  iv[0] = 3;
  iv[1] = u.size(1);
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
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

static const mxArray *b_emlrt_marshallOut(const real_T u[2])
{
  static const int32_T iv[2]{1, 2};
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u[0];
  pData[1] = u[1];
  emlrtAssign(&y, m);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y)
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
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

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 3U> &ret)
{
  static const int32_T dims[3]{3, 3, -1};
  int32_T iv[3];
  boolean_T bv[3]{false, false, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 3U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, iv[0], iv[1], iv[2]);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
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

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y)
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 3U> &ret)
{
  static const int32_T dims[3]{3, -1, -1};
  int32_T iv[3];
  boolean_T bv[3]{false, true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 3U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, iv[0], iv[1], iv[2]);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static void e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{-1, 3};
  int32_T iv[2];
  boolean_T bv[2]{true, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.prealloc(iv[0] * iv[1]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, iv[0], iv[1]);
  ret.set(static_cast<real_T *>(emlrtMxGetData(src)), ret.size(0), ret.size(1));
  emlrtDestroyArray(&src);
}

static real_T emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = b_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
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
  c_emlrt_marshallIn(sp, emlrtAlias(propValues[4]), &thisId, y.vect_z);
  thisId.fIdentifier = "vect_res";
  c_emlrt_marshallIn(sp, emlrtAlias(propValues[5]), &thisId, y.vect_res);
  thisId.fIdentifier = "ui_init";
  b_emlrt_marshallIn(sp, emlrtAlias(propValues[6]), &thisId, y.ui_init);
  thisId.fIdentifier = "pos_init";
  b_emlrt_marshallIn(sp, emlrtAlias(propValues[7]), &thisId, y.pos_init);
  thisId.fIdentifier = "vect_tau_dist";
  d_emlrt_marshallIn(sp, emlrtAlias(propValues[8]), &thisId, y.vect_tau_dist);
  thisId.fIdentifier = "vect_f_dist";
  d_emlrt_marshallIn(sp, emlrtAlias(propValues[9]), &thisId, y.vect_f_dist);
  emlrtDestroyArrays(10, &propValues[0]);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 3U> &y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
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

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, real_T y[3])
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *prc_s0,
                             const char_T *identifier,
                             coder::array<real_T, 1U> &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(prc_s0), &thisId, y);
  emlrtDestroyArray(&prc_s0);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 1U> &y)
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *delta_f0,
                             const char_T *identifier,
                             coder::array<real_T, 2U> &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(delta_f0), &thisId, y);
  emlrtDestroyArray(&delta_f0);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 2U> &y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const real_T u[3])
{
  static const int32_T iv[2]{1, 3};
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u[0];
  pData[1] = u[1];
  pData[2] = u[2];
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const CTCRLoad &u)
{
  const mxArray *propValues[8];
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *m7;
  const mxArray *y;
  const char_T *propClasses[8]{"CTCRLoad", "CTCRLoad", "CTCRLoad", "CTCRLoad",
                               "CTCRLoad", "CTCRLoad", "CTCRLoad", "CTCRLoad"};
  const char_T *propNames[8]{"tau_tip",    "f_tip",    "load_lim_1",
                             "tau_dist_1", "f_dist_1", "load_lim_2",
                             "tau_dist_2", "f_dist_2"};
  y = nullptr;
  m = nullptr;
  m1 = nullptr;
  m2 = nullptr;
  m3 = nullptr;
  m4 = nullptr;
  m5 = nullptr;
  m6 = nullptr;
  m7 = nullptr;
  emlrtAssign(&y, emlrtCreateClassInstance2022a((emlrtCTX)&sp, "CTCRLoad"));
  m = nullptr;
  emlrtAssign(&m, emlrt_marshallOut(u.tau_tip));
  propValues[0] = m;
  m1 = nullptr;
  emlrtAssign(&m1, emlrt_marshallOut(u.f_tip));
  propValues[1] = m1;
  m2 = nullptr;
  emlrtAssign(&m2, b_emlrt_marshallOut(u.load_lim_1));
  propValues[2] = m2;
  m3 = nullptr;
  emlrtAssign(&m3, emlrt_marshallOut(u.tau_dist_1));
  propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, emlrt_marshallOut(u.f_dist_1));
  propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, b_emlrt_marshallOut(u.load_lim_2));
  propValues[5] = m5;
  m6 = nullptr;
  emlrtAssign(&m6, emlrt_marshallOut(u.tau_dist_2));
  propValues[6] = m6;
  m7 = nullptr;
  emlrtAssign(&m7, emlrt_marshallOut(u.f_dist_2));
  propValues[7] = m7;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 8, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0,
                                                       "CTCRLoad"));
  return y;
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 3U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[3];
  int32_T i;
  y = nullptr;
  iv[0] = 3;
  iv[1] = u.size(1);
  iv[2] = u.size(2);
  m = emlrtCreateNumericArray(3, &iv[0], mxDOUBLE_CLASS, mxREAL);
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

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T i;
  y = nullptr;
  iv[0] = 1;
  iv[1] = u.size(1);
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.size(1); b_i++) {
    pData[i] = u[b_i];
    i++;
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const CTCRConstruc &u)
{
  const mxArray *propValues[10];
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
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
  int32_T iv[3];
  int32_T iv1[2];
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
  b_y = nullptr;
  m10 = emlrtCreateDoubleScalar(u.nbP);
  emlrtAssign(&b_y, m10);
  emlrtAssign(&m, b_y);
  propValues[0] = m;
  m1 = nullptr;
  c_y = nullptr;
  iv[0] = 3;
  iv[1] = 3;
  iv[2] = u.K.size(2);
  m10 = emlrtCreateNumericArray(3, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m10);
  i = 0;
  for (int32_T b_i{0}; b_i < u.K.size(2); b_i++) {
    for (int32_T c_i{0}; c_i < 3; c_i++) {
      pData[i] = u.K[3 * c_i + 9 * b_i];
      pData[i + 1] = u.K[(3 * c_i + 9 * b_i) + 1];
      pData[i + 2] = u.K[(3 * c_i + 9 * b_i) + 2];
      i += 3;
    }
  }
  emlrtAssign(&c_y, m10);
  emlrtAssign(&m1, c_y);
  propValues[1] = m1;
  m2 = nullptr;
  d_y = nullptr;
  iv1[0] = u.vect_ind_iT.size(0);
  iv1[1] = 3;
  m10 = emlrtCreateNumericArray(2, &iv1[0], mxDOUBLE_CLASS, mxREAL);
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
  emlrtAssign(&d_y, m10);
  emlrtAssign(&m2, d_y);
  propValues[2] = m2;
  m3 = nullptr;
  e_y = nullptr;
  m10 = emlrtCreateDoubleScalar(u.ind_origin);
  emlrtAssign(&e_y, m10);
  emlrtAssign(&m3, e_y);
  propValues[3] = m3;
  m4 = nullptr;
  emlrtAssign(&m4, emlrt_marshallOut(u.vect_z));
  propValues[4] = m4;
  m5 = nullptr;
  emlrtAssign(&m5, emlrt_marshallOut(u.vect_res));
  propValues[5] = m5;
  m6 = nullptr;
  emlrtAssign(&m6, emlrt_marshallOut(u.ui_init));
  propValues[6] = m6;
  m7 = nullptr;
  emlrtAssign(&m7, emlrt_marshallOut(u.pos_init));
  propValues[7] = m7;
  m8 = nullptr;
  emlrtAssign(&m8, b_emlrt_marshallOut(u.vect_tau_dist));
  propValues[8] = m8;
  m9 = nullptr;
  emlrtAssign(&m9, b_emlrt_marshallOut(u.vect_f_dist));
  propValues[9] = m9;
  emlrtSetAllProperties((emlrtCTX)&sp, &y, 0, 10,
                        (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource((emlrtCTX)&sp, y, 0,
                                                       "CTCRConstruc"));
  return y;
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 1U> &u)
{
  static const int32_T i{0};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &(((coder::array<real_T, 1U> *)&u)->data())[0]);
  emlrtSetDimensions((mxArray *)m, ((coder::array<real_T, 1U> *)&u)->size(), 1);
  emlrtAssign(&y, m);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{-1, 3};
  int32_T iv[2];
  boolean_T bv[2]{true, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static void g_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{1, -1};
  int32_T iv[2];
  boolean_T bv[2]{false, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static void h_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{3, -1};
  int32_T iv[2];
  boolean_T bv[2]{false, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

void Add_Force_var_api(const mxArray *const prhs[4], int32_T nlhs,
                       const mxArray *plhs[3])
{
  CTCRConstruc ctcr_construc;
  CTCRConstruc ctcr_construc_new;
  CTCRLoad ctcr_load;
  CTCRLoad ctcr_load_new;
  coder::array<real_T, 2U> delta_f0;
  coder::array<real_T, 1U> mem_is0;
  coder::array<real_T, 1U> prc_s0;
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  // Marshall function inputs
  prc_s0.no_free();
  emlrt_marshallIn(st, emlrtAlias(prhs[0]), "prc_s0", prc_s0);
  delta_f0.no_free();
  emlrt_marshallIn(st, emlrtAlias(prhs[1]), "delta_f0", delta_f0);
  emlrt_marshallIn(st, emlrtAliasP(prhs[2]), "ctcr_construc", ctcr_construc);
  emlrt_marshallIn(st, emlrtAliasP(prhs[3]), "ctcr_load", ctcr_load);
  // Invoke the target function
  Add_Force_var(&st, prc_s0, delta_f0, &ctcr_construc, &ctcr_load,
                &ctcr_construc_new, &ctcr_load_new, mem_is0);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(st, ctcr_construc_new);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(st, ctcr_load_new);
  }
  if (nlhs > 2) {
    mem_is0.no_free();
    plhs[2] = emlrt_marshallOut(mem_is0);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

// End of code generation (_coder_Add_Force_var_api.cpp)
