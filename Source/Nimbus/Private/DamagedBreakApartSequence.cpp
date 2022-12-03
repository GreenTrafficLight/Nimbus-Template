#include "DamagedBreakApartSequence.h"

UDamagedBreakApartSequence::UDamagedBreakApartSequence() {
    this->TimeToStayIntact = 1.00f;
    this->TimeToStayIntactGround = -1.00f;
    this->TimeToLive = 0.00f;
    this->ImpulseStrength = 300.00f;
    this->ImpulseStrengthGround = 150.00f;
    this->ExplosionPointRandomRange = 1.00f;
    this->bIsParking = false;
    this->bIsOnGround = false;
    this->bOwnerExploded = false;
    this->bIsVRPlane = false;
    this->GameObjectCategory = EGameObjectCategory::Category_None;
    this->ConstraintRoot = NULL;
    this->OwnerMeshComponent = NULL;
}

