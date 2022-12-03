#pragma once
#include "CoreMinimal.h"
#include "MissionStateBase.h"
#include "MissionIGCState.generated.h"

class UNimbusSoundReverbManager;
class UAsyncTaskMissionRequestIGC;
class UMissionIGCPlayer;
class UMissionFadeSoundManager;
class AMissionPhase;
class UNimbusGarbageCollectManager;

UCLASS(Blueprintable)
class UMissionIGCState : public UMissionStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionIGCPlayer* IGCPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncTaskMissionRequestIGC* IGCTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMissionPhase* MiniGameMapPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionFadeSoundManager* FadeSoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGarbageCollectManager* GarbageCollectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusSoundReverbManager* SoundReverbManager;
    
public:
    UMissionIGCState();
};

