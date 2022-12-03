#include "AsyncTaskMissionRequestIGC.h"

class UAsyncTaskMissionRequestIGC;
class AMatineeActor;
class UDataTable;
class UAkAudioEvent;

UAsyncTaskMissionRequestIGC* UAsyncTaskMissionRequestIGC::RequestIGC(AMatineeActor* MatineeActor, EMultiplayerIGCType IGCType, UDataTable* BeginSubtitleDataTable, UAkAudioEvent* BeginVoiceEvent, EIGCTransitionType TransitionType, bool bBeginFade, bool bBeginUpdateShadowDistanceScale, float BeginShadowDistance, UAkAudioEvent* EndVoiceEvent, bool bEndFade, FName MiniGameMapPhaseName, bool bStopBGMWhenSkip, UAkAudioEvent* OverrideStopBGMEventWhenSkip) {
    return NULL;
}

UAsyncTaskMissionRequestIGC::UAsyncTaskMissionRequestIGC() {
}

