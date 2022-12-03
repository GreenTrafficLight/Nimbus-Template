#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetStateEscapeFromPursuer.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_SetStateEscapeFromPursuer : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector PursuerActorKey;
    
    UBTTask_SetStateEscapeFromPursuer();
};

