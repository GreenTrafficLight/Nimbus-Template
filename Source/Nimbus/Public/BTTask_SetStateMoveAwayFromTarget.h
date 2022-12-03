#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetStateMoveAwayFromTarget.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_SetStateMoveAwayFromTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorKey;
    
    UBTTask_SetStateMoveAwayFromTarget();
};

