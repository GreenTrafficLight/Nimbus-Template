#pragma once
#include "CoreMinimal.h"
#include "EPhysicalMaterialType.generated.h"

UENUM(BlueprintType)
enum class EPhysicalMaterialType : uint8 {
    Default,
    Sea,
    Ground,
    Concrete,
    Glass,
    Ice,
    Boss,
    Metal,
    Air = 0x64,
    DestroyedTarget,
    Intercepted,
};

