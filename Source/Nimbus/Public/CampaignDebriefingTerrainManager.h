#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CampaignDebriefingTerrainManager.generated.h"

class UCampaignDebriefingDecoderSettings;
class UCampaignDebriefingTerrainSettings;
class UDebriefingCameraComponent;

UCLASS(Blueprintable)
class ACampaignDebriefingTerrainManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCampaignDebriefingTerrainSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCampaignDebriefingDecoderSettings* DecoderSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDebriefingCameraComponent* DebriefingCamera;
    
public:
    ACampaignDebriefingTerrainManager();
};

