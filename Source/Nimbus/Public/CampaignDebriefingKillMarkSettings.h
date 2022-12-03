#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CampaignDebriefingKillMarkSettings.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable, EditInlineNew)
class UCampaignDebriefingKillMarkSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MatInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkLineWidth;
    
    UCampaignDebriefingKillMarkSettings();
};

