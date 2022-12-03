#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "NimbusPrePhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FNimbusPrePhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    NIMBUS_API FNimbusPrePhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FNimbusPrePhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FNimbusPrePhysicsTickFunction>
{
	enum
	{
		WithCopy = false
	};
};

