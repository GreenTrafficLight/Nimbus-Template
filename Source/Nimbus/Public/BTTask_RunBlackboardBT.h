#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RunBehavior.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_RunBlackboardBT.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_RunBlackboardBT : public UBTTask_RunBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKey;
    
public:
    UBTTask_RunBlackboardBT();
};

