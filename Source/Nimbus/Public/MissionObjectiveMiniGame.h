#pragma once
#include "CoreMinimal.h"
#include "MissionObjectiveBase.h"
#include "MissionObjectiveMiniGame.generated.h"

class AMiniGamePhase;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMissionObjectiveMiniGame : public UMissionObjectiveBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMiniGamePhase* MiniGame;
    
public:
    UMissionObjectiveMiniGame();
};

