#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TrueSkyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTrueSkyComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UTrueSkyComponent();
};

