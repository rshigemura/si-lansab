/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Embraer ITA/Doutorado/Projetos/TS02_2Sprint_v9/TS02_2Sprint/UserApplication/Simulation\kcg_s2c_config.txt
** Generation date: 2014-11-22T21:11:29
*************************************************************$ */
#ifndef _OperationalScenario_H_
#define _OperationalScenario_H_

#include "kcg_types.h"
#include "ReadSensors.h"
#include "TestActuators.h"
#include "ModCount.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* OperationalScenario::Power */ Power;
  kcg_int /* OperationalScenario::Telemetry */ Telemetry;
  kcg_int /* OperationalScenario::AttitudeReference */ AttitudeReference;
  kcg_bool /* OperationalScenario::takePict */ takePict;
  kcg_real /* OperationalScenario::picLocation */ picLocation;
  kcg_bool /* OperationalScenario::PassarFaseBtn */ PassarFaseBtn;
  kcg_bool /* OperationalScenario::Accelerometers */ Accelerometers;
  kcg_bool /* OperationalScenario::SunSensor */ SunSensor;
  kcg_bool /* OperationalScenario::Reactionwheels */ Reactionwheels;
  kcg_bool /* OperationalScenario::MagneticTorquers */ MagneticTorquers;
  kcg_bool /* OperationalScenario::upDateSw */ upDateSw;
  kcg_bool /* OperationalScenario::Gyroscopes */ Gyroscopes;
  kcg_bool /* OperationalScenario::Input13 */ Input13;
  kcg_bool /* OperationalScenario::EjectionSignal */ EjectionSignal;
} inC_OperationalScenario;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* OperationalScenario::StartLaunchPhase */ StartLaunchPhase;
  kcg_bool /* OperationalScenario::Layer1Active */ Layer1Active;
  kcg_bool /* OperationalScenario::Layer1Visible */ Layer1Visible;
  kcg_bool /* OperationalScenario::Emit2CDS */ Emit2CDS;
  kcg_int /* OperationalScenario::ColorIndex */ ColorIndex;
  kcg_int /* OperationalScenario::ColorIndex2 */ ColorIndex2;
  kcg_int /* OperationalScenario::ColorIndex3 */ ColorIndex3;
  kcg_int /* OperationalScenario::ColorIndex4 */ ColorIndex4;
  kcg_bool /* OperationalScenario::GroundVisible */ GroundVisible;
  kcg_bool /* OperationalScenario::AttitudeVisible */ AttitudeVisible;
  kcg_bool /* OperationalScenario::NormalPhaseVisible */ NormalPhaseVisible;
  kcg_real /* OperationalScenario::AcRdValue */ AcRdValue;
  kcg_int /* OperationalScenario::ColorIndex5 */ ColorIndex5;
  kcg_bool /* OperationalScenario::LaunchVisible */ LaunchVisible;
  kcg_real /* OperationalScenario::FuelMeter */ FuelMeter;
  kcg_int /* OperationalScenario::FuelMeterGraphic */ FuelMeterGraphic;
  kcg_real /* OperationalScenario::SAT_Longitude_Value */ SAT_Longitude_Value;
  kcg_real /* OperationalScenario::SAT_Latitude_Value */ SAT_Latitude_Value;
  kcg_real /* OperationalScenario::SpinRd */ SpinRd;
  kcg_real /* OperationalScenario::SpinTg */ SpinTg;
  fr /* OperationalScenario::angleright */ angleright;
  fr /* OperationalScenario::angleleft */ angleleft;
  kcg_real /* OperationalScenario::SAT_Longitude_Min_Value */ SAT_Longitude_Min_Value;
  kcg_real /* OperationalScenario::SAT_Longitude_Sec_Value */ SAT_Longitude_Sec_Value;
  kcg_real /* OperationalScenario::SAT_Latitude_Min_Value */ SAT_Latitude_Min_Value;
  kcg_real /* OperationalScenario::SAT_Latitude_Sec_Value */ SAT_Latitude_Sec_Value;
  /* -----------------------   local probes  ------------------------- */
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::Probe1 */ Probe1_OpPhases_NormalPhase;
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init4;
  kcg_bool init3;
  kcg_bool init2;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* OperationalScenario::OpPhases::Launch::AtAcquisition */ AtAcquisition_OpPhases_Launch;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L142 */ _L142_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L121 */ _L121_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L110 */ _L110_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L40 */ _L40_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L25 */ _L25_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::_L62 */ _L62_OpPhases_NormalPhase;
  SSM_ST_OpPhases /* OperationalScenario::OpPhases */ OpPhases_state_nxt;
  kcg_bool /* OperationalScenario::OpPhases */ OpPhases_reset_act;
  kcg_bool /* OperationalScenario::OpPhases */ OpPhases_reset_nxt;
  kcg_bool /* OperationalScenario::LaunchPhase */ LaunchPhase;
  kcg_bool /* OperationalScenario::ApertarBotao */ ApertarBotao;
  kcg_bool /* OperationalScenario::GroundVisibleLocal */ GroundVisibleLocal;
  kcg_real /* OperationalScenario::LongitudeLocal */ LongitudeLocal;
  kcg_int /* OperationalScenario::LongitudeDeg */ LongitudeDeg;
  kcg_int /* OperationalScenario::LongitudeMin */ LongitudeMin;
  kcg_int /* OperationalScenario::LongitudeSec */ LongitudeSec;
  kcg_int /* OperationalScenario::LatDeg */ LatDeg;
  kcg_int /* OperationalScenario::LatMin */ LatMin;
  kcg_int /* OperationalScenario::LatSec */ LatSec;
  kcg_bool /* OperationalScenario::upDateSw */ rem_upDateSw;
  kcg_bool /* OperationalScenario::MagneticTorquers */ rem_MagneticTorquers;
  kcg_bool /* OperationalScenario::Reactionwheels */ rem_Reactionwheels;
  kcg_bool /* OperationalScenario::SunSensor */ rem_SunSensor;
  kcg_bool /* OperationalScenario::Accelerometers */ rem_Accelerometers;
  kcg_real /* OperationalScenario::picLocation */ rem_picLocation;
  kcg_bool /* OperationalScenario::takePict */ rem_takePict;
  kcg_int /* OperationalScenario::AttitudeReference */ rem_AttitudeReference;
  kcg_int /* OperationalScenario::Telemetry */ rem_Telemetry;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TestActuators /* 1 */ Context_1;
  outC_ReadSensors /* 6 */ _1_Context_6;
  outC_ModCount /* 6 */ Context_6;
  outC_ModCount /* 4 */ Context_4;
  outC_ModCount /* 5 */ Context_5;
  outC_ModCount /* 8 */ Context_8;
  outC_ModCount /* 7 */ Context_7;
  outC_ModCount /* 9 */ Context_9;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_OpPhases /* OperationalScenario::OpPhases */ OpPhases_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* OperationalScenario::OpPhases::Ground::_L54 */ _L54_OpPhases_Ground;
  kcg_real /* OperationalScenario::OpPhases::Ground::_L53 */ _L53_OpPhases_Ground;
  kcg_real /* OperationalScenario::OpPhases::Ground::_L50 */ _L50_OpPhases_Ground;
  kcg_real /* OperationalScenario::OpPhases::Ground::_L49 */ _L49_OpPhases_Ground;
  kcg_real /* OperationalScenario::OpPhases::Ground::_L46 */ _L46_OpPhases_Ground;
  kcg_real /* OperationalScenario::OpPhases::Ground::_L45 */ _L45_OpPhases_Ground;
  kcg_real /* OperationalScenario::OpPhases::Ground::_L42 */ _L42_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L41 */ _L41_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L39 */ _L39_OpPhases_Ground;
  kcg_real /* OperationalScenario::OpPhases::Ground::_L37 */ _L37_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L35 */ _L35_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L34 */ _L34_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L33 */ _L33_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L32 */ _L32_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L31 */ _L31_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L30 */ _L30_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L27 */ _L27_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L24 */ _L24_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L23 */ _L23_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L22 */ _L22_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L16 */ _L16_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L15 */ _L15_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L13 */ _L13_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L8 */ _L8_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L7 */ _L7_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L4 */ _L4_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L2 */ _L2_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground */ Ground_weakb_clock_OpPhases;
  kcg_real /* OperationalScenario::OpPhases::Launch::_L39 */ _L39_OpPhases_Launch;
  kcg_real /* OperationalScenario::OpPhases::Launch::_L40 */ _L40_OpPhases_Launch;
  kcg_real /* OperationalScenario::OpPhases::Launch::_L37 */ _L37_OpPhases_Launch;
  kcg_real /* OperationalScenario::OpPhases::Launch::_L38 */ _L38_OpPhases_Launch;
  kcg_real /* OperationalScenario::OpPhases::Launch::_L35 */ _L35_OpPhases_Launch;
  kcg_real /* OperationalScenario::OpPhases::Launch::_L36 */ _L36_OpPhases_Launch;
  kcg_real /* OperationalScenario::OpPhases::Launch::_L34 */ _L34_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L33 */ _L33_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L31 */ _L31_OpPhases_Launch;
  kcg_real /* OperationalScenario::OpPhases::Launch::_L29 */ _L29_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L28 */ _L28_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L12 */ _L12_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L13 */ _L13_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L14 */ _L14_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L7 */ _L7_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L10 */ _L10_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L6 */ _L6_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L5 */ _L5_OpPhases_Launch;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L143 */ _L143_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L144 */ _L144_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L141 */ _L141_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L140 */ _L140_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L139 */ _L139_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L138 */ _L138_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L137 */ _L137_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L136 */ _L136_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L135 */ _L135_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L133 */ _L133_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L130 */ _L130_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L124 */ _L124_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L125 */ _L125_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L117 */ _L117_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L118 */ _L118_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L119 */ _L119_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L120 */ _L120_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L108 */ _L108_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L114 */ _L114_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L53 */ _L53_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L43 */ _L43_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L31 */ _L31_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L36 */ _L36_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L30 */ _L30_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L28 */ _L28_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L21 */ _L21_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L22 */ _L22_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L23 */ _L23_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L24 */ _L24_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L26 */ _L26_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L16 */ _L16_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L17 */ _L17_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L19 */ _L19_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L12 */ _L12_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L13 */ _L13_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L14 */ _L14_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L15 */ _L15_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::ClockTime */ ClockTime_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::LaunchTime */ LaunchTime_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::AtNormalPhaseLocal */ AtNormalPhaseLocal_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L99 */ _L99_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L100 */ _L100_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L101 */ _L101_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L103 */ _L103_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L102 */ _L102_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L104 */ _L104_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L106 */ _L106_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L105 */ _L105_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L107 */ _L107_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L108 */ _L108_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L110 */ _L110_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L109 */ _L109_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L111 */ _L111_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L112 */ _L112_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L113 */ _L113_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L114 */ _L114_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L98 */ _L98_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L97 */ _L97_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L96 */ _L96_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L95 */ _L95_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L94 */ _L94_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L79 */ _L79_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L80 */ _L80_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L81 */ _L81_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L82 */ _L82_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L84 */ _L84_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L83 */ _L83_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L86 */ _L86_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L88 */ _L88_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L87 */ _L87_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L90 */ _L90_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L89 */ _L89_OpPhases_NormalPhase;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::_L66 */ _L66_OpPhases_NormalPhase;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::_L56 */ _L56_OpPhases_NormalPhase;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::_L57 */ _L57_OpPhases_NormalPhase;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::_L58 */ _L58_OpPhases_NormalPhase;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::_L59 */ _L59_OpPhases_NormalPhase;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::_L60 */ _L60_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L61 */ _L61_OpPhases_NormalPhase;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::_L41 */ _L41_OpPhases_NormalPhase;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::_L42 */ _L42_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L40 */ _L40_OpPhases_NormalPhase;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::_L24 */ _L24_OpPhases_NormalPhase;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::_L21 */ _L21_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L19 */ _L19_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L18 */ _L18_OpPhases_NormalPhase;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::_L13 */ _L13_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L10 */ _L10_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L11 */ _L11_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L12 */ _L12_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L5 */ _L5_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L6 */ _L6_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L7 */ _L7_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L8 */ _L8_OpPhases_NormalPhase;
  SSM_ST_OpPhases /* OperationalScenario::OpPhases */ OpPhases_state_sel;
  SSM_TR_OpPhases /* OperationalScenario::OpPhases */ OpPhases_fired_strong;
  SSM_TR_OpPhases /* OperationalScenario::OpPhases */ OpPhases_fired;
  kcg_int /* OperationalScenario::color */ color;
  kcg_int /* OperationalScenario::color_2 */ color_2;
  kcg_int /* OperationalScenario::color3 */ color3;
  kcg_int /* OperationalScenario::color4 */ color4;
  kcg_bool /* OperationalScenario::AttitudeVisibleLocal */ AttitudeVisibleLocal;
  kcg_bool /* OperationalScenario::NormalPhaseVisibleLocal */ NormalPhaseVisibleLocal;
  kcg_bool /* OperationalScenario::AtAcquisition */ AtAcquisition;
  kcg_bool /* OperationalScenario::GyroscopesLocal */ GyroscopesLocal;
  kcg_bool /* OperationalScenario::AccelerometersLocal */ AccelerometersLocal;
  kcg_bool /* OperationalScenario::PowerLocal */ PowerLocal;
  kcg_bool /* OperationalScenario::SunSensorLocal */ SunSensorLocal;
  kcg_bool /* OperationalScenario::ReactionwheelsLocal */ ReactionwheelsLocal;
  kcg_bool /* OperationalScenario::MagneticTorquersLocal */ MagneticTorquersLocal;
  kcg_real /* OperationalScenario::AcRdValueLocal */ AcRdValueLocal;
  kcg_bool /* OperationalScenario::AtNormalPhase */ AtNormalPhase;
  kcg_int /* OperationalScenario::color_5 */ color_5;
  kcg_bool /* OperationalScenario::LaunchVisibleLocal */ LaunchVisibleLocal;
  kcg_real /* OperationalScenario::FuelMeterLocal */ FuelMeterLocal;
  kcg_real /* OperationalScenario::LatitudeLocal */ LatitudeLocal;
  kcg_real /* OperationalScenario::SpinRdLocal */ SpinRdLocal;
  kcg_real /* OperationalScenario::SpinTgLocal */ SpinTgLocal;
  fr /* OperationalScenario::angleleftlocal */ angleleftlocal;
  fr /* OperationalScenario::anglerightlocal */ anglerightlocal;
  kcg_bool /* OperationalScenario::_L7 */ _L7;
  kcg_bool /* OperationalScenario::_L8 */ _L8;
  kcg_bool /* OperationalScenario::_L9 */ _L9;
  kcg_bool /* OperationalScenario::_L11 */ _L11;
  kcg_int /* OperationalScenario::_L12 */ _L12;
  kcg_int /* OperationalScenario::_L13 */ _L13;
  kcg_int /* OperationalScenario::_L14 */ _L14;
  kcg_int /* OperationalScenario::_L15 */ _L15;
  kcg_bool /* OperationalScenario::_L16 */ _L16;
  kcg_bool /* OperationalScenario::_L19 */ _L19;
  kcg_bool /* OperationalScenario::_L20 */ _L20;
  kcg_bool /* OperationalScenario::_L22 */ _L22;
  kcg_bool /* OperationalScenario::_L31 */ _L31;
  kcg_bool /* OperationalScenario::_L32 */ _L32;
  kcg_bool /* OperationalScenario::_L34 */ _L34;
  kcg_bool /* OperationalScenario::_L36 */ _L36;
  kcg_real /* OperationalScenario::_L38 */ _L38;
  kcg_int /* OperationalScenario::_L41 */ _L41;
  kcg_bool /* OperationalScenario::_L42 */ _L42;
  kcg_real /* OperationalScenario::_L43 */ _L43;
  kcg_real /* OperationalScenario::_L44 */ _L44;
  kcg_real /* OperationalScenario::_L45 */ _L45;
  kcg_int /* OperationalScenario::_L46 */ _L46;
  kcg_real /* OperationalScenario::_L51 */ _L51;
  kcg_real /* OperationalScenario::_L52 */ _L52;
  fr /* OperationalScenario::_L55 */ _L55;
  fr /* OperationalScenario::_L56 */ _L56;
  kcg_real /* OperationalScenario::_L63 */ _L63;
  kcg_int /* OperationalScenario::_L65 */ _L65;
  kcg_int /* OperationalScenario::_L66 */ _L66;
  kcg_real /* OperationalScenario::_L67 */ _L67;
  kcg_int /* OperationalScenario::_L68 */ _L68;
  kcg_real /* OperationalScenario::_L69 */ _L69;
  kcg_bool /* OperationalScenario::_L70 */ _L70;
  kcg_bool /* OperationalScenario::_L71 */ _L71;
  kcg_int /* OperationalScenario::_L72 */ _L72;
  kcg_int /* OperationalScenario::_L73 */ _L73;
  kcg_real /* OperationalScenario::_L74 */ _L74;
  kcg_real /* OperationalScenario::_L75 */ _L75;
  kcg_real /* OperationalScenario::_L76 */ _L76;
  kcg_int /* OperationalScenario::_L77 */ _L77;
} outC_OperationalScenario;

/* ===========  node initialization and cycle functions  =========== */
/* OperationalScenario */
extern void OperationalScenario(
  inC_OperationalScenario *inC,
  outC_OperationalScenario *outC);

extern void OperationalScenario_reset(outC_OperationalScenario *outC);

#endif /* _OperationalScenario_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** OperationalScenario.h
** Generation date: 2014-11-22T21:11:29
*************************************************************$ */

