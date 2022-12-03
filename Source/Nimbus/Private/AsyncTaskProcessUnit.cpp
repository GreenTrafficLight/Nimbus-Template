#include "AsyncTaskProcessUnit.h"

class AUnit;

void UAsyncTaskProcessUnit::StopTask(AUnit* Target, bool bIsInterrupted, bool bCallExit) {
}

UAsyncTaskProcessUnit::UAsyncTaskProcessUnit() {
    this->ExitCondition = NULL;
}

