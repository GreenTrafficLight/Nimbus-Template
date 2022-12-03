#include "DestroyableTGT.h"
#include "Components/StaticMeshComponent.h"

void ADestroyableTGT::ActivateTGT(bool bActive) {
}

ADestroyableTGT::ADestroyableTGT() {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->ID = -1;
}

