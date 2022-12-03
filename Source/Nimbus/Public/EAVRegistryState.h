#pragma once
#include "CoreMinimal.h"
#include "EAVRegistryState.generated.h"

UENUM(BlueprintType)
enum class EAVRegistryState : uint8 {
    AVR_Player,
    AVR_Weapon,
    AVR_AIPlane,
    AVR_Heli,
    AVR_Vehicle,
    AVR_Ground,
    AVR_Vessel,
    AVR_MapObj,
    AVR_Root,
    AVR_MAX UMETA(Hidden),
};

