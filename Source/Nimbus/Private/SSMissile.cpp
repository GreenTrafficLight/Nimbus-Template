#include "SSMissile.h"
#include "VLSMovementComponent.h"

ASSMissile::ASSMissile() {
	this->WeaponMovement = CreateDefaultSubobject<UVLSMovementComponent>(TEXT("VLS Movement"));
    this->AltitudeFromLaunch = 800.00f;
}

