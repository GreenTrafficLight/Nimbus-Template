#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "NimbusGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class NIMBUS_API UNimbusGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UNimbusGameEngine();
};

