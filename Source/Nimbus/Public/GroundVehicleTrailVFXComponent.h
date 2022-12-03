#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "GroundVehicleTrailVFXComponent.generated.h"

class AGameObject;
class UParticleSystem;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGroundVehicleTrailVFXComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* OwingGameObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Template_Sand;
    
public:
    UGroundVehicleTrailVFXComponent();
    UFUNCTION(BlueprintCallable)
    void OnRestored();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerVisibilityChanged(bool bVisibility);
    
};

