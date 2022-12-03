#pragma once
#include "CoreMinimal.h"
#include "EAIDefenseRange.generated.h"

UENUM(BlueprintType)
enum class EAIDefenseRange : uint8 {
    Near,
    Mid,
    Far,
};

