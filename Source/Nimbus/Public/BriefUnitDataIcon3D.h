#pragma once
#include "CoreMinimal.h"
#include "BriefUnitDataIcon3D.generated.h"

class AStaticMeshActor;
class UMaterialBillboardComponent;

USTRUCT(BlueprintType)
struct FBriefUnitDataIcon3D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> MeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* LineMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMaterialBillboardComponent* TargetRing;
    
    NIMBUS_API FBriefUnitDataIcon3D();
};

