#pragma once
#include <list>

namespace TKRLib
{
	class Collidable;
	class Physics final
	{
	public:
		void Entry(Collidable* collidable);
		void Exit(Collidable* collidable);

		void Update();

	private:
		std::list<Collidable*> collidables;
	};
}

