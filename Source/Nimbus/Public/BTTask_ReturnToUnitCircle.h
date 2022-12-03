#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ReturnToUnitCircle.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_ReturnToUnitCircle : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReturnSpeedRatio;
    
    UBTTask_ReturnToUnitCircle();
};

