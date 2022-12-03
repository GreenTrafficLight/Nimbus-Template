#pragma once
#include "CoreMinimal.h"
#include "NimbusGameObjectComponent.h"
#include "ECameraType.h"
#include "BasePassSoundComponent.generated.h"

class AActor;
class UDataTable;
class AGameObject;
class AAIGameObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UBasePassSoundComponent : public UNimbusGameObjectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DistanceSettingsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* OwnerGameObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIGameObject* OwnerAIGameObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
public:
    UBasePassSoundComponent();
protected:
    UFUNCTION()
    void OnReplayCameraChanged(uint8 Type);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraViewChanged(ECameraType Type);
    
};

