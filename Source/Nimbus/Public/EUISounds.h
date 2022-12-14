#pragma once
#include "CoreMinimal.h"
#include "EUISounds.generated.h"

UENUM(BlueprintType)
enum class EUISounds : uint8 {
    None,
    ResetAll,
    StopAll,
    Accept,
    Cancel,
    Fail,
    ChangeTab,
    ChangeItem,
    ChangeSubItem,
    OpenPause,
    ClosePause,
    OpenMenu,
    CloseMenu,
    AcceptTitle,
    AcceptSortie,
    OpenDialog,
    OpenErrorDialog,
    StartMenu,
    ZoomInBriefing,
    ZoomOutBriefing,
    SetParts,
    UnsetParts,
    GetMedal,
    BriefingSwitchEnd,
    TreePurchase,
    TreeUnlockLineMove,
    Scroll,
    GetReward,
    UnlockFeature,
    VRUI_Decide,
    VRUI_Cancel,
    VRUI_Select,
    VRUI_Open,
    VRUI_Square_Flash,
    VRUI_Circle,
    VRUI_Enemy,
    VRUI_Map,
    VRUI_FadeIn_3s,
    VRUI_FadeIn_5s,
    VRUI_FadeOut_3s,
    VRUI_FadeOut_5s,
    Radio_Dalete,
    Radio_Insert,
    MultiLobbyEnter,
    MultiLobbyExit,
    MultiChatReceived,
    MultiSortieEnabled,
    MultiSortieDisabled,
    MultiSortieStarted,
    MultiSortieCountdownEnding,
    MultiAircraftSelected,
    MultiOvertake1st,
    MultiRespawningStart,
    MultiRespawningStop,
    MultiRespawnReady,
    MultiResultsScreen,
    MultiResultsText,
    MultiResultsScore,
    MultiRankIncreasingStart,
    MultiRankIncreasingStop,
    MultiRankUp,
    MultiMedalReceived,
    MultiRewardsText,
    MultiOpenPause,
    MultiClosePause,
    MultiSoftenBGM,
    MultiSoftenBGMReset,
    MultiMemberListOpen,
    MultiMemberListClose,
    Num,
};

