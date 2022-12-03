#pragma once
#include "CoreMinimal.h"
#include "EMissionStatePhaseFailReason.h"
#include "MissionStateBase.h"
#include "Engine/EngineTypes.h"
#include "MissionPhaseState.generated.h"

class AActor;
class AMissionPhase;

UCLASS(Blueprintable)
class UMissionPhaseState : public UMissionStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSuccessPhaseDelegate, AMissionPhase*, MissionPhase);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartPhaseDelegate, AMissionPhase*, MissionPhase, bool, bRestart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFailPhaseDelegate, AMissionPhase*, MissionPhase, EMissionStatePhaseFailReason, Reason);
    
    UMissionPhaseState();
private:
    UFUNCTION()
    void OnReferencedActorEndPlayHandler(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

