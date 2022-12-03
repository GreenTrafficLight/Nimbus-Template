#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CampaignDebriefingKillMarkManager.generated.h"

class UProceduralMeshComponent;
class UCampaignDebriefingKillMarkSettings;
class UCampaignDebriefingKillMark;

UCLASS(Blueprintable)
class ACampaignDebriefingKillMarkManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCampaignDebriefingKillMarkSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCampaignDebriefingKillMark*> KillMarks;
    
public:
    ACampaignDebriefingKillMarkManager();
};

