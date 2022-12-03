#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EWeaponID.h"
#include "WeaponExplosionDurabilityDataTable.generated.h"

USTRUCT(BlueprintType)
struct FWeaponExplosionDurabilityDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponID WeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Durability;
    
    NIMBUS_API FWeaponExplosionDurabilityDataTable();
};

