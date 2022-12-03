#pragma once
#include "CoreMinimal.h"
#include "IdentificationSetting.generated.h"

USTRUCT(BlueprintType)
struct FIdentificationSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdentifyTime;
    
    NIMBUS_API FIdentificationSetting();
};

