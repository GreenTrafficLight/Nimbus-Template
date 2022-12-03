#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CampaignDebriefingRibbonManager.generated.h"

class UProceduralMeshComponent;
class UCampaignDebriefingRibbon;
class UCampaignDebriefingRibbonSettings;

UCLASS(Blueprintable)
class ACampaignDebriefingRibbonManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCampaignDebriefingRibbonSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCampaignDebriefingRibbon*> Ribbons;
    
public:
    ACampaignDebriefingRibbonManager();
};

