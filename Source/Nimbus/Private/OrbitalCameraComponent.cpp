#include "OrbitalCameraComponent.h"

UOrbitalCameraComponent::UOrbitalCameraComponent() {
    this->bStartOnBeginPlay = true;
    this->RevolvingSpeed = 0.25f;
    this->TargetActor = NULL;
}

