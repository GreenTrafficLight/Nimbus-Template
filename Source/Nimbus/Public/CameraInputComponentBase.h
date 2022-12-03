#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CameraInputComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UCameraInputComponentBase : public USceneComponent {
    GENERATED_BODY()
public:
    UCameraInputComponentBase();
};

