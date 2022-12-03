#pragma once
#include "CoreMinimal.h"
#include "ThirdPersonCameraComponent.h"
#include "ReplayThirdPersonCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UReplayThirdPersonCameraComponent : public UThirdPersonCameraComponent {
    GENERATED_BODY()
public:
    UReplayThirdPersonCameraComponent();
};

