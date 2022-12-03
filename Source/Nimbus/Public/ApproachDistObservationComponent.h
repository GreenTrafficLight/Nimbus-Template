#pragma once
#include "CoreMinimal.h"
#include "NimbusGameObjectComponent.h"
#include "ApproachDistObservationComponent.generated.h"

class AActor;
class AGameObject;
class APlayerPlane;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UApproachDistObservationComponent : public UNimbusGameObjectComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGameObject*> ApproachGameObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ApproachTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerPlane* OwnerPlayer;
    
public:
    UApproachDistObservationComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveApproachGameObject(AGameObject* AddGameObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsApproachGameObjectsAllDead();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingDistanceMeter();
    
    UFUNCTION(BlueprintCallable)
    void AddApproachGameObject(AGameObject* AddGameObject);
    
};

