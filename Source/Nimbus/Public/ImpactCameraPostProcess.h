#pragma once
#include "CoreMinimal.h"
#include "EImpactCameraPostProcessCategory.h"
#include "ImpactCameraPostProcess.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FImpactCameraPostProcess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EImpactCameraPostProcessCategory ProcessCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    NIMBUS_API FImpactCameraPostProcess();
};

