#pragma once
#include "CoreMinimal.h"
#include "IGCSkeletalMeshSaveData.h"
#include "IGCSaveData.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FIGCSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USkeletalMeshComponent*, FIGCSkeletalMeshSaveData> SkeletalMeshSaveData;
    
    NIMBUS_API FIGCSaveData();
};

