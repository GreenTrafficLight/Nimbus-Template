#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RectennaBarrierEffect.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API ARectennaBarrierEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timeline_Ring_Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timeline_BarrierIn_Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timeline_BarrierOut_Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RingRate;
    
    ARectennaBarrierEffect();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRingMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBarrierIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBarrierFade();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBarrierActive();
    
};

