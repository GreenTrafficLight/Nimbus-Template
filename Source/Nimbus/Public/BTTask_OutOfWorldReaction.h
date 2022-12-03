#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_OutOfWorldReaction.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_OutOfWorldReaction : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_OutOfWorldReaction();
};

