#pragma once
#include "CoreMinimal.h"
#include "AIComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AITurnToTargetComponent.generated.h"

class USceneComponent;
class UPoseableMeshComponent;
class USkinnedMeshComponent;
class AGameObject;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UAITurnToTargetComponent : public UAIComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegulateTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRegulateTickDistanceUU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRegulateTickDistanceUU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRegulateTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRegulateTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MeshToTurnName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PitchBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchAngleOffsetMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchAngleOffsetMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString YawBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawAngleOffsetMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawAngleOffsetMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleDifferenceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttacksWithSweep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAttackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAttackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDirectionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndDirectionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StayAtStartDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StayAtEndDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetOriginalRotationToParentRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawRate_TurningToOriginalRotation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* TurnToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* ObjectToTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* PoseableMeshToTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshToTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* SkinnedMeshToTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* SweepTarget;
    
public:
    UAITurnToTargetComponent();
    UFUNCTION(BlueprintCallable)
    void TurnToOriginal();
    
    UFUNCTION(BlueprintCallable)
    bool SetTurnToTarget(AGameObject* TargetToTurnTo);
    
    UFUNCTION(BlueprintCallable)
    bool SetTurnToLocation(const FVector& LocationToTurnTo);
    
    UFUNCTION(BlueprintCallable)
    bool SetTurnToDirection(const FVector& DirectionToTurnTo);
    
    UFUNCTION(BlueprintCallable)
    void PerformTargetSweep(AGameObject* Target);
    
    UFUNCTION(BlueprintCallable)
    void PerformCustomSweep(const FVector& StartDirection, const FVector& EndDirection, float NewStayAtStartDuration, float NewStayAtEndDuration, float NewTurnRateMultiplier, bool bSweepLongerDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSweeping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartingSweep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedTurning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetYawBoneTransform() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetTurnToDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetTurnRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTurnForwardVector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetPitchBoneTransform() const;
    
};

