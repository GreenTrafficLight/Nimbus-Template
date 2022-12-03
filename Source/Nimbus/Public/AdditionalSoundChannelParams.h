#pragma once
#include "CoreMinimal.h"
#include "AdditionalSoundChannelParams.generated.h"

USTRUCT(BlueprintType)
struct FAdditionalSoundChannelParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudDensity;
    
    NIMBUS_API FAdditionalSoundChannelParams();
};

