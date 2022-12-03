#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "ECustomKeyMouseIconType.h"
#include "ECustomKeyMouseDevice.h"
#include "ECustomKeyMouseLanguage.h"
#include "CustomKeyMouseBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UCustomKeyMouseBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCustomKeyMouseBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetMouseStickSensitive(float InSensitvie);
    
    UFUNCTION(BlueprintCallable)
    static void SetMouseLookAtSensitive(float InSensitvie);
    
    UFUNCTION(BlueprintCallable)
    static void SetMouseLookAtModifyKey(int32 InIndex, const FKey& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMouseStickSensitive(float& OutSensitive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMouseLookAtSensitive(float& OutSensitive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMouseLookAtModifyKey(FKey& OutKey, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetLastInputDevice(ECustomKeyMouseDevice& OutDevice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetLanguage(ECustomKeyMouseLanguage& OutLanguege);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetIconType(ECustomKeyMouseIconType& OutIconType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetExternalCharacterUnknown(FString& OutString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetExternalCharacter(FString& OutString, const FKey& InKey);
    
};

