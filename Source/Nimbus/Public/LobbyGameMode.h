#pragma once
#include "CoreMinimal.h"
#include "MultiPlayerGameMode.h"
#include "LobbyGameMode.generated.h"

class UDataTable;
class UEULAHelper;

UCLASS(Blueprintable, NonTransient)
class NIMBUS_API ALobbyGameMode : public AMultiPlayerGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MissionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerCountTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DebugSessionTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEULAHelper* EULAHelper;
    
public:
    ALobbyGameMode();
    UFUNCTION(BlueprintCallable)
    void StartGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllClientsHaveValidSessionObject() const;
    
};

