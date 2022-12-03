#include "CheckPointGameObject.h"

FCheckPointGameObject::FCheckPointGameObject() {
    this->Health = 0.00f;
    this->GunCount = 0;
    this->MainWeaponCount = 0;
    this->SpecialWeaponCount = 0;
    this->bIsUnidentified = false;
    this->PlayerPlaneSWP = 0;
    this->PlayerPlaneFlightDistance = 0.00f;
    this->bIsNotActivateOnRestart = false;
    this->bIsDestroyedChildActor = false;
}

