#include "Artillery.h"
#include "WeaponMovementComponent.h"

AArtillery::AArtillery() {
	this->WeaponMovement = CreateDefaultSubobject<UWeaponMovementComponent>(TEXT("Artillery Movement"));
	this->SpreadRadius = 0.00f;
	this->TargetOffsetZ = 10.00f;
}

