#include "WeaponUAV.h"
#include "Components/SceneComponent.h"

AWeaponUAV::AWeaponUAV() {
    this->AttackStartTime = 1.00f;
    this->AttackTime = 3.00f;
    this->DecelerationDistance = 0.00f;
    this->DecelerationSpeed = 600.00f;
    this->MinimumSpeed = 1000.00f;
    this->DecelerationDistance_Ground = 1200.00f;
    this->DecelerationSpeed_Ground = 600.00f;
    this->MinimumSpeed_Ground = 1000.00f;
    this->AttackDistance_Ground = 300.00f;
    this->GroundCorrectionHeight = 100.00f;
    this->DecelerationDistance_Fas = 1200.00f;
    this->DecelerationSpeed_Fas = 36000.00f;
    this->MinimumSpeed_Fas = 200.00f;
    this->AttackDistance_Fas = 300.00f;
    this->OverShootAngle = 90.00f;
    this->LastDestinationPointSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LastDestinationPointSceneComponent"));
    this->FirstLookAtSlope = 60.00f;
    this->MaxLookAtSlope = 90.00f;
    this->BalletIgnoreActor = NULL;
}

