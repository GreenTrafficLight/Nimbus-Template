#pragma once
#include "CoreMinimal.h"
#include "ESceneType.generated.h"

UENUM(BlueprintType)
enum class ESceneType : uint8 {
    Scene,
    News,
    Credits,
    SpSceneBegin,
    SpSceneEnd,
};

