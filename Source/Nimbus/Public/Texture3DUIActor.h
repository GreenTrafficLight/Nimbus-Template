#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Texture3DUIActor.generated.h"

class UTexture2D;
class UMaterialInstanceDynamic;
class UMaterialBillboardComponent;
class UMaterialInterface;

UCLASS(Blueprintable)
class NIMBUS_API ATexture3DUIActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMaterialBillboardComponent* TextureBox;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TextureBoxMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* TextureBoxMaterialInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* CurrentTexture;
    
public:
    ATexture3DUIActor();
};

