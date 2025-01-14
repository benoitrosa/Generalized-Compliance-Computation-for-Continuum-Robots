//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CTCR_Deriv_Propag_data.cpp
//
// Code generation for function 'CTCR_Deriv_Propag_data'
//

// Include files
#include "CTCR_Deriv_Propag_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

const volatile char_T *emlrtBreakCheckR2012bFlagVar{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131642U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "CTCR_Deriv_Propag",                                  // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    nullptr                                               // fSigMem
};

emlrtRSInfo j_emlrtRSI{
    7,         // lineNo
    "getTime", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/getTime.m" // pathName
};

emlrtRSInfo k_emlrtRSI{
    21,                     // lineNo
    "CoderTimeAPI/getTime", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" // pathName
};

emlrtRSInfo l_emlrtRSI{
    148,                                  // lineNo
    "CoderTimeAPI/callEMLRTClockGettime", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" // pathName
};

emlrtRSInfo p_emlrtRSI{
    39,     // lineNo
    "find", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

emlrtRSInfo t_emlrtRSI{
    20,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" // pathName
};

emlrtRTEInfo emlrtRTEI{
    159,                    // lineNo
    13,                     // colNo
    "coderTimeCheckStatus", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" // pName
};

const char_T cv[26]{'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
                    'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M',
                    'o', 'n', 'o', 't', 'o', 'n', 'i', 'c'};

const int8_T iv[9]{0, 1, 0, -1, 0, 0, 0, 0, 0};

// End of code generation (CTCR_Deriv_Propag_data.cpp)
