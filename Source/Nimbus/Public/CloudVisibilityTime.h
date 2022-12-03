#pragma once
#include "CoreMinimal.h"
#include "CloudVisibilityTime.generated.h"

USTRUCT(BlueprintType)
struct FCloudVisibilityTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvisibleDuration;
    
    NIMBUS_API FCloudVisibilityTime();
};

