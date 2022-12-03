#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusActorManager.generated.h"

class AGameObject;
class AActor;
class UWorld;
class AUnit;
class ASystemObjectLightning;
class UNimbusObjectPool;
class ANimbusTriggerBase;

UCLASS(Blueprintable)
class UNimbusActorManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AUnit*> CachedUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGameObject*> CachedGameObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGameObject*> CachedSpawnedGameObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGameObject*> CachedUnidentifiedGameObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGameObject*> CachedWingmen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASystemObjectLightning*> CachedLightningObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGameObject*> CachedImportantAllies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGameObject*> CachedNeedDetectionGameObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ANimbusTriggerBase*> CachedNimbusTriggerActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TrueSkyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusObjectPool* WeaponPool;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<uint32, AActor*> CrossLevelActorMap;
    
public:
    UNimbusActorManager();
};

