#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_MultiplayerEvent.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_MultiplayerEvent : uint8 {
    None,
    StartIntro,
    StartBattle,
    Result,
    Royal_RankUp,
    Royal_RankUpToFirstPlace,
    Royal_RankUpToFirstPlaceTie,
    Royal_RankDown,
    Royal_RankDownToFirstPlaceTie,
    Royal_RankDownToBooby,
    Team_Superior,
    Team_Inferior,
    Team_FirstScore,
    EMissionCondition_MAX UMETA(Hidden),
};

