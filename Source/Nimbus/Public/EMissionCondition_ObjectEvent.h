#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_ObjectEvent.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_ObjectEvent : uint8 {
    None,
    ApproachReturnLine,
    InfluencedByAirCurrent,
    NoLongerInfluencedByAirCurrent,
    EnteredLightningArea,
    ExitedLightningArea,
    StruckByLightning,
    RecoveredFromLightning,
    ObjectTargeted,
    ObjectNoLongerTargeted,
    CapturedBySearchLight,
    OnIdentified,
    AutoDestructed,
    OnDetected,
    CanceledWeaponFiring,
    DisappearOffRadarByStealth,
    RecoveredFromReturnLine,
    EnteredTunnel,
    ExitedTunnel,
    EnteredSpaceElevator,
    ExitedSpaceElevator,
    CanceledIEWSEffect,
    EnterECMArea,
    LeaveECMArea,
    EnterESMArea,
    LeaveESMArea,
    EMissionCondition_MAX UMETA(Hidden),
};

