#pragma once
#include "CoreMinimal.h"
#include "EPartsAnimationConfig_OptionsAlr.generated.h"

UENUM(BlueprintType)
enum class EPartsAnimationConfig_OptionsAlr : uint8 {
    ANIM_ALR_NONE,
    ANIM_ALR_TEF,
    ANIM_ALR_ELV,
    ANIM_ALRF_ABK,
    ANIM_ALRE_ABK,
    ANIM_MAX UMETA(Hidden),
};

