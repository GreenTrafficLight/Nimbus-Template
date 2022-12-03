#include "SystemObjectLightning.h"

void ASystemObjectLightning::OnLightningStrike() {
}

bool ASystemObjectLightning::IsPositionInRange(const FVector& Position) const {
    return false;
}

bool ASystemObjectLightning::IsEnableVFX() {
    return false;
}

void ASystemObjectLightning::InitializeVariablesFromBP(float MinDelay, float MaxDelay, float MinLifeTime, float MaxLifetime, float LightIntensityMultiplier, float MinDistanceFromCamera) {
}

void ASystemObjectLightning::EnableVFX(bool bEnabled) {
}

ASystemObjectLightning::ASystemObjectLightning() {
    this->BoundingSphereRadiusMeters = 1000.00f;
    this->LightningEffectDistanceMeters = 250.00f;
    this->LightningUpDisplayOffsetWhenStruckMeters = 400.00f;
    this->LightningForwardDisplayOffsetWhenStruckMeters = 200.00f;
    this->DelayMin = 0.00f;
    this->DelayMax = 0.00f;
    this->LifeTimeMin = 0.00f;
    this->LifeTimeMax = 0.00f;
    this->PointLightIntensityMultiplier = 0.00f;
    this->MinimumDistanceFromCamera = 0.00f;
    this->SoundEvent = NULL;
    this->AmbientSoundEvent = NULL;
    this->AmbientSoundStopEvent = NULL;
    this->PointLightIntensityCurve = NULL;
    this->LightningVFXComponent = NULL;
    this->SourcePointLight = NULL;
}

