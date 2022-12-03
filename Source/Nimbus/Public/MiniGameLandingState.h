#pragma once
#include "CoreMinimal.h"
#include "MissionStateBase.h"
#include "EMissionStateMiniGameFailReason.h"
#include "MiniGameLandingState.generated.h"

class UMiniGameHUDManager;
class UMiniGamePlayerManager;
class UNimbusFadeManager;
class UMissionFadeSoundManager;
class UMiniGameMiniMapManager;
class UMiniGameCameraManager;
class UMiniGameTimeManager;
class UMiniGameScriptEventManager;
class APlayerPlane;
class UMiniGameLandingSettings;

UCLASS(Blueprintable)
class UMiniGameLandingState : public UMissionStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSuccessLandingDelegate, float, ElapsedTime);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartLandingPlayableDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartLandingDelegate, bool, bIsRetry);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSkipDelegate, float, FadeOutDuration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinishLandingDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFailLandingDelegate, EMissionStateMiniGameFailReason, Reason);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusFadeManager* FadeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionFadeSoundManager* FadeSoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameCameraManager* CameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGamePlayerManager* PlayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameMiniMapManager* MiniMapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameHUDManager* HUDManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameTimeManager* TimeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameScriptEventManager* ScriptEventManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameLandingSettings* Settings;
    
public:
    UMiniGameLandingState();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerEndLandingHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeOutHandler(float Duration);
    
};

