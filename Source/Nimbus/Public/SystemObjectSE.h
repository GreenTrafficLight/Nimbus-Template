#pragma once
#include "CoreMinimal.h"
#include "SystemObject.h"
#include "SystemObjectSE.generated.h"

class UAkAudioEvent;

UCLASS(Abstract, Blueprintable)
class NIMBUS_API ASystemObjectSE : public ASystemObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundEventToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundEventToStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlay;
    
public:
    ASystemObjectSE();
    UFUNCTION(BlueprintCallable)
    void StopAmbientSound();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void PlayAmbientSound();
    
};

