#include "WeaponMovementComponent.h"

UWeaponMovementComponent::UWeaponMovementComponent() {
    this->HomingTarget = NULL;
    this->OwningActor = NULL;
    this->OwningGameObject = NULL;
    this->FakeUpdatedComponent = NULL;
}

