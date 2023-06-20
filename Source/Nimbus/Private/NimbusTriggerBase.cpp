#include "NimbusTriggerBase.h"
#include "Templates/SubclassOf.h"

class AActor;

bool ANimbusTriggerBase::IsNimbusOverlappingActor(const AActor* Other) const {
	return false;
}

void ANimbusTriggerBase::GetNimbusOverlappingActors(TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter) const {
}

void ANimbusTriggerBase::EnableTriggerVolume(bool bEnable) {
}

ANimbusTriggerBase::ANimbusTriggerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->bCheckPlayer = false;
	this->bCheckAlly = false;
	this->bCheckEnemy = false;
	this->GameMode = NULL;
}