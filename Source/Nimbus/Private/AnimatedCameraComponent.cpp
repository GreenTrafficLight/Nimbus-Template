#include "AnimatedCameraComponent.h"

UAnimatedCameraComponent::UAnimatedCameraComponent() {
    this->Player = NULL;
    this->AccelerationEaseDuration = 2.00f;
    this->RollEaseDuration = 2.00f;
    this->PitchEaseDuration = 1.00f;
    this->YawEaseDuration = 1.00f;
    this->AccelerationEaseDurationExpert = 2.00f;
    this->RollEaseDurationExpert = 2.00f;
    this->RollEaseDurationRatioExpert = 0.40f;
    this->PitchEaseDurationExpert = 1.00f;
    this->YawEaseDurationExpert = 1.00f;
    this->TrackReferenceBoneName = TEXT("CP_Cam");
    this->bIsExpertMode = false;
    this->FocusTarget = NULL;
}

