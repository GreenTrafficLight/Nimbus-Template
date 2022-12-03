#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_LevelPlane.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_LevelPlane : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_LevelPlane();
};

