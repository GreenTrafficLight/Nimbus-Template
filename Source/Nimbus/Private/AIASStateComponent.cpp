#include "AIASStateComponent.h"

void UAIASStateComponent::OnRestored() {
}

UAIASStateComponent::UAIASStateComponent() {
    this->TiltingDOCMLocationCurve = NULL;
    this->TiltingDOCMRotationCurve = NULL;
    this->TiltingDOCMParticle = NULL;
    this->TiltingDOCMParticleComponent = NULL;
    this->PlaneBodyMeshComponent = NULL;
    this->DamagedBodyMeshComponent = NULL;
    this->RectBaseObject = NULL;
}

