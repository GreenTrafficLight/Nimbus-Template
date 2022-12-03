#pragma once
#include "CoreMinimal.h"
#include "SingleAnimationPlayData.h"
#include "IGCSkeletalMeshSaveData.generated.h"

USTRUCT(BlueprintType)
struct FIGCSkeletalMeshSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleAnimationPlayData AnimationData;
    
    NIMBUS_API FIGCSkeletalMeshSaveData();
};

