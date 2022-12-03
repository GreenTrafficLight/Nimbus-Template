#pragma once
#include "CoreMinimal.h"
#include "CloudVisibilityDistance.generated.h"

USTRUCT(BlueprintType)
struct FCloudVisibilityDistance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvisibleDurationTimePercent;
    
    NIMBUS_API FCloudVisibilityDistance();
};

