#pragma once
#include "CoreMinimal.h"
#include "ESyncState.generated.h"

UENUM(BlueprintType)
enum class ESyncState : uint8 {
    ESyncState_None,
    ESyncState_Init,
    ESyncState_LobbyWaiting,
    ESyncState_LobbyReady,
    ESyncState_MapLoading,
    ESyncState_MapFinishLoading,
    ESyncState_ReadyForGame,
    ESyncState_Starting,
    ESyncState_Intro,
    ESyncState_Started,
    ESyncState_Ended,
    ESyncState_EndingIGC,
    ESyncState_WinLoseResult,
    ESyncState_ResultDetails,
    ESyncState_PEReward,
    ESyncState_RewardUnlock,
    ESyncState_RetrySave,
    ESyncState_BackToLobby,
    ESyncState_NetworkFailure,
};

