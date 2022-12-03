#pragma once
#include "CoreMinimal.h"
#include "MiniGameStartEventDelegateDelegate.h"
#include "MiniGameCompleteEventDelegateDelegate.h"
#include "EMiniGameType.h"
#include "GameFramework/Actor.h"
#include "EMissionStateMiniGameFailReason.h"
#include "MiniGameRetryEventDelegateDelegate.h"
#include "MinigameRandomStartPosParam.h"
#include "MinigameTimeBonus.h"
#include "MiniGamePhase.generated.h"

class UMiniGameScriptEventManager;
class APlayerPlane;
class AVolume;
class UMiniGamePlayerManager;
class AAIPlane;
class UAkAudioEvent;
class UCameraAnim;
class UNimbusFadeManager;
class UMiniGameLandingSettings;
class UMissionSetupFrameManager;
class UMiniGameMiniMapManager;
class UMissionFadeSoundManager;
class UMissionTransitionStateFactory;
class UMissionCooldownStateDeadFactory;
class UMiniGameTakeoffSettings;
class UTexture2D;
class UMissionStateManager;
class UMiniGameAerialRefuelingSettings;
class UMiniGameCameraManager;
class UMiniGameHUDManager;
class UMiniGameTimeManager;

UCLASS(Blueprintable)
class NIMBUS_API AMiniGamePhase : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSkipMiniGamePhaseDelegate, float, FadeOutDuration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreStartMiniGamePhaseDelegate, bool, bIsRetry);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniGameStartEventDelegate MiniGameStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniGameCompleteEventDelegate MiniGameCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniGameRetryEventDelegate MiniGameRetryEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NavyTakeoffStartMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* NavyTakeoffRunawayVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AirTakeoffStartMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* AirTakeoffRunawayVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JudgementHeightMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CatapultTakeoffEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TakeoffSuccessfulDemoHeightMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NavyLadingStartMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> NavyLandingVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* NavyAssistLandingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* NavyMiniMapLandingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AirLadingStartMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> AirLandingVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* AirAssistLandingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* AirMiniMapLandingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameRandomStartPosParam LandingRandomRange_Easy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameRandomStartPosParam LandingRandomRange_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameRandomStartPosParam LandingRandomRange_Hard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameRandomStartPosParam LandingRandomRange_Ace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameRandomStartPosParam LandingRandomRange_Free;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AerialRefuellingStartMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameRandomStartPosParam AerialRefuelingRandomRange_Easy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameRandomStartPosParam AerialRefuelingRandomRange_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameRandomStartPosParam AerialRefuelingRandomRange_Hard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameRandomStartPosParam AerialRefuelingRandomRange_Ace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameRandomStartPosParam AerialRefuelingRandomRange_Free;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIPlane* RefuelingAircraft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefuelJudgeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefuelJudgeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefuelInputBrakeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefuelInputLeftYawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefuelInputRightYawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefuelInputRollRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefuelInputPitchRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefuelInputThrottleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustForMS03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Refuel_AdjustJudgeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Refuel_AdjustMinStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Refuel_AdjustMaxStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Refuel_DecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Refuel_RollLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Refuel_RollResist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Refuel_RollDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Refuel_YawLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Refuel_YawResist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Refuel_YawDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Refuel_PitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Refuel_PitchResist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Refuel_PitchDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupplyMiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiniGameType MiniGameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCarrierTakeoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCarrierLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MiniGameVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NavyMiniGameVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPauseBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MiniGameBGMPlayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MiniGameBGMStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* BeginTakeoffCameraAnimeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* BeginTakeoffCameraAnimeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* BeginTakeoffCameraAnimeC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* BeginTakeoffCameraAnimeA_Navy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* BeginTakeoffCameraAnimeB_Navy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* BeginTakeoffCameraAnimeC_Navy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* EndTakeoffCameraAnime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* BeginLandingCameraAnime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* BeginAerialRefuelingCameraAnime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* EndAerialRefuelingCameraAnime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* WeaponChangeCameraAnime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TakeoffTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AerialRefuelingTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMinigameTimeBonus> TimeBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetryTimePenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFormationLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_MotionBlurAmount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_MotionBlurMax: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_MotionBlurPerObjectSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MotionBlurAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MotionBlurMax;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MotionBlurSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AmbientSoundEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AmbientSoundEventNameForCarrierBasedPlane;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusFadeManager* FadeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionSetupFrameManager* SetupFrameManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionFadeSoundManager* FadeSoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionTransitionStateFactory* TransitionStateFactory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionCooldownStateDeadFactory* DeadStateFactory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameTakeoffSettings* TakeoffSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameLandingSettings* LandingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameAerialRefuelingSettings* AerialRefuelingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameCameraManager* CameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGamePlayerManager* PlayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameMiniMapManager* MiniMapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameScriptEventManager* ScriptEventManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameHUDManager* HUDManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMiniGameTimeManager* TimeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionStateManager* StateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* EnlargedMiniMapBackgroundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* BattleMiniMapBackgroundTexture;
    
public:
    AMiniGamePhase();
private:
    UFUNCTION(BlueprintCallable)
    void OnSuccessTakeoffHandler(float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    void OnSuccessLandingHandler(float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    void OnSuccessAerialRefuelingHandler(float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    void OnStartTakeoffHandler(bool bIsRetry);
    
    UFUNCTION(BlueprintCallable)
    void OnStartSupplyMenuHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnStartPlayableTakeoffHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnStartPlayableLandingHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnStartPlayableAerialRefuelingHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnStartLandingHandler(bool bIsRetry);
    
    UFUNCTION(BlueprintCallable)
    void OnStartAerialRefuelingProbeStartHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnStartAerialRefuelingProbeEndHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnStartAerialRefuelingHandler(bool bIsRetry);
    
    UFUNCTION(BlueprintCallable)
    void OnSkipTakeoffHandler(float FadeOutDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnSkipLandingHandler(float FadeOutDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnSkipAerialRefuelingHandler(float FadeOutDuration);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMiniGameTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMiniGameStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMiniGameSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMiniGameComplete();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishTakeoffHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishLandingHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishdSupplyMenuHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishAerialRefuelingHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnFailedMiniGameHandler(EMissionStateMiniGameFailReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnCooldownStartTimeOutHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnCooldownStartSuccessfulHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnCooldownStartOutOfZoneHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnCooldownStartDeadHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnCooldownFinishedSuccessfulHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnCooldownFinishedFailedHandler();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCloseSupplyMenu();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCheckInterruptStateHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnActorEndOverlapTakeoffRunwayHandler(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEndOverlapLandingRunwayHandler(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapTakeoffRunwayHandler(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapLandingRunwayHandler(AActor* OtherActor);
    
};

