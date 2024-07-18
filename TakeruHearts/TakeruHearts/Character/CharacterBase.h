#pragma once
#include "../TKRLib/Rigidbody.h"
#include "../Status/StatusMaster.h"
#include "../Animation/AnimationManager.h"

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
		/*Status::StatusMaster status;
		Animation::AnimationManager animManager;*/

		int modelHandle;
		
	};

}
