#pragma once
#include "CoreMinimal.h"
#include "EShareBlockSection.generated.h"

UENUM(BlueprintType)
enum class EShareBlockSection : uint8 {
    None,
    CampaignMission,
    CampaignEndMovie,
    SceneViewerEndMovie = 0x4,
    VrMode = 0x8,
    MultiplayerMode = 0x10,
    PsStore = 0x20,
    DebugTest = 0x80,
};

