#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LayerMenuLineInfo.h"
#include "LayerMenuLineMeshActor.generated.h"

class UProceduralMeshComponent;
class UUILayerMenuParam;

UCLASS(Blueprintable)
class NIMBUS_API ALayerMenuLineMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayerMenuParam* LayerMenuParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLayerMenuLineInfo> LineInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LineInfoIdCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SelectedLineInfoID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> LinkLineInfoIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> DecorationLineInfoIDList;
    
public:
    ALayerMenuLineMeshActor();
};

