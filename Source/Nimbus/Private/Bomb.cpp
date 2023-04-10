#include "Bomb.h"
#include "BombMovementComponent.h"

ABomb::ABomb() {
	this->WeaponMovement = CreateDefaultSubobject<UBombMovementComponent>(TEXT("Bomb Movement"));
    this->HomingDelayFromStart = 0.00f;
    this->MaxHomingAngle = 0.00f;
    this->MaxRotationAngle = 0.00f;
    this->GlideLiftPercentage = 95.00f;
    this->bHasRollAnimation = false;
    this->RollAnimationTargetRoll = 180.00f;
    this->RollAnimationDelay = 0.00f;
    this->RollAnimationRate = 0.00f;
    this->HeightToExplodeMeter = 0.00f;
}

