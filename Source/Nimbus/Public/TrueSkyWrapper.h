#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TrueSkyWrapper.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UTrueSkyWrapper : public UObject {
    GENERATED_BODY()
public:
    UTrueSkyWrapper();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTrueSkyVisible(bool bVisible, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetTime(float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowBase(float ShadowBaseUU);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SandPointTest(int32 QueryID, FVector Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SandLineTest(int32 QueryID, FVector StartPos, FVector EndPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetSunRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetSunOrMoonRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetSunColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetShadowBase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNextModifiableCloudKeyframe(int32 Layer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetMoonRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetKeyframeFloat(int32 KeyframeUid, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCloudMinAltitude();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCloudMaxAltitude();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CloudPointTest(int32 QueryID, FVector Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CloudLineTest(int32 QueryID, FVector StartPos, FVector EndPos);
    
};

