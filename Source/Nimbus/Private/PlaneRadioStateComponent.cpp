#include "PlaneRadioStateComponent.h"

class AGameObject;
class AWeaponBase;

void UPlaneRadioStateComponent::Restore() {
}

void UPlaneRadioStateComponent::HandlerObjectFireWeapon(const AGameObject* Causer, const AGameObject* WeaponTarget, const AWeaponBase* Weapon, int32 WeaponNumber) {
}

UPlaneRadioStateComponent::UPlaneRadioStateComponent() {
    this->OwingGameObject = NULL;
    this->Player = NULL;
    this->AIPlane = NULL;
    this->TeamDeathMatchGameMode = NULL;
}

