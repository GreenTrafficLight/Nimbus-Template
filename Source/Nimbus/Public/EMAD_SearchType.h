#pragma once
#include "CoreMinimal.h"
#include "EMAD_SearchType.generated.h"

UENUM(BlueprintType)
enum class EMAD_SearchType : uint8 {
    None,
    DetectedSubmarine,
    Ping,
    MAX,
};

