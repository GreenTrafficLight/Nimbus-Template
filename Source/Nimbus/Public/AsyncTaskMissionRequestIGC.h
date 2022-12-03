#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MissionPlayIGCTaskExitDelegateDelegate.h"
#include "EMultiplayerIGCType.h"
#include "EIGCTransitionType.h"
#include "AsyncTaskMissionRequestIGC.generated.h"

class AMatineeActor;
class UAsyncTaskMissionRequestIGC;
class UDataTable;
class UAkAudioEvent;

UCLASS(Blueprintable)
class NIMBUS_API UAsyncTaskMissionRequestIGC : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionPlayIGCTaskExitDelegate OnExit;
    
public:
    UAsyncTaskMissionRequestIGC();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskMissionRequestIGC* RequestIGC(AMatineeActor* MatineeActor, EMultiplayerIGCType IGCType, UDataTable* BeginSubtitleDataTable, UAkAudioEvent* BeginVoiceEvent, EIGCTransitionType TransitionType, bool bBeginFade, bool bBeginUpdateShadowDistanceScale, float BeginShadowDistance, UAkAudioEvent* EndVoiceEvent, bool bEndFade, FName MiniGameMapPhaseName, bool bStopBGMWhenSkip, UAkAudioEvent* OverrideStopBGMEventWhenSkip);
    
};

