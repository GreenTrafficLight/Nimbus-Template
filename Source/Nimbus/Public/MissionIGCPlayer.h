#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionIGCPlayer.generated.h"

class UNimbusFadeManager;
class UAkAudioEvent;
class ACameraActor;
class UNimbusPauseManager;

UCLASS(Blueprintable)
class UMissionIGCPlayer : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnStartSkipFadeOut, bool, bStopBGM, UAkAudioEvent*, OverrideStopBGMEvent, float, Duration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIgcCameraChanged, ACameraActor*, NewCameraActor);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusPauseManager* PauseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusFadeManager* FadeManager;
    
public:
    UMissionIGCPlayer();
private:
    UFUNCTION(BlueprintCallable)
    void OnFadeOutHandler(float Duration);
    
};

