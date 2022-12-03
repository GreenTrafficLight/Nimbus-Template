#include "CampaignDebriefingRibbonManager.h"
#include "ProceduralMeshComponent.h"

ACampaignDebriefingRibbonManager::ACampaignDebriefingRibbonManager() {
    this->Mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
    this->Settings = NULL;
}

