#pragma once
#include "CoreMinimal.h"
#include "ECustomKeyMouseDevice.generated.h"

UENUM(BlueprintType)
enum class ECustomKeyMouseDevice : uint8 {
    CKM_DeviceGamepad,
    CKM_DeviceKeyboard,
    CKM_MAX UMETA(Hidden),
};

