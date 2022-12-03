#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "NimbusFadeManager.generated.h"

class UWorld;
class UNimbusLoadingScreenManager;
class UUserWidget;
class UNimbusMapChangeManager;
class UNimbusGameInstance;
class UFadeWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNimbusFadeManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartFadingDelegate, float, Duration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFadedDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FadeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFadeWidget* FadeWidgetObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusMapChangeManager* MapChangeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusLoadingScreenManager* LoadingScreenManager;
    
public:
    UNimbusFadeManager();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPreLoadMap(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    void OnPostLoadMap(UWorld* LoadedWorld);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenShowHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenHideHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeOutHandler(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnFadeInHandler(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnFadedOutHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnFadedInHandler();
    
};

