#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "NimbusSaveGame.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UNimbusSaveGame : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 SavedVersionNumber;
    
public:
    UNimbusSaveGame();
};

