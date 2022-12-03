#include "ThirdPersonCameraComponent.h"

UThirdPersonCameraComponent::UThirdPersonCameraComponent() {
    this->AnimDataNovice = NULL;
    this->AnimDataExpert = NULL;
    this->RollDelay = 1.00f;
    this->PitchDelay = 30.00f;
    this->PitchMagnitude = 1.00f;
    this->PitchReturnRatio = 1.00f;
    this->bEnableYawAnimationBlend = false;
    this->AirModifyRateCurve = NULL;
    this->AirStrengthMoveRateCurve = NULL;
    this->RollRatioLoseSpeed = 1.00f;
    this->RollRatiRreturnSpeed = 2.00f;
    this->MaxMoveSpeed = 3.00f;
}

