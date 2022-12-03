#pragma once
#include "CoreMinimal.h"
#include "EPartsAnimationConfig_OptionsLipRot.generated.h"

UENUM(BlueprintType)
enum class EPartsAnimationConfig_OptionsLipRot : uint8 {
    ANIM_ETC_NONE,
    ANIM_ETC_LIP,
    ANIM_ETC_ROT,
    ANIM_ETC_MAX UMETA(Hidden),
};

