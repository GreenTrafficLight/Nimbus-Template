#pragma once
#include "CoreMinimal.h"
#include "EMenuSpaceType.generated.h"

UENUM(BlueprintType)
enum class EMenuSpaceType : uint8 {
    MenuSpaceNone,
    MenuSpaceNormal,
    MenuSpaceLayer,
    MenuSpaceVR,
};

