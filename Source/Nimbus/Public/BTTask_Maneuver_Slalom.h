#pragma once
#include "CoreMinimal.h"
#include "BTTask_Maneuver_FlyStraight.h"
#include "BTTask_Maneuver_Slalom.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_Maneuver_Slalom : public UBTTask_Maneuver_FlyStraight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollAngle;
    
    UBTTask_Maneuver_Slalom();
};

