#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MiniGameVolumeSet.generated.h"

class AActor;
class AVolume;

UCLASS(Blueprintable)
class NIMBUS_API UMiniGameVolumeSet : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorOverlapDelegate, AActor*, OtherActor);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> Volumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> OverlappedActors;
    
public:
    UMiniGameVolumeSet();
private:
    UFUNCTION(BlueprintCallable)
    void OnActorEndOverlapHandler(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapHandler(AActor* OverlappedActor, AActor* OtherActor);
    
};

