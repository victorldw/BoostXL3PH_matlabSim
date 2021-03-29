/*
 * BoostXL_3PH_dt.h
 *
 * Code generation for model "BoostXL_3PH".
 *
 * Model version              : 1.14
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Mon Mar 29 09:06:23 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(codertarget_tic2000_blocks_DA_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "codertarget_tic2000_blocks_DA_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&BoostXL_3PH_B.StateSpace_o1[0]), 0, 0, 51 },

  { (char_T *)(&BoostXL_3PH_B.GPIO12217), 8, 0, 6 }
  ,

  { (char_T *)(&BoostXL_3PH_DW.StateSpace_DSTATE[0]), 0, 0, 3 },

  { (char_T *)(&BoostXL_3PH_DW.StateSpace_PWORK.AS), 11, 0, 5 },

  { (char_T *)(&BoostXL_3PH_DW.StateSpace_IWORK[0]), 10, 0, 11 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  5U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&BoostXL_3PH_P.Vdc_Amplitude), 0, 0, 404 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  1U,
  rtPTransitions
};

/* [EOF] BoostXL_3PH_dt.h */
