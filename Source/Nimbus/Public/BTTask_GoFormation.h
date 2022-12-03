#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_GoFormation.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_GoFormation : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeedUpdateWithoutControl;
    
public:
    UBTTask_GoFormation();
};

