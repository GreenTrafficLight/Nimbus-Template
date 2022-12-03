#pragma once
#include "CoreMinimal.h"
#include "UIPawn.h"
#include "UIVRPawn.generated.h"

class UPawnMovementComponent;

UCLASS(Blueprintable)
class NIMBUS_API AUIVRPawn : public AUIPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLookUpRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnMovementComponent* MovementComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAddDefaultMovementBindings: 1;
    
    AUIVRPawn();
    UFUNCTION(BlueprintCallable)
    void TurnAtRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void MoveUp_World(float Val);
    
    UFUNCTION(BlueprintCallable)
    void MoveRight(float Val);
    
    UFUNCTION(BlueprintCallable)
    void MoveForward(float Val);
    
    UFUNCTION(BlueprintCallable)
    void LookUpAtRate(float Rate);
    
};

