#pragma once
#include "CoreMinimal.h"
#include "ImpactCameraExceptionPriorityData.generated.h"

USTRUCT(BlueprintType)
struct FImpactCameraExceptionPriorityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextCameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetObjNameID;
    
    NIMBUS_API FImpactCameraExceptionPriorityData();
};

