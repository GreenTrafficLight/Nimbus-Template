#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NimbusSoundAKEventNameTable.generated.h"

USTRUCT(BlueprintType)
struct FNimbusSoundAKEventNameTable : public FTableRowBase {
    GENERATED_BODY()
public:
    NIMBUS_API FNimbusSoundAKEventNameTable();
};

