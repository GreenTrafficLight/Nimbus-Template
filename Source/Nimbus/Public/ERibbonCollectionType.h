#pragma once
#include "CoreMinimal.h"
#include "ERibbonCollectionType.generated.h"

UENUM(BlueprintType)
enum class ERibbonCollectionType : uint8 {
    ERC_AI_WING_TIP,
    ERC_MISSILE_TRAIL,
    ERC_DEBRIEFING_RIBBON,
    ERC_COUNT,
    ERC_MAX UMETA(Hidden),
};

