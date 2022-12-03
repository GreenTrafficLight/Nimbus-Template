#pragma once
#include "CoreMinimal.h"
#include "AIGameObject.h"
#include "Engine/DataTable.h"
#include "AISpecialActionRequestInfo.h"
#include "EAIState.h"
#include "EKDSPhase.h"
#include "DamageImbalanceAnimSettings.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NimbusCockpitPartsAnim.h"
#include "NimbusBodyPartsAnim.h"
#include "AIPlane.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;
class APlayerPlane;
class UBehaviorTree;
class AGameObject;
class UPlaneVFXComponent;
class UBehaviorTreeComponent;
class UBlackboardComponent;
class UDataTable;
class UPlaneRadioStateComponent;
class UAIPlaneBehaviorWork;
class UMeshComponent;
class USceneComponent;
class UCurveVector;

UCLASS(Blueprintable)
class NIMBUS_API AAIPlane : public AAIGameObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* EvadeBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* EvadeMissileNearBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* EvadeMissileFarBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* EvadeGunBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* EvadeSpecialBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* ProvokeBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* ProvokeNearBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* ProvokeMidBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* ProvokeFarBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* EscapeFromPursuerBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* MoveAwayFromTargetBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* PursueTargetBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProvokeDeterminationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProvokeConditionConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KDSSelectionTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontEntranceTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontLeadTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurroundPursuitMinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurroundPursuitMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurroundPursuitParamA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurroundPursuitParamB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurroundPursuitParamC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurroundPursuitResetTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurroundPursuitResetTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLargePlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVTOLPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargePlaneBankAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargePlanePitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargePlaneRollSpeedOnPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGroundRotateAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle VFXSocketTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EAIState CurrentRunningState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerPlane* NearestPlayerPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* EscapeFromPursuerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* MoveAwayFromTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InCloudMovementDegradePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDamagedRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagedRotateIntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagedRotateIntervalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamagedRotateNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PlaneBodyStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PlaneBodySkelMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PilotMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* LastAttackingGunOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableKDSMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInCloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WingTipEffectExitCloudDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleSituationLowHealthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleSituationRelativeLowAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleSituationRelativeHighAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKDSPhase KDSPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideNormalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VariableWingMinSpeedKmph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* BTComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PartsAnimationParamDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlaneRadioStateComponent* RadioStateComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanManeuverPugachevsCobra;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanManeuverKulbit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasInstabilityInFormation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAIPlaneBehaviorWork* BehaviorWork;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* PlaneBodyMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LandingGearOnMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LandingGearOffMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RefuelProbeOffMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RefuelProbeNavyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RefuelProbeAirforceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlaneVFXComponent* PlaneVFXComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageImbalanceAnimSettings DamageImbalanceAnimSettings;
    
    AAIPlane();
    UFUNCTION(BlueprintCallable)
    void StopImbalanceAnime();
    
    UFUNCTION(BlueprintCallable)
    void StartDamagedRotate();
    
    UFUNCTION(BlueprintCallable)
    void SetFormationLightEmissive(float intensity);
    
    UFUNCTION(BlueprintCallable)
    void SetFELocationAndRotation(FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentBehaviorTreeName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetCloudAvoidanceAbility(bool CloudAvoidanceAbility);
    
    UFUNCTION(BlueprintCallable)
    void SetBehaviorActive(bool BehaviorActiveState);
    
    UFUNCTION(BlueprintCallable)
    void SetAutopilotYawRelative(float RelativeAngle, float Power);
    
    UFUNCTION(BlueprintCallable)
    void SetAutopilotRollRelative(float RelativeAngle, float Power);
    
    UFUNCTION(BlueprintCallable)
    void SetAutopilotRoll(float AbsoluteAngle, float Power);
    
    UFUNCTION(BlueprintCallable)
    void SetAutopilotPitchRelative(float RelativeAngle, float Power);
    
    UFUNCTION(BlueprintCallable)
    bool SearchFrontCloudDirection();
    
    UFUNCTION(BlueprintCallable)
    void RequestSpecialAction(const FAISpecialActionRequestInfo& SpecialActionRequestInfo);
    
    UFUNCTION(BlueprintCallable)
    void PlayImbalanceAnime(UCurveVector* InRotationCurveData);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteFELocationAndRotation(FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void OverrideAIPlaneConfig(const UDataTable* AIPlaneConfig);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateAIState();
    
    UFUNCTION(BlueprintCallable)
    void OnPostAIState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStrictDrift() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInKDSP2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInKDSP1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCloud() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFireMissileFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledSurroundPursuitTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrift() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsApproachingCloud() const;
    
    UFUNCTION(BlueprintCallable)
    void InputYaw(float Power);
    
    UFUNCTION(BlueprintCallable)
    void InputRoll(float Power);
    
    UFUNCTION(BlueprintCallable)
    void InputPitch(float Power);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTurnSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDecelerationMpss() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNimbusCockpitPartsAnim GetCockpitPartsAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNimbusBodyPartsAnim GetBodyPartsAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccelerationMpss() const;
    
    UFUNCTION(BlueprintCallable)
    void FrameUpdate(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void EnableTakeoffAfterburner(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableLandingGear(bool bEnable, float InDelayTime);
    
    UFUNCTION(BlueprintCallable)
    void EnableAvoidObstacle(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CheckAvoidObstacle();
    
    UFUNCTION(BlueprintCallable)
    void AutopilotHorizontalYaw(float Power);
    
    UFUNCTION(BlueprintCallable)
    void AutopilotAdjustSpeed(float spd, float Power);
    
    UFUNCTION(BlueprintCallable)
    void AIFlightEngineTick(float DeltaTimeSeconds);
    
    UFUNCTION(BlueprintCallable)
    void AIFlightEngineRepositionDebugUseOnly();
    
};

