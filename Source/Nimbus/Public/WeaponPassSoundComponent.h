#pragma once
#include "CoreMinimal.h"
#include "BasePassSoundComponent.h"
#include "WeaponPassSoundComponent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UWeaponPassSoundComponent : public UBasePassSoundComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PassSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PassSoundSwitch;
    
public:
    UWeaponPassSoundComponent();
};

