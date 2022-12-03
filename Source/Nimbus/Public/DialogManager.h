#pragma once
#include "CoreMinimal.h"
#include "EDialogResults.h"
#include "DialogInfo.h"
#include "UObject/Object.h"
#include "DialogHandle.h"
#include "EDialogIDs.h"
#include "EDialogType.h"
#include "DialogManager.generated.h"

class UDialogWidget;

UCLASS(Blueprintable)
class NIMBUS_API UDialogManager : public UObject {
    GENERATED_BODY()
public:
    UDialogManager();
    UFUNCTION(BlueprintCallable)
    FDialogHandle OpenDialogID(const EDialogIDs DialogID, const FString& DialogArguments);
    
    UFUNCTION(BlueprintCallable)
    FDialogHandle OpenDialog(const FDialogInfo& DialogInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAccepted(const FDialogInfo& DialogInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogOpened(const FDialogInfo& DialogInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogClosed(const FDialogInfo& DialogInfo);
    
    UFUNCTION(BlueprintCallable)
    bool IsDialogStackEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDialogOpen(bool bIncludeIcons) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDialogInStack(const FDialogHandle& DialogHandle) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDialogIDInStack(const EDialogIDs& DialogID) const;
    
    UFUNCTION(BlueprintCallable)
    EDialogResults GetDialogResultByHandle(const FDialogHandle& DialogHandle) const;
    
    UFUNCTION(BlueprintCallable)
    EDialogResults GetDialogResult() const;
    
    UFUNCTION(BlueprintCallable)
    UDialogWidget* GetCurrentOpenDialogWidget();
    
    UFUNCTION(BlueprintCallable)
    EDialogIDs GetCurrentDialogID() const;
    
    UFUNCTION(BlueprintCallable)
    FDialogHandle GetCurrentDialogHandle() const;
    
    UFUNCTION(BlueprintCallable)
    bool DoesDialogWidgetExist(EDialogType DialogType) const;
    
    UFUNCTION(BlueprintCallable)
    bool CloseDialogByID(const EDialogIDs& DialogID);
    
    UFUNCTION()
    bool CloseAllDialogs(uint32 LimitPriorityHigh);
    
};

