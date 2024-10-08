#include "DxLib.h"
#include <cassert>
#include "../TKRLib/TKRLib.h"

/// <summary>
/// “o˜^
/// </summary>
/// <param name="collidable"></param>
void TKRLib::Physics::Entry(Collidable* collidable)
{
	//“o˜^
	bool found = (std::find(collidables.begin(), collidables.end(), collidable) != collidables.end());
	if (!found)
	{
		collidables.emplace_back(collidable);
	}
	else//“o˜^‚³‚ê‚Ä‚¢‚½‚çƒGƒ‰[‚ğ“f‚­
	{
		assert(0 && "w’è‚Ìcollidable‚Í“o˜^Ï‚İ‚¾‚¨");
	}

	printfDx("“o˜^I\n");
}

/// <summary>
/// “o˜^‰ğœ
/// </summary>
/// <param name="collidable"></param>
void TKRLib::Physics::Exit(Collidable* collidable)
{

	//“o˜^‚Ì‰ğœ
	bool found = (std::find(collidables.begin(), collidables.end(), collidable) != collidables.end());
	if (found)
	{
		collidables.emplace_back(collidable);
	}
	else//“o˜^‚³‚ê‚Ä‚È‚©‚Á‚½‚çƒGƒ‰[‚ğ“f‚­
	{
		assert(0 && "w’è‚Ìcollidable‚Í“o˜^Ï‚İ‚¶‚á‚È‚¢‚¨");
	}
	printfDx("“o˜^‰ğœI\n");
}

/// <summary>
/// XVi“o˜^‚µ‚Ä‚¢‚éobj‚Ì•¨—ˆ—‚âAÕ“Ë’Ê’mj
/// </summary>
void TKRLib::Physics::Update()
{
	for (auto& item : collidables)
	{
		item->OnCollide();

		auto pos = item->rigidbody.GetPos();
		auto nextPos = VAdd(pos, item->rigidbody.GetVelocity());
#if _DEBUG
		DebugDraw::DrawLine(pos, nextPos, 0xff00ff);
#endif
		item->rigidbody.SetPos(nextPos);

	}

	printfDx("“o˜^I\n");
}
