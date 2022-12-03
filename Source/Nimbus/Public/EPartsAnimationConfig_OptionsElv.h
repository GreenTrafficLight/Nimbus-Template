#pragma once
#include "CoreMinimal.h"
#include "EPartsAnimationConfig_OptionsElv.generated.h"

UENUM(BlueprintType)
enum class EPartsAnimationConfig_OptionsElv : uint8 {
    ANIM_ELV_NONE,
    ANIM_ELV_ALR,
    ANIM_ELV_RUD,
    ANIM_ELV_ALRRUD,
    ANIM_ELV_ABK,
    ANIM_ELV_MAX UMETA(Hidden),
};

