/*
 * File: BoostXL_3PH_private.h
 *
 * Code generated for Simulink model 'BoostXL_3PH'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Mon Mar 29 09:06:23 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BoostXL_3PH_private_h_
#define RTW_HEADER_BoostXL_3PH_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include <math.h>
#include <stdlib.h>

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef CodeFormat
#define CodeFormat                     S-Function
#else
#undef CodeFormat
#define CodeFormat                     S-Function
#endif

#ifndef S_FUNCTION_NAME
#define S_FUNCTION_NAME                simulink_only_sfcn
#else
#undef S_FUNCTION_NAME
#define S_FUNCTION_NAME                simulink_only_sfcn
#endif

#ifndef S_FUNCTION_LEVEL
#define S_FUNCTION_LEVEL               2
#else
#undef S_FUNCTION_LEVEL
#define S_FUNCTION_LEVEL               2
#endif

#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        NULL
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)
#endif

#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES
#ifndef _RTW_COMMON_DEFINES_
#define _RTW_COMMON_DEFINES_
#endif
#endif

#define CPU01_TO_CPU02_PASSMSG         0x0003FFF4
#define CPU01_TO_CPU02_PASSMSG         0x0003FFF4
#define CPU01_TO_CPU02_PASSMSG         0x0003FFF4
#define CPU01_TO_CPU02_PASSMSG         0x0003FFF4
#define CPU01_TO_CPU02_PASSMSG         0x0003FFF4
#define CPU01_TO_CPU02_PASSMSG         0x0003FFF4
#define CPU01_TO_CPU02_PASSMSG         0x0003FFF4

extern real32_T rt_roundf_snf(real32_T u);

/* private model entry point functions */
extern void BoostXL_3PH_derivatives(void);

#endif                                 /* RTW_HEADER_BoostXL_3PH_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
