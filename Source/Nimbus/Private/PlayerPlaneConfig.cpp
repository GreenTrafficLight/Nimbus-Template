#include "PlayerPlaneConfig.h"

FPlayerPlaneConfig::FPlayerPlaneConfig() {
    this->SpeedBreak = 0.00f;
    this->SpeedMax = 0.00f;
    this->SpeedCruise = 0.00f;
    this->SpeedBuffet = 0.00f;
    this->SpeedStall = 0.00f;
    this->SpeedMin = 0.00f;
    this->AcceleR = 0.00f;
    this->DeceleR = 0.00f;
    this->ThrustMinWait = 0.00f;
    this->AfterburnerWait = 0.00f;
    this->ThrustMaxWait = 0.00f;
    this->PowerAfterBurnerR = 0.00f;
    this->SpeedUpperR = 0.00f;
    this->SpeedDownerR = 0.00f;
    this->SpeedRollDownerR = 0.00f;
    this->BuffetRecoverySpeedRate = 0.00f;
    this->BuffetRotX = 0.00f;
    this->BuffetRotY = 0.00f;
    this->BuffetRotXFreq = 0.00f;
    this->BuffetRotYFreq = 0.00f;
    this->BuffetOffset = 0.00f;
    this->AltStallStart = 0.00f;
    this->altStall = 0.00f;
    this->GndSpeedTakeoff = 0.00f;
    this->GndDrag0 = 0.00f;
    this->GndDrag1 = 0.00f;
    this->GndDrag2 = 0.00f;
    this->GndDrag3 = 0.00f;
    this->LandingAOALimitDeg = 0.00f;
    this->RotStallR = 0.00f;
    this->PitchUpDownR = 0.00f;
    this->YawRateStdNrm = 0.00f;
    this->StdArtificialRoll = 0.00f;
    this->PitchLimitPre = 0.00f;
    this->PitchLimitMax = 0.00f;
    this->RollLimitPre = 0.00f;
    this->RollLimitMax = 0.00f;
    this->PitchLimitPreGear = 0.00f;
    this->PitchLimitMaxGear = 0.00f;
    this->RollLimitPreGear = 0.00f;
    this->RollLimitMaxGear = 0.00f;
    this->SpeedGraph0 = 0.00f;
    this->SpeedGraph1 = 0.00f;
    this->SpeedGraph2 = 0.00f;
    this->SpeedGraph3 = 0.00f;
    this->SpeedGraph4 = 0.00f;
    this->SpeedGraph5 = 0.00f;
    this->SpeedGraph6 = 0.00f;
    this->SpeedGraph7 = 0.00f;
    this->SpeedGraph8 = 0.00f;
    this->SpeedGraph9 = 0.00f;
    this->DiffNoseVelocityR0 = 0.00f;
    this->DiffNoseVelocityR1 = 0.00f;
    this->DiffNoseVelocityR2 = 0.00f;
    this->DiffNoseVelocityR3 = 0.00f;
    this->DiffNoseVelocityR4 = 0.00f;
    this->DiffNoseVelocityR5 = 0.00f;
    this->DiffNoseVelocityR6 = 0.00f;
    this->DiffNoseVelocityR7 = 0.00f;
    this->DiffNoseVelocityR8 = 0.00f;
    this->DiffNoseVelocityR9 = 0.00f;
    this->DriftStartInputTime = 0.00f;
    this->DriftSpeedMinStart = 0.00f;
    this->DriftSpeedEnd = 0.00f;
    this->DriftStopDiffRadian = 0.00f;
    this->DriftIsEndReleaseThrottle = false;
    this->DriftAddRadStartingPitch = 0.00f;
    this->DriftAddPitchR = 0.00f;
    this->DriftPitchRate = 0.00f;
    this->DriftYawRate = 0.00f;
    this->DriftRadLimit = 0.00f;
    this->DriftRadDecR = 0.00f;
    this->DriftSpeedStartDec = 0.00f;
    this->DriftSpeedDecR = 0.00f;
    this->DriftSpeedDecMax = 0.00f;
    this->DriftPostStallManeuverability = EDriftPostStallManeuverability::None;
    this->DriftPostStallManeuverSpeedEnd = 0.00f;
    this->StaggerSpringConstRotX = 0.00f;
    this->StaggerSpringConstRotZ = 0.00f;
    this->StaggerDamperConstRotX = 0.00f;
    this->StaggerDamperConstRotZ = 0.00f;
    this->StaggerTimeMax = 0.00f;
    this->StaggerImpactRotXMax = 0.00f;
    this->StaggerImpactRotZMax = 0.00f;
    this->StaggerImpactDamageMax = 0.00f;
    this->StaggerImpactDamageMin = 0.00f;
}

