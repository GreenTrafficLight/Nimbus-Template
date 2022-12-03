#pragma once
#include "CoreMinimal.h"
#include "EMiniGameType.generated.h"

UENUM(BlueprintType)
enum class EMiniGameType : uint8 {
    Takeoff,
    Landing,
    AerialRefuelling,
    Supply,
};

