#pragma once
#include "CoreMinimal.h"
#include "EOptionsKeyAssign.generated.h"

UENUM(BlueprintType)
enum class EOptionsKeyAssign : uint8 {
    PitchDown,
    PitchUp,
    RollLeft,
    RollRight,
    YawLeft,
    YawRight,
    ThrottleUp,
    ThrottleDown,
    FireMachineGun,
    FireMissile,
    ChangeWeapon,
    CameraCtrl,
    CameraUp,
    CameraDown,
    CameraLeft,
    CameraRight,
    AutoPilot,
    ThrottleUpDown,
    ChangeView,
    Flares,
    TrackTarget,
    ToggleRadarMapDisplay,
    SwitchTarget,
    ChatMenu,
    ChatMenuUp,
    ChatMenuDown,
    ChatMenuOff,
    NUM,
};

