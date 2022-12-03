#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EGuideMessageType.h"
#include "Fonts/SlateFontInfo.h"
#include "GameFramework/HUD.h"
#include "NimbusHUDDisabledDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NimbusHUDHideGuideMessageEventDelegate.h"
#include "NimbusHUDShowGuideMessageEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "NimbusHUDEnabledDelegate.h"
#include "NimbusHUDAlertBeginDelegate.h"
#include "NimbusHUDShowGroupDelegate.h"
#include "NimbusHUDAlertEndDelegate.h"
#include "NimbusHUDDamageEventDelegate.h"
#include "NimbusHUDDamageEventResetDelegate.h"
#include "NimbusHUDFadeOutEventDelegate.h"
#include "NimbusHUDChangeSpecialWeaponDelegate.h"
#include "NimbusHUDCurrentAlertColorUpdatedDelegate.h"
#include "EMiniMapType.h"
#include "ENimbusHUDMode.h"
#include "NimbusHUD.generated.h"

class UMaterialInterface;
class UWidgetToTextureConverter;
class UMaterialInstanceDynamic;
class AActor;
class UUserWidget;
class AUI3DWidgetActor;
class UStereoWidget;
class UHUD3DUIManager;
class UTexture2D;
class AAerialRefuel3DUIActor;
class UTargetContainerWidget;
class UMovieSubtitleWidget;
class UMiniMapLayerWidget;
class UNimbusDebugInfoLayerWidget;
class ATexture3DUIActor;
class ATargetContainer3DUIActor;
class UWidget;
class UCanvasPanelSlot;
class AVolume;
class UNimbusGameInstance;
class APlayerPlane;
class UFont;

UCLASS(Blueprintable, NonTransient)
class NIMBUS_API ANimbusHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> HudWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> HudWidgetVRClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* HudWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetToTextureConverter* HudWidgetConverter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetToTextureConverter* HudPostProcessConverter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUI3DWidgetActor* HudWidgetVRActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* StereoCentralUIMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> StereoHudWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StereoCentralUIMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStereoWidget* StereoHudWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHUD3DUIManager* HUD3DUIMgr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo HudFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VRHudFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* GunReticleTextureVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToShowGunReticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GunReticleEffectiveRangeRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GunReticleBarMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GunReticleBarMaterialVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* GunReticleBarMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowGroupAppearInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowGroupAppearDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VelocityVectorShowGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityVectorDrawDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* VelocityVectorTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ExplosiveWeaponReticleTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EscortOutOfScreenTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LeftTextOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RightTextOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TopTextOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BottomTextOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortDisplayScreenOffsetRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PaperPlaneSceneCaptureActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PaperPlaneRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PaperArrowSceneCaptureActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PaperArrowRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HUDColorMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HUDColorHostile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MultiplayerHUDColorFriendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HUDColorFriendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HUDColorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HUDColorOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HUDColorContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MultiplayerHUDColorFriendlyCloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HUDColorFriendlyCloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HUDColorHostileCloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HUDColorUnidentified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HUDColorWeaponDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OverlayGlowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTargetContainerWidget> TargetContainerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMovieSubtitleWidget> MovieSubtitleWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMovieSubtitleWidget* MovieSubtitleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMiniMapLayerWidget> MiniMapLayerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNimbusDebugInfoLayerWidget> DebugInfoLayerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistortionEffectScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* LandingGuideHorizontalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* LandingGuideVerticalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LandingGuideMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* LandingGuideHorizontalInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* LandingGuideVerticalInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATexture3DUIActor* LandingGuideBillboardActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingGuideSlopeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingGuideSlopeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingGuideTextureScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingGuideVRTextureScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LandingGuideRelativePositionToPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TGTPLineMaxLengthMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TGTPLineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAerialRefuel3DUIActor* AerialRefuelBillboardActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlowIntensityOnEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlowFadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PaperArrowNearDistanceMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PaperArrowFarDistanceMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PaperArrowNearDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PaperArrowFarDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TargetTextOffSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TargetObjectTypeTextOffSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TargetCallSignTextOffSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StarStatusImageMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MultiStarImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MultiStarImageOffSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MultiGamerTagTextOffSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MultiObjectTypeTextOffSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* StarStatusMaterialInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlayTargetContainerOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleNavigationPingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JammingDistortionDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JammingDistortionMinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JammingDistortionMaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrongJammingDistortionDefaultScale;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATexture3DUIActor> Texture3DUIActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATargetContainer3DUIActor> TargetContainer3DUIActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAerialRefuel3DUIActor> AerialRefuel3DUIActorClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNimbusHUDEnabled OnHUDEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNimbusHUDDisabled OnHUDDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNimbusHUDAlertBegin OnHUDAlertBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNimbusHUDAlertEnd OnHUDAlertEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNimbusHUDShowGroup OnHUDShowGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNimbusHUDDamageEvent OnHUDDamagedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNimbusHUDDamageEventReset OnHUDDamagedEventReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNimbusHUDShowGuideMessageEvent OnHUDShowGuideMessageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNimbusHUDHideGuideMessageEvent OnHUDHideGuideMessageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNimbusHUDFadeOutEvent OnHUDFadeOutEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNimbusHUDChangeSpecialWeapon OnSpecialWeaponChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNimbusHUDCurrentAlertColorUpdated OnCurrentAlertColorUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MADIndicatorImageMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVolume* LandingVolume;
    
