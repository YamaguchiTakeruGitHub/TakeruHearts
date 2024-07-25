#pragma once
#include "Rigidbody.h"
#include "Physics.h"

namespace TKRLib
{
	class Rigidbody;
	class Physics;
	class Collidable abstract
	{
	public:
		virtual void OnCollide() abstract;

	protected:
		Rigidbody rigidbody;

		friend Physics;
	};
}

