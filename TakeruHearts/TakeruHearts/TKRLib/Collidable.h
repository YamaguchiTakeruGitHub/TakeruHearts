#pragma once

namespace TKRLib
{
	class Rigidbody;
	class Collidable abstract
	{
	public:
		virtual void OnCollide() abstract;

	private:
		Rigidbody rigidbody;
	};
}

