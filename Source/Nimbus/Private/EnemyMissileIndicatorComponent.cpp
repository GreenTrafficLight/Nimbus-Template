#include "EnemyMissileIndicatorComponent.h"

void UEnemyMissileIndicatorComponent::OnOwnerSuspendedBySleep() {
}

void UEnemyMissileIndicatorComponent::OnOwnerResumedBySleep() {
}

void UEnemyMissileIndicatorComponent::OnHUDEnabled() {
}

void UEnemyMissileIndicatorComponent::OnHUDDisabled() {
}

UEnemyMissileIndicatorComponent::UEnemyMissileIndicatorComponent() {
    this->MeshTemplate = NULL;
    this->MeshMaterial = NULL;
    this->IndicatorPitch = 55.00f;
    this->IndicatorOrbitRadiusMaxX = 30.00f;
    this->IndicatorOrbitRadiusMaxY = 20.00f;
    this->IndicatorOrbitRadiusMinX = 7.50f;
    this->IndicatorOrbitRadiusMinY = 5.00f;
    this->IntervalToNextVisiblityToggleSeconds = 0.20f;
    this->DistanceToStartBlinkingMeters = 1000.00f;
    this->PlayerPlane = NULL;
}

