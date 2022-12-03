#pragma once
#include "CoreMinimal.h"
#include "SystemObject.h"
#include "ESystemLineType.h"
#include "UObject/NoExportTypes.h"
#include "SystemObjectLine.generated.h"

UCLASS(Abstract, Blueprintable)
class NIMBUS_API ASystemObjectLine : public ASystemObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESystemLineType LineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RadarIndicatorRelativePosition;
    
public:
    ASystemObjectLine();
private:
    UFUNCTION(BlueprintCallable)
    void OnCombatZoneUpdatedEvent();
    
};

