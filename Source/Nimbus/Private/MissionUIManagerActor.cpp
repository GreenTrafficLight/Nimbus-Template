#include "MissionUIManagerActor.h"

void AMissionUIManagerActor::StartDebug(EDebugModeState InDebugState) {
}


void AMissionUIManagerActor::OnReplay() {
}

void AMissionUIManagerActor::OnMissionSuccess() {
}

void AMissionUIManagerActor::OnMissionResupply() {
}

void AMissionUIManagerActor::OnMissionFail() {
}

AMissionUIManagerActor::AMissionUIManagerActor() {
    this->ReplayCameraInfoWidgetClass = NULL;
    this->ReplayPawnClass = NULL;
    this->ReplayPlayerControllerClass = NULL;
    this->TempLoadingScreenWidgetClass = NULL;
    this->TempLoadingScreenWidget = NULL;
}

