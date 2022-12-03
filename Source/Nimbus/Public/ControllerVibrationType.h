#pragma once
#include "CoreMinimal.h"
#include "ControllerVibrationInterpPoint.h"
#include "ControllerVibrationType.generated.h"

USTRUCT(BlueprintType)
struct FControllerVibrationType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerVibrationInterpPoint> InterpPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PSVibrationLocalScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XBoxVibrationLocalScalar;
    
    NIMBUS_API FControllerVibrationType();
};

