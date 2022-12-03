#include "LayerMenuLineMeshActor.h"
#include "ProceduralMeshComponent.h"

ALayerMenuLineMeshActor::ALayerMenuLineMeshActor() {
    this->Mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
    this->LayerMenuParam = NULL;
    this->LineInfoIdCount = 0;
    this->SelectedLineInfoID = -1;
}

