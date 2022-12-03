#pragma once
#include "CoreMinimal.h"
#include "EMultiplayerIGCType.generated.h"

UENUM(BlueprintType)
enum class EMultiplayerIGCType : uint8 {
    None,
    BRIntroPlayerLong,
    BRIntroPlayerShort,
    BRIntroLong,
    BRIntroShort,
    TDMIntro,
    BRMVP,
    BRNoMVP,
    BRRanking,
    BRNoWinner,
    TDMWinner,
    TDMDraw,
    TDMMVP,
    TDMNoMVP,
    Killer,
    Respawn,
};

