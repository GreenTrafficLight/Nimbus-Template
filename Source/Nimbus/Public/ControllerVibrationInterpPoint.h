#pragma once
#include "CoreMinimal.h"
#include "ControllerVibrationInterpPoint.generated.h"

USTRUCT(BlueprintType)
struct FControllerVibrationInterpPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    NIMBUS_API FControllerVibrationInterpPoint();
};

