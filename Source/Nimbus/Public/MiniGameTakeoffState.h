#pragma once
#include "CoreMinimal.h"
#include "MissionStateBase.h"
#include "EMissionStateMiniGameFailReason.h"
#include "MiniGameTakeoffState.generated.h"

class UMiniGameHUDManager;
class UMiniGamePlayerManager;
class UNimbusFadeManager;
class UMissionFadeSoundManager;
class UMiniGameMiniMapManager;
class UMiniGameCameraManager;
class UMiniGameTimeManager;
class UMiniGameScriptEventManager;
class APlayerPlane;
class UMiniGameTakeoffSettings;

UCLASS(Blueprintable)
class UMiniGameTakeoffState : public UMissionStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSuccessTakeoffDelegate, float, ElapsedTime);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartTakeoffPlayableDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartTakeoffDelegate, bool, bIsRetry);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSkipDelegate, float, FadeOutDuration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinishTakeoffDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFailTakeoffDelegate, EMissionStateMiniGameFailReason, Reason);
    
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
    UMiniGameTakeoffSettings* Settings;
    
public:
    UMiniGameTakeoffState();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerEndTakeoffHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerBeginCatapultTakeoffHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeOutHandler(float Duration);
    
};

