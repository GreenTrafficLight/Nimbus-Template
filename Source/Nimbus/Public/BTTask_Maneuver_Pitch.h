#pragma once
#include "CoreMinimal.h"
#include "BTTask_Maneuver_FlyStraight.h"
#include "BTTask_Maneuver_Pitch.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_Maneuver_Pitch : public UBTTask_Maneuver_FlyStraight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchAngle;
    
    UBTTask_Maneuver_Pitch();
};

