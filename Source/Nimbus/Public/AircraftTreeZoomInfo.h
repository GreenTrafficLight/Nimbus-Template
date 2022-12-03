#pragma once
#include "CoreMinimal.h"
#include "AircraftTreeZoomInfo.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct NIMBUS_API FAircraftTreeZoomInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AnimCurve;
    
    FAircraftTreeZoomInfo();
};

