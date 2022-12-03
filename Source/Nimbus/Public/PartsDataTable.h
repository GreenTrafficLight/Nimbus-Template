#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPartsCategory.h"
#include "PartsData.h"
#include "EPartsSize.h"
#include "EPartsIconCategory.h"
#include "EPartsGroup.h"
#include "EPartsEnableGameMode.h"
#include "EHangarSpecCategory.h"
#include "PartsDataTable.generated.h"

USTRUCT(BlueprintType)
struct FPartsDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartsID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartsData> PartsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartsGroup PartsGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartsIconCategory PartsIconCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartsSize PartsSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartsRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartsCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartsEnableGameMode PartsEnableGameMode;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphAirToAir;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphAirToGround;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphSpeed;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphMobirity;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphStability;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphDefense;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphAirToAirWeapon;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphAirToGroundWeapon;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphHoming;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphReload;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphLongRange;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphDamageRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHangarSpecCategory HangarSpecOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartsCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DLCID;
    
    NIMBUS_API FPartsDataTable();
};

