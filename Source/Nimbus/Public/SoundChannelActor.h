#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AdditionalSoundChannelParams.h"
#include "SoundChannelActor.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API ASoundChannelActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* AttachActor;
    
public:
    ASoundChannelActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAdditionalSoundChannelParams MakeAdditionalSoundParams(float InCloudDensity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPlaying() const;
    
};

