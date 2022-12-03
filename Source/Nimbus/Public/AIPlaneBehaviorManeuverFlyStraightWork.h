#pragma once
#include "CoreMinimal.h"
#include "AIPlaneBehaviorManeuverFlyStraightWork.generated.h"

class AGameObject;

USTRUCT(BlueprintType)
struct FAIPlaneBehaviorManeuverFlyStraightWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* PursuerGameObject;
    
    NIMBUS_API FAIPlaneBehaviorManeuverFlyStraightWork();
};

