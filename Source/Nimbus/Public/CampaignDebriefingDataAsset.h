#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CampaignDebriefingMovieInfo.h"
#include "CampaignDebriefingCameraInfo.h"
#include "CampaignDebriefingOpeningAnimInfo.h"
#include "CampaignDebriefingDataAsset.generated.h"

class UCampaignDebriefingTerrainSettings;
class UCampaignDebriefingUnitSettings;
class UCampaignDebriefingDecoderSettings;
class UCampaignDebriefingRibbonSettings;
class UCampaignDebriefingKillMarkSettings;

UCLASS(Blueprintable)
class NIMBUS_API UCampaignDebriefingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCampaignDebriefingDecoderSettings* Decoder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCampaignDebriefingRibbonSettings* Ribbon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCampaignDebriefingKillMarkSettings* KillMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCampaignDebriefingTerrainSettings* Terrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCampaignDebriefingUnitSettings* Unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignDebriefingCameraInfo Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignDebriefingMovieInfo Movie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignDebriefingOpeningAnimInfo Opening;
    
    UCampaignDebriefingDataAsset();
};

