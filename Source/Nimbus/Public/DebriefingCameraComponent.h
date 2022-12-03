#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "DebriefingCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UDebriefingCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UDebriefingCameraComponent();
};

