//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_Lin_Deform_info.cpp
//
// Code generation for function 'Lin_Deform'
//

// Include files
#include "_coder_Lin_Deform_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

// Function Declarations
static const mxArray *emlrtMexFcnResolvedFunctionsInfo();

// Function Definitions
static const mxArray *emlrtMexFcnResolvedFunctionsInfo()
{
  const mxArray *nameCaptureInfo;
  const char_T *data[4]{
      "789cc553d14ec230142d068c0fa23cf915e2e2378c2192e1081b096acca8e3020d6bbb6c"
      "2d226f7e8189f13bfc3e1f758c8db164192111cfcbede959efb93de9"
      "50e9b65342089da108de7154ab6b5e5bd723b48dac5ecaa9312aa8bc752ed6dfd7d5e14c"
      "c0424484610ac9c911a7846126ac570f900f0177e7305a2963e28245",
      "289869721732da4c490909a570ad4ec1999992227f1a6c2674d324c9639873df72411e59"
      "64f3c87e97e4bfa75fdcffb4c02fd6554beda99c05c2974eda7fb8a7"
      "7f16bbdef77b4fbfb8ff67815fac3faa4f4a3f003f502692b82e961494060433c13dc504"
      "1cbe1ec56a69a666eb46c3b455a3d3d5354be96a3dd3506e80818f5d",
      "b284515de5d47309660eac9652604138ab8fb9ffcb99204c4a5aeff1672e02250cd936a7"
      "d8035b7571106dc4a95fd1740ec39c7b9eef9843de7f574527abfad1"
      "7f9b1cd24f7e552e0fe917e3bffc1639fd767dc717397eb58cae0f06cc6abf3cf06b3098"
      "afdfcf9beda5686de6e816f814cd8172f85ff7ff01cb1274a3",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 1672U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties()
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *propFieldName[7]{
      "Version",      "ResolvedFunctions", "Checksum",    "EntryPoints",
      "CoverageInfo", "IsPolymorphic",     "PropertyList"};
  const char_T *epFieldName[6]{
      "Name",           "NumberOfInputs", "NumberOfOutputs",
      "ConstantInputs", "FullPath",       "TimeStamp"};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 6, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 5);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("Lin_Deform"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath",
                emlrtMxCreateString(
                    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
                    "Generalized-Compliance-Computation-for-Continuum-Robots/"
                    "CTCR_Shape_Fun"
                    "ctions/Lin_Deform.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739631.736574074));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("9.14.0.2337262 (R2023a) Update 5"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("3RwgWQaGUg3zFtKhWWQG8F"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

// End of code generation (_coder_Lin_Deform_info.cpp)