public:
    ANimbusHUD();
    UFUNCTION(BlueprintCallable)
    void ShowMovieEmblem(const TArray<UTexture2D*> ImageTextures);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDDistortionScale(float NewDistortionScale);
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraSensitivePosition(bool bIsPlaneBodyVisible);
    
    UFUNCTION(BlueprintCallable)
    void PlayMiniMapScanningEffect();
    
    UFUNCTION(BlueprintCallable)
    bool OpenDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnEndLanding();
    
    UFUNCTION(BlueprintCallable)
    void OnEndAerialRefueling();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginLanding();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginAerialRefueling();
    
    UFUNCTION(BlueprintCallable)
    bool IsDebugMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsBehindMiniMap(const FVector2D& InScreenPosition);
    
    UFUNCTION(BlueprintCallable)
    void HideMovieEmblem();
    
    UFUNCTION(BlueprintCallable)
    void HideGuideMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetScreenSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMiniMapSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFont* GetHUDFont() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHUDEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMiniMapType GetCurrentMiniMapType() const;
    
    UFUNCTION(BlueprintCallable)
    void EndHUDDistortion();
    
    UFUNCTION(BlueprintCallable)
    void DrawWidgetTextWorldSpace(const FString& Text, FLinearColor TextColor, const FVector& WldPos, const FVector2D& ScreenOffset, float Scale, bool bScalePosition, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    void DrawWidgetTextureWorldSpace(UTexture2D* InTexture, const FVector& WldPos, const FVector2D& ScreenOffset, const FVector2D& Size, float Rotation, const FLinearColor& Color, int32 ZOrder, bool bNeedDrawAccurately, float inScale);
    
    UFUNCTION(BlueprintCallable)
    void DrawWidgetTexture(UTexture2D* InTexture, const FVector2D& Pos, const FVector2D& Size, float Rotation, const FLinearColor& Color, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    void DrawWidgetText(const FString& Text, FLinearColor TextColor, const FVector2D& Pos, float Scale, bool bScalePosition, int32 ZOrder, const FVector2D& Alignment);
    
    UFUNCTION(BlueprintCallable)
    void DrawWidgetMaterialWorldSpace(UMaterialInterface* InMaterial, const FVector& WldPos, const FVector2D& ScreenOffset, const FVector2D& Size, float Rotation, const FLinearColor& Color, int32 ZOrder, bool bNeedDrawAccurately, float inScale);
    
    UFUNCTION(BlueprintCallable)
    void DrawWidgetMaterial(UMaterialInterface* InMaterial, const FVector2D& Pos, const FVector2D& Size, float Rotation, const FLinearColor& Color, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    void DrawWidgetLineWorldSpace(const FVector& StartWldPos, const FVector& EndWldPos, int32 SegmentCount, const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void DrawWidgetLineVectorWorldSpace(const FVector& StartWldPos, const FVector& Extent, float LengthOnScreen, int32 SegmentCount, const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void DrawWidgetLine(const FVector2D& StartPos, const FVector2D& EndPos, int32 SegmentCount, const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void DrawWidgetEllipseWorldSpace(const FVector& Center, const FVector& HorizontalExtent, const FVector& VerticalExtent, const FVector& SegmentXAxis, int32 SegmentCount, const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void DrawWidgetEllipse(const FVector2D& Center, float HorizontalRadius, float VerticalRadius, float Rotation, float SegmentOrientation, int32 SegmentCount, const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void DrawWidgetCircleWorldSpace(const FVector& Center, const FVector& Normal, float Radius, const FVector& SegmentXAxis, int32 SegmentCount, const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void DrawWidgetCircle(const FVector2D& Center, float Radius, float SegmentOrientation, int32 SegmentCount, const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void DrawSimpleWidgetCircleWorldSpace(const FVector& Center, const FVector& Up, const FVector& Normal, float Radius, int32 SegmentCount, const FLinearColor& InColor, bool bDottedLine);
    
    UFUNCTION(BlueprintCallable)
    void DisplayGuideMessage(EGuideMessageType MessageType);
    
    UFUNCTION(BlueprintCallable)
    bool CloseDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    void ChangeHUDMode(ENimbusHUDMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void BeginHUDDistortion(float MinDistortionScale, float MaxDistortionScale, float HideContainerDuration, float ShowContainerDuration);
    
    UFUNCTION(BlueprintCallable)
    UCanvasPanelSlot* AddChildToHudWidget(UWidget* Content);
    
};

