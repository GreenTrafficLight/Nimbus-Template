#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FlyToClearAltitude.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_FlyToClearAltitude : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeHighAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeLowAltitude;
    
public:
    UBTTask_FlyToClearAltitude();
};

