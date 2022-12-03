#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionDelayStateFactory.generated.h"

class UMissionFadeSoundManager;

UCLASS(Blueprintable)
class UMissionDelayStateFactory : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionFadeSoundManager* FadeSoundManager;
    
public:
    UMissionDelayStateFactory();
};

