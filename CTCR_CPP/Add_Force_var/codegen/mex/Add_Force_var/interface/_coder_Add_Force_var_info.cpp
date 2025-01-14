//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_Add_Force_var_info.cpp
//
// Code generation for function 'Add_Force_var'
//

// Include files
#include "_coder_Add_Force_var_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

// Function Declarations
static const mxArray *emlrtMexFcnResolvedFunctionsInfo();

// Function Definitions
static const mxArray *emlrtMexFcnResolvedFunctionsInfo()
{
  const mxArray *nameCaptureInfo;
  const char_T *data[5]{
      "789ced54cb4ac340149d8a82e273e557588320e2c28dc4d407d1c62605ad483bb6571bcc"
      "cc8464a2b53bbf4011bfc38f70e5e7b874a9693a6d3a105282d607de"
      "cd9d933373cfdcc3e4a2dcee7e0e213487a278998ef26c172f74f3181a0c99cf49fb7283"
      "dbd1041a1f3827f8bb6eae33caa1c523403181dec9062336c5945b37",
      "2e200f7ce65c41a3c39cdb0e583601330e0e42440a31aa07422a5cab4da85f9a01415ed3"
      "efdfd089839e1fb5847ec753fc9043f643de27f4dc8c7aa2fe4c8a9e"
      "e0554b2da98cfadc0bea71fd5a467d3986edf72da39ea8ff98a227f813f55429fbe0f9ca"
      "45603b0e0e08285be05f72e62a26e0f0f528d68e666a55bdb86556d5",
      "e2bea16b96626825b3a86c03050f3b761b1a799511d7b131ad43671970cc6d46f3e7ccfb"
      "c094db340848bec4ce18f795d0e4aad9c42e545507fbd107e1fa3289"
      "fb504be8737e481fe4dcdf3fd9c90fe5db8b51ea054f134ba3d413f15d7aad847ac3bee3"
      "c504bd0589d78f8ea8b5775d612b50a49e7e7c55d86bf39dfe3d8c14",
      "9db47ba0043caafab584f35f357fb2ea89fa9312eeeb454cf8c7eb0c37beabbfd78c7aa2"
      "fe7d8a9ee07fce7c0ddd5e267f75ae6e3c4ffdcf55f4f97375b562b8"
      "9b86573eb40c8de3b5555a31d72b85df3f57df01b0debf70",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3040U, &nameCaptureInfo);
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
  xInputs = emlrtCreateLogicalMatrix(1, 4);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("Add_Force_var"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(4.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath",
                emlrtMxCreateString(
                    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
                    "Generalized-Compliance-Computation-for-Continuum-Robots/"
                    "CTCR_Shape_Fun"
                    "ctions/Add_Force_var.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739631.73407407408));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("9.14.0.2337262 (R2023a) Update 5"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("M2huUEuKxKBs3JnxUXAvhC"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

// End of code generation (_coder_Add_Force_var_info.cpp)
