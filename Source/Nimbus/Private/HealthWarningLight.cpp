#include "HealthWarningLight.h"

FHealthWarningLight::FHealthWarningLight() {
    this->WarningLight = NULL;
    this->WarningMat = NULL;
    this->RemainingHealthPercentage = 0.00f;
    this->LightStrength = 0.00f;
    this->LightRange = 0.00f;
    this->BlinkOnDuration = 0.00f;
    this->BlinkOffDuration = 0.00f;
    this->OverallBlinkDuration = 0.00f;
    this->bIsTriggered = false;
    this->BlinkTimer = 0.00f;
    this->OverallBlinkTimer = 0.00f;
    this->bIsBlinkingOn = false;
}

