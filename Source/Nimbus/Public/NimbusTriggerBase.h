#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/TriggerBase.h"
#include "NimbusBeginOverlapDelegate.h"
#include "NimbusEndOverlapDelegate.h"
#include "NimbusTriggerBase.generated.h"

class AGameObject;
class AActor;
class ANimbusGameMode;

UCLASS(Abstract, Blueprintable)
class NIMBUS_API ANimbusTriggerBase : public ATriggerBase {
	GENERATED_BODY()
public:
protected:
	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FNimbusBeginOverlap OnNimbusBeginOverlap;

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FNimbusEndOverlap OnNimbusEndOverlap;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<TSoftObjectPtr<AGameObject>> CandidateGameObjects;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bCheckPlayer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bCheckAlly;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bCheckEnemy;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		ANimbusGameMode* GameMode;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		TArray<AGameObject*> CandidateGameObjectCache;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		TArray<AGameObject*> OverlappedGameObjects;

public:
	ANimbusTriggerBase(const FObjectInitializer& ObjectInitializer);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool IsNimbusOverlappingActor(const AActor* Other) const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		void GetNimbusOverlappingActors(TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter) const;

	UFUNCTION(BlueprintCallable)
		void EnableTriggerVolume(bool bEnable);

};

