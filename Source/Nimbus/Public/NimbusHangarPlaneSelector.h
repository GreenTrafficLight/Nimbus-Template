#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NimbusHangarPlaneSelector.generated.h"

class USkeletalMeshComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class NIMBUS_API ANimbusHangarPlaneSelector : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* InfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PlaneMesh;
    
public:
    ANimbusHangarPlaneSelector();
};

