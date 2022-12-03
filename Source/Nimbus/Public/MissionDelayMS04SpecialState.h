#pragma once
#include "CoreMinimal.h"
#include "MissionDelayStateBase.h"
#include "MissionDelayMS04SpecialState.generated.h"

class AActor;

UCLASS(Blueprintable)
class UMissionDelayMS04SpecialState : public UMissionDelayStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PlayerPlane;
    
public:
    UMissionDelayMS04SpecialState();
};

