#pragma once
#include "CoreMinimal.h"
#include "EAmbientSoundState.generated.h"

UENUM(BlueprintType)
enum class EAmbientSoundState : uint8 {
    Playing,
    NotPlaying,
    Paused,
};

