#pragma once
#include "CoreMinimal.h"
#include "HangarInfoBase.h"
#include "HangarStatus.generated.h"

class UHangarAllWeaponsAmmo;
class UHangarSpecGroup;
class UHangarBoardWeaponsAmmo;
class UHangarName;
class UHangarWeaponProperties;
class UHangarNameCost;
class UHangarNameTotalCost;
class UHangarWeaponType;
class UHangarPartsInfoGauge;
class UHangarPartsInfoSlot;
class UHangarSkinNo;
class UHangarMultiSetNo;
class UHangarMultiNickname;
class UHangarMultiEmblem;

UCLASS(Blueprintable)
class UHangarStatus : public UHangarInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarSpecGroup* SpecGroupLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarSpecGroup* SpecGroupRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarName* ShortNameLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarName* ShortNameRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarName* FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarNameCost* NameCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarNameTotalCost* NameTotalCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarAllWeaponsAmmo* AllWeaponsAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarBoardWeaponsAmmo* BoardWeaponsAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarWeaponProperties* WeaponProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarWeaponType* WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarPartsInfoGauge* PartsInfoGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarPartsInfoSlot* PartsInfoSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarSkinNo* SkinNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarMultiSetNo* MultiSetNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarMultiNickname* MultiNickname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarMultiEmblem* MultiEmblem;
    
public:
    UHangarStatus();
};

