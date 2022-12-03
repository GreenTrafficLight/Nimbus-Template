#include "CampaignDebriefingKillMarkManager.h"
#include "ProceduralMeshComponent.h"

ACampaignDebriefingKillMarkManager::ACampaignDebriefingKillMarkManager() {
    this->Mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
    this->Settings = NULL;
}

