#pragma once
#include "CoreMinimal.h"
#include "NimbusUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "OutOfRangeDesc.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "MiniMapWidget.generated.h"

class UCanvasPanelSlot;
class ASystemObject;
class UImage;
class UMaterialInstanceDynamic;
class ASystemObjectLine;
class UMiniMapLayerWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMiniMapWidget : public UNimbusUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HUDMainColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HUDHostileColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiniMapRefreshRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlignCanvasToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRenderCombatZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRenderSelectedTargetBlinking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRenderWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRenderGroundAIAsUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiniMapExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCanvasPanelSlot*> IconPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCanvasPanelSlot*> CircleIconPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* CombatAreaIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CombatAreaMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASystemObjectLine*> SystemObjectLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASystemObject*> SystemObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FOutOfRangeDesc> OutOfRangeTGTDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FOutOfRangeDesc> OutOfRangeNonTGTDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxOutOfRangeLocatorCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OutOfRangeIndicatorDisplayBorderOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OutOfRangeIndicatorDisplayPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DottedLineSegmentSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DottedLineSpaceSegmentSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RenderIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMiniMapLayerWidget* ParentMiniMapLayerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPaintContext CachePaintContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
public:
    UMiniMapWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRetainerBoxEffectsSaturation(float InSaturationValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRetainerBoxApplyGammaCorrection(bool bApplyGammaCorrection);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderIconScale(const float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerIconScale(const float Scale);
    
    UFUNCTION(BlueprintCallable)
    void RefreshMiniMap();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDDisabled();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDAlertEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDAlertBegin();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatZoneUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMiniMapSize() const;
    
};

