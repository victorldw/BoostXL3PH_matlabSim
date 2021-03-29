/*
 * File: BoostXL_3PH_data.c
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

/* Block parameters (default storage) */
P_BoostXL_3PH_T BoostXL_3PH_P = {
  /* Mask Parameter: Vdc_Amplitude
   * Referenced by: '<S73>/DC'
   */
  48.0,

  /* Expression: zeros(12,1)
   * Referenced by: '<S76>/SwitchCurrents'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: S.A
   * Referenced by: '<S74>/State-Space'
   */
  { -0.31967156865459145, 0.65514549780145614, 0.65514549780145614,
    0.65514549780145614, -0.31967156865459145, 0.65514549780145614,
    0.65514549780145614, 0.65514549780145614, -0.31967156865459145 },

  /* Expression: S.B
   * Referenced by: '<S74>/State-Space'
   */
  { 131646.55964516802, 0.0, -131646.55964516802, -131646.55964516802, 0.0,
    131646.55964516802, -131646.55964516802, 131646.55964516802, 0.0,
    131646.55964516802, -131646.55964516802, 0.0, 0.0, -131646.55964516802,
    131646.55964516802, 0.0, 131646.55964516802, -131646.55964516802,
    -131646.55964516802, 0.0, 131646.55964516802, 131646.55964516802, 0.0,
    -131646.55964516802, 131646.55964516802, -131646.55964516802, 0.0,
    -131646.55964516802, 131646.55964516802, 0.0, 0.0, 131646.55964516802,
    -131646.55964516802, 0.0, -131646.55964516802, 131646.55964516802, 0.0, 0.0,
    0.0 },

  /* Expression: S.C
   * Referenced by: '<S74>/State-Space'
   */
  { 0.0031478666929943668, -0.0031478666929943668, -0.0031478666929943668,
    0.0031478666929943668, 0.0, 0.0, -0.0031478666929943668,
    0.0031478666929943668, 0.0031478666929943668, -0.0031478666929943668, 0.0,
    0.0, -0.0062957333859887422, 0.0031478666929943759, 0.0031478666929943668,
    6.295733385988739E-8, -6.295733385988739E-8, 0.0, 0.0, 0.0,
    0.0031478666929943668, -0.0031478666929943668, -0.0031478666929943668,
    0.0031478666929943668, 0.0, 0.0, -0.0031478666929943668,
    0.0031478666929943668, 0.0031478666929943668, -0.0031478666929943668,
    0.0031478666929943668, 0.0031478666929943759, -0.0062957333859887422, 0.0,
    6.295733385988739E-8, -6.295733385988739E-8, -0.0031478666929943668,
    0.0031478666929943668, 0.0, 0.0, 0.0031478666929943668,
    -0.0031478666929943668, 0.0031478666929943668, -0.0031478666929943668, 0.0,
    0.0, -0.0031478666929943668, 0.0031478666929943668, 0.0031478666929943668,
    -0.0062957333859887336, 0.0031478666929943668, -6.295733385988739E-8, 0.0,
    6.295733385988739E-8 },

  /* Expression: S.D
   * Referenced by: '<S74>/State-Space'
   */
  { -17088.360088708025, 17088.360088708025, -16455.819955645988,
    16455.819955645988, -16455.819955645988, 16455.819955645988,
    17088.360088708025, -17088.360088708025, 16455.819955645988,
    -16455.819955645988, 16455.819955645988, -16455.819955645988,
    632.54013306198613, -632.54013306198613, 0.0, 0.65823279822584013,
    -0.32911639911292007, -0.32911639911292007, 17088.360088708025,
    -17088.360088708025, 16455.819955645988, -16455.819955645988,
    16455.819955645988, -16455.819955645988, -17088.360088708025,
    17088.360088708025, -16455.819955645988, 16455.819955645988,
    -16455.819955645988, 16455.819955645988, -632.54013306198613,
    632.54013306198613, 0.0, -0.65823279822584013, 0.32911639911292007,
    0.32911639911292007, -16455.819955645988, 16455.819955645988,
    -17088.360088708025, 17088.360088708025, -16455.819955645988,
    16455.819955645988, 16455.819955645988, -16455.819955645988,
    17088.360088708025, -17088.360088708025, 16455.819955645988,
    -16455.819955645988, -632.54013306198613, 0.0, 632.54013306198613,
    -0.32911639911292007, 0.65823279822584013, -0.32911639911292007,
    16455.819955645988, -16455.819955645988, 17088.360088708025,
    -17088.360088708025, 16455.819955645988, -16455.819955645988,
    -16455.819955645988, 16455.819955645988, -17088.360088708025,
    17088.360088708025, -16455.819955645988, 16455.819955645988,
    632.54013306198613, 0.0, -632.54013306198613, 0.32911639911292007,
    -0.65823279822584013, 0.32911639911292007, -16455.819955645988,
    16455.819955645988, -16455.819955645988, 16455.819955645988,
    -17088.360088708025, 17088.360088708025, 16455.819955645988,
    -16455.819955645988, 16455.819955645988, -16455.819955645988,
    17088.360088708025, -17088.360088708025, 0.0, 632.54013306198613,
    -632.54013306198613, -0.32911639911292007, -0.32911639911292007,
    0.65823279822584013, 16455.819955645988, -16455.819955645988,
    16455.819955645988, -16455.819955645988, 17088.360088708025,
    -17088.360088708025, -16455.819955645988, 16455.819955645988,
    -16455.819955645988, 16455.819955645988, -17088.360088708025,
    17088.360088708025, 0.0, -632.54013306198613, 632.54013306198613,
    0.32911639911292007, 0.32911639911292007, -0.65823279822584013,
    17088.360088708025, -17088.360088708025, 16455.819955645988,
    -16455.819955645988, 16455.819955645988, -16455.819955645988,
    -17088.360088708025, 17088.360088708025, -16455.819955645988,
    16455.819955645988, -16455.819955645988, 16455.819955645988,
    -632.54013306198613, 632.54013306198613, 0.0, -0.65823279822584013,
    0.32911639911292007, 0.32911639911292007, -17088.360088708025,
    17088.360088708025, -16455.819955645988, 16455.819955645988,
    -16455.819955645988, 16455.819955645988, 17088.360088708025,
    -17088.360088708025, 16455.819955645988, -16455.819955645988,
    16455.819955645988, -16455.819955645988, 632.54013306198613,
    -632.54013306198613, 0.0, 0.65823279822584013, -0.32911639911292007,
    -0.32911639911292007, 16455.819955645988, -16455.819955645988,
    17088.360088708025, -17088.360088708025, 16455.819955645988,
    -16455.819955645988, -16455.819955645988, 16455.819955645988,
    -17088.360088708025, 17088.360088708025, -16455.819955645988,
    16455.819955645988, 632.54013306198613, 0.0, -632.54013306198613,
    0.32911639911292007, -0.65823279822584013, 0.32911639911292007,
    -16455.819955645988, 16455.819955645988, -17088.360088708025,
    17088.360088708025, -16455.819955645988, 16455.819955645988,
    16455.819955645988, -16455.819955645988, 17088.360088708025,
    -17088.360088708025, 16455.819955645988, -16455.819955645988,
    -632.54013306198613, 0.0, 632.54013306198613, -0.32911639911292007,
    0.65823279822584013, -0.32911639911292007, 16455.819955645988,
    -16455.819955645988, 16455.819955645988, -16455.819955645988,
    17088.360088708025, -17088.360088708025, -16455.819955645988,
    16455.819955645988, -16455.819955645988, 16455.819955645988,
    -17088.360088708025, 17088.360088708025, 0.0, -632.54013306198613,
    632.54013306198613, 0.32911639911292007, 0.32911639911292007,
    -0.65823279822584013, -16455.819955645988, 16455.819955645988,
    -16455.819955645988, 16455.819955645988, -17088.360088708025,
    17088.360088708025, 16455.819955645988, -16455.819955645988,
    16455.819955645988, -16455.819955645988, 17088.360088708025,
    -17088.360088708025, 0.0, 632.54013306198613, -632.54013306198613,
    -0.32911639911292007, -0.32911639911292007, 0.65823279822584013, 0.5, 0.5,
    0.5, 0.5, 0.5, 0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0 },

  /* Expression: S.x0
   * Referenced by: '<S74>/State-Space'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: 1
   * Referenced by: '<S2>/do not delete this gain'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S3>/do not delete this gain'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S4>/do not delete this gain'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S23>/do not delete this gain'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S22>/do not delete this gain'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S24>/do not delete this gain'
   */
  1.0,

  /* Expression: 1/3
   * Referenced by: '<S6>/Gain4'
   */
  0.33333333333333331,

  /* Expression: 1/3
   * Referenced by: '<S6>/Gain6'
   */
  0.33333333333333331,

  /* Expression: 1/3
   * Referenced by: '<S6>/Gain5'
   */
  0.33333333333333331,

  /* Computed Parameter: StateSpace_A
   * Referenced by: '<S18>/State-Space'
   */
  { -1776.8848048703869, -1.5791367041742974E+6, 1.0 },

  /* Computed Parameter: StateSpace_B
   * Referenced by: '<S18>/State-Space'
   */
  1.0,

  /* Computed Parameter: StateSpace_C
   * Referenced by: '<S18>/State-Space'
   */
  1.5791367041742974E+6,

  /* Expression: x0c
   * Referenced by: '<S18>/State-Space'
   */
  0.0,

  /* Expression: 1900/16.5+2048
   * Referenced by: '<Root>/Gain1'
   */
  2163.151515151515,

  /* Computed Parameter: StateSpace_A_p
   * Referenced by: '<S19>/State-Space'
   */
  { -1776.8848048703869, -1.5791367041742974E+6, 1.0 },

  /* Computed Parameter: StateSpace_B_f
   * Referenced by: '<S19>/State-Space'
   */
  1.0,

  /* Computed Parameter: StateSpace_C_o
   * Referenced by: '<S19>/State-Space'
   */
  1.5791367041742974E+6,

  /* Expression: x0c
   * Referenced by: '<S19>/State-Space'
   */
  0.0,

  /* Expression: 1900/16.5+2048
   * Referenced by: '<Root>/Gain'
   */
  2163.151515151515,

  /* Computed Parameter: StateSpace_A_j
   * Referenced by: '<S20>/State-Space'
   */
  { -1776.8848048703869, -1.5791367041742974E+6, 1.0 },

  /* Computed Parameter: StateSpace_B_m
   * Referenced by: '<S20>/State-Space'
   */
  1.0,

  /* Computed Parameter: StateSpace_C_b
   * Referenced by: '<S20>/State-Space'
   */
  1.5791367041742974E+6,

  /* Expression: x0c
   * Referenced by: '<S20>/State-Space'
   */
  0.0,

  /* Expression: 1900/16.5+2048
   * Referenced by: '<Root>/Gain2'
   */
  2163.151515151515,

  /* Expression: K
   * Referenced by: '<S1>/K'
   */
  { 0.66666666666666663, 0.66666666666666663, 0.33333333333333331 },

  /* Computed Parameter: StateSpace_A_jk
   * Referenced by: '<S25>/State-Space'
   */
  { -1776.8848048703869, -1.5791367041742974E+6, 1.0 },

  /* Computed Parameter: StateSpace_B_p
   * Referenced by: '<S25>/State-Space'
   */
  1.0,

  /* Computed Parameter: StateSpace_C_j
   * Referenced by: '<S25>/State-Space'
   */
  1.5791367041742974E+6,

  /* Expression: x0c
   * Referenced by: '<S25>/State-Space'
   */
  0.0,

  /* Computed Parameter: StateSpace_A_b
   * Referenced by: '<S26>/State-Space'
   */
  { -1776.8848048703869, -1.5791367041742974E+6, 1.0 },

  /* Computed Parameter: StateSpace_B_a
   * Referenced by: '<S26>/State-Space'
   */
  1.0,

  /* Computed Parameter: StateSpace_C_p
   * Referenced by: '<S26>/State-Space'
   */
  1.5791367041742974E+6,

  /* Expression: x0c
   * Referenced by: '<S26>/State-Space'
   */
  0.0,

  /* Computed Parameter: StateSpace_A_f
   * Referenced by: '<S27>/State-Space'
   */
  { -1776.8848048703869, -1.5791367041742974E+6, 1.0 },

  /* Computed Parameter: StateSpace_B_e
   * Referenced by: '<S27>/State-Space'
   */
  1.0,

  /* Computed Parameter: StateSpace_C_p1
   * Referenced by: '<S27>/State-Space'
   */
  1.5791367041742974E+6,

  /* Expression: x0c
   * Referenced by: '<S27>/State-Space'
   */
  0.0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
