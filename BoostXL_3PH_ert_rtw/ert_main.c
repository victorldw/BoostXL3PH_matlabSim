/*
 * File: ert_main.c
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
#include "rtwtypes.h"
#include <ext_work.h>
#include <ext_svr.h>
#include <ext_share.h>
#include <updown.h>

volatile int IsrOverrun = 0;
boolean_T isRateRunning[3] = { 0, 0, 0 };

boolean_T need2runFlags[3] = { 0, 0, 0 };

void rt_OneStep(void)
{
  boolean_T eventFlags[3];

  /* Check base rate for overrun */
  if (isRateRunning[0]++) {
    IsrOverrun = 1;
    isRateRunning[0]--;                /* allow future iterations to succeed*/
    return;
  }

  /*
   * For a bare-board target (i.e., no operating system), the rates
   * that execute this base step are buffered locally to allow for
   * overlapping preemption.  The generated code includes function
   * writeCodeInfoFcn() which sets the rates
   * that need to run this time step.  The return values are 1 and 0
   * for true and false, respectively.
   */
  BoostXL_3PH_SetEventsForThisBaseStep(eventFlags);
  enableTimer0Interrupt();
  BoostXL_3PH_step0();

  /* Get model outputs here */
  disableTimer0Interrupt();
  isRateRunning[0]--;
  if (eventFlags[2]) {
    if (need2runFlags[2]++) {
      IsrOverrun = 1;
      need2runFlags[2]--;              /* allow future iterations to succeed*/
      return;
    }
  }

  if (need2runFlags[2]) {
    if (isRateRunning[1]) {
      /* Yield to higher priority*/
      return;
    }

    isRateRunning[2]++;
    enableTimer0Interrupt();

    /* Step the model for subrate "2" */
    switch (2)
    {
     case 2 :
      BoostXL_3PH_step2();

      /* Get model outputs here */
      break;

     default :
      break;
    }

    disableTimer0Interrupt();
    need2runFlags[2]--;
    isRateRunning[2]--;
  }

  rtExtModeCheckEndTrigger();
}

volatile boolean_T stopRequested = false;
int main(void)
{
  volatile boolean_T runModel = true;
  float modelBaseRate = 5.0E-6;
  float systemClock = 200;
  c2000_flash_init();
  init_board();

#ifdef MW_EXEC_PROFILER_ON

  config_profilerTimer();

#endif

  ;
  rtmSetErrorStatus(BoostXL_3PH_M, 0);

  /* initialize external mode */
  rtParseArgsForExtMode(0, NULL);
  BoostXL_3PH_initialize();
  globalInterruptEnable();

  /* External mode */
  rtSetTFinalForExtMode(&rtmGetTFinal(BoostXL_3PH_M));
  rtExtModeCheckInit(3);

  {
    boolean_T rtmStopReq = false;
    rtExtModeWaitForStartPkt(BoostXL_3PH_M->extModeInfo, 3, &rtmStopReq);
    if (rtmStopReq) {
      rtmSetStopRequested(BoostXL_3PH_M, true);
    }
  }

  rtERTExtModeStartMsg();
  globalInterruptDisable();
  configureTimer0(modelBaseRate, systemClock);
  runModel =
    (rtmGetErrorStatus(BoostXL_3PH_M) == (NULL)) && !rtmGetStopRequested
    (BoostXL_3PH_M);
  enableTimer0Interrupt();
  globalInterruptEnable();
  while (runModel) {
    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModeOneStep(BoostXL_3PH_M->extModeInfo, 3, &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(BoostXL_3PH_M, true);
      }
    }

    stopRequested = !(
                      (rtmGetErrorStatus(BoostXL_3PH_M) == (NULL)) &&
                      !rtmGetStopRequested(BoostXL_3PH_M));
    runModel = !(stopRequested);
  }

  rtExtModeShutdown(3);

  /* Disable rt_OneStep() here */

  /* Terminate model */
  BoostXL_3PH_terminate();
  globalInterruptDisable();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
