#pragma once
#include "CoreMinimal.h"
#include "BTTask_Maneuver_StateUninterruptibleBase.h"
#include "BTTask_Maneuver_Kulbit.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_Maneuver_Kulbit : public UBTTask_Maneuver_StateUninterruptibleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipPreStableFlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipPostStableFlight;
    
    UBTTask_Maneuver_Kulbit();
};

