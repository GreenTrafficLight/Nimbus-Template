#include "MPStageSaveData.h"

FMPStageSaveData::FMPStageSaveData() {
    this->StageID = 0;
    this->Destroys[0] = 0;
    this->Destroys[1] = 0;
    this->SortieCounts[0] = 0;
    this->SortieCounts[1] = 0;
    this->TotalScores[0] = 0;
    this->TotalScores[1] = 0;
    this->AccumulatedMMR[0] = 0;
    this->AccumulatedMMR[1] = 0;
}

