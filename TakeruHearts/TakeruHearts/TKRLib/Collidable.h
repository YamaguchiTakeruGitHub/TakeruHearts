#pragma once
namespace TKRLib
{ 
	class Rigidbody;
	class Collidable
	{
	public:

		Collidable();
		virtual ~Collidable();
		virtual void Init();
		virtual void End();

	protected:
		Rigidbody rigidbody;

	};

}
