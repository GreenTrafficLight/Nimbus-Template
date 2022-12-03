#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetStateUninterruptible.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_SetStateUninterruptible : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUninterruptible;
    
public:
    UBTTask_SetStateUninterruptible();
};

