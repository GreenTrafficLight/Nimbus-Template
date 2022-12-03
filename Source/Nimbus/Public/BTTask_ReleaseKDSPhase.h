#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ReleaseKDSPhase.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_ReleaseKDSPhase : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_ReleaseKDSPhase();
};

