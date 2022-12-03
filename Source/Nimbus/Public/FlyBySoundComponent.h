#pragma once
#include "CoreMinimal.h"
#include "BasePassSoundComponent.h"
#include "FlyBySoundComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UFlyBySoundComponent : public UBasePassSoundComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RelativeSpeedSettingsDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastPlayedEventName;
    
public:
    UFlyBySoundComponent();
    UFUNCTION(BlueprintCallable)
    void OnRestored();
    
};

