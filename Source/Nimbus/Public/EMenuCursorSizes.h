#pragma once
#include "CoreMinimal.h"
#include "EMenuCursorSizes.generated.h"

UENUM(BlueprintType)
enum class EMenuCursorSizes : uint8 {
    Normal,
    Emblem,
    Aircraft,
    Session,
    Replay,
    Client,
    RadioMessage,
    SortieSelect,
    Num,
};

