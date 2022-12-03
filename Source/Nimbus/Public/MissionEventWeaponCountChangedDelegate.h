#pragma once
#include "CoreMinimal.h"
#include "MissionEventWeaponCountChangedDelegate.generated.h"

class AGameObject;
class AWeaponBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FMissionEventWeaponCountChanged, const AGameObject*, Causer, const AWeaponBase*, Weapon, int32, WeaponNumber, int32, RemainingCount, int32, PrevCount, int32, MaxCount);

