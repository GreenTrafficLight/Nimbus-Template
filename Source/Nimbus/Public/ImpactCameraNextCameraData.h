#pragma once
#include "CoreMinimal.h"
#include "ImpactCameraExceptionPriorityData.h"
#include "EImpactCameraTerminationCondition.h"
#include "ImpactCameraNextCameraData.generated.h"

USTRUCT(BlueprintType)
struct FImpactCameraNextCameraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NextCameraNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImpactCameraExceptionPriorityData> NextCameraExceptionPriorityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EImpactCameraTerminationCondition NextCameraConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Parameter_Float;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExecutableAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExecutableGround;
    
    NIMBUS_API FImpactCameraNextCameraData();
};

