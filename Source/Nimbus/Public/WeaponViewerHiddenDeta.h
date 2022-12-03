#pragma once
#include "CoreMinimal.h"
#include "WeaponViewerHiddenDeta.generated.h"

class AActor;
class UMeshComponent;

USTRUCT(BlueprintType)
struct FWeaponViewerHiddenDeta {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HiddenActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> ChangeCastHiddenShadowMesh;
    
    NIMBUS_API FWeaponViewerHiddenDeta();
};

