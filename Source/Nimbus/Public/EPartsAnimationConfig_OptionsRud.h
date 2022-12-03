#pragma once
#include "CoreMinimal.h"
#include "EPartsAnimationConfig_OptionsRud.generated.h"

UENUM(BlueprintType)
enum class EPartsAnimationConfig_OptionsRud : uint8 {
    ANIM_RUD_NONE,
    ANIM_RUD_ELV,
    ANIM_RUD_ABK,
    ANIM_RUD_ABKREV,
    ANIM_RUD_MAX UMETA(Hidden),
};

