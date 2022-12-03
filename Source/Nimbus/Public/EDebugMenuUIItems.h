#pragma once
#include "CoreMinimal.h"
#include "EDebugMenuUIItems.generated.h"

UENUM(BlueprintType)
enum class EDebugMenuUIItems : uint8 {
    Language,
    SubtitleLanguage,
    VoiceLanguage,
    ShowDebugLog,
    HideDebugInfo,
    DisableHUD,
    HideMiniMapRadar,
    EnableHUDTestMode,
    ShowHPGauge,
    ToggleBuildInformation,
    ToggleBuildInformationPeak,
    ToggleUI,
    ToggleDebugMessagesDisplay,
    AircraftLoadingTest,
    ChangeMenu,
    InvisibleFade,
    ToggleSonobuoyProgressIcon,
    MAX,
};

