#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "NimbusMissionTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FNimbusMissionTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    NIMBUS_API FNimbusMissionTickFunction();
};

template<>
struct TStructOpsTypeTraits<FNimbusMissionTickFunction> : public TStructOpsTypeTraitsBase2<FNimbusMissionTickFunction>
{
	enum
	{
		WithCopy = false
	};
};


