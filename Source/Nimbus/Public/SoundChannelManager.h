#pragma once
#include "CoreMinimal.h"
#include "SoundChannelType.h"
#include "GameFramework/Actor.h"
#include "AdditionalSoundChannelParams.h"
#include "UObject/NoExportTypes.h"
#include "SoundChannelManager.generated.h"

class ASoundChannelManager;

UCLASS(Blueprintable, NotPlaceable)
class NIMBUS_API ASoundChannelManager : public AActor {
    GENERATED_BODY()
public:
    ASoundChannelManager();
    UFUNCTION(BlueprintCallable)
    void PlaySoundAttached(SoundChannelType Type, const AActor* AttachActor, const FVector& RelativeLocation, FAdditionalSoundChannelParams Params);
    
    UFUNCTION(BlueprintCallable)
    void PlaySoundAtLocationWithSwitch(SoundChannelType Type, const FVector& Location, FAdditionalSoundChannelParams Params, FName SwitchGroup, FName SwitchState);
    
    UFUNCTION(BlueprintCallable)
    void PlaySoundAtLocation(SoundChannelType Type, const FVector& Location, FAdditionalSoundChannelParams Params);
    
    UFUNCTION(BlueprintCallable)
    void OnPreRestartPhaseEvent();
    
    UFUNCTION(BlueprintCallable)
    static ASoundChannelManager* GetSoundChannelManager();
    
};

