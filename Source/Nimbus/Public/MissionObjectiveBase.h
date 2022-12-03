#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EObjectiveStatus.h"
#include "MissionObjectiveBase.generated.h"

class APlayerPlane;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class NIMBUS_API UMissionObjectiveBase : public UObject {
    GENERATED_BODY()
public:
    UMissionObjectiveBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerPlane* GetPlayerPlane() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EObjectiveStatus CheckObjectiveStatus(float DeltaSeconds);
    
};

