#include "MissionObjectiveBase.h"

class APlayerPlane;

void UMissionObjectiveBase::Reset_Implementation() {
}

APlayerPlane* UMissionObjectiveBase::GetPlayerPlane() const {
    return NULL;
}

EObjectiveStatus UMissionObjectiveBase::CheckObjectiveStatus_Implementation(float DeltaSeconds) {
    return EObjectiveStatus::InProgress;
}

UMissionObjectiveBase::UMissionObjectiveBase() {
}

