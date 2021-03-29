/*
 * File: BoostXL_3PH.h
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

#ifndef RTW_HEADER_BoostXL_3PH_h_
#define RTW_HEADER_BoostXL_3PH_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef BoostXL_3PH_COMMON_INCLUDES_
# define BoostXL_3PH_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "F2837xD_device.h"
#include "F2837xD_gpio.h"
#include "F2837xD_Ipc_drivers.h"
#include "MW_c2000DAC.h"
#endif                                 /* BoostXL_3PH_COMMON_INCLUDES_ */

#include "BoostXL_3PH_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeDeltaY
# define rtmGetOdeDeltaY(rtm)          ((rtm)->OdeDeltaY)
#endif

#ifndef rtmSetOdeDeltaY
# define rtmSetOdeDeltaY(rtm, val)     ((rtm)->OdeDeltaY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeX0
# define rtmGetOdeX0(rtm)              ((rtm)->odeX0)
#endif

#ifndef rtmSetOdeX0
# define rtmSetOdeX0(rtm, val)         ((rtm)->odeX0 = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

extern void configureCPU2Peripherals(uint32_T gpioNumber, uint32_T gpGRegValA,
  uint32_T gpRegValA);

/* Block signals (default storage) */
typedef struct {
  real_T StateSpace_o1[18];            /* '<S74>/State-Space' */
  real_T StateSpace_o2[12];            /* '<S74>/State-Space' */
  real_T donotdeletethisgain;          /* '<S2>/do not delete this gain' */
  real_T donotdeletethisgain_n;        /* '<S3>/do not delete this gain' */
  real_T donotdeletethisgain_d;        /* '<S4>/do not delete this gain' */
  real_T DataTypeConversion;           /* '<S50>/Data Type Conversion' */
  real_T DataTypeConversion_p;         /* '<S43>/Data Type Conversion' */
  real_T DataTypeConversion_pp;        /* '<S71>/Data Type Conversion' */
  real_T DataTypeConversion_b;         /* '<S57>/Data Type Conversion' */
  real_T DataTypeConversion_i;         /* '<S64>/Data Type Conversion' */
  real_T DataTypeConversion_k;         /* '<S36>/Data Type Conversion' */
  real_T donotdeletethisgain_c;        /* '<S23>/do not delete this gain' */
  real_T donotdeletethisgain_g;        /* '<S22>/do not delete this gain' */
  real_T donotdeletethisgain_p;        /* '<S24>/do not delete this gain' */
  real_T Gain4;                        /* '<S6>/Gain4' */
  real_T Van;                          /* '<S6>/Gain6' */
  real_T Vcn;                          /* '<S6>/Gain5' */
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T Gain2;                        /* '<Root>/Gain2' */
  real_T StateSpace;                   /* '<S25>/State-Space' */
  real_T StateSpace_i;                 /* '<S26>/State-Space' */
  real_T StateSpace_o;                 /* '<S27>/State-Space' */
  boolean_T GPIO12217;                 /* '<Root>/GPIO122 (17)' */
  boolean_T GPIO12318;                 /* '<Root>/GPIO123 (18)' */
  boolean_T GPIO12413;                 /* '<Root>/GPIO124 (13)' */
  boolean_T GPIO5815;                  /* '<Root>/GPIO58 (15)' */
  boolean_T GPIO5914;                  /* '<Root>/GPIO59 (14)' */
  boolean_T GPIO6119;                  /* '<Root>/GPIO61 (19)' */
} B_BoostXL_3PH_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T StateSpace_DSTATE[3];         /* '<S74>/State-Space' */
  struct {
    void *AS;
    void *BS;
    void *CS;
    void *DS;
    void *DX_COL;
    void *BD_COL;
    void *TMP1;
    void *TMP2;
    void *XTMP;
    void *SWITCH_STATUS;
    void *SWITCH_STATUS_INIT;
    void *SW_CHG;
    void *G_STATE;
    void *USWLAST;
    void *XKM12;
    void *XKP12;
    void *XLAST;
    void *ULAST;
    void *IDX_SW_CHG;
    void *Y_SWITCH;
    void *SWITCH_TYPES;
    void *IDX_OUT_SW;
    void *SWITCH_TOPO_SAVED_IDX;
    void *SWITCH_MAP;
  } StateSpace_PWORK;                  /* '<S74>/State-Space' */

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<Root>/Scope4' */

  struct {
    void *LoggedData;
  } Scope8_PWORK;                      /* '<Root>/Scope8' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData;
  } Scope10_PWORK;                     /* '<Root>/Scope10' */

  int_T StateSpace_IWORK[11];          /* '<S74>/State-Space' */
} DW_BoostXL_3PH_T;

