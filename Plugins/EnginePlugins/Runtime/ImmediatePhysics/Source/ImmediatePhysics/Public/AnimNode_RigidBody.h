#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ESimulationSpace.h"
#include "AnimNode_RigidBody.generated.h"

class UPhysicsAsset;

USTRUCT(BlueprintType)
struct IMMEDIATEPHYSICS_API FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* OverridePhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OverrideWorldGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExternalForce;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> OverlapChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWorldGeometry;
    
    UPROPERTY(EditAnywhere)
    ESimulationSpace SimulationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideWorldGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedBoundsScale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComponentSpaceSimulation;
    
public:
    FAnimNode_RigidBody();
};

