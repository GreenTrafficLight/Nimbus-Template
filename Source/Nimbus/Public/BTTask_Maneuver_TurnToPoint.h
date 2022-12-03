#pragma once
#include "CoreMinimal.h"
#include "BTTask_Maneuver_FlyStraight.h"
#include "UObject/NoExportTypes.h"
#include "BTTask_Maneuver_TurnToPoint.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_Maneuver_TurnToPoint : public UBTTask_Maneuver_FlyStraight {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDistance;
    
public:
    UBTTask_Maneuver_TurnToPoint();
};

