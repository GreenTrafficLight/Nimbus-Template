#include "SODBomb.h"
#include "ChildSpawnerComponent.h"
#include "SODMovementComponent.h"

ASODBomb::ASODBomb() {
	this->WeaponMovement = CreateDefaultSubobject<USODMovementComponent>(TEXT("SOD Movement"));
    this->ChildSpawner = CreateDefaultSubobject<UChildSpawnerComponent>(TEXT("SOD Child Spawner"));
    this->ChildClass = NULL;
    this->DispersionStartSquared = 0.00f;
    this->DispersionIntervalSquared = 0.00f;
    this->DispersionAngle = 0.00f;
    this->DispersionCount = 0;
}

