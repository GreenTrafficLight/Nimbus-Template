#pragma once
#include "CoreMinimal.h"
#include "EAircraftTreeNodeClass.generated.h"

UENUM(BlueprintType)
enum class EAircraftTreeNodeClass : uint8 {
    Plane,
    Part,
    Lock,
    Weapon,
};

