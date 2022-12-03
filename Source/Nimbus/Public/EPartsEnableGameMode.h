#pragma once
#include "CoreMinimal.h"
#include "EPartsEnableGameMode.generated.h"

UENUM(BlueprintType)
enum class EPartsEnableGameMode : uint8 {
    AllGameModeEnable,
    OnlyMultiPlayEnable,
    OnlyCampaignModeEnable,
};

