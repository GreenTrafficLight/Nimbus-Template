#include "SubmarinePartsDamageVFXInfo.h"

FSubmarinePartsDamageVFXInfo::FSubmarinePartsDamageVFXInfo() {
    this->bObjectiveTargetParts = false;
    this->Vfx = NULL;
    this->Delay = 0.00f;
    this->bSeaSurfaceCheck = false;
    this->bHorizontalPitch = false;
    this->AutoDeactivateTime = 0.00f;
    this->AutoDeactivateTimeAfterObjectiveClear = 0.00f;
    this->Component = NULL;
    this->GameObject = NULL;
    this->SpawnTimer = 0.00f;
    this->DeactivateTimer = 0.00f;
    this->bDone = false;
}

