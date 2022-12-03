#include "DialogManager.h"

class UDialogWidget;

FDialogHandle UDialogManager::OpenDialogID(const EDialogIDs DialogID, const FString& DialogArguments) {
    return FDialogHandle{};
}

FDialogHandle UDialogManager::OpenDialog(const FDialogInfo& DialogInfo) {
    return FDialogHandle{};
}

void UDialogManager::OnItemAccepted(const FDialogInfo& DialogInfo) {
}

void UDialogManager::OnDialogOpened(const FDialogInfo& DialogInfo) {
}

void UDialogManager::OnDialogClosed(const FDialogInfo& DialogInfo) {
}

bool UDialogManager::IsDialogStackEmpty() const {
    return false;
}

bool UDialogManager::IsDialogOpen(bool bIncludeIcons) const {
    return false;
}

bool UDialogManager::IsDialogInStack(const FDialogHandle& DialogHandle) const {
    return false;
}

bool UDialogManager::IsDialogIDInStack(const EDialogIDs& DialogID) const {
    return false;
}

EDialogResults UDialogManager::GetDialogResultByHandle(const FDialogHandle& DialogHandle) const {
    return EDialogResults::None;
}

EDialogResults UDialogManager::GetDialogResult() const {
    return EDialogResults::None;
}

UDialogWidget* UDialogManager::GetCurrentOpenDialogWidget() {
    return NULL;
}

EDialogIDs UDialogManager::GetCurrentDialogID() const {
    return EDialogIDs::None;
}

FDialogHandle UDialogManager::GetCurrentDialogHandle() const {
    return FDialogHandle{};
}

bool UDialogManager::DoesDialogWidgetExist(EDialogType DialogType) const {
    return false;
}

bool UDialogManager::CloseDialogByID(const EDialogIDs& DialogID) {
    return false;
}

bool UDialogManager::CloseAllDialogs(uint32 LimitPriorityHigh) {
    return false;
}

UDialogManager::UDialogManager() {
}

