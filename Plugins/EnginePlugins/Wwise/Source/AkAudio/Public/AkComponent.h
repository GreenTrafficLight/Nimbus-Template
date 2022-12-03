#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Engine/EngineTypes.h"
#include "AkComponent.generated.h"

class UAkComponent;
class UAkAuxBus;
class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* EarlyReflectionAuxBus;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EarlyReflectionAuxBusName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EarlyReflectionOrder;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EarlyReflectionBusSendGain;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EarlyReflectionMaxPathLength;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> OcclusionCollisionChannel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnableSpotReflectors: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DrawFirstOrderReflections: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DrawSecondOrderReflections: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DrawHigherOrderReflections: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopWhenOwnerDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttenuationScalingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UAkComponent();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void UseReverbVolumes(bool inUseReverbVolumes);
    
    UFUNCTION(BlueprintCallable)
    void UseEarlyReflections(UAkAuxBus* AuxBus, bool Left, bool Right, bool Floor, bool Ceiling, bool Back, bool Front, bool SpotReflectors, const FString& AuxBusName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetSwitch(const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetRTPCValue(const FString& RTPC, float Value, int32 InterpolationTimeMs);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetOutputBusVolume(float BusVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetListeners(const TArray<UAkComponent*>& Listeners);
    
    UFUNCTION(BlueprintCallable)
    void SetEarlyReflectionOrder(int32 NewEarlyReflectionOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetAttenuationScalingFactor(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PostTrigger(const FString& Trigger);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 PostAssociatedAkEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 PostAkEventByName(const FString& in_EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 PostAkEvent(UAkAudioEvent* akevent, const FString& in_EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    float GetAttenuationRadius() const;
    
};

