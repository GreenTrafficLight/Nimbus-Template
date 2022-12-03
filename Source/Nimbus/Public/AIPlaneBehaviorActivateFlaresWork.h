#pragma once
#include "CoreMinimal.h"
#include "AIPlaneBehaviorActivateFlaresWork.generated.h"

class AGameObject;

USTRUCT(BlueprintType)
struct FAIPlaneBehaviorActivateFlaresWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* PursuerGameObject;
    
    NIMBUS_API FAIPlaneBehaviorActivateFlaresWork();
};

