#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_Maneuver_StateUninterruptibleBase.generated.h"

UCLASS(Abstract, Blueprintable)
class NIMBUS_API UBTTask_Maneuver_StateUninterruptibleBase : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_Maneuver_StateUninterruptibleBase();
};

