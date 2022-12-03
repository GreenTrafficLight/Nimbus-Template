#pragma once
#include "CoreMinimal.h"
#include "EMFDColorType.generated.h"

UENUM(BlueprintType)
enum class EMFDColorType : uint8 {
    None,
    Default,
    Alert,
};

