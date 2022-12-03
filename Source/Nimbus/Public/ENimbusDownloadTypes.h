#pragma once
#include "CoreMinimal.h"
#include "ENimbusDownloadTypes.generated.h"

UENUM(BlueprintType)
enum class ENimbusDownloadTypes : uint8 {
    INITIAL_CHUNK,
    ALL_OF_CHUNKS,
};

