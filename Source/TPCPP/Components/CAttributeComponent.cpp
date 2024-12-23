#include "CAttributeComponent.h"

UCAttributeComponent::UCAttributeComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	WalkSpeeds[(int32)EWalkSpeedType::Sneak] = 200.f;
	WalkSpeeds[(int32)EWalkSpeedType::Walk] = 400.f;
	WalkSpeeds[(int32)EWalkSpeedType::Sprint] = 600.f;
	
	
}



