#pragma once
#include "../TKRLib/Rigidbody.h"
#include "../Status/StatusMaster.h"


namespace Character
{
	class Rigidbody;
	class StatusMaster;
	class CharacterBase
	{
	public:
		CharacterBase();
		virtual ~CharacterBase() {};


	protected:
		TKRLib::Rigidbody rigidbody;
		

		int modelHandle;
		
	};

}
