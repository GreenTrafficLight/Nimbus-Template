#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NimbusGameUserSettings.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UNimbusGameUserSettings : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNimbusGameUserSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShowPlayByPlayRadioConditionLog();
    
};

