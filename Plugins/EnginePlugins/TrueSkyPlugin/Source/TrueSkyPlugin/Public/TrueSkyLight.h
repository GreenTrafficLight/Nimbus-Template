#pragma once
#include "CoreMinimal.h"
#include "Engine/Light.h"
#include "TrueSkyLight.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ATrueSkyLight : public ALight {
    GENERATED_BODY()
public:
    ATrueSkyLight();
};

