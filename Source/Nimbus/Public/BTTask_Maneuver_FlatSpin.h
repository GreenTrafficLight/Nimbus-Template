#pragma once
#include "CoreMinimal.h"
#include "BTTask_Maneuver_StateUninterruptibleBase.h"
#include "BTTask_Maneuver_FlatSpin.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_Maneuver_FlatSpin : public UBTTask_Maneuver_StateUninterruptibleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinTimes;
    
    UBTTask_Maneuver_FlatSpin();
};

