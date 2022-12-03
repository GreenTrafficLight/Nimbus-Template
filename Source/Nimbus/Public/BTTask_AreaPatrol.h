#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_AreaPatrol.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_AreaPatrol : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearDistance;
    
public:
    UBTTask_AreaPatrol();
};

