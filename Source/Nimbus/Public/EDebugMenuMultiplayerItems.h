#pragma once
#include "CoreMinimal.h"
#include "EDebugMenuMultiplayerItems.generated.h"

UENUM(BlueprintType)
enum class EDebugMenuMultiplayerItems : uint8 {
    MultiplayerDebugMode,
    ForceSortie,
    ForceCompleteMission,
    SetRemainingMissionTime,
    SendAircraftSetsToAllClients,
    SetLocalRankExp,
    CheckLocalRankInfo,
    ApplyMutiplayerParametersToCampaign,
    DisableAutoKick,
    ChangeAssistAngleForRemotePlayer,
    MAX,
};

