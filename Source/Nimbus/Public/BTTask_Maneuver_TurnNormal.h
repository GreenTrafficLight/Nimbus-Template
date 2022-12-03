#pragma once
#include "CoreMinimal.h"
#include "BTTask_Maneuver_FlyStraight.h"
#include "BTTask_Maneuver_TurnNormal.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_Maneuver_TurnNormal : public UBTTask_Maneuver_FlyStraight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollAngle;
    
    UBTTask_Maneuver_TurnNormal();
};

