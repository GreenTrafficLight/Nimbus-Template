#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MissionHitchInfo.h"
#include "Blueprint/UserWidget.h"
#include "Fonts/SlateFontInfo.h"
#include "NimbusDebugInfoLayerWidget.generated.h"

class UTexture2D;
class UFont;
class UTargetContainerWidget;
class AAIGameObject;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UNimbusDebugInfoLayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* FontObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* AIDebugFontObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DebugContainerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo DebugFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTargetContainerWidget> TargetContainerWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIGameObject* PickedTarget;
    
public:
    UNimbusDebugInfoLayerWidget();
    UFUNCTION(BlueprintCallable)
    void OnEnableHud();
    
    UFUNCTION(BlueprintCallable)
    void OnDisableHud();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDetectedMissionHitch(const FMissionHitchInfo& InMissionHitchInfo);
    
};

