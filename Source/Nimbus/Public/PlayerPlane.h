#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LightningStallStatus.h"
#include "EOptionsRadarMapWeaponSwitchingTypes.h"
#include "GameObject.h"
#include "UObject/NoExportTypes.h"
#include "SeaExplosionInfo.h"
#include "EBattleMode.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "EVRSoundActor.h"
#include "RainLine.h"
#include "EImpactCameraPlayCategory.h"
#include "UObject/NoExportTypes.h"
#include "ECameraType.h"
#include "NimbusCockpitPartsAnim.h"
#include "NimbusBodyPartsAnim.h"
#include "EPlayerSystemDamageType.h"
#include "PlayerPlane.generated.h"

class UPlayerHUDModeManager;
class AExplosiveWeapon;
class UMaterialParameterCollection;
class UParticleSystem;
class UCurveFloat;
class UTexture2D;
class AActor;
class USandwichBattle;
class UDataTable;
class UUpgradeParts;
class UMaterialInstanceDynamic;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UMaterialInterface;
class UPlaneRadioStateComponent;
class UPostProcessComponent;
class UCurveVector;
class UDirectionalLightComponent;
class UCameraViewComponent;
class UEmblemDataAsset;
class UMagneticAnomalyDetectorComponent;
class UPlayerWeaponActivator;
class UAnimInstance;
class APlayerPlane;
class UCameraComponent;
class AWeaponBase;
class ANimbusHUD;
class USceneComponent;
class UActorComponent;
class AAIGameObject;

