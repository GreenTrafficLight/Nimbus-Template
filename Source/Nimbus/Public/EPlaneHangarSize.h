#pragma once
#include "CoreMinimal.h"
#include "EPlaneHangarSize.generated.h"

UENUM(BlueprintType)
enum class EPlaneHangarSize : uint8 {
    PHS_Small,
    PHS_Medium,
    PHS_Large,
    PHS_Giant,
    PHS_SU30_X,
    PHS_F15_X,
    PHS_Mig31B,
    PHS_Extra,
    PHS_Dark,
    PHS_ASFX,
    PHS_FA27,
    PHS_FA44,
    PHS_Count,
    PHS_MAX UMETA(Hidden),
};

