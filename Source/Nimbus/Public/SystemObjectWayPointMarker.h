#pragma once
#include "CoreMinimal.h"
#include "SystemObject.h"
#include "EWayPointFriendlyType.h"
#include "SystemObjectWayPointMarker.generated.h"

UCLASS(Abstract, Blueprintable)
class NIMBUS_API ASystemObjectWayPointMarker : public ASystemObject {
    GENERATED_BODY()
public:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReached);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWayPointFriendlyType FriendlyType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReticleNameID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReached OnReached;
    
public:
    ASystemObjectWayPointMarker();
};

