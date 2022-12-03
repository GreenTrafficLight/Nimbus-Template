#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheckPointGameObject.h"
#include "CheckPointUnit.h"
#include "MissionSaveGame.generated.h"

class UMissionVariables;

UCLASS(Blueprintable)
class NIMBUS_API UMissionSaveGame : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCheckPointUnit> Units;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCheckPointGameObject> GameObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionVariables* MissionVariables;
    
public:
    UMissionSaveGame();
};

