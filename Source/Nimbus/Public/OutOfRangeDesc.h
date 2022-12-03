#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EOutOfRangeLocatorType.h"
#include "OutOfRangeDesc.generated.h"

USTRUCT(BlueprintType)
struct FOutOfRangeDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DistSqToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EOutOfRangeLocatorType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StealthOpacityMultiplier;
    
    NIMBUS_API FOutOfRangeDesc();
};

