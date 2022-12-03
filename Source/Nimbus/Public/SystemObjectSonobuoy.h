#pragma once
#include "CoreMinimal.h"
#include "ESonobuoyEvent.h"
#include "SystemObject.h"
#include "SystemObjectSonobuoy.generated.h"

class ASystemObjectSonobuoy;
class UParticleSystem;
class USkeletalMeshComponent;
class AGameObject;

UCLASS(Abstract, Blueprintable)
class NIMBUS_API ASystemObjectSonobuoy : public ASystemObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSonobuoyEventOccurred, ASystemObjectSonobuoy*, Sonobuoy, ESonobuoyEvent, Event);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSonobuoyEventOccurred OnSonobuoyEventOccurred;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SplashVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFallingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SinkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawSonobuoyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComp;
    
public:
    ASystemObjectSonobuoy();
    UFUNCTION(BlueprintCallable)
    void Scan();
    
    UFUNCTION(BlueprintCallable)
    void Drop(AGameObject* Dropper);
    
};

