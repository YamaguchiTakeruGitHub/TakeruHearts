#pragma once
#include "Rigidbody.h"
#include "DxLib.h"

namespace TKRLib
{
	class Rigidbody;
	class Physics;

	class Collidable abstract
	{
	public:
		virtual void OnCollidable() abstract;
	
	protected:
		TKRLib::Rigidbody rigidbody;

		friend Physics;
	};
}

