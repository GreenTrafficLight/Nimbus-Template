#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AircraftTreeLink.generated.h"

class UAircraftTreeGroup;

UCLASS(Blueprintable)
class NIMBUS_API UAircraftTreeLink : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAircraftTreeGroup* GroupSrc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAircraftTreeGroup* GroupDst;
    
    UAircraftTreeLink();
};

