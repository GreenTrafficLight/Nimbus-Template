#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_ObjectSpecificType.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_ObjectSpecificType : uint8 {
    None,
    Player,
    Ally,
    Ally_Aircraft,
    Ally_Ground,
    Enemy,
    Enemy_TGT,
    Enemy_Aircraft,
    Enemy_Ground,
    Enemy_UAV,
    Enemy_AircraftExceptUAV,
    Enemy_GroundObjects,
    Enemy_SeaObjects,
    Enemy_Vehicle,
    Enemy_Tank,
    Enemy_APC,
    Enemy_SAM,
    Enemy_AAGun,
    Enemy_AAA,
    Enemy_Facility,
    Enemy_Ship,
    Enemy_FrigateShip,
    Enemy_Cruiser,
    Enemy_Plane,
    Enemy_Bomber,
    Dummy,
    RadioExceptionObject,
    Multi_Player,
    Multi_Ally_Player,
    Multi_Enemy_Player,
    EMissionCondition_MAX UMETA(Hidden),
};

