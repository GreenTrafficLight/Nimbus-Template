#include "MultiReviveWidget.h"

void UMultiReviveWidget::OnReparCompleteAnimationFinished() {
}

UMultiReviveWidget::UMultiReviveWidget() {
    this->EmblemListClass = NULL;
    this->RepairDurationInSeconds = 5.00f;
    this->ForceSortieDurationInSeconds = 5.00f;
    this->AdditionalRepairDurationInSeconds = 4.00f;
    this->FullRingAnimation = NULL;
    this->bShowAllRows = false;
}

