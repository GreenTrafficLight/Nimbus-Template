#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CameraFocusTargetComponent.generated.h"

class APlayerPlane;
class UTargetSelectionComponent;
class AGameObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UCameraFocusTargetComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTargetSelectionComponent* TargetSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameObject* FocusTarget;
    
public:
    UCameraFocusTargetComponent();
};

