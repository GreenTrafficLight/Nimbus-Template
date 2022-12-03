#pragma once
#include "CoreMinimal.h"
#include "Engine/DynamicBlueprintBinding.h"
#include "BlueprintMissionVariableDelegateBinding.h"
#include "MissionVaraibleDelegateBinding.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UMissionVaraibleDelegateBinding : public UDynamicBlueprintBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintMissionVariableDelegateBinding> MissionVariableDelegateBindings;
    
public:
    UMissionVaraibleDelegateBinding();
};

