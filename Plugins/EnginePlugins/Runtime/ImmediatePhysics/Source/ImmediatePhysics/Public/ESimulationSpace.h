#pragma once
#include "CoreMinimal.h"
#include "ESimulationSpace.generated.h"

UENUM()
enum class ESimulationSpace : int32 {
    ComponentSpace,
    WorldSpace,
    RootBoneSpace,
};

