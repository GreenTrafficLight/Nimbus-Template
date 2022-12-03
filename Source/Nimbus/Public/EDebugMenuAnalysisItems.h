#pragma once
#include "CoreMinimal.h"
#include "EDebugMenuAnalysisItems.generated.h"

UENUM(BlueprintType)
enum class EDebugMenuAnalysisItems : uint8 {
    WeaponAnalysis,
    UnitAnalysis,
    ParticleSystemInfo,
    ParticleSystemList,
    TextureList,
    DisableReplayRecording,
    DisableGameObjectProcess,
    DisableWeaponProcess,
    DebugDisableWeaponDisabling,
    DisableDrawVapor,
    DisableDrawMissileTrail,
    DisableEventTrigger,
    ShowAssetLoaderInfo,
    ShowPauseInfo,
    ShowMapChangeInfo,
    ShowSoundManagerInfo,
    ShowSoundPauseInfo,
    ShowLevelDebugInfo,
    ShowRaycastTest,
    LogStreamingTexture,
    ShowNodesAnalysis,
    CollectLoadedTexture,
    ShowRibbonCollectionInfo,
    MissionHitch,
    TimeEventList,
    DisabledPreloadTransitionMap,
    MAX,
};

