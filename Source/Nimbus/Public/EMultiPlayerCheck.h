#pragma once
#include "CoreMinimal.h"
#include "EMultiPlayerCheck.generated.h"

UENUM(BlueprintType)
enum class EMultiPlayerCheck : uint8 {
    None,
    NetworkConnectionCheck,
    ROMVersionCheck,
    OnlineModeRestrictionCheck,
    PlayerMembershipCheck,
    EULACheck,
    LicenseCheck,
    Num,
};

