#include "Physics.h"
#include "DxLib.h"
#include "TKRLib.h"
#include <cassert>

void TKRLib::Physics::Entry(Collidable* collidable)
{
	bool found = (std::find(collidables.begin(), collidables.end(), collidable) != collidables.end());
	if (!found)
	{
		collidables.emplace_back(collidable);
	}
	else
	{
		assert(0 && "選ばれたclooidableは登録されてるよ");
	}
}

void TKRLib::Physics::Exit(Collidable* collidable)
{
	bool found = (std::find(collidables.begin(), collidables.end(), collidable) != collidables.end());
	if (!found)
	{
		collidables.remove(collidable);
	}
	else
	{
		assert(0 && "選ばれたclooidableは登録されてないお");
	}
}

void TKRLib::Physics::Update()
{
	for (auto& item : collidables)
	{
		auto pos = item->rigidbody.GetPos();
		auto nextPos = VAdd(pos, item->rigidbody.GetVel());

		item->rigidbody.SetPos(nextPos);

		//if (/*衝突したら*/)
		//{
		//	//衝突によるポジション補正
		//	//衝突通知
		//}
	}
}
