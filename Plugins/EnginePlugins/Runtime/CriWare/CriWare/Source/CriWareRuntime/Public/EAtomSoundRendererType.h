#pragma once
#include "CoreMinimal.h"
#include "EAtomSoundRendererType.generated.h"

UENUM(BlueprintType)
namespace EAtomSoundRendererType {
    enum Type {
        Any,
        Native,
        Asr,
        Hardware2 = 0x5,
        Hardware3 = 0x9,
        Hardware4 = 0xD,
        Pad = 0xFF,
    };
}

