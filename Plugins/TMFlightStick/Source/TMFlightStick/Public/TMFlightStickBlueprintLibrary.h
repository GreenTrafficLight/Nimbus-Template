#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TMFlightStickBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UTMFlightStickBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTMFlightStickBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SearchDevice(bool& ret);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsEnableFlightStick(bool& ret);
    
};

