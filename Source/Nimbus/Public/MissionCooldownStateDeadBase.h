#pragma once
#include "CoreMinimal.h"
#include "MissionStateBase.h"
#include "MissionCooldownStateDeadBase.generated.h"

class UMissionFadeSoundManager;

UCLASS(Blueprintable)
class UMissionCooldownStateDeadBase : public UMissionStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionFadeSoundManager* FadeSoundManager;
    
public:
    UMissionCooldownStateDeadBase();
};