/* Continuous states (default storage) */
typedef struct {
  real_T StateSpace_CSTATE[2];         /* '<S18>/State-Space' */
  real_T StateSpace_CSTATE_h[2];       /* '<S19>/State-Space' */
  real_T StateSpace_CSTATE_hx[2];      /* '<S20>/State-Space' */
  real_T StateSpace_CSTATE_e[2];       /* '<S25>/State-Space' */
  real_T StateSpace_CSTATE_o[2];       /* '<S26>/State-Space' */
  real_T StateSpace_CSTATE_j[2];       /* '<S27>/State-Space' */
} X_BoostXL_3PH_T;

/* State derivatives (default storage) */
typedef struct {
  real_T StateSpace_CSTATE[2];         /* '<S18>/State-Space' */
  real_T StateSpace_CSTATE_h[2];       /* '<S19>/State-Space' */
  real_T StateSpace_CSTATE_hx[2];      /* '<S20>/State-Space' */
  real_T StateSpace_CSTATE_e[2];       /* '<S25>/State-Space' */
  real_T StateSpace_CSTATE_o[2];       /* '<S26>/State-Space' */
  real_T StateSpace_CSTATE_j[2];       /* '<S27>/State-Space' */
} XDot_BoostXL_3PH_T;

/* State disabled  */
typedef struct {
  boolean_T StateSpace_CSTATE[2];      /* '<S18>/State-Space' */
  boolean_T StateSpace_CSTATE_h[2];    /* '<S19>/State-Space' */
  boolean_T StateSpace_CSTATE_hx[2];   /* '<S20>/State-Space' */
  boolean_T StateSpace_CSTATE_e[2];    /* '<S25>/State-Space' */
  boolean_T StateSpace_CSTATE_o[2];    /* '<S26>/State-Space' */
  boolean_T StateSpace_CSTATE_j[2];    /* '<S27>/State-Space' */
} XDis_BoostXL_3PH_T;

#ifndef ODE8_INTG
#define ODE8_INTG

/* ODE8 Integration Data */
typedef struct {
  real_T *deltaY;                      /* output diff */
  real_T *f[13];                       /* derivatives */
  real_T *x0;                          /* Initial State */
} ODE8_IntgData;

#endif

