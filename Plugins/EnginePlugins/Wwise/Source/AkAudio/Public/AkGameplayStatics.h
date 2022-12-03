#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PanningRule.h"
#include "AkChannelConfiguration.h"
#include "Engine/EngineTypes.h"
#include "AkGameplayStatics.generated.h"

class UAkComponent;
class UAkAudioBank;
class AActor;
class UObject;
class UAkAuxBus;
class UAkAudioEvent;
class USceneComponent;

UCLASS(Blueprintable)
class AKAUDIO_API UAkGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAkGameplayStatics();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void UseEarlyReflections(AActor* Actor, UAkAuxBus* AuxBus, bool Left, bool Right, bool Floor, bool Ceiling, bool Back, bool Front, bool SpotReflectors, const FString& AuxBusName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void UnloadBankByName(const FString& BankName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void UnloadBank(UAkAudioBank* Bank, const FString& BankName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopProfilerCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopOutputCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void StopAllAmbientSounds(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopAll();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StartProfilerCapture(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StartOutputCapture(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void StartAllAmbientSounds(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAkComponent* SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* akevent, UAkAuxBus* EarlyReflectionsBus, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, const FString& EarlyReflectionsBusName, bool AutoDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetSwitch(FName SwitchGroup, FName SwitchState, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetState(FName StateGroup, FName State);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetRTPCValue(FName RTPC, float Value, int32 InterpolationTimeMs, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SetPanningRule(PanningRule PanRule);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetOutputBusVolume(float BusVolume, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SetOcclusionScalingFactor(float ScalingFactor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SetBusConfig(const FString& BusName, AkChannelConfiguration ChannelConfiguration);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PostTrigger(FName Trigger, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PostEventByName(const FString& EventName, AActor* Actor, bool bStopWhenAttachedToDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostEventAttached(UAkAudioEvent* akevent, AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, const FString& EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void PostEventAtLocationByName(const FString& EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static int32 PostEventAtLocation(UAkAudioEvent* akevent, FVector Location, FRotator Orientation, const FString& EventName, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostEvent(UAkAudioEvent* akevent, AActor* Actor, bool bStopWhenAttachedToDestroyed, const FString& EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadInitBank();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadBanks(const TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadBankByName(const FString& BankName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadBank(UAkAudioBank* Bank, const FString& BankName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable)
    static float GetOcclusionScalingFactor();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static void GetAudioSpectrum(TArray<float>& arry);
    
    UFUNCTION(BlueprintCallable)
    static UAkComponent* GetAkComponent(USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ClearBanks();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void AddOutputCaptureMarker(const FString& MarkerText);
    
};

