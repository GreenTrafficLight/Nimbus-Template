#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AircraftTreeLinkSegment.generated.h"

class UAircraftTreeLink;

UCLASS(Blueprintable)
class NIMBUS_API UAircraftTreeLinkSegment : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAircraftTreeLink*> Links;
    
    UAircraftTreeLinkSegment();
};