UCLASS(Blueprintable)
class NIMBUS_API APlayerPlane : public AGameObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndTakeoff);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndLanding);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBeginTakeoff);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBeginLanding);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBeginCatapultTakeoff);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlaneTypeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlaneSWP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCarrierBasedPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFlyingBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVRPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaysNozzleSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMS17ExceptionPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputThrottle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputLeftYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputRightYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputLeftYaw_forAnimVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputRightYaw_forAnimVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputRoll_forAnimVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputPitch_forAnimVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsChangingView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsChangingViewReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bActivateFlareL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bActivateFlareR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ChangingViewTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HangarPartsAnim_Vwgn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HangarPartsAnim_Vct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HangarPartsAnim_Nzln;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceHangarWeaponMeshVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxPlaneAttackerMissiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxPursuitAttackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxNonPlaneAttackerMissiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCrashEnvironmentAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAfterburn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDisableCockpitWeatherMeshLocalToViewProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* CloudMaterialParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInCloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInSand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentCloudDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SmoothCloudDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanopyEffectChangeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanopyIceAppearDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanopyIceChangeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanopyEffectDecayMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WingTipEffectExitCloudDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IceTriggerCloudDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InCloudMovementDegradePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InCloudMovementDegradeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InCloudStallSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InCloudBuffetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InCloudMovementDegradePercent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InAirCurrentMovementDegradePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirCurrentStrengthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AirCurrentParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirCurrentVFXVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudDensity_ShowAirCurrentFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudDensity_HideAirCurrentFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirCurrentVFXVelocityFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirCurrentVFXVelocityFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirCurrentVFXInitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirCurrentVFXSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAirCurrentVFXOnlyInCloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeavyDamageHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightDamageHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VRLandingGuideRelativePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VRAerialRefuelGuideRelativePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AltitudeWarningThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthMissileFarAlertPlayingTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthMissileFarAlertPlayingTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthMissileFarAlertIntervalTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthMissileFarAlertIntervalTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StruckByLightningVFX_OtherPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostStallManuverNeutralLengthTime;
    
    UPROPERTY(EditAnywhere, Transient)
    AActor* VRSoundActors[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CockpitFiringSwitchRefActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> NozzleSoundActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JammingEffectFadePerSeconds;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackPointRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USandwichBattle* KDSBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMovmentInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWingInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCameraInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCameraViewChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWeaponInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWeaponSystemDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPitchAxisReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCameraUpAxisReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTrottleYawReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionsRadarMapWeaponSwitchingTypes RadarWeaponControlType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHighGTurnSingleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFlightAssistEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconFillTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegAnimKneeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegAnimFootAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegAnimScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUpgradeParts* UpgradeParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CockpitCameraBoundaryRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCameraShakeInVR;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PartsAnimationParamDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerParamDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle VFXSocketTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PlaneBodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* LandingGearOnMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LandingGearOffMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RefuelOnMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RefuelOffMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CanopyWeatherMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* CanopyPostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* IEWSPostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VelocityVectorVRMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlaneRadioStateComponent* RadioStateComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CanopyEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeedToAccelerateDroplet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CanopyIEWSEffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor IEWSEffectECMColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor IEWSEffectESMColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialRainSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* CachedCockpitDirectionalLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThirdPersonDropletSplatRateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CockpitDropletRainSpeedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ThirdPersonDropletInitialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CanopyMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CanopyIEWSMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BaseMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BaseDecalMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CockpitAOAMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CockpitVVIMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CockpitCMPMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRainLine RainLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRainLine SandLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirCloudInRainLineDensityRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirCloudInSandLineDensityRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAirCurrentDirectionAdaptationRainSandLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAirCurrentDirectionAdaptationRainSandLineYawOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAirCurrentSmallHandAvoidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirMaximumAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirMaximumAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirRotationAdaptationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEmblemDataAsset* EmblemAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BlankEmblemTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerWeaponActivator* PlayerWeaponActivator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseBokehFocalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseBokehScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseMaxBokehSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* CatapultTakeoff_OffsetTransCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* CatapultTakeoff_OffsetRotCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CatapultTakeoff_OffsetTrans_FSUS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* CatapultTakeoff_OffsetTransCurveVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* CatapultTakeoff_OffsetRotCurveVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnLightningInitialTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLightningStallStatus> LightningStallData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceStallRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EImpactCameraPlayCategory CurrentImpactCameraCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* CachedRemotePlayerPlaneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMagneticAnomalyDetectorComponent* MADComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerPlane*> LockonAttackerPlayerPlanes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraViewComponent* CameraViewComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraComponent* OldReplayCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AExplosiveWeapon*> FiredExplosiveWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnvCollisionBottomLengthFromCenterInMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnvCollisionTopLengthFromPilotInMeter;
    
protected:
    UPROPERTY(EditAnywhere)
    float TouchDownSpeedGraph[6];
    
    UPROPERTY(EditAnywhere)
    float TouchDownSpeedCorrectingBase[6];
    
    UPROPERTY(EditAnywhere)
    float TouchDownSpeedCorrectingCarrier[6];
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* GamerNameRenderTexture;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginTakeoff OnBeginTakeoff;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndTakeoff OnEndTakeoff;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginCatapultTakeoff OnBeginCatapultTakeoff;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginLanding OnBeginLanding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndLanding OnEndLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CatapultShuttleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CatapultTakeoffFrontGearAnimScale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerHUDModeManager* PlayerHUDModeManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeaponBase> DropTankWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropTankInputDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DropTankMeshComponent;
    
public:
    APlayerPlane();
    UFUNCTION(BlueprintCallable)
    void UpdateThrusterAnimation(UAnimInstance* AnimInst, FName CloseShapeName, FName OpenShapeName, float LoopMagnitude, float LoopFrequency);
    
    UFUNCTION(BlueprintCallable)
    void TargetLostJammer();
    
    UFUNCTION(BlueprintCallable)
    void StartTargetLostJammerCheck();
    
    UFUNCTION(BlueprintCallable)
    void StartSeekerJammerCheck();
    
    UFUNCTION(BlueprintCallable)
    void SetStallAltitude(float altStall);
    
    UFUNCTION(BlueprintCallable)
    void SetSandVFXMaxTransparency(float TargetTransparency, float SwitchingTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSandVFXMaxDensity(float TargetDensity, float SwitchingTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetRestrictedAltitude(float AltitudeMeters);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaxPursuitAttackers(int32 NewMax, int32 NewMaxPursuitAttackers);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaxNonpursuitAttackers(int32 NewMax);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaxEnemyMissileNum(int32 PursuitAttackerMissileNum, int32 NonPursuitAttackerMissileNum);
    
    UFUNCTION(BlueprintCallable)
    void SetHudWarningMessageDisplayTime(float DisplayTime);
    
    UFUNCTION(BlueprintCallable)
    void SetFELocationAndRotation(const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetFakeGroundHeightOnlyForAirShow(float FakeHeight, bool bIsEnableFake);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCheckCockpitCameraOutOfBound(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetControlType(bool bIsExpert);
    
    UFUNCTION(BlueprintCallable)
    void SetCatapultShuttleActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraLocationAndOrientation(UCameraComponent* CamComponent, USkeletalMeshComponent* SkeletalMeshComp, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraAndTargetLocation(UCameraComponent* CamComponent, USceneComponent* TargetComp, USkeletalMeshComponent* SkeletalMeshComp, FName BoneName, FName TargetBoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMode(EBattleMode NewMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RestoreWeaponFromCheckpoint(int32 WeaponSet, int32 GunCount, int32 MainWeaponCount, int32 SpecialWeaponCount);
    
    UFUNCTION(BlueprintCallable)
    void ResetTargetLostJammer();
    
    UFUNCTION(BlueprintCallable)
    void ResetStallAltitude();
    
    UFUNCTION(BlueprintCallable)
    int32 PlayVRSound(EVRSoundActor Type, const FString& EventName);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponSwitchReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponSwitchPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponFireReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponFirePressed();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponFireMissileReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponFireMissilePressed();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponFireMissile(bool pressed);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponFire(bool pressed);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUnpauseHandler();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnToggleMiniMapRadarReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnToggleMiniMapRadarPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetSelectReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetSelectPressed();
    
    UFUNCTION()
    void OnReplayCameraChanged(uint8 Type);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlaneEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPlaneBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPauseHandler();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInputViewPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnFlareActivationRightReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnFlareActivationRightPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnFlareActivationLeftReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnFlareActivationLeftPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnFlareActivation(bool pressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitCloud();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterCloud();
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivateMADComponent(UActorComponent* Component);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCombatZoneUpdatedEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChangeViewReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeViewPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnCameraViewChanged(ECameraType CameraViewType);
    
    UFUNCTION(BlueprintCallable)
    void OnActivateMADComponent(UActorComponent* Component, bool bReset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponSystemDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpecialWeaponTGTP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpecialWeaponArmed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPulseGunArmed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverRestrictedAltitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInTunnel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSpaceElevator();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSearchLight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInRadarArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInJammingArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInImpactArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCloud() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExpertControlType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeyondPulloutLine() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeWeaponSystem(int32 WeaponSet);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTargetLostJammer(const TArray<AAIGameObject*>& InJammerTargets, float InMinLostTargetTime, float InMaxLostTargetTime, float InLostTargetWaveingTime);
    
    UFUNCTION(BlueprintCallable)
    void InitializeSeekerJammer(const TArray<AAIGameObject*>& InJammerTargets, float InSeekerJammerRangeInMeter);
    
private:
    UFUNCTION(BlueprintCallable)
    bool HitTest();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpaceElevatorHeightRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGameObject* GetSelectedTarget();
    
    UFUNCTION(BlueprintCallable)
    bool GetNimbusHUDEnabled();
    
    UFUNCTION(BlueprintCallable)
    ANimbusHUD* GetNimbusHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSpeedKmph() const;
    
    UFUNCTION(BlueprintCallable)
    AGameObject* GetLockedOnTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFirstCameraLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDirectionMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNimbusCockpitPartsAnim GetCockpitPartsAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNimbusBodyPartsAnim GetBodyPartsAnimation() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AGameObject*> GetAllLockedOnTargets();
    
    UFUNCTION(BlueprintCallable)
    void FrameUpdate(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void ForcedInvalidSeekers();
    
    UFUNCTION(BlueprintCallable)
    void EndTargetLostJammerCheck();
    
    UFUNCTION(BlueprintCallable)
    void EndSeekerJammerCheck();
    
    UFUNCTION(BlueprintCallable)
    void EnableTakeoffInput(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnablePullupWarning(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnablePlayerInput(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableAllExcludingCameraInput(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void DisableWeaponSystem(bool bIsDisabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CameraViewChangedEvent(ECameraType CameraViewType);
    
    UFUNCTION(BlueprintCallable)
    void BeginTakeoff(bool bCarrier, float AutoTakeoffDelay, float CatapultTakeoffEndTime, float GearUpTakeoffEndTime);
    
    UFUNCTION(BlueprintCallable)
    void BeginLanding(bool bCarrier);
    
    UFUNCTION(BlueprintCallable)
    float ApplySystemDamage(EPlayerSystemDamageType SystemDamageType, float Amount, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void AddSeaSprayTrigger(FVector HitLocation, FSeaExplosionInfo SeaExplosionInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddKillBountyScore(AGameObject* Target, bool bDisplayHUDMessage);
    
};

