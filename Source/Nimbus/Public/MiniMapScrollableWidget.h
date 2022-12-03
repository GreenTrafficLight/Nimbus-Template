#pragma once
#include "CoreMinimal.h"
#include "MiniMapWidget.h"
#include "MiniMapScrollableWidget.generated.h"

class UMaterial;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMiniMapScrollableWidget : public UMiniMapWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* BackgroundImageMaterialBase;
    
public:
    UMiniMapScrollableWidget();
    UFUNCTION(BlueprintCallable)
    void RefreshMiniMap();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDAlertEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDAlertBegin();
    
};

