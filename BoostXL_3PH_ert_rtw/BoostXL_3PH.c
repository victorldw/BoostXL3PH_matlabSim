/*
 * File: BoostXL_3PH.c
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

#include "BoostXL_3PH.h"
#include "BoostXL_3PH_private.h"
#include "BoostXL_3PH_dt.h"

/* Block signals (default storage) */
B_BoostXL_3PH_T BoostXL_3PH_B;

/* Continuous states */
X_BoostXL_3PH_T BoostXL_3PH_X;

/* Block states (default storage) */
DW_BoostXL_3PH_T BoostXL_3PH_DW;

/* Real-time model */
RT_MODEL_BoostXL_3PH_T BoostXL_3PH_M_;
RT_MODEL_BoostXL_3PH_T *const BoostXL_3PH_M = &BoostXL_3PH_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void BoostXL_3PH_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[2] = ((boolean_T)rtmStepTask(BoostXL_3PH_M, 2));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (BoostXL_3PH_M->Timing.TaskCounters.TID[2])++;
  if ((BoostXL_3PH_M->Timing.TaskCounters.TID[2]) > 99999) {/* Sample time: [0.5s, 0.0s] */
    BoostXL_3PH_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/* This function updates continuous states using the ODE8 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
#define BoostXL_3PH_NSTAGES            13

  static real_T rt_ODE8_B[13] = {
    4.174749114153025E-2, 0.0, 0.0, 0.0,
    0.0, -5.54523286112393E-2, 2.393128072011801E-1, 7.03510669403443E-1,
    -7.597596138144609E-1, 6.605630309222863E-1, 1.581874825101233E-1,
    -2.381095387528628E-1, 2.5E-1
  };

  static real_T rt_ODE8_C[13] = {
    0.0, 5.555555555555556E-2, 8.333333333333333E-2, 1.25E-1,
    3.125E-1, 3.75E-1, 1.475E-1, 4.65E-1,
    5.648654513822596E-1, 6.5E-1, 9.246562776405044E-1, 1.0, 1.0
  };

  static real_T rt_ODE8_A[13][13] = {
    /* rt_ODE8_A[0][] */
    { 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[1][] */
    { 5.555555555555556E-2, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[2][] */
    { 2.083333333333333E-2, 6.25E-2, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[3][] */
    { 3.125E-2, 0.0, 9.375E-2, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[4][] */
    { 3.125E-1, 0.0, -1.171875, 1.171875,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[5][] */
    { 3.75E-2, 0.0, 0.0, 1.875E-1,
      1.5E-1, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[6][] */
    { 4.791013711111111E-2, 0.0, 0.0, 1.122487127777778E-1,
      -2.550567377777778E-2, 1.284682388888889E-2, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[7][] */
    { 1.691798978729228E-2, 0.0, 0.0, 3.878482784860432E-1,
      3.597736985150033E-2, 1.969702142156661E-1, -1.727138523405018E-1, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[8][] */
    { 6.90957533591923E-2, 0.0, 0.0, -6.342479767288542E-1,
      -1.611975752246041E-1, 1.386503094588253E-1, 9.409286140357563E-1,
      2.11636326481944E-1,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[9][] */
    { 1.835569968390454E-1, 0.0, 0.0, -2.468768084315592,
      -2.912868878163005E-1, -2.647302023311738E-2, 2.8478387641928,
      2.813873314698498E-1,
      1.237448998633147E-1, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[10][] */
    { -1.215424817395888, 0.0, 0.0, 1.667260866594577E1,
      9.157418284168179E-1, -6.056605804357471, -1.600357359415618E1,
      1.484930308629766E1,
      -1.337157573528985E1, 5.134182648179638, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[11][] */
    { 2.588609164382643E-1, 0.0, 0.0, -4.774485785489205,
      -4.350930137770325E-1, -3.049483332072241, 5.577920039936099,
      6.155831589861039,
      -5.062104586736938, 2.193926173180679, 1.346279986593349E-1, 0.0, 0.0 },

    /* rt_ODE8_A[12][] */
    { 8.224275996265075E-1, 0.0, 0.0, -1.165867325727766E1,
      -7.576221166909362E-1, 7.139735881595818E-1, 1.207577498689006E1,
      -2.127659113920403,
      1.990166207048956, -2.342864715440405E-1, 1.758985777079423E-1, 0.0, 0.0 },
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE8_IntgData *intgData = (ODE8_IntgData *) rtsiGetSolverData(si);
  real_T *deltaY = intgData->deltaY;
  real_T *x0 = intgData->x0;
  real_T* f[BoostXL_3PH_NSTAGES];
  int idx,stagesIdx,statesIdx;
  double deltaX;
  int_T nXc = 12;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  f[0] = intgData->f[0];
  f[1] = intgData->f[1];
  f[2] = intgData->f[2];
  f[3] = intgData->f[3];
  f[4] = intgData->f[4];
  f[5] = intgData->f[5];
  f[6] = intgData->f[6];
  f[7] = intgData->f[7];
  f[8] = intgData->f[8];
  f[9] = intgData->f[9];
  f[10] = intgData->f[10];
  f[11] = intgData->f[11];
  f[12] = intgData->f[12];

  /* Save the state values at time t in y and x0*/
  (void) memset(deltaY, 0,
                (uint_T)nXc*sizeof(real_T));
  (void) memcpy(x0, x,
                nXc*sizeof(real_T));
  for (stagesIdx=0;stagesIdx<BoostXL_3PH_NSTAGES;stagesIdx++) {
    (void) memcpy(x, x0,
                  (uint_T)nXc*sizeof(real_T));
    for (statesIdx=0;statesIdx<nXc;statesIdx++) {
      deltaX = 0;
      for (idx=0;idx<stagesIdx;idx++) {
        deltaX = deltaX + h*rt_ODE8_A[stagesIdx][idx]*f[idx][statesIdx];
      }

      x[statesIdx] = x0[statesIdx] + deltaX;
    }

    if (stagesIdx==0) {
      rtsiSetdX(si, f[stagesIdx]);
      BoostXL_3PH_derivatives();
    } else {
      (stagesIdx==BoostXL_3PH_NSTAGES-1)? rtsiSetT(si, tnew) : rtsiSetT(si, t +
        h*rt_ODE8_C[stagesIdx]);
      rtsiSetdX(si, f[stagesIdx]);
      BoostXL_3PH_step0();
      BoostXL_3PH_derivatives();
    }

    for (statesIdx=0;statesIdx<nXc;statesIdx++) {
      deltaY[statesIdx] = deltaY[statesIdx] + h*rt_ODE8_B[stagesIdx]*f[stagesIdx]
        [statesIdx];
    }
  }

  for (statesIdx=0;statesIdx<nXc;statesIdx++) {
    x[statesIdx] = x0[statesIdx] + deltaY[statesIdx];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

real32_T rt_roundf_snf(real32_T u)
{
  real32_T y;
  if (fabsf(u) < 8.388608E+6F) {
    if (u >= 0.5F) {
      y = (real32_T)floor(u + 0.5F);
    } else if (u > -0.5F) {
      y = u * 0.0F;
    } else {
      y = (real32_T)ceil(u - 0.5F);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function for TID0 */
void BoostXL_3PH_step0(void)           /* Sample time: [0.0s, 0.0s] */
{
  real32_T tmp;
  uint16_T tmp_0;
  if (rtmIsMajorTimeStep(BoostXL_3PH_M)) {
    /* set solver stop time */
    if (!(BoostXL_3PH_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&BoostXL_3PH_M->solverInfo,
                            ((BoostXL_3PH_M->Timing.clockTickH0 + 1) *
        BoostXL_3PH_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&BoostXL_3PH_M->solverInfo,
                            ((BoostXL_3PH_M->Timing.clockTick0 + 1) *
        BoostXL_3PH_M->Timing.stepSize0 + BoostXL_3PH_M->Timing.clockTickH0 *
        BoostXL_3PH_M->Timing.stepSize0 * 4294967296.0));
    }

    {                                  /* Sample time: [0.0s, 0.0s] */
      rate_monotonic_scheduler();
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(BoostXL_3PH_M)) {
    BoostXL_3PH_M->Timing.t[0] = rtsiGetT(&BoostXL_3PH_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(BoostXL_3PH_M)) {
    /* S-Function (sfun_spssw_discc): '<S74>/State-Space' incorporates:
     *  Constant: '<S73>/DC'
     *  Constant: '<S76>/SwitchCurrents'
     */

    /* S-Function block: <S74>/State-Space */
    {
      real_T accum;

      /* Circuit has switches */
      int_T *switch_status = (int_T*)
        BoostXL_3PH_DW.StateSpace_PWORK.SWITCH_STATUS;
      int_T *switch_status_init = (int_T*)
        BoostXL_3PH_DW.StateSpace_PWORK.SWITCH_STATUS_INIT;
      int_T *SwitchChange = (int_T*) BoostXL_3PH_DW.StateSpace_PWORK.SW_CHG;
      int_T *gState = (int_T*) BoostXL_3PH_DW.StateSpace_PWORK.G_STATE;
      real_T *yswitch = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.Y_SWITCH;
      int_T *switchTypes = (int_T*) BoostXL_3PH_DW.StateSpace_PWORK.SWITCH_TYPES;
      int_T *idxOutSw = (int_T*) BoostXL_3PH_DW.StateSpace_PWORK.IDX_OUT_SW;
      real_T *DxCol = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.DX_COL;
      real_T *tmp2 = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.TMP2;
      real_T *BDcol = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.BD_COL;
      real_T *tmp1 = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.TMP1;
      real_T *uswlast = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.USWLAST;
      int_T newState;
      int_T swChanged = 0;
      int loopsToDo = 20;
      real_T temp;

      /* keep an initial copy of switch_status*/
      memcpy(switch_status_init, switch_status, 12 * sizeof(int_T));
      memcpy(uswlast, &BoostXL_3PH_B.StateSpace_o1[0], 12*sizeof(real_T));
      do {
        if (loopsToDo == 1) {          /* Need to reset some variables: */
          swChanged = 0;

          /* return to the original switch status*/
          {
            int_T i1;
            for (i1=0; i1 < 12; i1++) {
              swChanged = ((SwitchChange[i1] = switch_status_init[i1] -
                            switch_status[i1]) != 0) ? 1 : swChanged;
              switch_status[i1] = switch_status_init[i1];
            }
          }
        } else {
          /*
           * Compute outputs:
           * ---------------
           */
          real_T *Cs = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.CS;
          real_T *Ds = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.DS;

          {
            int_T i1;
            real_T *y0 = &BoostXL_3PH_B.StateSpace_o1[0];
            for (i1=0; i1 < 18; i1++) {
              accum = 0.0;
              accum += *(Cs++) * BoostXL_3PH_DW.StateSpace_DSTATE[0];
              accum += *(Cs++) * BoostXL_3PH_DW.StateSpace_DSTATE[1];
              accum += *(Cs++) * BoostXL_3PH_DW.StateSpace_DSTATE[2];

              {
                int_T i2;
                const real_T *u0 = &BoostXL_3PH_P.SwitchCurrents_Value[0];
                for (i2=0; i2 < 12; i2++) {
                  accum += *(Ds++) * u0[i2];
                }

                accum += *(Ds++) * BoostXL_3PH_P.Vdc_Amplitude;
              }

              y0[i1] = accum;
            }
          }

          swChanged = 0;

          {
            int_T i1;
            real_T *y0 = &BoostXL_3PH_B.StateSpace_o1[0];
            for (i1=0; i1 < 12; i1++) {
              switch (switchTypes[i1]) {
               case 1 :                /* Ideal switch */
                newState = gState[i1] > 0 ? 1 : 0;
                break;

               case 3 :                /* Diodes */
                newState = y0[i1] > 0.0 ? 1 : ((y0[i1] < 0.0) ? 0 :
                  switch_status[i1]);
                break;
              }

              swChanged = ((SwitchChange[i1] = newState - switch_status[i1]) !=
                           0) ? 1 : swChanged;
              switch_status[i1] = newState;/* Keep new state */
            }
          }
        }

        /*
         * Compute new As, Bs, Cs and Ds matrixes:
         * --------------------------------------
         */
        if (swChanged) {
          real_T *As = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.AS;
          real_T *Cs = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.CS;
          real_T *Bs = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.BS;
          real_T *Ds = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.DS;
          real_T a1;

          {
            int_T i1;
            for (i1=0; i1 < 12; i1++) {
              if (SwitchChange[i1] != 0) {
                a1 = yswitch[i1]*SwitchChange[i1];
                temp = 1/(1-Ds[i1*14]*a1);

                {
                  int_T i2;
                  for (i2=0; i2 < 18; i2++) {
                    DxCol[i2]= Ds[i2 * 13 + i1]*temp*a1;
                  }
                }

                DxCol[i1] = temp;
                BDcol[0]= Bs[0 + i1]*a1;
                BDcol[1]= Bs[13 + i1]*a1;
                BDcol[2]= Bs[26 + i1]*a1;

                /* Copy row nSw of Cs into tmp1 and zero it out in Cs */
                memcpy(tmp1, &Cs[i1 * 3], 3 * sizeof(real_T));
                memset(&Cs[i1 * 3], '\0', 3 * sizeof(real_T));

                /* Copy row nSw of Ds into tmp2 and zero it out in Ds */
                memcpy(tmp2, &Ds[i1 * 13], 13 * sizeof(real_T));
                memset(&Ds[i1 * 13], '\0', 13 * sizeof(real_T));

                /* Cs = Cs + DxCol * tmp1, Ds = Ds + DxCol * tmp2 *******************/
                {
                  int_T i2;
                  for (i2=0; i2 < 18; i2++) {
                    a1 = DxCol[i2];
                    Cs[i2 * 3 + 0] += a1 * tmp1[0];
                    Cs[i2 * 3 + 1] += a1 * tmp1[1];
                    Cs[i2 * 3 + 2] += a1 * tmp1[2];

                    {
                      int_T i3;
                      for (i3=0; i3 < 13; i3++) {
                        Ds[i2 * 13 + i3] += a1 * tmp2[i3];
                      }
                    }
                  }
                }

                /* As = As + BdCol*Cs(nSw,:), Bs = Bs + BdCol*Ds(nSw,:) *************/
                a1 = BDcol[0];
                As[0 + 0] += a1 * Cs[i1 * 3 + 0];
                As[0 + 1] += a1 * Cs[i1 * 3 + 1];
                As[0 + 2] += a1 * Cs[i1 * 3 + 2];

                {
                  int_T i2;
                  for (i2=0; i2 < 13; i2++) {
                    Bs[0 + i2] += a1 * Ds[i1 * 13 + i2];
                  }
                }

                a1 = BDcol[1];
                As[3 + 0] += a1 * Cs[i1 * 3 + 0];
                As[3 + 1] += a1 * Cs[i1 * 3 + 1];
                As[3 + 2] += a1 * Cs[i1 * 3 + 2];

                {
                  int_T i2;
                  for (i2=0; i2 < 13; i2++) {
                    Bs[13 + i2] += a1 * Ds[i1 * 13 + i2];
                  }
                }

                a1 = BDcol[2];
                As[6 + 0] += a1 * Cs[i1 * 3 + 0];
                As[6 + 1] += a1 * Cs[i1 * 3 + 1];
                As[6 + 2] += a1 * Cs[i1 * 3 + 2];

                {
                  int_T i2;
                  for (i2=0; i2 < 13; i2++) {
                    Bs[26 + i2] += a1 * Ds[i1 * 13 + i2];
                  }
                }
              }
            }
          }
        }                              /* if (swChanged) */
      } while (swChanged > 0 && --loopsToDo > 0);

      if (loopsToDo == 0) {
        real_T *Cs = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.CS;
        real_T *Ds = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.DS;

        {
          int_T i1;
          real_T *y0 = &BoostXL_3PH_B.StateSpace_o1[0];
          for (i1=0; i1 < 18; i1++) {
            accum = 0.0;
            accum += *(Cs++) * BoostXL_3PH_DW.StateSpace_DSTATE[0];
            accum += *(Cs++) * BoostXL_3PH_DW.StateSpace_DSTATE[1];
            accum += *(Cs++) * BoostXL_3PH_DW.StateSpace_DSTATE[2];

            {
              int_T i2;
              const real_T *u0 = &BoostXL_3PH_P.SwitchCurrents_Value[0];
              for (i2=0; i2 < 12; i2++) {
                accum += *(Ds++) * u0[i2];
              }

              accum += *(Ds++) * BoostXL_3PH_P.Vdc_Amplitude;
            }

            y0[i1] = accum;
          }
        }
      }

      /* Output new switches states */
      {
        int_T i1;
        real_T *y1 = &BoostXL_3PH_B.StateSpace_o2[0];
        for (i1=0; i1 < 12; i1++) {
          y1[i1] = (real_T)switch_status[i1];
        }
      }
    }

    /* Gain: '<S2>/do not delete this gain' */
    BoostXL_3PH_B.donotdeletethisgain = BoostXL_3PH_P.donotdeletethisgain_Gain *
      BoostXL_3PH_B.StateSpace_o1[15];

    /* Gain: '<S3>/do not delete this gain' */
    BoostXL_3PH_B.donotdeletethisgain_n =
      BoostXL_3PH_P.donotdeletethisgain_Gain_d * BoostXL_3PH_B.StateSpace_o1[16];

    /* Gain: '<S4>/do not delete this gain' */
    BoostXL_3PH_B.donotdeletethisgain_d =
      BoostXL_3PH_P.donotdeletethisgain_Gain_c * BoostXL_3PH_B.StateSpace_o1[17];

    /* S-Function (c280xgpio_di): '<Root>/GPIO122 (17)' */
    {
      BoostXL_3PH_B.GPIO12217 = GpioDataRegs.GPDDAT.bit.GPIO122;
    }

    /* DataTypeConversion: '<S50>/Data Type Conversion' */
    BoostXL_3PH_B.DataTypeConversion = BoostXL_3PH_B.GPIO12217;

    /* S-Function (c280xgpio_di): '<Root>/GPIO123 (18)' */
    {
      BoostXL_3PH_B.GPIO12318 = GpioDataRegs.GPDDAT.bit.GPIO123;
    }

    /* DataTypeConversion: '<S43>/Data Type Conversion' */
    BoostXL_3PH_B.DataTypeConversion_p = BoostXL_3PH_B.GPIO12318;

    /* S-Function (c280xgpio_di): '<Root>/GPIO124 (13)' */
    {
      BoostXL_3PH_B.GPIO12413 = GpioDataRegs.GPDDAT.bit.GPIO124;
    }

    /* DataTypeConversion: '<S71>/Data Type Conversion' */
    BoostXL_3PH_B.DataTypeConversion_pp = BoostXL_3PH_B.GPIO12413;

    /* S-Function (c280xgpio_di): '<Root>/GPIO58 (15)' */
    {
      BoostXL_3PH_B.GPIO5815 = GpioDataRegs.GPBDAT.bit.GPIO58;
    }

    /* DataTypeConversion: '<S57>/Data Type Conversion' */
    BoostXL_3PH_B.DataTypeConversion_b = BoostXL_3PH_B.GPIO5815;

    /* S-Function (c280xgpio_di): '<Root>/GPIO59 (14)' */
    {
      BoostXL_3PH_B.GPIO5914 = GpioDataRegs.GPBDAT.bit.GPIO59;
    }

    /* DataTypeConversion: '<S64>/Data Type Conversion' */
    BoostXL_3PH_B.DataTypeConversion_i = BoostXL_3PH_B.GPIO5914;

    /* S-Function (c280xgpio_di): '<Root>/GPIO61 (19)' */
    {
      BoostXL_3PH_B.GPIO6119 = GpioDataRegs.GPBDAT.bit.GPIO61;
    }

    /* DataTypeConversion: '<S36>/Data Type Conversion' */
    BoostXL_3PH_B.DataTypeConversion_k = BoostXL_3PH_B.GPIO6119;

    /* Gain: '<S23>/do not delete this gain' */
    BoostXL_3PH_B.donotdeletethisgain_c =
      BoostXL_3PH_P.donotdeletethisgain_Gain_a * BoostXL_3PH_B.StateSpace_o1[13];

    /* Gain: '<S22>/do not delete this gain' */
    BoostXL_3PH_B.donotdeletethisgain_g =
      BoostXL_3PH_P.donotdeletethisgain_Gain_h * BoostXL_3PH_B.StateSpace_o1[12];

    /* Gain: '<S24>/do not delete this gain' */
    BoostXL_3PH_B.donotdeletethisgain_p =
      BoostXL_3PH_P.donotdeletethisgain_Gain_df * BoostXL_3PH_B.StateSpace_o1[14];

    /* Gain: '<S6>/Gain4' incorporates:
     *  Sum: '<S6>/Subtract1'
     */
    BoostXL_3PH_B.Gain4 = (BoostXL_3PH_B.donotdeletethisgain_p -
      BoostXL_3PH_B.donotdeletethisgain_g) * BoostXL_3PH_P.Gain4_Gain;

    /* Gain: '<S6>/Gain6' incorporates:
     *  Sum: '<S6>/Subtract'
     */
    BoostXL_3PH_B.Van = (BoostXL_3PH_B.donotdeletethisgain_g -
                         BoostXL_3PH_B.donotdeletethisgain_c) *
      BoostXL_3PH_P.Gain6_Gain;

    /* Gain: '<S6>/Gain5' incorporates:
     *  Sum: '<S6>/Subtract2'
     */
    BoostXL_3PH_B.Vcn = (BoostXL_3PH_B.donotdeletethisgain_c -
                         BoostXL_3PH_B.donotdeletethisgain_p) *
      BoostXL_3PH_P.Gain5_Gain;
  }

  /* Gain: '<Root>/Gain1' incorporates:
   *  StateSpace: '<S18>/State-Space'
   */
  BoostXL_3PH_B.Gain1 = BoostXL_3PH_P.StateSpace_C *
    BoostXL_3PH_X.StateSpace_CSTATE[1] * BoostXL_3PH_P.Gain1_Gain;

  /* Gain: '<Root>/Gain' incorporates:
   *  StateSpace: '<S19>/State-Space'
   */
  BoostXL_3PH_B.Gain = BoostXL_3PH_P.StateSpace_C_o *
    BoostXL_3PH_X.StateSpace_CSTATE_h[1] * BoostXL_3PH_P.Gain_Gain;

  /* Gain: '<Root>/Gain2' incorporates:
   *  StateSpace: '<S20>/State-Space'
   */
  BoostXL_3PH_B.Gain2 = BoostXL_3PH_P.StateSpace_C_b *
    BoostXL_3PH_X.StateSpace_CSTATE_hx[1] * BoostXL_3PH_P.Gain2_Gain;

  /* Start for MATLABSystem: '<Root>/DAC_OUTA Alpha' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion1'
   *  Fcn: '<S1>/alpha'
   *  Gain: '<S1>/K'
   */
  tmp = rt_roundf_snf((real32_T)(((BoostXL_3PH_B.Gain1 - 0.5 *
    BoostXL_3PH_B.Gain) - 0.5 * BoostXL_3PH_B.Gain2) * BoostXL_3PH_P.K_Gain[0]));
  if (tmp < 65536.0F) {
    if (tmp >= 0.0F) {
      tmp_0 = (uint16_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint16_T;
  }

  MW_C2000DACSat(0U, tmp_0);

  /* End of Start for MATLABSystem: '<Root>/DAC_OUTA Alpha' */

  /* Start for MATLABSystem: '<Root>/DAC_OUTB Beta' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  Fcn: '<S1>/beta'
   *  Gain: '<S1>/K'
   */
  tmp = rt_roundf_snf((real32_T)((BoostXL_3PH_B.Gain - BoostXL_3PH_B.Gain2) *
    1.7320508075688772 / 2.0 * BoostXL_3PH_P.K_Gain[1]));
  if (tmp < 65536.0F) {
    if (tmp >= 0.0F) {
      tmp_0 = (uint16_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint16_T;
  }

  MW_C2000DACSat(1U, tmp_0);

  /* End of Start for MATLABSystem: '<Root>/DAC_OUTB Beta' */
  if (rtmIsMajorTimeStep(BoostXL_3PH_M)) {
  }

  /* StateSpace: '<S25>/State-Space' */
  BoostXL_3PH_B.StateSpace = 0.0;
  BoostXL_3PH_B.StateSpace += BoostXL_3PH_P.StateSpace_C_j *
    BoostXL_3PH_X.StateSpace_CSTATE_e[1];

  /* StateSpace: '<S26>/State-Space' */
  BoostXL_3PH_B.StateSpace_i = 0.0;
  BoostXL_3PH_B.StateSpace_i += BoostXL_3PH_P.StateSpace_C_p *
    BoostXL_3PH_X.StateSpace_CSTATE_o[1];

  /* StateSpace: '<S27>/State-Space' */
  BoostXL_3PH_B.StateSpace_o = 0.0;
  BoostXL_3PH_B.StateSpace_o += BoostXL_3PH_P.StateSpace_C_p1 *
    BoostXL_3PH_X.StateSpace_CSTATE_j[1];
  if (rtmIsMajorTimeStep(BoostXL_3PH_M)) {
  }

  if (rtmIsMajorTimeStep(BoostXL_3PH_M)) {
    if (rtmIsMajorTimeStep(BoostXL_3PH_M)) {
      /* Update for S-Function (sfun_spssw_discc): '<S74>/State-Space' incorporates:
       *  Constant: '<S73>/DC'
       *  Constant: '<S76>/SwitchCurrents'
       */

      /* S-Function block: <S74>/State-Space */
      {
        const real_T *As = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.AS;
        const real_T *Bs = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.BS;
        real_T *xtmp = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.XTMP;
        real_T accum;

        /* Calculate new states... */
        accum = 0.0;
        accum += *(As++) * BoostXL_3PH_DW.StateSpace_DSTATE[0];
        accum += *(As++) * BoostXL_3PH_DW.StateSpace_DSTATE[1];
        accum += *(As++) * BoostXL_3PH_DW.StateSpace_DSTATE[2];

        {
          int_T i1;
          const real_T *u0 = &BoostXL_3PH_P.SwitchCurrents_Value[0];
          for (i1=0; i1 < 12; i1++) {
            accum += *(Bs++) * u0[i1];
          }

          accum += *(Bs++) * BoostXL_3PH_P.Vdc_Amplitude;
        }

        xtmp[0] = accum;
        accum = 0.0;
        accum += *(As++) * BoostXL_3PH_DW.StateSpace_DSTATE[0];
        accum += *(As++) * BoostXL_3PH_DW.StateSpace_DSTATE[1];
        accum += *(As++) * BoostXL_3PH_DW.StateSpace_DSTATE[2];

        {
          int_T i1;
          const real_T *u0 = &BoostXL_3PH_P.SwitchCurrents_Value[0];
          for (i1=0; i1 < 12; i1++) {
            accum += *(Bs++) * u0[i1];
          }

          accum += *(Bs++) * BoostXL_3PH_P.Vdc_Amplitude;
        }

        xtmp[1] = accum;
        accum = 0.0;
        accum += *(As++) * BoostXL_3PH_DW.StateSpace_DSTATE[0];
        accum += *(As++) * BoostXL_3PH_DW.StateSpace_DSTATE[1];
        accum += *(As++) * BoostXL_3PH_DW.StateSpace_DSTATE[2];

        {
          int_T i1;
          const real_T *u0 = &BoostXL_3PH_P.SwitchCurrents_Value[0];
          for (i1=0; i1 < 12; i1++) {
            accum += *(Bs++) * u0[i1];
          }

          accum += *(Bs++) * BoostXL_3PH_P.Vdc_Amplitude;
        }

        xtmp[2] = accum;
        BoostXL_3PH_DW.StateSpace_DSTATE[0] = xtmp[0];
        BoostXL_3PH_DW.StateSpace_DSTATE[1] = xtmp[1];
        BoostXL_3PH_DW.StateSpace_DSTATE[2] = xtmp[2];

        {
          int_T *gState = (int_T*)BoostXL_3PH_DW.StateSpace_PWORK.G_STATE;

          /* Store switch gates values for next step */
          *(gState++) = (int_T) BoostXL_3PH_B.DataTypeConversion_k;
          *(gState++) = (int_T) BoostXL_3PH_B.DataTypeConversion_p;
          *(gState++) = (int_T) BoostXL_3PH_B.DataTypeConversion;
          *(gState++) = (int_T) BoostXL_3PH_B.DataTypeConversion_b;
          *(gState++) = (int_T) BoostXL_3PH_B.DataTypeConversion_i;
          *(gState++) = (int_T) BoostXL_3PH_B.DataTypeConversion_pp;
          *(gState++) = (int_T) 0.0;
          *(gState++) = (int_T) 0.0;
          *(gState++) = (int_T) 0.0;
          *(gState++) = (int_T) 0.0;
          *(gState++) = (int_T) 0.0;
          *(gState++) = (int_T) 0.0;
        }
      }
    }

    /* External mode */
    rtExtModeUploadCheckTrigger(3);
    rtExtModeUpload(1, BoostXL_3PH_M->Timing.t[0]);
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(BoostXL_3PH_M)) {
    /* signal main to stop simulation */
    {                                  /* Sample time: [0.0s, 0.0s] */
      if ((rtmGetTFinal(BoostXL_3PH_M)!=-1) &&
          !((rtmGetTFinal(BoostXL_3PH_M)-(((BoostXL_3PH_M->Timing.clockTick1+
               BoostXL_3PH_M->Timing.clockTickH1* 4294967296.0)) * 5.0E-6)) >
            (((BoostXL_3PH_M->Timing.clockTick1+
               BoostXL_3PH_M->Timing.clockTickH1* 4294967296.0)) * 5.0E-6) *
            (DBL_EPSILON))) {
        rtmSetErrorStatus(BoostXL_3PH_M, "Simulation finished");
      }

      if (rtmGetStopRequested(BoostXL_3PH_M)) {
        rtmSetErrorStatus(BoostXL_3PH_M, "Simulation finished");
      }
    }

    rt_ertODEUpdateContinuousStates(&BoostXL_3PH_M->solverInfo);

    /* Update absolute time */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++BoostXL_3PH_M->Timing.clockTick0)) {
      ++BoostXL_3PH_M->Timing.clockTickH0;
    }

    BoostXL_3PH_M->Timing.t[0] = rtsiGetSolverStopTime
      (&BoostXL_3PH_M->solverInfo);

    /* Update absolute time */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 5.0E-6, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    BoostXL_3PH_M->Timing.clockTick1++;
    if (!BoostXL_3PH_M->Timing.clockTick1) {
      BoostXL_3PH_M->Timing.clockTickH1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void BoostXL_3PH_derivatives(void)
{
  XDot_BoostXL_3PH_T *_rtXdot;
  _rtXdot = ((XDot_BoostXL_3PH_T *) BoostXL_3PH_M->derivs);

  /* Derivatives for StateSpace: '<S18>/State-Space' */
  _rtXdot->StateSpace_CSTATE[0] = 0.0;

  /* Derivatives for StateSpace: '<S19>/State-Space' */
  _rtXdot->StateSpace_CSTATE_h[0] = 0.0;

  /* Derivatives for StateSpace: '<S20>/State-Space' */
  _rtXdot->StateSpace_CSTATE_hx[0] = 0.0;

  /* Derivatives for StateSpace: '<S25>/State-Space' */
  _rtXdot->StateSpace_CSTATE_e[0] = 0.0;

  /* Derivatives for StateSpace: '<S26>/State-Space' */
  _rtXdot->StateSpace_CSTATE_o[0] = 0.0;

  /* Derivatives for StateSpace: '<S27>/State-Space' */
  _rtXdot->StateSpace_CSTATE_j[0] = 0.0;

  /* Derivatives for StateSpace: '<S18>/State-Space' */
  _rtXdot->StateSpace_CSTATE[1] = 0.0;

  /* Derivatives for StateSpace: '<S19>/State-Space' */
  _rtXdot->StateSpace_CSTATE_h[1] = 0.0;

  /* Derivatives for StateSpace: '<S20>/State-Space' */
  _rtXdot->StateSpace_CSTATE_hx[1] = 0.0;

  /* Derivatives for StateSpace: '<S25>/State-Space' */
  _rtXdot->StateSpace_CSTATE_e[1] = 0.0;

  /* Derivatives for StateSpace: '<S26>/State-Space' */
  _rtXdot->StateSpace_CSTATE_o[1] = 0.0;

  /* Derivatives for StateSpace: '<S27>/State-Space' */
  _rtXdot->StateSpace_CSTATE_j[1] = 0.0;

  /* Derivatives for StateSpace: '<S18>/State-Space' */
  _rtXdot->StateSpace_CSTATE[0] += BoostXL_3PH_P.StateSpace_A[0] *
    BoostXL_3PH_X.StateSpace_CSTATE[0];
  _rtXdot->StateSpace_CSTATE[0] += BoostXL_3PH_P.StateSpace_A[1] *
    BoostXL_3PH_X.StateSpace_CSTATE[1];
  _rtXdot->StateSpace_CSTATE[1] += BoostXL_3PH_P.StateSpace_A[2] *
    BoostXL_3PH_X.StateSpace_CSTATE[0];
  _rtXdot->StateSpace_CSTATE[0] += BoostXL_3PH_P.StateSpace_B *
    BoostXL_3PH_B.donotdeletethisgain;

  /* Derivatives for StateSpace: '<S19>/State-Space' */
  _rtXdot->StateSpace_CSTATE_h[0] += BoostXL_3PH_P.StateSpace_A_p[0] *
    BoostXL_3PH_X.StateSpace_CSTATE_h[0];
  _rtXdot->StateSpace_CSTATE_h[0] += BoostXL_3PH_P.StateSpace_A_p[1] *
    BoostXL_3PH_X.StateSpace_CSTATE_h[1];
  _rtXdot->StateSpace_CSTATE_h[1] += BoostXL_3PH_P.StateSpace_A_p[2] *
    BoostXL_3PH_X.StateSpace_CSTATE_h[0];
  _rtXdot->StateSpace_CSTATE_h[0] += BoostXL_3PH_P.StateSpace_B_f *
    BoostXL_3PH_B.donotdeletethisgain_n;

  /* Derivatives for StateSpace: '<S20>/State-Space' */
  _rtXdot->StateSpace_CSTATE_hx[0] += BoostXL_3PH_P.StateSpace_A_j[0] *
    BoostXL_3PH_X.StateSpace_CSTATE_hx[0];
  _rtXdot->StateSpace_CSTATE_hx[0] += BoostXL_3PH_P.StateSpace_A_j[1] *
    BoostXL_3PH_X.StateSpace_CSTATE_hx[1];
  _rtXdot->StateSpace_CSTATE_hx[1] += BoostXL_3PH_P.StateSpace_A_j[2] *
    BoostXL_3PH_X.StateSpace_CSTATE_hx[0];
  _rtXdot->StateSpace_CSTATE_hx[0] += BoostXL_3PH_P.StateSpace_B_m *
    BoostXL_3PH_B.donotdeletethisgain_d;

  /* Derivatives for StateSpace: '<S25>/State-Space' */
  _rtXdot->StateSpace_CSTATE_e[0] += BoostXL_3PH_P.StateSpace_A_jk[0] *
    BoostXL_3PH_X.StateSpace_CSTATE_e[0];
  _rtXdot->StateSpace_CSTATE_e[0] += BoostXL_3PH_P.StateSpace_A_jk[1] *
    BoostXL_3PH_X.StateSpace_CSTATE_e[1];
  _rtXdot->StateSpace_CSTATE_e[1] += BoostXL_3PH_P.StateSpace_A_jk[2] *
    BoostXL_3PH_X.StateSpace_CSTATE_e[0];
  _rtXdot->StateSpace_CSTATE_e[0] += BoostXL_3PH_P.StateSpace_B_p *
    BoostXL_3PH_B.Van;

  /* Derivatives for StateSpace: '<S26>/State-Space' */
  _rtXdot->StateSpace_CSTATE_o[0] += BoostXL_3PH_P.StateSpace_A_b[0] *
    BoostXL_3PH_X.StateSpace_CSTATE_o[0];
  _rtXdot->StateSpace_CSTATE_o[0] += BoostXL_3PH_P.StateSpace_A_b[1] *
    BoostXL_3PH_X.StateSpace_CSTATE_o[1];
  _rtXdot->StateSpace_CSTATE_o[1] += BoostXL_3PH_P.StateSpace_A_b[2] *
    BoostXL_3PH_X.StateSpace_CSTATE_o[0];
  _rtXdot->StateSpace_CSTATE_o[0] += BoostXL_3PH_P.StateSpace_B_a *
    BoostXL_3PH_B.Gain4;

  /* Derivatives for StateSpace: '<S27>/State-Space' */
  _rtXdot->StateSpace_CSTATE_j[0] += BoostXL_3PH_P.StateSpace_A_f[0] *
    BoostXL_3PH_X.StateSpace_CSTATE_j[0];
  _rtXdot->StateSpace_CSTATE_j[0] += BoostXL_3PH_P.StateSpace_A_f[1] *
    BoostXL_3PH_X.StateSpace_CSTATE_j[1];
  _rtXdot->StateSpace_CSTATE_j[1] += BoostXL_3PH_P.StateSpace_A_f[2] *
    BoostXL_3PH_X.StateSpace_CSTATE_j[0];
  _rtXdot->StateSpace_CSTATE_j[0] += BoostXL_3PH_P.StateSpace_B_e *
    BoostXL_3PH_B.Vcn;
}

/* Model step function for TID2 */
void BoostXL_3PH_step2(void)           /* Sample time: [0.5s, 0.0s] */
{
  /* S-Function (c280xgpio_do): '<Root>/GPIO34_Led_VERM' incorporates:
   *  Constant: '<Root>/Constant'
   */
  {
    GpioDataRegs.GPBTOGGLE.bit.GPIO34 = (BoostXL_3PH_P.Constant_Value != 0);
  }

  rtExtModeUpload(2, ((BoostXL_3PH_M->Timing.clockTick2) * 0.5));

  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.5, which is the step size
   * of the task. Size of "clockTick2" ensures timer will not overflow during the
   * application lifespan selected.
   */
  BoostXL_3PH_M->Timing.clockTick2++;
}

/* Model initialize function */
void BoostXL_3PH_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)BoostXL_3PH_M, 0,
                sizeof(RT_MODEL_BoostXL_3PH_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&BoostXL_3PH_M->solverInfo,
                          &BoostXL_3PH_M->Timing.simTimeStep);
    rtsiSetTPtr(&BoostXL_3PH_M->solverInfo, &rtmGetTPtr(BoostXL_3PH_M));
    rtsiSetStepSizePtr(&BoostXL_3PH_M->solverInfo,
                       &BoostXL_3PH_M->Timing.stepSize0);
    rtsiSetdXPtr(&BoostXL_3PH_M->solverInfo, &BoostXL_3PH_M->derivs);
    rtsiSetContStatesPtr(&BoostXL_3PH_M->solverInfo, (real_T **)
                         &BoostXL_3PH_M->contStates);
    rtsiSetNumContStatesPtr(&BoostXL_3PH_M->solverInfo,
      &BoostXL_3PH_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&BoostXL_3PH_M->solverInfo,
      &BoostXL_3PH_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&BoostXL_3PH_M->solverInfo,
      &BoostXL_3PH_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&BoostXL_3PH_M->solverInfo,
      &BoostXL_3PH_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&BoostXL_3PH_M->solverInfo, (&rtmGetErrorStatus
      (BoostXL_3PH_M)));
    rtsiSetRTModelPtr(&BoostXL_3PH_M->solverInfo, BoostXL_3PH_M);
  }

  rtsiSetSimTimeStep(&BoostXL_3PH_M->solverInfo, MAJOR_TIME_STEP);
  BoostXL_3PH_M->intgData.deltaY= BoostXL_3PH_M->OdeDeltaY;
  BoostXL_3PH_M->intgData.f[0] = BoostXL_3PH_M->odeF[0];
  BoostXL_3PH_M->intgData.f[1] = BoostXL_3PH_M->odeF[1];
  BoostXL_3PH_M->intgData.f[2] = BoostXL_3PH_M->odeF[2];
  BoostXL_3PH_M->intgData.f[3] = BoostXL_3PH_M->odeF[3];
  BoostXL_3PH_M->intgData.f[4] = BoostXL_3PH_M->odeF[4];
  BoostXL_3PH_M->intgData.f[5] = BoostXL_3PH_M->odeF[5];
  BoostXL_3PH_M->intgData.f[6] = BoostXL_3PH_M->odeF[6];
  BoostXL_3PH_M->intgData.f[7] = BoostXL_3PH_M->odeF[7];
  BoostXL_3PH_M->intgData.f[8] = BoostXL_3PH_M->odeF[8];
  BoostXL_3PH_M->intgData.f[9] = BoostXL_3PH_M->odeF[9];
  BoostXL_3PH_M->intgData.f[10] = BoostXL_3PH_M->odeF[10];
  BoostXL_3PH_M->intgData.f[11] = BoostXL_3PH_M->odeF[11];
  BoostXL_3PH_M->intgData.f[12] = BoostXL_3PH_M->odeF[12];
  BoostXL_3PH_M->intgData.x0 = BoostXL_3PH_M->odeX0;
  BoostXL_3PH_M->contStates = ((X_BoostXL_3PH_T *) &BoostXL_3PH_X);
  rtsiSetSolverData(&BoostXL_3PH_M->solverInfo, (void *)&BoostXL_3PH_M->intgData);
  rtsiSetSolverName(&BoostXL_3PH_M->solverInfo,"ode8");
  rtmSetTPtr(BoostXL_3PH_M, &BoostXL_3PH_M->Timing.tArray[0]);
  rtmSetTFinal(BoostXL_3PH_M, -1);
  BoostXL_3PH_M->Timing.stepSize0 = 5.0E-6;

  /* External mode info */
  BoostXL_3PH_M->Sizes.checksums[0] = (3075925041U);
  BoostXL_3PH_M->Sizes.checksums[1] = (121593010U);
  BoostXL_3PH_M->Sizes.checksums[2] = (3637391159U);
  BoostXL_3PH_M->Sizes.checksums[3] = (3861704222U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    BoostXL_3PH_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(BoostXL_3PH_M->extModeInfo,
      &BoostXL_3PH_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(BoostXL_3PH_M->extModeInfo,
                        BoostXL_3PH_M->Sizes.checksums);
    rteiSetTPtr(BoostXL_3PH_M->extModeInfo, rtmGetTPtr(BoostXL_3PH_M));
  }

  /* block I/O */
  (void) memset(((void *) &BoostXL_3PH_B), 0,
                sizeof(B_BoostXL_3PH_T));

  /* states (continuous) */
  {
    (void) memset((void *)&BoostXL_3PH_X, 0,
                  sizeof(X_BoostXL_3PH_T));
  }

  /* states (dwork) */
  (void) memset((void *)&BoostXL_3PH_DW, 0,
                sizeof(DW_BoostXL_3PH_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    BoostXL_3PH_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 15;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for S-Function (sfun_spssw_discc): '<S74>/State-Space' incorporates:
   *  Constant: '<S73>/DC'
   *  Constant: '<S76>/SwitchCurrents'
   */

  /* S-Function block: <S74>/State-Space */
  {
    BoostXL_3PH_DW.StateSpace_PWORK.AS = (real_T*)calloc(3 * 3, sizeof(real_T));
    BoostXL_3PH_DW.StateSpace_PWORK.BS = (real_T*)calloc(3 * 13, sizeof(real_T));
    BoostXL_3PH_DW.StateSpace_PWORK.CS = (real_T*)calloc(18 * 3, sizeof(real_T));
    BoostXL_3PH_DW.StateSpace_PWORK.DS = (real_T*)calloc(18 * 13, sizeof(real_T));
    BoostXL_3PH_DW.StateSpace_PWORK.DX_COL = (real_T*)calloc(18, sizeof(real_T));
    BoostXL_3PH_DW.StateSpace_PWORK.TMP2 = (real_T*)calloc(13, sizeof(real_T));
    BoostXL_3PH_DW.StateSpace_PWORK.BD_COL = (real_T*)calloc(3, sizeof(real_T));
    BoostXL_3PH_DW.StateSpace_PWORK.TMP1 = (real_T*)calloc(3, sizeof(real_T));
    BoostXL_3PH_DW.StateSpace_PWORK.XTMP = (real_T*)calloc(3, sizeof(real_T));
    BoostXL_3PH_DW.StateSpace_PWORK.SWITCH_STATUS = (int_T*)calloc(12, sizeof
      (int_T));
    BoostXL_3PH_DW.StateSpace_PWORK.SW_CHG = (int_T*)calloc(12, sizeof(int_T));
    BoostXL_3PH_DW.StateSpace_PWORK.G_STATE = (int_T*)calloc(12, sizeof(int_T));
    BoostXL_3PH_DW.StateSpace_PWORK.Y_SWITCH = (real_T*)calloc(12, sizeof(real_T));
    BoostXL_3PH_DW.StateSpace_PWORK.SWITCH_TYPES = (int_T*)calloc(12, sizeof
      (int_T));
    BoostXL_3PH_DW.StateSpace_PWORK.IDX_OUT_SW = (int_T*)calloc(12, sizeof(int_T));
    BoostXL_3PH_DW.StateSpace_PWORK.SWITCH_STATUS_INIT = (int_T*)calloc(12,
      sizeof(int_T));
    BoostXL_3PH_DW.StateSpace_PWORK.USWLAST = (real_T*)calloc(12, sizeof(real_T));
  }

  /* Start for S-Function (c280xgpio_do): '<Root>/GPIO34_Led_VERM' incorporates:
   *  Constant: '<Root>/Constant'
   */
  {
    Uint32 *pulMsgRam = (void *)CPU01_TO_CPU02_PASSMSG;
    Uint32 ulRWord32 = 0;
    Uint32 gpioData = 0x00010000;
    gpioData = gpioData|34;
    IPCLiteLtoRFunctionCall(IPC_FLAG0, pulMsgRam[0], gpioData, IPC_FLAG31);
    while (IPCLiteLtoRGetResult(&ulRWord32,IPC_LENGTH_32_BITS,
            IPC_FLAG31) != STATUS_PASS) {
    }
  }

  /* Start for S-Function (c280xgpio_di): '<Root>/GPIO122 (17)' */
  {
    Uint32 *pulMsgRam = (void *)CPU01_TO_CPU02_PASSMSG;
    Uint32 ulRWord32 = 0;
    Uint32 gpioData = 0x00000000;
    gpioData = gpioData|122;
    IPCLiteLtoRFunctionCall(IPC_FLAG0, pulMsgRam[0], gpioData, IPC_FLAG31);
    while (IPCLiteLtoRGetResult(&ulRWord32,IPC_LENGTH_32_BITS,
            IPC_FLAG31) != STATUS_PASS) {
    }
  }

  /* Start for S-Function (c280xgpio_di): '<Root>/GPIO123 (18)' */
  {
    Uint32 *pulMsgRam = (void *)CPU01_TO_CPU02_PASSMSG;
    Uint32 ulRWord32 = 0;
    Uint32 gpioData = 0x00000000;
    gpioData = gpioData|123;
    IPCLiteLtoRFunctionCall(IPC_FLAG0, pulMsgRam[0], gpioData, IPC_FLAG31);
    while (IPCLiteLtoRGetResult(&ulRWord32,IPC_LENGTH_32_BITS,
            IPC_FLAG31) != STATUS_PASS) {
    }
  }

  /* Start for S-Function (c280xgpio_di): '<Root>/GPIO124 (13)' */
  {
    Uint32 *pulMsgRam = (void *)CPU01_TO_CPU02_PASSMSG;
    Uint32 ulRWord32 = 0;
    Uint32 gpioData = 0x00000000;
    gpioData = gpioData|124;
    IPCLiteLtoRFunctionCall(IPC_FLAG0, pulMsgRam[0], gpioData, IPC_FLAG31);
    while (IPCLiteLtoRGetResult(&ulRWord32,IPC_LENGTH_32_BITS,
            IPC_FLAG31) != STATUS_PASS) {
    }
  }

  /* Start for S-Function (c280xgpio_di): '<Root>/GPIO58 (15)' */
  {
    Uint32 *pulMsgRam = (void *)CPU01_TO_CPU02_PASSMSG;
    Uint32 ulRWord32 = 0;
    Uint32 gpioData = 0x00000000;
    gpioData = gpioData|58;
    IPCLiteLtoRFunctionCall(IPC_FLAG0, pulMsgRam[0], gpioData, IPC_FLAG31);
    while (IPCLiteLtoRGetResult(&ulRWord32,IPC_LENGTH_32_BITS,
            IPC_FLAG31) != STATUS_PASS) {
    }
  }

  /* Start for S-Function (c280xgpio_di): '<Root>/GPIO59 (14)' */
  {
    Uint32 *pulMsgRam = (void *)CPU01_TO_CPU02_PASSMSG;
    Uint32 ulRWord32 = 0;
    Uint32 gpioData = 0x00000000;
    gpioData = gpioData|59;
    IPCLiteLtoRFunctionCall(IPC_FLAG0, pulMsgRam[0], gpioData, IPC_FLAG31);
    while (IPCLiteLtoRGetResult(&ulRWord32,IPC_LENGTH_32_BITS,
            IPC_FLAG31) != STATUS_PASS) {
    }
  }

  /* Start for S-Function (c280xgpio_di): '<Root>/GPIO61 (19)' */
  {
    Uint32 *pulMsgRam = (void *)CPU01_TO_CPU02_PASSMSG;
    Uint32 ulRWord32 = 0;
    Uint32 gpioData = 0x00000000;
    gpioData = gpioData|61;
    IPCLiteLtoRFunctionCall(IPC_FLAG0, pulMsgRam[0], gpioData, IPC_FLAG31);
    while (IPCLiteLtoRGetResult(&ulRWord32,IPC_LENGTH_32_BITS,
            IPC_FLAG31) != STATUS_PASS) {
    }
  }

  /* Start for MATLABSystem: '<Root>/DAC_OUTA Alpha' */
  MW_ConfigureDACA();

  /* Start for MATLABSystem: '<Root>/DAC_OUTB Beta' */
  MW_ConfigureDACB();

  /* InitializeConditions for S-Function (sfun_spssw_discc): '<S74>/State-Space' incorporates:
   *  Constant: '<S73>/DC'
   *  Constant: '<S76>/SwitchCurrents'
   */
  {
    int32_T i, j;
    real_T *As = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.AS;
    real_T *Bs = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.BS;
    real_T *Cs = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.CS;
    real_T *Ds = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.DS;
    real_T *X0 = (real_T*)&BoostXL_3PH_DW.StateSpace_DSTATE[0];
    for (i = 0; i < 3; i++) {
      X0[i] = (BoostXL_3PH_P.StateSpace_X0_param[i]);
    }

    /* Copy and transpose A and B */
    for (i=0; i<3; i++) {
      for (j=0; j<3; j++)
        As[i*3 + j] = (BoostXL_3PH_P.StateSpace_AS_param[i + j*3]);
      for (j=0; j<13; j++)
        Bs[i*13 + j] = (BoostXL_3PH_P.StateSpace_BS_param[i + j*3]);
    }

    /* Copy and transpose C */
    for (i=0; i<18; i++) {
      for (j=0; j<3; j++)
        Cs[i*3 + j] = (BoostXL_3PH_P.StateSpace_CS_param[i + j*18]);
    }

    /* Copy and transpose D */
    for (i=0; i<18; i++) {
      for (j=0; j<13; j++)
        Ds[i*13 + j] = (BoostXL_3PH_P.StateSpace_DS_param[i + j*18]);
    }

    {
      /* Switches work vectors */
      int_T *switch_status = (int_T*)
        BoostXL_3PH_DW.StateSpace_PWORK.SWITCH_STATUS;
      int_T *gState = (int_T*)BoostXL_3PH_DW.StateSpace_PWORK.G_STATE;
      real_T *yswitch = (real_T*)BoostXL_3PH_DW.StateSpace_PWORK.Y_SWITCH;
      int_T *switchTypes = (int_T*)BoostXL_3PH_DW.StateSpace_PWORK.SWITCH_TYPES;
      int_T *idxOutSw = (int_T*)BoostXL_3PH_DW.StateSpace_PWORK.IDX_OUT_SW;
      int_T *switch_status_init = (int_T*)
        BoostXL_3PH_DW.StateSpace_PWORK.SWITCH_STATUS_INIT;

      /* Initialize work vectors */
      switch_status[0] = 0;
      switch_status_init[0] = 0;
      gState[0] = (int_T) 0.0;
      yswitch[0] = 1/0.1;
      switchTypes[0] = (int_T)1.0;
      idxOutSw[0] = ((int_T)0.0) - 1;
      switch_status[1] = 0;
      switch_status_init[1] = 0;
      gState[1] = (int_T) 0.0;
      yswitch[1] = 1/0.1;
      switchTypes[1] = (int_T)1.0;
      idxOutSw[1] = ((int_T)0.0) - 1;
      switch_status[2] = 0;
      switch_status_init[2] = 0;
      gState[2] = (int_T) 0.0;
      yswitch[2] = 1/0.1;
      switchTypes[2] = (int_T)1.0;
      idxOutSw[2] = ((int_T)0.0) - 1;
      switch_status[3] = 0;
      switch_status_init[3] = 0;
      gState[3] = (int_T) 0.0;
      yswitch[3] = 1/0.1;
      switchTypes[3] = (int_T)1.0;
      idxOutSw[3] = ((int_T)0.0) - 1;
      switch_status[4] = 0;
      switch_status_init[4] = 0;
      gState[4] = (int_T) 0.0;
      yswitch[4] = 1/0.1;
      switchTypes[4] = (int_T)1.0;
      idxOutSw[4] = ((int_T)0.0) - 1;
      switch_status[5] = 0;
      switch_status_init[5] = 0;
      gState[5] = (int_T) 0.0;
      yswitch[5] = 1/0.1;
      switchTypes[5] = (int_T)1.0;
      idxOutSw[5] = ((int_T)0.0) - 1;
      switch_status[6] = 0;
      switch_status_init[6] = 0;
      gState[6] = (int_T) 0.0;
      yswitch[6] = 1/0.01;
      switchTypes[6] = (int_T)3.0;
      idxOutSw[6] = ((int_T)0.0) - 1;
      switch_status[7] = 0;
      switch_status_init[7] = 0;
      gState[7] = (int_T) 0.0;
      yswitch[7] = 1/0.01;
      switchTypes[7] = (int_T)3.0;
      idxOutSw[7] = ((int_T)0.0) - 1;
      switch_status[8] = 0;
      switch_status_init[8] = 0;
      gState[8] = (int_T) 0.0;
      yswitch[8] = 1/0.01;
      switchTypes[8] = (int_T)3.0;
      idxOutSw[8] = ((int_T)0.0) - 1;
      switch_status[9] = 0;
      switch_status_init[9] = 0;
      gState[9] = (int_T) 0.0;
      yswitch[9] = 1/0.01;
      switchTypes[9] = (int_T)3.0;
      idxOutSw[9] = ((int_T)0.0) - 1;
      switch_status[10] = 0;
      switch_status_init[10] = 0;
      gState[10] = (int_T) 0.0;
      yswitch[10] = 1/0.01;
      switchTypes[10] = (int_T)3.0;
      idxOutSw[10] = ((int_T)0.0) - 1;
      switch_status[11] = 0;
      switch_status_init[11] = 0;
      gState[11] = (int_T) 0.0;
      yswitch[11] = 1/0.01;
      switchTypes[11] = (int_T)3.0;
      idxOutSw[11] = ((int_T)0.0) - 1;
    }
  }

  /* InitializeConditions for StateSpace: '<S18>/State-Space' */
  BoostXL_3PH_X.StateSpace_CSTATE[0] = BoostXL_3PH_P.StateSpace_InitialCondition;

  /* InitializeConditions for StateSpace: '<S19>/State-Space' */
  BoostXL_3PH_X.StateSpace_CSTATE_h[0] =
    BoostXL_3PH_P.StateSpace_InitialCondition_i;

  /* InitializeConditions for StateSpace: '<S20>/State-Space' */
  BoostXL_3PH_X.StateSpace_CSTATE_hx[0] =
    BoostXL_3PH_P.StateSpace_InitialCondition_b;

  /* InitializeConditions for StateSpace: '<S25>/State-Space' */
  BoostXL_3PH_X.StateSpace_CSTATE_e[0] =
    BoostXL_3PH_P.StateSpace_InitialCondition_f;

  /* InitializeConditions for StateSpace: '<S26>/State-Space' */
  BoostXL_3PH_X.StateSpace_CSTATE_o[0] =
    BoostXL_3PH_P.StateSpace_InitialCondition_p;

  /* InitializeConditions for StateSpace: '<S27>/State-Space' */
  BoostXL_3PH_X.StateSpace_CSTATE_j[0] =
    BoostXL_3PH_P.StateSpace_InitialCondition_iv;

  /* InitializeConditions for StateSpace: '<S18>/State-Space' */
  BoostXL_3PH_X.StateSpace_CSTATE[1] = BoostXL_3PH_P.StateSpace_InitialCondition;

  /* InitializeConditions for StateSpace: '<S19>/State-Space' */
  BoostXL_3PH_X.StateSpace_CSTATE_h[1] =
    BoostXL_3PH_P.StateSpace_InitialCondition_i;

  /* InitializeConditions for StateSpace: '<S20>/State-Space' */
  BoostXL_3PH_X.StateSpace_CSTATE_hx[1] =
    BoostXL_3PH_P.StateSpace_InitialCondition_b;

  /* InitializeConditions for StateSpace: '<S25>/State-Space' */
  BoostXL_3PH_X.StateSpace_CSTATE_e[1] =
    BoostXL_3PH_P.StateSpace_InitialCondition_f;

  /* InitializeConditions for StateSpace: '<S26>/State-Space' */
  BoostXL_3PH_X.StateSpace_CSTATE_o[1] =
    BoostXL_3PH_P.StateSpace_InitialCondition_p;

  /* InitializeConditions for StateSpace: '<S27>/State-Space' */
  BoostXL_3PH_X.StateSpace_CSTATE_j[1] =
    BoostXL_3PH_P.StateSpace_InitialCondition_iv;
}

/* Model terminate function */
void BoostXL_3PH_terminate(void)
{
  /* Terminate for S-Function (sfun_spssw_discc): '<S74>/State-Space' incorporates:
   *  Constant: '<S73>/DC'
   *  Constant: '<S76>/SwitchCurrents'
   */

  /* S-Function block: <S74>/State-Space */
  {
    /* Free memory */
    free(BoostXL_3PH_DW.StateSpace_PWORK.AS);
    free(BoostXL_3PH_DW.StateSpace_PWORK.BS);
    free(BoostXL_3PH_DW.StateSpace_PWORK.CS);
    free(BoostXL_3PH_DW.StateSpace_PWORK.DS);
    free(BoostXL_3PH_DW.StateSpace_PWORK.DX_COL);
    free(BoostXL_3PH_DW.StateSpace_PWORK.TMP2);
    free(BoostXL_3PH_DW.StateSpace_PWORK.BD_COL);
    free(BoostXL_3PH_DW.StateSpace_PWORK.TMP1);
    free(BoostXL_3PH_DW.StateSpace_PWORK.XTMP);

    /*
     * Circuit has switches*/
    free(BoostXL_3PH_DW.StateSpace_PWORK.G_STATE);
    free(BoostXL_3PH_DW.StateSpace_PWORK.SWITCH_STATUS);
    free(BoostXL_3PH_DW.StateSpace_PWORK.SW_CHG);
    free(BoostXL_3PH_DW.StateSpace_PWORK.SWITCH_STATUS_INIT);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
