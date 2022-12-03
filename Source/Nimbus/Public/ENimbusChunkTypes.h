#pragma once
#include "CoreMinimal.h"
#include "ENimbusChunkTypes.generated.h"

UENUM(BlueprintType)
enum class ENimbusChunkTypes : uint8 {
    INITIAL_CHUNK,
    MISSON_04_06,
    MISSON_07_10,
    MISSON_11_14,
    MISSON_15_20,
    MISSON_MULTI_VR,
    NIMBUS_CHUNK_NUM,
};

