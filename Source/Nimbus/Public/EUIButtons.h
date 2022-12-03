#pragma once
#include "CoreMinimal.h"
#include "EUIButtons.generated.h"

UENUM(BlueprintType)
enum class EUIButtons : uint8 {
    None,
    Ok,
    Next,
    Select,
    Set,
    PlayAnimation,
    ViewPlayerProfile,
    ViewPlayerProfile2,
    KickPlayer,
    Back,
    Cancel,
    AltitudeOff,
    DisplayOff,
    ResetCamera,
    AircraftTreeSet,
    Customize,
    CloudsOff,
    Tuning,
    ChangeCategory,
    FastForward,
    ZoomIn,
    ZoomOut,
    ReadMore,
    SearchAgain,
    Chat,
    VoiceChatMute,
    VoiceChatUnmute,
    DefaultSettings,
    EditKeys,
    Details,
    Result,
    Skip,
    Preview,
    SwitchViewPoint,
    Guide,
    Play,
    Stop,
    ToggleEngagedAreas,
    MoveCameraR,
    MoveCameraL,
    AngleCamera,
    PrepareMission,
    FinishBriefing,
    GuideClose1,
    GuideClose2,
    GuideClose3,
    GuideClose4,
    GuideClose5,
    RestoreDefaults,
    Delete,
    Switch,
    CameraZoom,
    CameraAngle,
    Scroll,
    Scroll_R3,
    MoveCursor,
    SwitchTuning,
    DisplayOn,
    SortSwitchFilter,
    CameraTrack,
    CameraZoomLR1,
    ResetSetting,
    SlotReplace,
    MPPause,
    MPLoop,
    MPRandom,
    MPNext,
    MPPrev,
    Aircraftdescription,
    ChangeSkin,
    ReplayDisplay,
    ReplayRadio,
    ReplaySE,
    ReplayBGM,
    RemoveKeyAssign,
    CancelKeyAssign,
    ShowCampaignDataViewer,
    EULA_Scroll,
    EULA_MoveCursor,
    RadioMoveList,
    SetupCtrlLayout,
    SetupCtrlDetail,
    PlaySound,
    BriefingNext,
    BriefingSortie,
    Num,
};

