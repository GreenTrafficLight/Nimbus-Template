#pragma once
#include "CoreMinimal.h"
#include "EWeaponSpecialBehaviorType.generated.h"

UENUM(BlueprintType)
enum class EWeaponSpecialBehaviorType : uint8 {
    None,
    EML_AlwaysHitToPlayer,
    EML_NeverHitToPlayer_Near,
    EML_NeverHitToPlayer_Middle,
    EML_NeverHitToPlayer_Far,
    MSL_AlwaysHit,
    EML_NeverHitToPlayer_Frontward,
    EML_NeverHitToPlayer_Frontward_DeviationShooting,
    EML_NeverHitToPlayer_DeviationShooting,
    EML_AlwaysHitToPlayer_DeviationShooting,
};

