#include "ReplayManager.h"

class UWorld;

bool UReplayManager::IsIGCPlaybackAllowed(UWorld* World) {
    return false;
}

UReplayManager::UReplayManager() {
}

