#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CAttributeComponent.generated.h"

UENUM(BlueprintType)
enum class EWalkSpeedType : uint8
{
	Sneak, Walk, Sprint, Max
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TPCPP_API UCAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCAttributeComponent();


private:
	UPROPERTY(EditDefaultsOnly, Category = "WalkSpeed")
		float WalkSpeeds[(int32)EWalkSpeedType::Max];
};
