#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "NimbusStartFrameTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FNimbusStartFrameTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    NIMBUS_API FNimbusStartFrameTickFunction();
};

template<>
struct TStructOpsTypeTraits<FNimbusStartFrameTickFunction> : public TStructOpsTypeTraitsBase2<FNimbusStartFrameTickFunction>
{
	enum
	{
		WithCopy = false
	};
};

