#pragma once
#include "CoreMinimal.h"
#include "ECockpitMaterial.generated.h"

UENUM(BlueprintType)
enum class ECockpitMaterial : uint8 {
    CockpitMaterial_Instr,
    CockpitMaterial_AOA,
    CockpitMaterial_VVI,
    CockpitMaterial_CMP,
    CockpitMaterial_MAX UMETA(Hidden),
};

