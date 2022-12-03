#include "NimbusWorldSettings.h"

ANimbusWorldSettings::ANimbusWorldSettings() {
    this->MaxWorldSize = 1000000.00f;
    this->MinWorldAltitude = 0.00f;
    this->MaxWorldAltitude = 500000.00f;
    this->bIsWorldSand = false;
    this->bIsWorldRainLine = false;
    this->bIsWorldRainPillar = false;
    this->RainVFXBrightness = 3.00f;
    this->AutoExposureBiasCurveForLightningOverwrite = NULL;
    this->ClockTime = 0;
    this->bIsNightFlight = false;
    this->UILayerStartId = ENimbusUIId::None;
    this->bIsPlayPlayerPlaneSound = true;
    this->bEmitterObjectRayCheck = false;
    this->GameInstance = NULL;
    this->LevelSleepManager = NULL;
    this->ActorManager = NULL;
    this->ObjectTimerManager = NULL;
    this->ParticleSystemManager = NULL;
}

