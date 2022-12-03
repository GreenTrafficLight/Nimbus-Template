#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SeaExplosionInfo.h"
#include "SeaSprayTrigger.generated.h"

USTRUCT(BlueprintType)
struct FSeaSprayTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeaExplosionInfo SeaExplosionInfo;
    
    NIMBUS_API FSeaSprayTrigger();
};

