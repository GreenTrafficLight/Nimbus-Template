#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CampaignDebriefingDecoder.generated.h"

class UCampaignDebriefingDecoderSettings;

UCLASS(Blueprintable)
class ACampaignDebriefingDecoder : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCampaignDebriefingDecoderSettings* Settings;
    
public:
    ACampaignDebriefingDecoder();
};

