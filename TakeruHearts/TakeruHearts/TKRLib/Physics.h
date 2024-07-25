#pragma once
#include <list>

namespace TKRLib
{
	class Collidable;

	class Physics final
	{
	public:
		void Entry(const Collidable* collidable);
		void Exit(const Collidable* collidable);

		void Update();

	private:
		std::list<Collidable*> collidables;

	};
}

