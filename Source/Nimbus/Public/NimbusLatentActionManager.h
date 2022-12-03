#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "NimbusLatentActionManager.generated.h"

USTRUCT(BlueprintType)
struct FNimbusLatentActionManager : public FLatentActionManager {
    GENERATED_BODY()
public:
    NIMBUS_API FNimbusLatentActionManager();
};

