#include "NimbusProceduralRibbonActor.h"
#include "ProceduralMeshComponent.h"

ANimbusProceduralRibbonActor::ANimbusProceduralRibbonActor() {
    this->WayPointCount = 100;
    this->Width = 10.00f;
    this->UVDistance = 30.00f;
    this->MinDistance = 15.00f;
    this->MaxDistance = 100.00f;
    this->NoUpdateDistance = 10.00f;
    this->Mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
}

