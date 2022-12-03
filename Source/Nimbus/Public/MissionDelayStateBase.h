#pragma once
#include "CoreMinimal.h"
#include "MissionStateBase.h"
#include "MissionDelayStateBase.generated.h"

class UMissionFadeSoundManager;

UCLASS(Blueprintable)
class UMissionDelayStateBase : public UMissionStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionFadeSoundManager* FadeSoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionStateBase* NextState;
    
public:
    UMissionDelayStateBase();
};

