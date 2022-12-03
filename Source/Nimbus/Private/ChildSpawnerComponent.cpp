#include "ChildSpawnerComponent.h"

UChildSpawnerComponent::UChildSpawnerComponent() {
    this->ExplosiveWeaponOwner = NULL;
    this->OwningGameObject = NULL;
    this->WeaponParameters = NULL;
    this->WeaponActivator = NULL;
}

