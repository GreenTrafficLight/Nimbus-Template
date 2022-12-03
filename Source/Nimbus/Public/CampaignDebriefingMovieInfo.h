#pragma once
#include "CoreMinimal.h"
#include "CampaignDebriefingMovieInfo.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct NIMBUS_API FCampaignDebriefingMovieInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 MissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MovieMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ManaTexturePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SceneVoice;
    
    FCampaignDebriefingMovieInfo();
};

