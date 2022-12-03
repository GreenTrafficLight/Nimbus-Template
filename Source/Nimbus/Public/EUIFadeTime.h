#pragma once
#include "CoreMinimal.h"
#include "EUIFadeTime.generated.h"

UENUM(BlueprintType)
enum class EUIFadeTime : uint8 {
    None,
    Skip,
    Copyright,
    Menu,
    Mission,
    HangarSelect,
    HangarSortie,
    MenuLong,
    Num,
};

