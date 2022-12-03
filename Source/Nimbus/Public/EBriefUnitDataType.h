#pragma once
#include "CoreMinimal.h"
#include "EBriefUnitDataType.generated.h"

UENUM(BlueprintType)
enum class EBriefUnitDataType : uint8 {
    Air,
    Ground,
    Naval,
};

