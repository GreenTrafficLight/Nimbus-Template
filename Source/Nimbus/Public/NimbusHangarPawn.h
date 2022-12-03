#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Pawn.h"
#include "NimbusHangarPawn.generated.h"

class UCameraComponent;
class UNimbusUILayerManager;

UCLASS(Blueprintable)
class NIMBUS_API ANimbusHangarPawn : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNimbusUILayerManager> UIManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusUILayerManager* UIManager;
    
public:
    ANimbusHangarPawn();
};

