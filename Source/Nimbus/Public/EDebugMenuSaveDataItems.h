#pragma once
#include "CoreMinimal.h"
#include "EDebugMenuSaveDataItems.generated.h"

UENUM(BlueprintType)
enum class EDebugMenuSaveDataItems : uint8 {
    ShowStatus,
    UnlockAll,
    UnlockAllWithMaxData,
    UnlockFeatures,
    UnlockAircraftTree,
    UnlockAllAchevements,
    UnlockDLC,
    UnlockAllDLCs,
    CheckAchievement,
    ResetAllAchevements,
    SetRichPresence,
    UnlockEverythingInTheConditionActionSystem,
    UnlockLogOnScreen,
    SetCampaignMRP,
    SetMultiplayerMRP,
    AddCampaignFlightDistance,
    AddCampaignKillCount,
    AddVRFlightDistance,
    AddVRKillCount,
    CompleteCampaign,
    CompleteVRCampaign,
    LockAircraftTree,
    Spacer0,
    LoadSaveData,
    SaveSaveData,
    DeleteSaveData,
    ResetSaveData,
    MAX,
};

