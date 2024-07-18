#pragma once
#include "AnimData.h"

namespace Animation
{
	class AnimData;
	class AnimationManager
	{
	public:
		//�A�j���[�V�����R���X�g���N�^�ǉ�����
		AnimationManager(AnimData::Anim animTarget);

	protected:
		
		AnimData* animData;//�A�j���[�V��������f�[�^
	private:
		AnimData* CreateAnimationData(AnimData::Anim anim);

	};

}
