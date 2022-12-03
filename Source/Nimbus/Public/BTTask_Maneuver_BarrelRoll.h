#pragma once
#include "CoreMinimal.h"
#include "BTTask_Maneuver_FlyStraight.h"
#include "BTTask_Maneuver_BarrelRoll.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_Maneuver_BarrelRoll : public UBTTask_Maneuver_FlyStraight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollRate;
    
    UBTTask_Maneuver_BarrelRoll();
};

