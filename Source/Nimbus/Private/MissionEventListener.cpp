#include "MissionEventListener.h"

void AMissionEventListener::EnableBPEvent(bool bEnable) {
}

AMissionEventListener::AMissionEventListener() {
    this->bEnableEventFilter = false;
    this->PhaseNo = 0;
    this->bDisableDuringMission = false;
    this->bDisableDuringMiniGame = false;
    this->bEnableReplaying = false;
}

