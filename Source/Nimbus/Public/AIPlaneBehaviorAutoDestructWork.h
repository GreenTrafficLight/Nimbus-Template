#pragma once
#include "CoreMinimal.h"
#include "AIPlaneBehaviorAutoDestructWork.generated.h"

class AGameObject;

USTRUCT(BlueprintType)
struct FAIPlaneBehaviorAutoDestructWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* TargetObject;
    
    NIMBUS_API FAIPlaneBehaviorAutoDestructWork();
};

