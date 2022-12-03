#include "SoundAtomCue.h"

FString USoundAtomCue::GetUserData() {
    return TEXT("");
}

int32 USoundAtomCue::GetLength() {
    return 0;
}

USoundAtomCue::USoundAtomCue() {
    this->CueSheet = NULL;
}

