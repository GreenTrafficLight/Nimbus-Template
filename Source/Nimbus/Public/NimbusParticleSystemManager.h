#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActiveCollisionParticleInfo.h"
#include "NimbusParticleSystemManager.generated.h"

class AGameObject;
class AActor;
class UWorld;

UCLASS(Blueprintable)
class NIMBUS_API UNimbusParticleSystemManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<AActor>, FActiveCollisionParticleInfo> ActiveCollisionParticlesMap;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<AGameObject>, int32> MultiTargetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> LastRequestTime;
    
public:
    UNimbusParticleSystemManager();
};

