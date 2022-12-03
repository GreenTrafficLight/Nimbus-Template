#pragma once
#include "CoreMinimal.h"
#include "CameraInputComponent.h"
#include "CockpitCameraInputComponent.generated.h"

class UFirstPersonCameraInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UCockpitCameraInputComponent : public UCameraInputComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFirstPersonCameraInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFirstPersonCameraInputComponent* FirstPersonCameraInput;
    
public:
    UCockpitCameraInputComponent();
};

