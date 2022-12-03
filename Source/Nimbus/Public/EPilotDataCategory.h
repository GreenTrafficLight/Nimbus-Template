#pragma once
#include "CoreMinimal.h"
#include "EPilotDataCategory.generated.h"

UENUM(BlueprintType)
enum class EPilotDataCategory : uint8 {
    Ally,
    Rival,
    Named,
};

