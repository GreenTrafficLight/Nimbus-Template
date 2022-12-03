#pragma once
#include "CoreMinimal.h"
#include "EUIManagerType.generated.h"

UENUM(BlueprintType)
enum class EUIManagerType : uint8 {
    Menu,
    Transition,
    Mission,
    MultiMission,
};

