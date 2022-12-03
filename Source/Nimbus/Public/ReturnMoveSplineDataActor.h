#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ReturnMoveSplineDataActor.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class NIMBUS_API AReturnMoveSplineDataActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReturnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ReturnMoveSpeedCurve;
    
    AReturnMoveSplineDataActor();
};

