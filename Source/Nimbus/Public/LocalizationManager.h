#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LocalizationManager.generated.h"

UCLASS(Blueprintable)
class ULocalizationManager : public UObject {
    GENERATED_BODY()
public:
    ULocalizationManager();
    UFUNCTION(BlueprintCallable)
    static void SetVoiceCulture(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void SetSubtitleCulture(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsDebugOutputEnabled(bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetCulture(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString LocalizeStringParams(const FString& Key, const TArray<FString>& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString LocalizeString(const FString& Key, bool bErrorCheck, const FString& DummyPrefix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasString(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetVoiceCulture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSubtitleCulture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsDebugOutputEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCulture();
    
};

