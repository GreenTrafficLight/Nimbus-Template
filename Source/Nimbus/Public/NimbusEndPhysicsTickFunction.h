#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "NimbusEndPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FNimbusEndPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    NIMBUS_API FNimbusEndPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FNimbusEndPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FNimbusEndPhysicsTickFunction>
{
	enum
	{
		WithCopy = false
	};
};