/* Parameters (default storage) */
struct P_BoostXL_3PH_T_ {
  real_T Vdc_Amplitude;                /* Mask Parameter: Vdc_Amplitude
                                        * Referenced by: '<S73>/DC'
                                        */
  real_T SwitchCurrents_Value[12];     /* Expression: zeros(12,1)
                                        * Referenced by: '<S76>/SwitchCurrents'
                                        */
  real_T StateSpace_AS_param[9];       /* Expression: S.A
                                        * Referenced by: '<S74>/State-Space'
                                        */
  real_T StateSpace_BS_param[39];      /* Expression: S.B
                                        * Referenced by: '<S74>/State-Space'
                                        */
  real_T StateSpace_CS_param[54];      /* Expression: S.C
                                        * Referenced by: '<S74>/State-Space'
                                        */
  real_T StateSpace_DS_param[234];     /* Expression: S.D
                                        * Referenced by: '<S74>/State-Space'
                                        */
  real_T StateSpace_X0_param[3];       /* Expression: S.x0
                                        * Referenced by: '<S74>/State-Space'
                                        */
  real_T donotdeletethisgain_Gain;     /* Expression: 1
                                        * Referenced by: '<S2>/do not delete this gain'
                                        */
  real_T donotdeletethisgain_Gain_d;   /* Expression: 1
                                        * Referenced by: '<S3>/do not delete this gain'
                                        */
  real_T donotdeletethisgain_Gain_c;   /* Expression: 1
                                        * Referenced by: '<S4>/do not delete this gain'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T donotdeletethisgain_Gain_a;   /* Expression: 1
                                        * Referenced by: '<S23>/do not delete this gain'
                                        */
  real_T donotdeletethisgain_Gain_h;   /* Expression: 1
                                        * Referenced by: '<S22>/do not delete this gain'
                                        */
  real_T donotdeletethisgain_Gain_df;  /* Expression: 1
                                        * Referenced by: '<S24>/do not delete this gain'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1/3
                                        * Referenced by: '<S6>/Gain4'
                                        */
  real_T Gain6_Gain;                   /* Expression: 1/3
                                        * Referenced by: '<S6>/Gain6'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1/3
                                        * Referenced by: '<S6>/Gain5'
                                        */
  real_T StateSpace_A[3];              /* Computed Parameter: StateSpace_A
                                        * Referenced by: '<S18>/State-Space'
                                        */
  real_T StateSpace_B;                 /* Computed Parameter: StateSpace_B
                                        * Referenced by: '<S18>/State-Space'
                                        */
  real_T StateSpace_C;                 /* Computed Parameter: StateSpace_C
                                        * Referenced by: '<S18>/State-Space'
                                        */
  real_T StateSpace_InitialCondition;  /* Expression: x0c
                                        * Referenced by: '<S18>/State-Space'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1900/16.5+2048
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T StateSpace_A_p[3];            /* Computed Parameter: StateSpace_A_p
                                        * Referenced by: '<S19>/State-Space'
                                        */
  real_T StateSpace_B_f;               /* Computed Parameter: StateSpace_B_f
                                        * Referenced by: '<S19>/State-Space'
                                        */
  real_T StateSpace_C_o;               /* Computed Parameter: StateSpace_C_o
                                        * Referenced by: '<S19>/State-Space'
                                        */
  real_T StateSpace_InitialCondition_i;/* Expression: x0c
                                        * Referenced by: '<S19>/State-Space'
                                        */
  real_T Gain_Gain;                    /* Expression: 1900/16.5+2048
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T StateSpace_A_j[3];            /* Computed Parameter: StateSpace_A_j
                                        * Referenced by: '<S20>/State-Space'
                                        */
  real_T StateSpace_B_m;               /* Computed Parameter: StateSpace_B_m
                                        * Referenced by: '<S20>/State-Space'
                                        */
  real_T StateSpace_C_b;               /* Computed Parameter: StateSpace_C_b
                                        * Referenced by: '<S20>/State-Space'
                                        */
  real_T StateSpace_InitialCondition_b;/* Expression: x0c
                                        * Referenced by: '<S20>/State-Space'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1900/16.5+2048
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T K_Gain[3];                    /* Expression: K
                                        * Referenced by: '<S1>/K'
                                        */
  real_T StateSpace_A_jk[3];           /* Computed Parameter: StateSpace_A_jk
                                        * Referenced by: '<S25>/State-Space'
                                        */
  real_T StateSpace_B_p;               /* Computed Parameter: StateSpace_B_p
                                        * Referenced by: '<S25>/State-Space'
                                        */
  real_T StateSpace_C_j;               /* Computed Parameter: StateSpace_C_j
                                        * Referenced by: '<S25>/State-Space'
                                        */
  real_T StateSpace_InitialCondition_f;/* Expression: x0c
                                        * Referenced by: '<S25>/State-Space'
                                        */
  real_T StateSpace_A_b[3];            /* Computed Parameter: StateSpace_A_b
                                        * Referenced by: '<S26>/State-Space'
                                        */
  real_T StateSpace_B_a;               /* Computed Parameter: StateSpace_B_a
                                        * Referenced by: '<S26>/State-Space'
                                        */
  real_T StateSpace_C_p;               /* Computed Parameter: StateSpace_C_p
                                        * Referenced by: '<S26>/State-Space'
                                        */
  real_T StateSpace_InitialCondition_p;/* Expression: x0c
                                        * Referenced by: '<S26>/State-Space'
                                        */
  real_T StateSpace_A_f[3];            /* Computed Parameter: StateSpace_A_f
                                        * Referenced by: '<S27>/State-Space'
                                        */
  real_T StateSpace_B_e;               /* Computed Parameter: StateSpace_B_e
                                        * Referenced by: '<S27>/State-Space'
                                        */
  real_T StateSpace_C_p1;              /* Computed Parameter: StateSpace_C_p1
                                        * Referenced by: '<S27>/State-Space'
                                        */
  real_T StateSpace_InitialCondition_iv;/* Expression: x0c
                                         * Referenced by: '<S27>/State-Space'
                                         */
};

