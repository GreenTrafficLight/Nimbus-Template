#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "InstantRadioReceiveWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UInstantRadioReceiveWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TeamColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EnemyColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* RadioEmblemListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MessageMoveUpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MessageAutoScrollingInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MessageSlotHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EmblemScrollBoxClass;
    
public:
    UInstantRadioReceiveWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnHUDEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDDisabled();
    
};

