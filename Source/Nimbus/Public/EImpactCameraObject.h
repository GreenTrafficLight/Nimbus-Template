#pragma once
#include "CoreMinimal.h"
#include "EImpactCameraObject.generated.h"

UENUM(BlueprintType)
enum class EImpactCameraObject : uint8 {
    FocusObject1,
    FocusObject2,
    Player,
    FocusObject1_Owner,
    FocusObject2_Owner,
    FocusObjectConnect,
};

