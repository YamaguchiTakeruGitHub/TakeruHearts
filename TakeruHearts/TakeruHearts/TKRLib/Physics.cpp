#include "DxLib.h"
#include <cassert>
#include "Physics.h"
#include "Rigidbody.h"
#include "Collidable.h"


void TKRLib::Physics::Entry(const Collidable* collidable)
{
	bool found = (std::find(collidables.begin(), collidables.end(), collidable) != collidables.end());
	if (!found)
	{
		collidables.emplace_back(collidable);
	}
	else//ìoò^Ç≥ÇÍÇƒÇ¢ÇΩÇÁÉGÉâÅ[ÇìfÇ≠
	{
		assert(0 && "éwíËÇÃcollidableÇÕìoò^çœÇ›ÇæÇ®");
	}

	printfDx("ìoò^ÅI");
}

void TKRLib::Physics::Exit(const Collidable* collidable)
{
	bool found = (std::find(collidables.begin(), collidables.end(), collidable) != collidables.end());
	if (found)
	{
		collidables.emplace_back(collidable);
	}
	else//ìoò^Ç≥ÇÍÇƒÇ¢ÇΩÇÁÉGÉâÅ[ÇìfÇ≠
	{
		assert(0 && "éwíËÇÃcollidableÇÕìoò^çœÇ›Ç∂Ç·Ç»Ç¢Ç®");
	}
	printfDx("ìoò^âèúÅI");
}

void TKRLib::Physics::Update()
{
	for (auto& item : collidables)
	{
		item->OnCollide();
	}
	
	printfDx("ìoò^ÅI");
}
