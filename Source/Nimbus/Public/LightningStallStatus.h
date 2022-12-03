#pragma once
#include "CoreMinimal.h"
#include "LightningStallStatus.generated.h"

USTRUCT(BlueprintType)
struct FLightningStallStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsForceStall;
    
    NIMBUS_API FLightningStallStatus();
};

