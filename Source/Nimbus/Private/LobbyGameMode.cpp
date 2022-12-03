#include "LobbyGameMode.h"

void ALobbyGameMode::StartGame() {
}

bool ALobbyGameMode::AllClientsHaveValidSessionObject() const {
    return false;
}

ALobbyGameMode::ALobbyGameMode() {
    this->MissionTable = NULL;
    this->PlayerCountTable = NULL;
    this->DebugSessionTable = NULL;
    this->EULAHelper = NULL;
}

