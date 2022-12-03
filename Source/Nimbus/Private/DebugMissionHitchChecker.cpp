#include "DebugMissionHitchChecker.h"

UDebugMissionHitchChecker::UDebugMissionHitchChecker() {
    this->HitchCautionThresholdTimeMS = 20.00f;
    this->HitchWarningThresholdTimeMS = 25.00f;
    this->HitchMeasureTime = 3.00f;
    this->HitchThresholdTimeMSMultiplierForPIE = 1.25f;
    this->NimbusGameInstance = NULL;
}

