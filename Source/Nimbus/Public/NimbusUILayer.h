#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ENimbusUIId.h"
#include "NimbusUILayer.generated.h"

class UUILayerLinkButton;
class UNimbusUILayerManager;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UNimbusUILayer : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUILayerLinkButton*> NextUILayerLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUILayerLinkButton* CurrentFocusedButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENimbusUIId DefaultNextLayerUIId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableLayerNavigation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedBackground;
    
    UNimbusUILayer();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnTransitionOutStart();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnTransitionOutEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnTransitionInStart();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnTransitionInEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPushButtonCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPushButtonAccept();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLayerLinkButtonUnfocused(UUILayerLinkButton* Btn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLayerLinkButtonFocused(UUILayerLinkButton* Btn);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool IsCurrentLayer();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void GotoPreviousLayer();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void GotoNextLayer();
    
    UFUNCTION(BlueprintCallable)
    UNimbusUILayerManager* GetUILayerManager();
    
};

