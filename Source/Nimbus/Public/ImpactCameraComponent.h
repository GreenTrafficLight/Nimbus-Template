#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Camera/CameraComponent.h"
#include "ImpactCameraComponent.generated.h"

class AActor;
class UImpactCameraParameter;
class UCameraAnimInst;
class UCameraViewComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UImpactCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UImpactCameraParameter> CameraParameterClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UImpactCameraParameter* CameraParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnimInst* AnimInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DummyCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraViewComponent* CameraViewComponent_Owner;
    
public:
    UImpactCameraComponent();
};

