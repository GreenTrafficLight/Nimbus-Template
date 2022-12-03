#pragma once
#include "CoreMinimal.h"
#include "EEULAState.generated.h"

UENUM(BlueprintType)
enum class EEULAState : uint8 {
    None_Opened,
    NotConnectedToNetwork,
    EULA_Opened,
    EULA_Agreed,
    EULA_Disagreed,
    EULA_Canceled,
    Privacy_Opened,
    Privacy_Agreed,
    Privacy_Disagreed,
    Privacy_Canceled,
    BothAgreed,
    DisplayingWarning,
    NumState,
};

