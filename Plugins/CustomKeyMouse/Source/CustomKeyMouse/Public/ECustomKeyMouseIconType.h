#pragma once
#include "CoreMinimal.h"
#include "ECustomKeyMouseIconType.generated.h"

UENUM(BlueprintType)
enum class ECustomKeyMouseIconType : uint8 {
    CKM_IconTypeGamepad,
    CKM_IconTypeKeyboardEnglish,
    CKM_IconTypeKeyboardFrench,
    CKM_IconTypeKeyboardGerman,
    CKM_IconTypeKeyboardItalian,
    CKM_IconTypeKeyboardJapanese,
    CKM_IconTypeKeyboardSpanish,
    CKM_IconTypeKeyboardRussian,
    CKM_MAX UMETA(Hidden),
};

