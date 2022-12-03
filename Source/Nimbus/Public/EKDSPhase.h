#pragma once
#include "CoreMinimal.h"
#include "EKDSPhase.generated.h"

UENUM(BlueprintType)
enum class EKDSPhase : uint8 {
    None,
    FrontEntrance,
    FrontLead,
    BackEntrance,
    BackChase,
};

