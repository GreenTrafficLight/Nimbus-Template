#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Missile.h"
#include "SODBomb.generated.h"

class UChildSpawnerComponent;
class ABomb;

UCLASS(Abstract, Blueprintable)
class NIMBUS_API ASODBomb : public AMissile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UChildSpawnerComponent* ChildSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABomb> ChildClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispersionStartSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispersionIntervalSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispersionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DispersionCount;
    
public:
    ASODBomb();
};

