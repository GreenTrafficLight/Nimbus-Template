#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_AvoidObstacle.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_AvoidObstacle : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_AvoidObstacle();
};

