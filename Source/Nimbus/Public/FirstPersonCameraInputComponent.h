#pragma once
#include "CoreMinimal.h"
#include "BasePersonCameraInputComponent.h"
#include "FirstPersonCameraInputComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UFirstPersonCameraInputComponent : public UBasePersonCameraInputComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeStartingZoom;
    
public:
    UFirstPersonCameraInputComponent();
};

