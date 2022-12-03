#pragma once
#include "CoreMinimal.h"
#include "MissionObjectiveBase.h"
#include "MissionObjectiveIsTargetAlive.generated.h"

class AGameObject;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMissionObjectiveIsTargetAlive : public UMissionObjectiveBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameObject* Target;
    
public:
    UMissionObjectiveIsTargetAlive();
};

