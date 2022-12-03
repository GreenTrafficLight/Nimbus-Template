#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RadioText.h"
#include "ERadioManagerChannel.h"
#include "RadioGroupIDPostfix.h"
#include "ERadioType.h"
#include "ERadioTension.h"
#include "ENimbusSoundType.h"
#include "RadioManager.generated.h"

class UDataTable;
class UAkAudioEvent;
class ARadioChannelActor;
class AGameObject;

UCLASS(Blueprintable)
class NIMBUS_API ARadioManager : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSubtitleEventDelegate, const FRadioText&, Subtitle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequeueingWaitTimeQueueUpdateEventDelegate, ERadioManagerChannel, Channel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRadioQueueUpdateEventDelegate, ERadioManagerChannel, Channel, int32, Index);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMessageEnd, const FString&, GroupID, const FString&, VoiceID, bool, bGroupEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMessageBegin, const FString&, GroupID, const FString&, VoiceID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEditorVolumeChangeEventDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEditorRadioDataTableUpdateEventDelegate);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSubtitleEventDelegate UpdateSubtitleEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadioQueueUpdateEventDelegate RadioQueueUpdateEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequeueingWaitTimeQueueUpdateEventDelegate RequeueingWaitTimeQueueUpdateEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditorRadioDataTableUpdateEventDelegate EditorRadioDataTableUpdateEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditorVolumeChangeEventDelegate EditorVolumeChangeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMessageBegin OnMessageBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMessageEnd OnMessageEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> RadioDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RadioSpeakerTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OverrideRadioSpeakerTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AutomaticSpeakerIDTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> RadioEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ForceAliveSpeakerIDs;
    
    UPROPERTY(EditAnywhere, Transient)
    ARadioChannelActor* RadioChannels[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowRequestFailedReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideSubtitleOnVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchEnemyRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowRangeRadius;
    
public:
    ARadioManager();
    UFUNCTION(BlueprintCallable)
    static void SetSilentGroupEnabled_S(int32 SilentGroupIndex, bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetRadioTypeEnabled_S(ERadioType RadioType, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetRadioTypeEnabled(ERadioType RadioType, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetRadioSkipEnabled_S(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayByPlayRadioGroupIDPostfixes_S(const TArray<FRadioGroupIDPostfix>& InRadioGroupIDPostfixes);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayByPlayAllowRadius_S(float RadiusInMeters);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceOfflineEnabled_S(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnemyTensionEnabled_S(ERadioTension Tension, bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllyTensionEnabled_S(ERadioTension Tension, bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void ResetPlayCount_S(const FString& RadioGroupID);
    
    UFUNCTION(BlueprintCallable)
    static void ResetPlayByPlayRadioGroupIDPostfixes_S();
    
    UFUNCTION(BlueprintCallable)
    static bool RequestPlayRadioWithKeySpeaker_S(const FString& RadioGroupID, int32& RequestID, bool Condition, const AGameObject* KeySpeaker);
    
    UFUNCTION(BlueprintCallable)
    bool RequestPlayRadioWithKeySpeaker(const FString& RadioGroupID, int32& RequestID, bool Condition, const AGameObject* KeySpeaker);
    
    UFUNCTION(BlueprintCallable)
    static bool RequestPlayRadio_S(const FString& RadioGroupID, int32& RequestID, bool Condition, const FString& KeySpeakerID);
    
    UFUNCTION(BlueprintCallable)
    bool RequestPlayRadio(const FString& RadioGroupID, int32& RequestID, bool Condition, const FString& KeySpeakerID);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceRadioSpeakerName_S(const FString& SpeakerID, const FString& ReplaceSpeakerID);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceEnvseID_S(const FString& EnvseID, const FString& ReplaceEnvseID);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveRadioRequest_S(const FString& RadioGroupID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRadioRequest(const FString& RadioGroupID);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAllRadioRequestAndRemainingRadio_S();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAllRadioRequest_S();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllRadioRequest();
    
    UFUNCTION(BlueprintCallable)
    static void PushRequeueingWait_S(const FString& RadioGroupID, float Time, bool bShrink);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPreStopBusEvent(ENimbusSoundType BusType);
    
    UFUNCTION(BlueprintCallable)
    void OnPreStartMiniGamePhaseEvent(bool bIsRetry);
    
    UFUNCTION(BlueprintCallable)
    void OnPreRestartPhaseEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnPhaseEndEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnIGCEnableEvent(bool bEnabled);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool IsRadioSkipEnabled_S();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChannelPlaying_S(ERadioManagerChannel Channel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChannelPlaying(ERadioManagerChannel Channel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChannelEnabled_S(ERadioManagerChannel Channel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChannelEnabled(ERadioManagerChannel Channel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetRadioGroupIDs() const;
    
    UFUNCTION(BlueprintCallable)
    static void EnableAllRadio_S();
    
    UFUNCTION(BlueprintCallable)
    void EnableAllRadio();
    
    UFUNCTION(BlueprintCallable)
    static void DisableRadioAfterRequest_S(int32 RequestID);
    
    UFUNCTION(BlueprintCallable)
    void DisableRadioAfterRequest(int32 RequestID);
    
    UFUNCTION(BlueprintCallable)
    static void ClearReplacedRadioSpeakerNames_S();
    
    UFUNCTION(BlueprintCallable)
    static void ClearReplacedRadioSpeakerName_S(const FString& SpeakerID);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllReplacedEnvseID_S();
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayByPlayRadioGroupIDPostfix_S(const FString& KeySpeakerID, const FString& RadioGroupIDPostfix);
    
};

