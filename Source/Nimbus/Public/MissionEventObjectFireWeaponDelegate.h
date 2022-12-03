#pragma once
#include "CoreMinimal.h"
#include "MissionEventObjectFireWeaponDelegate.generated.h"

class AGameObject;
class AWeaponBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMissionEventObjectFireWeapon, const AGameObject*, Causer, const AGameObject*, WeaponTarget, const AWeaponBase*, Weapon, int32, WeaponNumber);

