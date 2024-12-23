#include "CAttributeComponent.h"

UCAttributeComponent::UCAttributeComponent()
{
	WalkSpeeds[(int32)EWalkSpeedType::Sneak] = 200.f;
	WalkSpeeds[(int32)EWalkSpeedType::Walk] = 400.f;
	WalkSpeeds[(int32)EWalkSpeedType::Sprint] = 600.f;

	//Todo. 이동 기능은 내일...
}