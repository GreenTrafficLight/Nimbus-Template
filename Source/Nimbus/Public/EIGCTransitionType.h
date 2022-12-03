#pragma once
#include "CoreMinimal.h"
#include "EIGCTransitionType.generated.h"

UENUM(BlueprintType)
enum class EIGCTransitionType : uint8 {
    None,
    FadeOut,
    MS04Special,
};

