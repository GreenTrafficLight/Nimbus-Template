#pragma once
#include "CoreMinimal.h"
#include "SeaExplosionInfo.generated.h"

USTRUCT(BlueprintType)
struct FSeaExplosionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    NIMBUS_API FSeaExplosionInfo();
};

