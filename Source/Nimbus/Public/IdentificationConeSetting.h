#pragma once
#include "CoreMinimal.h"
#include "IdentificationConeSetting.generated.h"

USTRUCT(BlueprintType)
struct FIdentificationConeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdentifySpeedMultiplier;
    
    NIMBUS_API FIdentificationConeSetting();
};