/* Real-time Model Data Structure */
struct tag_RTM_BoostXL_3PH_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  X_BoostXL_3PH_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T OdeDeltaY[12];
  real_T odeF[13][12];
  real_T odeX0[12];
  ODE8_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    uint32_T clockTick2;
    struct {
      uint32_T TID[3];
    } TaskCounters;

    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[3];
  } Timing;
};

/* Block parameters (default storage) */
extern P_BoostXL_3PH_T BoostXL_3PH_P;

/* Block signals (default storage) */
extern B_BoostXL_3PH_T BoostXL_3PH_B;

/* Continuous states (default storage) */
extern X_BoostXL_3PH_T BoostXL_3PH_X;

/* Block states (default storage) */
extern DW_BoostXL_3PH_T BoostXL_3PH_DW;

/* External function called from main */
extern void BoostXL_3PH_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void BoostXL_3PH_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void BoostXL_3PH_initialize(void);
extern void BoostXL_3PH_step0(void);
extern void BoostXL_3PH_step2(void);
extern void BoostXL_3PH_terminate(void);

/* Real-time Model object */
extern RT_MODEL_BoostXL_3PH_T *const BoostXL_3PH_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S7>/Add' : Unused code path elimination
 * Block '<S34>/0 1' : Unused code path elimination
 * Block '<S34>/Gain' : Unused code path elimination
 * Block '<S34>/Saturation' : Unused code path elimination
 * Block '<S34>/Sum' : Unused code path elimination
 * Block '<S34>/Switch' : Unused code path elimination
 * Block '<S34>/eee' : Unused code path elimination
 * Block '<S36>/0 1' : Unused code path elimination
 * Block '<S36>/1//Rsw' : Unused code path elimination
 * Block '<S36>/Switch' : Unused code path elimination
 * Block '<S8>/Add' : Unused code path elimination
 * Block '<S41>/0 1' : Unused code path elimination
 * Block '<S41>/Gain' : Unused code path elimination
 * Block '<S41>/Saturation' : Unused code path elimination
 * Block '<S41>/Sum' : Unused code path elimination
 * Block '<S41>/Switch' : Unused code path elimination
 * Block '<S41>/eee' : Unused code path elimination
 * Block '<S43>/0 1' : Unused code path elimination
 * Block '<S43>/1//Rsw' : Unused code path elimination
 * Block '<S43>/Switch' : Unused code path elimination
 * Block '<S9>/Add' : Unused code path elimination
 * Block '<S48>/0 1' : Unused code path elimination
 * Block '<S48>/Gain' : Unused code path elimination
 * Block '<S48>/Saturation' : Unused code path elimination
 * Block '<S48>/Sum' : Unused code path elimination
 * Block '<S48>/Switch' : Unused code path elimination
 * Block '<S48>/eee' : Unused code path elimination
 * Block '<S50>/0 1' : Unused code path elimination
 * Block '<S50>/1//Rsw' : Unused code path elimination
 * Block '<S50>/Switch' : Unused code path elimination
 * Block '<S10>/Add' : Unused code path elimination
 * Block '<S55>/0 1' : Unused code path elimination
 * Block '<S55>/Gain' : Unused code path elimination
 * Block '<S55>/Saturation' : Unused code path elimination
 * Block '<S55>/Sum' : Unused code path elimination
 * Block '<S55>/Switch' : Unused code path elimination
 * Block '<S55>/eee' : Unused code path elimination
 * Block '<S57>/0 1' : Unused code path elimination
 * Block '<S57>/1//Rsw' : Unused code path elimination
 * Block '<S57>/Switch' : Unused code path elimination
 * Block '<S11>/Add' : Unused code path elimination
 * Block '<S62>/0 1' : Unused code path elimination
 * Block '<S62>/Gain' : Unused code path elimination
 * Block '<S62>/Saturation' : Unused code path elimination
 * Block '<S62>/Sum' : Unused code path elimination
 * Block '<S62>/Switch' : Unused code path elimination
 * Block '<S62>/eee' : Unused code path elimination
 * Block '<S64>/0 1' : Unused code path elimination
 * Block '<S64>/1//Rsw' : Unused code path elimination
 * Block '<S64>/Switch' : Unused code path elimination
 * Block '<S12>/Add' : Unused code path elimination
 * Block '<S69>/0 1' : Unused code path elimination
 * Block '<S69>/Gain' : Unused code path elimination
 * Block '<S69>/Saturation' : Unused code path elimination
 * Block '<S69>/Sum' : Unused code path elimination
 * Block '<S69>/Switch' : Unused code path elimination
 * Block '<S69>/eee' : Unused code path elimination
 * Block '<S71>/0 1' : Unused code path elimination
 * Block '<S71>/1//Rsw' : Unused code path elimination
 * Block '<S71>/Switch' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'BoostXL_3PH'
 * '<S1>'   : 'BoostXL_3PH/Clarke Transform'
 * '<S2>'   : 'BoostXL_3PH/Current Measueent1'
 * '<S3>'   : 'BoostXL_3PH/Current Measueent2'
 * '<S4>'   : 'BoostXL_3PH/Current Measueent3'
 * '<S5>'   : 'BoostXL_3PH/LP filter  2nd order'
 * '<S6>'   : 'BoostXL_3PH/Medição_Tensões'
 * '<S7>'   : 'BoostXL_3PH/Mosfet'
 * '<S8>'   : 'BoostXL_3PH/Mosfet1'
 * '<S9>'   : 'BoostXL_3PH/Mosfet2'
 * '<S10>'  : 'BoostXL_3PH/Mosfet3'
 * '<S11>'  : 'BoostXL_3PH/Mosfet4'
 * '<S12>'  : 'BoostXL_3PH/Mosfet5'
 * '<S13>'  : 'BoostXL_3PH/Vdc'
 * '<S14>'  : 'BoostXL_3PH/powergui'
 * '<S15>'  : 'BoostXL_3PH/Current Measueent1/Model'
 * '<S16>'  : 'BoostXL_3PH/Current Measueent2/Model'
 * '<S17>'  : 'BoostXL_3PH/Current Measueent3/Model'
 * '<S18>'  : 'BoostXL_3PH/LP filter  2nd order/2nd-Order Filter'
 * '<S19>'  : 'BoostXL_3PH/LP filter  2nd order/2nd-Order Filter1'
 * '<S20>'  : 'BoostXL_3PH/LP filter  2nd order/2nd-Order Filter2'
 * '<S21>'  : 'BoostXL_3PH/Medição_Tensões/LP filter 2nd order'
 * '<S22>'  : 'BoostXL_3PH/Medição_Tensões/Voltage Measurement1'
 * '<S23>'  : 'BoostXL_3PH/Medição_Tensões/Voltage Measurement2'
 * '<S24>'  : 'BoostXL_3PH/Medição_Tensões/Voltage Measurement3'
 * '<S25>'  : 'BoostXL_3PH/Medição_Tensões/LP filter 2nd order/2nd-Order Filter'
 * '<S26>'  : 'BoostXL_3PH/Medição_Tensões/LP filter 2nd order/2nd-Order Filter1'
 * '<S27>'  : 'BoostXL_3PH/Medição_Tensões/LP filter 2nd order/2nd-Order Filter2'
 * '<S28>'  : 'BoostXL_3PH/Medição_Tensões/Voltage Measurement1/Model'
 * '<S29>'  : 'BoostXL_3PH/Medição_Tensões/Voltage Measurement2/Model'
 * '<S30>'  : 'BoostXL_3PH/Medição_Tensões/Voltage Measurement3/Model'
 * '<S31>'  : 'BoostXL_3PH/Mosfet/Diode'
 * '<S32>'  : 'BoostXL_3PH/Mosfet/Ideal Switch'
 * '<S33>'  : 'BoostXL_3PH/Mosfet/Measurement list'
 * '<S34>'  : 'BoostXL_3PH/Mosfet/Diode/Model'
 * '<S35>'  : 'BoostXL_3PH/Mosfet/Diode/Model/Measurement list'
 * '<S36>'  : 'BoostXL_3PH/Mosfet/Ideal Switch/Model'
 * '<S37>'  : 'BoostXL_3PH/Mosfet/Ideal Switch/Model/Measurement list'
 * '<S38>'  : 'BoostXL_3PH/Mosfet1/Diode'
 * '<S39>'  : 'BoostXL_3PH/Mosfet1/Ideal Switch'
 * '<S40>'  : 'BoostXL_3PH/Mosfet1/Measurement list'
 * '<S41>'  : 'BoostXL_3PH/Mosfet1/Diode/Model'
 * '<S42>'  : 'BoostXL_3PH/Mosfet1/Diode/Model/Measurement list'
 * '<S43>'  : 'BoostXL_3PH/Mosfet1/Ideal Switch/Model'
 * '<S44>'  : 'BoostXL_3PH/Mosfet1/Ideal Switch/Model/Measurement list'
 * '<S45>'  : 'BoostXL_3PH/Mosfet2/Diode'
 * '<S46>'  : 'BoostXL_3PH/Mosfet2/Ideal Switch'
 * '<S47>'  : 'BoostXL_3PH/Mosfet2/Measurement list'
 * '<S48>'  : 'BoostXL_3PH/Mosfet2/Diode/Model'
 * '<S49>'  : 'BoostXL_3PH/Mosfet2/Diode/Model/Measurement list'
 * '<S50>'  : 'BoostXL_3PH/Mosfet2/Ideal Switch/Model'
 * '<S51>'  : 'BoostXL_3PH/Mosfet2/Ideal Switch/Model/Measurement list'
 * '<S52>'  : 'BoostXL_3PH/Mosfet3/Diode'
 * '<S53>'  : 'BoostXL_3PH/Mosfet3/Ideal Switch'
 * '<S54>'  : 'BoostXL_3PH/Mosfet3/Measurement list'
 * '<S55>'  : 'BoostXL_3PH/Mosfet3/Diode/Model'
 * '<S56>'  : 'BoostXL_3PH/Mosfet3/Diode/Model/Measurement list'
 * '<S57>'  : 'BoostXL_3PH/Mosfet3/Ideal Switch/Model'
 * '<S58>'  : 'BoostXL_3PH/Mosfet3/Ideal Switch/Model/Measurement list'
 * '<S59>'  : 'BoostXL_3PH/Mosfet4/Diode'
 * '<S60>'  : 'BoostXL_3PH/Mosfet4/Ideal Switch'
 * '<S61>'  : 'BoostXL_3PH/Mosfet4/Measurement list'
 * '<S62>'  : 'BoostXL_3PH/Mosfet4/Diode/Model'
 * '<S63>'  : 'BoostXL_3PH/Mosfet4/Diode/Model/Measurement list'
 * '<S64>'  : 'BoostXL_3PH/Mosfet4/Ideal Switch/Model'
 * '<S65>'  : 'BoostXL_3PH/Mosfet4/Ideal Switch/Model/Measurement list'
 * '<S66>'  : 'BoostXL_3PH/Mosfet5/Diode'
 * '<S67>'  : 'BoostXL_3PH/Mosfet5/Ideal Switch'
 * '<S68>'  : 'BoostXL_3PH/Mosfet5/Measurement list'
 * '<S69>'  : 'BoostXL_3PH/Mosfet5/Diode/Model'
 * '<S70>'  : 'BoostXL_3PH/Mosfet5/Diode/Model/Measurement list'
 * '<S71>'  : 'BoostXL_3PH/Mosfet5/Ideal Switch/Model'
 * '<S72>'  : 'BoostXL_3PH/Mosfet5/Ideal Switch/Model/Measurement list'
 * '<S73>'  : 'BoostXL_3PH/Vdc/Model'
 * '<S74>'  : 'BoostXL_3PH/powergui/EquivalentModel1'
 * '<S75>'  : 'BoostXL_3PH/powergui/EquivalentModel1/Gates'
 * '<S76>'  : 'BoostXL_3PH/powergui/EquivalentModel1/Sources'
 * '<S77>'  : 'BoostXL_3PH/powergui/EquivalentModel1/Status'
 * '<S78>'  : 'BoostXL_3PH/powergui/EquivalentModel1/Yout'
 */
#endif                                 /* RTW_HEADER_BoostXL_3PH_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
