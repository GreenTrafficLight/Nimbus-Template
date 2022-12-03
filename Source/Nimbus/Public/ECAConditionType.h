#pragma once
#include "CoreMinimal.h"
#include "ECAConditionType.generated.h"

UENUM(BlueprintType)
enum class ECAConditionType : uint8 {
    Unassigned,
    Always,
    CompleteLevel,
    ObserveAnniversary,
    GainStats,
    EarnScore,
    DestroyTarget,
    CollectItem,
    PurchasePackage,
    PlayLevel,
    ActivateCAEntry,
    MissionSpecific,
    PerformanceEvaluation,
    Null = 0xFE,
};

