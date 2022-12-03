#include "UnitFormationElementLocator.h"
#include "Components/StaticMeshComponent.h"

AUnitFormationElementLocator::AUnitFormationElementLocator() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

