#pragma once
#include "CoreMinimal.h"
#include "MissionStateBase.h"
#include "MissionCooldownStateOutOfZone.generated.h"

class APlayerPlane;

UCLASS(Blueprintable)
class UMissionCooldownStateOutOfZone : public UMissionStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
public:
    UMissionCooldownStateOutOfZone();
};

