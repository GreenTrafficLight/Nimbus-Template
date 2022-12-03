#pragma once
#include "CoreMinimal.h"
#include "ESeekerJammingState.generated.h"

UENUM(BlueprintType)
enum class ESeekerJammingState : uint8 {
    NotJammed,
    Jammed,
    JammedAndWavering,
    JammedAndLocking,
};

