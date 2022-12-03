#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MissionStateBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "MissionSupplyPhaseState.generated.h"

class AActor;
class AMissionPhase;

UCLASS(Blueprintable)
class UMissionSupplyPhaseState : public UMissionStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSuccessPhaseDelegate, AMissionPhase*, MissionPhase, const FVector&, RestartLocation, const FRotator&, RestartRotation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartPhaseDelegate, AMissionPhase*, MissionPhase);
    
    UMissionSupplyPhaseState();
private:
    UFUNCTION()
    void OnReferencedActorEndPlayHandler(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

