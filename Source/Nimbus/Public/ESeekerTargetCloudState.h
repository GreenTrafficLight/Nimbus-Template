#pragma once
#include "CoreMinimal.h"
#include "ESeekerTargetCloudState.generated.h"

UENUM(BlueprintType)
enum class ESeekerTargetCloudState : uint8 {
    NoTarget,
    NotInCloud,
    EnteredCloud,
    InCloud,
};

