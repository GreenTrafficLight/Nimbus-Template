#pragma once
#include "CoreMinimal.h"
#include "EOngoingState.generated.h"

UENUM(BlueprintType)
enum class EOngoingState : uint8 {
    Lobby,
    InProgress,
    Ending,
};

