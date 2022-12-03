#pragma once
#include "CoreMinimal.h"
#include "EMultiHudIgcType.generated.h"

UENUM(BlueprintType)
enum class EMultiHudIgcType : uint8 {
    None,
    BRIntro,
    BRIntroOther,
    BRMVP,
    BREnding,
    TDMVP,
    TDIntroAlpha,
    TDIntroBravo,
    TDWinner,
    Killer,
};

