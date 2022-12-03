#pragma once
#include "CoreMinimal.h"
#include "ELobbyChatCategory.generated.h"

UENUM(BlueprintType)
enum class ELobbyChatCategory : uint8 {
    History,
    All,
    Greetings,
    Procedure,
    Confirmation,
    Communication,
    Reponses,
    Requests,
    Requests2,
    Suggestion,
    Happy,
    Sad,
    Cheerful,
    Others,
    System,
};

