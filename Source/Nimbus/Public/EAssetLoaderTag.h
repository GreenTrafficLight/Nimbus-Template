#pragma once
#include "CoreMinimal.h"
#include "EAssetLoaderTag.generated.h"

UENUM(BlueprintType)
enum class EAssetLoaderTag : uint8 {
    None,
    Aircraft,
    Emblem,
    SetEmblem,
};

