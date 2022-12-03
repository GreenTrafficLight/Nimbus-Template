#pragma once
#include "CoreMinimal.h"
#include "EGuideIDs.generated.h"

UENUM(BlueprintType)
enum class EGuideIDs : uint8 {
    None,
    AircraftSet,
    AircraftTree,
    AircraftParts,
    Multi,
    MultiAircraftSet,
    MultiRoomCreate,
    MultiRoom,
    Num,
};

