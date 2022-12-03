#include "SubmarineTrailVFXInfo.h"

FSubmarineTrailVFXInfo::FSubmarineTrailVFXInfo() {
    this->bEnableSpeedRange = false;
    this->SpeedRangeMin = 0.00f;
    this->SpeedRangeMax = 0.00f;
    this->Vfx = NULL;
    this->Conditions = ESubmarineTrailVFXStatus::Normal;
    this->SpawnPoint = ESubmarineTrailVFXSpawnPoint::Socket;
    this->NoseLiftOffSetCurve = NULL;
    this->TrailParticleComponent = NULL;
    this->AttachToComponent = NULL;
    this->Owner = NULL;
}

