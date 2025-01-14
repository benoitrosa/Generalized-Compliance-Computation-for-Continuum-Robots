//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_Lin_Deform_api.cpp
//
// Code generation for function '_coder_Lin_Deform_api'
//

// Include files
#include "_coder_Lin_Deform_api.h"
#include "CTCRConstruc.h"
#include "Lin_Deform.h"
#include "Lin_Deform_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Declarations
static real_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 3U> &y);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 1U> &ret);

static void b_emlrt_marshallIn(const emlrtStack &sp,
                               const mxArray *ctcr_shape_init,
                               const char_T *identifier,
                               coder::array<real_T, 2U> &y);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 4U> &ret);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 3U> &ret);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 3U> &ret);

static void e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y);

static void emlrt_marshallIn(const emlrtStack &sp,
                             const mxArray *ctcr_construc_init,
                             const char_T *identifier, CTCRConstruc &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             CTCRConstruc &y);

static real_T emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 3U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *mem_is0,
                             const char_T *identifier,
                             coder::array<real_T, 1U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 1U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *delta_f0,
                             const char_T *identifier,
                             coder::array<real_T, 2U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 2U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *mem_Cs0_init,
                             const char_T *identifier,
                             coder::array<real_T, 4U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 4U> &y);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u);

static const mxArray *emlrt_marshallOut(const real_T u);

static void f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static void g_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static void h_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static void i_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static void j_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

// Function Definitions
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

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 3U> &y)
{
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

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

static void b_emlrt_marshallIn(const emlrtStack &sp,
                               const mxArray *ctcr_shape_init,
                               const char_T *identifier,
                               coder::array<real_T, 2U> &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(ctcr_shape_init), &thisId, y);
  emlrtDestroyArray(&ctcr_shape_init);
}

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y)
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 4U> &ret)
{
  static const int32_T dims[4]{6, 6, -1, -1};
  int32_T iv[4];
  boolean_T bv[4]{false, false, true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 4U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.prealloc(iv[0] * iv[1] * iv[2] * iv[3]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, iv[0], iv[1], iv[2],
               iv[3]);
  ret.set(static_cast<real_T *>(emlrtMxGetData(src)), ret.size(0), ret.size(1),
          ret.size(2), ret.size(3));
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

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y)
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y)
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
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

static void e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               coder::array<real_T, 2U> &y)
{
  j_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp,
                             const mxArray *ctcr_construc_init,
                             const char_T *identifier, CTCRConstruc &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(ctcr_construc_init), &thisId, y);
  emlrtDestroyArray(&ctcr_construc_init);
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
  c_emlrt_marshallIn(sp, emlrtAlias(propValues[2]), &thisId, y.vect_ind_iT);
  thisId.fIdentifier = "ind_origin";
  y.ind_origin = emlrt_marshallIn(sp, emlrtAlias(propValues[3]), &thisId);
  thisId.fIdentifier = "vect_z";
  d_emlrt_marshallIn(sp, emlrtAlias(propValues[4]), &thisId, y.vect_z);
  thisId.fIdentifier = "vect_res";
  d_emlrt_marshallIn(sp, emlrtAlias(propValues[5]), &thisId, y.vect_res);
  thisId.fIdentifier = "ui_init";
  b_emlrt_marshallIn(sp, emlrtAlias(propValues[6]), &thisId, y.ui_init);
  thisId.fIdentifier = "pos_init";
  b_emlrt_marshallIn(sp, emlrtAlias(propValues[7]), &thisId, y.pos_init);
  thisId.fIdentifier = "vect_tau_dist";
  e_emlrt_marshallIn(sp, emlrtAlias(propValues[8]), &thisId, y.vect_tau_dist);
  thisId.fIdentifier = "vect_f_dist";
  e_emlrt_marshallIn(sp, emlrtAlias(propValues[9]), &thisId, y.vect_f_dist);
  emlrtDestroyArrays(10, &propValues[0]);
  emlrtDestroyArray(&u);
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
                             coder::array<real_T, 3U> &y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *mem_is0,
                             const char_T *identifier,
                             coder::array<real_T, 1U> &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(mem_is0), &thisId, y);
  emlrtDestroyArray(&mem_is0);
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
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *mem_Cs0_init,
                             const char_T *identifier,
                             coder::array<real_T, 4U> &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(mem_Cs0_init), &thisId, y);
  emlrtDestroyArray(&mem_Cs0_init);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 4U> &y)
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u)
{
  static const int32_T iv[2]{0, 0};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &(((coder::array<real_T, 2U> *)&u)->data())[0]);
  emlrtSetDimensions((mxArray *)m, ((coder::array<real_T, 2U> *)&u)->size(), 2);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateDoubleScalar(u);
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
  ret.prealloc(iv[0] * iv[1]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, iv[0], iv[1]);
  ret.set(static_cast<real_T *>(emlrtMxGetData(src)), ret.size(0), ret.size(1));
  emlrtDestroyArray(&src);
}

static void g_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{3, -1};
  int32_T iv[2];
  boolean_T bv[2]{false, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.prealloc(iv[0] * iv[1]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, iv[0], iv[1]);
  ret.set(static_cast<real_T *>(emlrtMxGetData(src)), ret.size(0), ret.size(1));
  emlrtDestroyArray(&src);
}

static void h_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
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

static void i_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
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

static void j_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
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

void Lin_Deform_api(const mxArray *const prhs[5], int32_T nlhs,
                    const mxArray *plhs[2])
{
  CTCRConstruc ctcr_construc_init;
  coder::array<real_T, 4U> mem_Cs0_init;
  coder::array<real_T, 2U> ctcr_shape_def_jacob;
  coder::array<real_T, 2U> ctcr_shape_init;
  coder::array<real_T, 2U> delta_f0;
  coder::array<real_T, 1U> mem_is0;
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T time_comp_lin_deform;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  // Marshall function inputs
  mem_is0.no_free();
  emlrt_marshallIn(st, emlrtAlias(prhs[0]), "mem_is0", mem_is0);
  delta_f0.no_free();
  emlrt_marshallIn(st, emlrtAlias(prhs[1]), "delta_f0", delta_f0);
  ctcr_shape_init.no_free();
  b_emlrt_marshallIn(st, emlrtAlias(prhs[2]), "ctcr_shape_init",
                     ctcr_shape_init);
  emlrt_marshallIn(st, emlrtAliasP(prhs[3]), "ctcr_construc_init",
                   ctcr_construc_init);
  mem_Cs0_init.no_free();
  emlrt_marshallIn(st, emlrtAlias(prhs[4]), "mem_Cs0_init", mem_Cs0_init);
  // Invoke the target function
  Lin_Deform(&st, mem_is0, delta_f0, ctcr_shape_init, &ctcr_construc_init,
             mem_Cs0_init, ctcr_shape_def_jacob, &time_comp_lin_deform);
  // Marshall function outputs
  ctcr_shape_def_jacob.no_free();
  plhs[0] = emlrt_marshallOut(ctcr_shape_def_jacob);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(time_comp_lin_deform);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

// End of code generation (_coder_Lin_Deform_api.cpp)
