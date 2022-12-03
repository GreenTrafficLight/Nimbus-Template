#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ENimbusSoundOutputMode.h"
#include "UObject/NoExportTypes.h"
#include "ENimbusSoundType.h"
#include "NimbusSoundManager.generated.h"

class AActor;
class UAkAudioBank;
class UAkAudioEvent;

UCLASS(Blueprintable, NotPlaceable)
class NIMBUS_API UNimbusSoundManager : public UObject {
    GENERATED_BODY()
public:
    UNimbusSoundManager();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void UnloadBank(UAkAudioBank* Bank, const FString& BankName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopAll();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetSwitch(FName SwitchGroup, FName SwitchState, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetState(FName StateGroup, FName State);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetRTPCValue(FName RTPC, float Value, int32 InterpolationTimeMs, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetOutputMode(ENimbusSoundOutputMode OutputMode);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static int32 PostEventAtLocation(UAkAudioEvent* akevent, FVector Location, FRotator Orientation, const FString& EventName, UObject* WorldContextObject, ENimbusSoundType SoundType);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostEvent(UAkAudioEvent* akevent, AActor* Actor, bool bStopWhenAttachedToDestroyed, const FString& EventName, ENimbusSoundType SoundType);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadInitBank();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadBanks(const TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadBank(UAkAudioBank* Bank, const FString& BankName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool LoadAllFilePackages();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static ENimbusSoundOutputMode GetOutputMode();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ClearBanks();
    
};

