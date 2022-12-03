#pragma once
#include "CoreMinimal.h"
#include "ESeekerSoundType.generated.h"

UENUM(BlueprintType)
enum class ESeekerSoundType : uint8 {
    Main,
    Special,
    MainLockon,
    SpecialLockon,
};

