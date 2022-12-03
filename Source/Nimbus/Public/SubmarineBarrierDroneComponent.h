#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BarrierDroneSocketInfo.h"
#include "UObject/NoExportTypes.h"
#include "BarrierDroneInfo.h"
#include "SubmarineBarrierDroneComponent.generated.h"

class AAIHeli;
class UStaticMeshComponent;
class AAIGroundVehicle;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API USubmarineBarrierDroneComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIGroundVehicle* OwningGameObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BarrierDroneOrbitMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierDroneOrbitMeshLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierDroneLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrierDroneMinAltitudeInMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BarrierDroneOrbitMeshBaseLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BarrierDroneOrbitMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> BarrierDroneOrbitMeshSocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBarrierDroneInfo> BarrierDroneInfoList;
    
public:
    USubmarineBarrierDroneComponent();
    UFUNCTION(BlueprintCallable)
    void StartBarrierDroneDefenceBySocketInfo(const TArray<FBarrierDroneSocketInfo>& InBarrierDroneSocketInfoList);
    
    UFUNCTION(BlueprintCallable)
    void StartBarrierDroneDefence(const TArray<AAIHeli*>& InBarrierDroneList);
    
    UFUNCTION(BlueprintCallable)
    void OnRestored();
    
    UFUNCTION(BlueprintCallable)
    void EndBarrierDroneDefence();
    
};

