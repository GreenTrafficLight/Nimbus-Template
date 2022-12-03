#pragma once
#include "CoreMinimal.h"
#include "ImbalanceAnimCurveData.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FImbalanceAnimCurveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveVector* AnimCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Timer;
    
    NIMBUS_API FImbalanceAnimCurveData();
};

