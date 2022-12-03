#pragma once
#include "CoreMinimal.h"
#include "MissionEventObjectTakeDamageDelegate.generated.h"

class AGameObject;
class AWeaponBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FMissionEventObjectTakeDamage, const AGameObject*, Causer, const AGameObject*, DamagedTarget, const AWeaponBase*, Weapon, const AWeaponBase*, WeaponTypeCDO, float, Damage);

