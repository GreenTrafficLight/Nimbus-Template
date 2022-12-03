#pragma once
#include "CoreMinimal.h"
#include "ESequenceMenuItemCheckType.generated.h"

UENUM(BlueprintType)
enum class ESequenceMenuItemCheckType : uint8 {
    None,
    CheckPlatformPS4,
    CheckPlatformOne,
    CheckPlatformStm,
    CheckShowNew,
    CheckShowSpNew,
    CheckShowContinue,
    CheckShowFreemisson,
    CheckShowMusicPlayer,
    CheckOptionVoiceChat,
    CheckShowExtramisson,
};

