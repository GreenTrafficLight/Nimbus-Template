#pragma once
#include "CoreMinimal.h"
#include "EMenuSequenceGroup.generated.h"

UENUM(BlueprintType)
enum class EMenuSequenceGroup : uint8 {
    MenuGroupBoot,
    MenuGroupInitialSetup,
    MenuGroupMain,
    MenuGroupCampaign,
    MenuGroupMultiplay,
    MenuGroupVR,
    MenuGroupHangar,
    MenuGroupMission,
};

