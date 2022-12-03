#include "NimbusRadarPing.h"

FNimbusRadarPing::FNimbusRadarPing() {
    this->ObjectToPing = NULL;
    this->PingType = ENimbusPingType::PING_ATTACK;
    this->bShowContainerName = false;
}

