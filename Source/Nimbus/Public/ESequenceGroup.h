#pragma once
#include "CoreMinimal.h"
#include "ESequenceGroup.generated.h"

UENUM(BlueprintType)
enum class ESequenceGroup : uint8 {
    Boot,
    FirstSetup,
    Interrupt,
    Main,
    Campaign,
    CampaignAction,
    Multiplay,
    VR,
    Hangar,
    MissionTitle,
    Briefing,
    Debriefing,
    CutScene,
    Unlock,
};

