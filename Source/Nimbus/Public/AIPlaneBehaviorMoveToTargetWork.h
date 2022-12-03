#pragma once
#include "CoreMinimal.h"
#include "AIPlaneBehaviorMoveToTargetWork.generated.h"

class AGameObject;

USTRUCT(BlueprintType)
struct FAIPlaneBehaviorMoveToTargetWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* TargetGameObject;
    
    NIMBUS_API FAIPlaneBehaviorMoveToTargetWork();
};

