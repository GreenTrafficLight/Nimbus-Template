#pragma once
#include "CoreMinimal.h"
#include "Engine/Console.h"
#include "NimbusConsole.generated.h"

UCLASS(Blueprintable, NonTransient)
class NIMBUS_API UNimbusConsole : public UConsole {
    GENERATED_BODY()
public:
    UNimbusConsole();
};

