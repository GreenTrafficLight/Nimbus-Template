#include "MovieSubtitleTableRow.h"

FMovieSubtitleTableRow::FMovieSubtitleTableRow() {
    this->StartTime_JP = 0;
    this->EndTime_JP = 0;
    this->StartTime_EN = 0;
    this->EndTime_EN = 0;
    this->bShouldLocalize = false;
    this->bOverrideDefaultColor = false;
    this->ValuePerSecond = 0;
}

