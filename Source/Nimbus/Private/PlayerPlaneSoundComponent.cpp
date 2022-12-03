#include "PlayerPlaneSoundComponent.h"

void UPlayerPlaneSoundComponent::SetPlayerSpeedKmph(float SpeedKmph) {
}

void UPlayerPlaneSoundComponent::SetPlayerObstacleDistance(float Value) {
}

void UPlayerPlaneSoundComponent::SetPlayerManeuver(float Value) {
}

void UPlayerPlaneSoundComponent::SetHighGTurn(float Value) {
}

void UPlayerPlaneSoundComponent::SetEnginePower(float EnginePower) {
}

void UPlayerPlaneSoundComponent::SetCloudDensity(float CloudDensity) {
}

void UPlayerPlaneSoundComponent::SetAltitudeMeters(float AltitudeMeters) {
}

void UPlayerPlaneSoundComponent::SetAirCurrentDirection(float Direction) {
}

void UPlayerPlaneSoundComponent::OnRestored() {
}

UPlayerPlaneSoundComponent::UPlayerPlaneSoundComponent() {
    this->EngineSoundPlay = NULL;
    this->EngineSoundStop = NULL;
    this->AirAmbientSoundPlay = NULL;
    this->AirAmbientSoundStop = NULL;
    this->CloudAmbientSoundPlay = NULL;
    this->CloudAmbientSoundStop = NULL;
    this->EngineStartFadeInSound = NULL;
    this->AirResistanceHighGPlay = NULL;
    this->AirResistanceHighGStop = NULL;
    this->GroundRefractionPlay = NULL;
    this->GroundRefractionStop = NULL;
    this->ManeuverAirResistancePlay = NULL;
    this->ManeuverAirResistanceStop = NULL;
    this->WindAmbientSoundEffectPlay = NULL;
    this->WindAmbientSoundEffectStop = NULL;
    this->RainAmbientSoundEffectPlay = NULL;
    this->RainAmbientSoundEffectStop = NULL;
    this->SandAmbientSoundEffectPlay = NULL;
    this->SandAmbientSoundEffectStop = NULL;
    this->JammingAmbientSoundEffectPlay = NULL;
    this->JammingAmbientSoundEffectStop = NULL;
    this->ESMAmbientSoundEffectPlay = NULL;
    this->ESMAmbientSoundEffectStop = NULL;
    this->NPC_JET_NORMAL = TEXT("NPC_JET_NORMAL");
    this->NPC_JET_NORMAL_Stop = TEXT("NPC_JET_NORMAL_Stop");
    this->NozzleOpenSoundEvent = TEXT("Player_Engine_Nozzle_Open");
    this->NozzleCloseSoundEvent = TEXT("Player_Engine_Nozzle_Close");
    this->NozzleCloseLongSoundEvent = TEXT("Player_Engine_Nozzle_Close_12s");
    this->NozzleStopSoundEvent = TEXT("Player_Engine_Nozzle_Stop");
    this->OwningPlayerPlane = NULL;
}

