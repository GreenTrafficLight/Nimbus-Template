#pragma once
#include "CoreMinimal.h"
#include "ECustomKeyMouseLanguage.generated.h"

UENUM(BlueprintType)
enum class ECustomKeyMouseLanguage : uint8 {
    CKM_LanguageEnglish,
    CKM_LanguageFrench,
    CKM_LanguageGerman,
    CKM_LanguageItalian,
    CKM_LanguageJapanese,
    CKM_LanguageSpanish,
    CKM_LanguageRussian,
    CKM_LanguageMax,
    CKM_MAX UMETA(Hidden),
};

