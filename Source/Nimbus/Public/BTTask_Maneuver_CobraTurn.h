#pragma once
#include "CoreMinimal.h"
#include "BTTask_Maneuver_StateUninterruptibleBase.h"
#include "BTTask_Maneuver_CobraTurn.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_Maneuver_CobraTurn : public UBTTask_Maneuver_StateUninterruptibleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipStableFlight;
    
    UBTTask_Maneuver_CobraTurn();
};

