#pragma once
#include "CoreMinimal.h"
#include "FlightEngineMainSequence.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct NIMBUS_API FFlightEngineMainSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Sequence;
    
    FFlightEngineMainSequence();
};

