#pragma once
#include "CoreMinimal.h"
#include "EMultiSessionMode.generated.h"

UENUM(BlueprintType)
enum class EMultiSessionMode : uint8 {
    Disabled,
    Lobby,
    SortieSelect,
    Transition,
    InGame,
};

