#pragma once
#include "CoreMinimal.h"
#include "EMiniMapType.generated.h"

UENUM(BlueprintType)
enum class EMiniMapType : uint8 {
    MMRADAR,
    MMREGION,
    MMFULL,
};

