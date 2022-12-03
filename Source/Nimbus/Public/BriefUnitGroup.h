#pragma once
#include "CoreMinimal.h"
#include "BriefUnitDataIcon3D.h"
#include "BriefUnitGroup.generated.h"

class UVerticalBox;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FBriefUnitGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* DisplayNameContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBriefUnitDataIcon3D Icon3D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Icon3DMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Icon3DLineMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* TargetRingMaterial;
    
    NIMBUS_API FBriefUnitGroup();
};

