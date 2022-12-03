#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "NimbusLevelScriptActorTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FNimbusLevelScriptActorTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    NIMBUS_API FNimbusLevelScriptActorTickFunction();
};

template<>
struct TStructOpsTypeTraits<FNimbusLevelScriptActorTickFunction> : public TStructOpsTypeTraitsBase2<FNimbusLevelScriptActorTickFunction>
{
	enum
	{
		WithCopy = false
	};
};

