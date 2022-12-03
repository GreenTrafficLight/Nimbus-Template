#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMG/EWidgetShape.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EWidgetShape -FallbackName=EWidgetShape
#include "TextHidingGroup.h"
#include "ImageHidingGroup.h"
#include "UIBaseWidget.generated.h"

class AUIManagerActor;
class UWidgetComponent;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UUIBaseWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetShape WidgetMeshShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsedForVROverlay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTextHidingGroup> TextHidingGroups;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTimeBeforeTextAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FImageHidingGroup> ImageHidingGroups;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIManagerActor* UIManagerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetComponent* UIWidgetComponent;
    
public:
    UUIBaseWidget();
    UFUNCTION(BlueprintCallable)
    AUIManagerActor* GetUIManagerActor();
    
};

