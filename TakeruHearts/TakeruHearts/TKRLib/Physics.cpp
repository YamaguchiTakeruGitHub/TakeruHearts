#include "DxLib.h"
#include <cassert>
#include "Physics.h"
#include "Rigidbody.h"
#include "Collidable.h"

/// <summary>
/// 登録
/// </summary>
/// <param name="collidable"></param>
void TKRLib::Physics::Entry(Collidable* collidable)
{
	//登録
	bool found = (std::find(collidables.begin(), collidables.end(), collidable) != collidables.end());
	if (!found)
	{
		collidables.emplace_back(collidable);
	}
	else//登録されていたらエラーを吐く
	{
		assert(0 && "指定のcollidableは登録済みだお");
	}

	printfDx("登録！\n");
}

/// <summary>
/// 登録解除
/// </summary>
/// <param name="collidable"></param>
void TKRLib::Physics::Exit(Collidable* collidable)
{

	//登録の解除
	bool found = (std::find(collidables.begin(), collidables.end(), collidable) != collidables.end());
	if (found)
	{
		collidables.emplace_back(collidable);
	}
	else//登録されてなかったらエラーを吐く
	{
		assert(0 && "指定のcollidableは登録済みじゃないお");
	}
	printfDx("登録解除！\n");
}

/// <summary>
/// 更新（登録しているobjの物理処理や、衝突通知）
/// </summary>
void TKRLib::Physics::Update()
{
	for (auto& item : collidables)
	{
		item->OnCollide();
	}

	printfDx("登録！\n");
}
