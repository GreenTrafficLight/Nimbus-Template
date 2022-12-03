#pragma once
#include "CoreMinimal.h"
#include "ECAActionType.generated.h"

UENUM(BlueprintType)
enum class ECAActionType : uint8 {
    Unassigned,
    UnlockLevel,
    UnlockAchievement,
    UnlockMedal,
    UnlockEmblem,
    UnlockSkin,
    UnlockNickname,
    UnlockAircraft,
    UnlockAircraftWeapon,
    UnlockAircraftPart,
    UnlockAircraftTreeNode,
    UnlockFeature,
    ResetParentEntry = 0xC8,
};

