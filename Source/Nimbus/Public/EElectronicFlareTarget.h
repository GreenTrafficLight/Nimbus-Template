#pragma once
#include "CoreMinimal.h"
#include "EElectronicFlareTarget.generated.h"

UENUM(BlueprintType)
enum class EElectronicFlareTarget : uint8 {
    None,
    Myself,
    Friend,
};

