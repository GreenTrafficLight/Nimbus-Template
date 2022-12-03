#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionCooldownStateDeadFactory.generated.h"

class UMissionFadeSoundManager;

UCLASS(Blueprintable)
class UMissionCooldownStateDeadFactory : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionFadeSoundManager* FadeSoundManager;
    
public:
    UMissionCooldownStateDeadFactory();
};

