#include "VLSMissile.h"
#include "VLSMovementComponent.h"

AVLSMissile::AVLSMissile() {
	this->WeaponMovement->UnregisterComponent();
	this->WeaponMovement->DestroyComponent();
	this->WeaponMovement = CreateDefaultSubobject<UVLSMovementComponent>(TEXT("VLS Movement"));
    this->OmnidirectionalDuration = 2.00f;
    this->OmnidirectionalAbility = 90.00f;
    this->ADMM_ExternalVelocityDecaySpeed = 1.50f;
}

