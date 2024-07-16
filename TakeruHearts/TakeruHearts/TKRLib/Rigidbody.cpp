#include "Rigidbody.h"

TKRLib::Rigidbody::Rigidbody()
	:position(VGet(0.0f, 0.0f, 0.0f))
	,direction(VGet(0.0f,0.0f,0.0f))
	,velocity(VGet(0.0f,0.0f,0.0f))
{
}

void TKRLib::Rigidbody::Init()
{
	position = VGet(0.0f, 0.0f, 0.0f);
	direction = VGet(0.0f, 0.0f, 0.0f);
	velocity = VGet(0.0f, 0.0f, 0.0f);
}

void TKRLib::Rigidbody::SetVel(const VECTOR& set)
{
	velocity = set;
}
