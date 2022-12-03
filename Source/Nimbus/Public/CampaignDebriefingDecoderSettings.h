#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CampaignDebriefingDecoderSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCampaignDebriefingDecoderSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvReplayDistScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvReplayHeightScale;
    
    UCampaignDebriefingDecoderSettings();
};

