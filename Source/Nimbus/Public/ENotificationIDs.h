#pragma once
#include "CoreMinimal.h"
#include "ENotificationIDs.generated.h"

UENUM(BlueprintType)
enum class ENotificationIDs : uint8 {
    None,
    AircraftTree,
    Parts,
    NewAircraft1,
    NewAircraft2,
    NewParts,
    UnlockTreeNode1,
    Skin,
    Emblem,
    AceCampaign,
    AceVR,
    AirShowVR,
    AddDLC,
    AddRule,
    AddStage,
    AddBoth,
    Num,
};

