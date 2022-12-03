#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CampaignDebriefingOpeningAnimInfo.generated.h"

USTRUCT(BlueprintType)
struct NIMBUS_API FCampaignDebriefingOpeningAnimInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationEndWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraPosStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraPosEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraRotYaw;
    
    FCampaignDebriefingOpeningAnimInfo();
};

