#include "AIUAVComponent.h"

void UAIUAVComponent::ResetUAVDockSlots() {
}

void UAIUAVComponent::OnVisibilityChanged(bool bVisibility) {
}

void UAIUAVComponent::Launch() {
}

UAIUAVComponent::UAIUAVComponent() {
    this->LaunchDuration = 0.00f;
    this->LaunchInitialSpeedMeters = 0.00f;
    this->LaunchAcceleration = 0.00f;
    this->LaunchVFXComponentName = TEXT("TrailVFX");
    this->UndockOffsetZMin = -800.00f;
    this->UndockOffsetZMax = -400.00f;
    this->UndockIntervalSeconds = 0.15f;
    this->UndockDuration = 1.00f;
    this->UndockFlipDelay = 0.60f;
    this->DockRadiusMeters = 50.00f;
    this->DockDuration = 1.00f;
    this->DockFlipDelay = 0.60f;
    this->bVisibleWhileDocked = true;
    this->DockedParent = NULL;
    this->OwningPlane = NULL;
    this->DockedMeshComponent = NULL;
    this->PlaneBodyMesh = NULL;
    this->PlaneBodySkeletalMesh = NULL;
    this->LaunchVFXTrailParticles = NULL;
}

