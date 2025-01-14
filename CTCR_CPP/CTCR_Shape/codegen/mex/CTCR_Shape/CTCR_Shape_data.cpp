//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// CTCR_Shape_data.cpp
//
// Code generation for function 'CTCR_Shape_data'
//

// Include files
#include "CTCR_Shape_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

const volatile char_T *emlrtBreakCheckR2012bFlagVar{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131642U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "CTCR_Shape",                                         // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2666790369U, 2630951428U, 3350295197U, 1643587045U}, // fSigWrd
    nullptr                                               // fSigMem
};

emlrtRSInfo k_emlrtRSI{
    7,         // lineNo
    "getTime", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/getTime.m" // pathName
};

emlrtRSInfo l_emlrtRSI{
    21,                     // lineNo
    "CoderTimeAPI/getTime", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" // pathName
};

emlrtRSInfo m_emlrtRSI{
    148,                                  // lineNo
    "CoderTimeAPI/callEMLRTClockGettime", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" // pathName
};

emlrtRSInfo s_emlrtRSI{
    63,                               // lineNo
    "function_handle/parenReference", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "function_handle.m" // pathName
};

emlrtRSInfo v_emlrtRSI{
    20,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" // pathName
};

emlrtRSInfo ab_emlrtRSI{
    43,                   // lineNo
    "BVP_BC_Comp_Fsolve", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_BC_Comp_Fsolve.m" // pathName
};

emlrtRSInfo bb_emlrtRSI{
    46,                   // lineNo
    "BVP_BC_Comp_Fsolve", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_BC_Comp_Fsolve.m" // pathName
};

emlrtRSInfo cb_emlrtRSI{
    49,                   // lineNo
    "BVP_BC_Comp_Fsolve", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_BC_Comp_Fsolve.m" // pathName
};

emlrtRSInfo db_emlrtRSI{
    52,                   // lineNo
    "BVP_BC_Comp_Fsolve", // fcnName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_BC_Comp_Fsolve.m" // pathName
};

emlrtRSInfo jb_emlrtRSI{
    39,     // lineNo
    "find", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

emlrtRTEInfo emlrtRTEI{
    159,                    // lineNo
    13,                     // colNo
    "coderTimeCheckStatus", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/shared/coder/coder/lib/+coder/"
    "+internal/+time/CoderTimeAPI.m" // pName
};

emlrtRTEInfo h_emlrtRTEI{
    27,            // lineNo
    14,            // colNo
    "BVP_Init_IC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Init_IC.m" // pName
};

emlrtDCInfo go_emlrtDCI{
    32,            // lineNo
    28,            // colNo
    "BVP_Init_IC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Init_IC.m", // pName
    1                       // checkKind
};

emlrtBCInfo x_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    32,                     // lineNo
    28,                     // colNo
    "mem_bvp.mem_y.mem_m0", // aName
    "BVP_Init_IC",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Init_IC.m", // pName
    0                       // checkKind
};

emlrtDCInfo ho_emlrtDCI{
    33,            // lineNo
    28,            // colNo
    "BVP_Init_IC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Init_IC.m", // pName
    1                       // checkKind
};

emlrtBCInfo y_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    33,                     // lineNo
    28,                     // colNo
    "mem_bvp.mem_y.mem_n0", // aName
    "BVP_Init_IC",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Init_IC.m", // pName
    0                       // checkKind
};

emlrtBCInfo ab_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    28,                // lineNo
    84,                // colNo
    "bvp_prop.IC_opt", // aName
    "BVP_Init_IC",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Init_IC.m", // pName
    0                       // checkKind
};

emlrtBCInfo bb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    28,                     // lineNo
    30,                     // colNo
    "mem_bvp.mem_y.mem_uz", // aName
    "BVP_Init_IC",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Init_IC.m", // pName
    0                       // checkKind
};

emlrtBCInfo cb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    28,                     // lineNo
    33,                     // colNo
    "mem_bvp.mem_y.mem_uz", // aName
    "BVP_Init_IC",          // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Init_IC.m", // pName
    0                       // checkKind
};

emlrtDCInfo io_emlrtDCI{
    28,            // lineNo
    33,            // colNo
    "BVP_Init_IC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Init_IC.m", // pName
    1                       // checkKind
};

emlrtBCInfo db_emlrtBCI{
    -1,                          // iFirst
    -1,                          // iLast
    28,                          // lineNo
    59,                          // colNo
    "ctcr_construc.vect_ind_iT", // aName
    "BVP_Init_IC",               // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Init_IC.m", // pName
    0                       // checkKind
};

emlrtBCInfo eb_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    33,                // lineNo
    84,                // colNo
    "bvp_prop.IC_opt", // aName
    "BVP_Init_IC",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Init_IC.m", // pName
    0                       // checkKind
};

emlrtDCInfo jo_emlrtDCI{
    33,            // lineNo
    84,            // colNo
    "BVP_Init_IC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Init_IC.m", // pName
    1                       // checkKind
};

emlrtBCInfo fb_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    32,                // lineNo
    84,                // colNo
    "bvp_prop.IC_opt", // aName
    "BVP_Init_IC",     // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Init_IC.m", // pName
    0                       // checkKind
};

emlrtDCInfo ko_emlrtDCI{
    32,            // lineNo
    84,            // colNo
    "BVP_Init_IC", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_Init_IC.m", // pName
    1                       // checkKind
};

emlrtRTEInfo mc_emlrtRTEI{
    40,                   // lineNo
    5,                    // colNo
    "BVP_BC_Comp_Fsolve", // fName
    "/Users/guillaume/Desktop/Seafile/THESE_LODS_COMPLET/PERSO/"
    "Generalized-Compliance-Computation-for-Continuum-Robots/CTCR_Shape_Fun"
    "ctions/BVP_BC_Comp_Fsolve.m" // pName
};

const char_T cv[26]{'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
                    'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M',
                    'o', 'n', 'o', 't', 'o', 'n', 'i', 'c'};

const int8_T iv[9]{0, 1, 0, -1, 0, 0, 0, 0, 0};

// End of code generation (CTCR_Shape_data.cpp)
