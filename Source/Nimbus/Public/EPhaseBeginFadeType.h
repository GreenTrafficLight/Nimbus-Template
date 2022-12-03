#pragma once
#include "CoreMinimal.h"
#include "EPhaseBeginFadeType.generated.h"

UENUM(BlueprintType)
enum class EPhaseBeginFadeType : uint8 {
    FadeIn,
    FadeInImmediately,
    KeepFadeOut,
};

