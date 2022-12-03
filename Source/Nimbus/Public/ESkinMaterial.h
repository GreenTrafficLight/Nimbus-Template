#pragma once
#include "CoreMinimal.h"
#include "ESkinMaterial.generated.h"

UENUM(BlueprintType)
enum class ESkinMaterial : uint8 {
    SkinMaterial_BaseDecal,
    SkinMaterial_Base,
    SkinMaterial_CP,
    SkinMaterial_Damage,
    SkinMaterial_Num,
    SkinMaterial_MAX UMETA(Hidden),
};

