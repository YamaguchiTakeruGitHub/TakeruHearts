#include "AnimationManager.h"

using namespace Animation;

AnimationManager::AnimationManager(AnimData::Anim animTarget)
{
	CreateAnimationData(animTarget);
}

AnimData* AnimationManager::CreateAnimationData(AnimData::Anim anim)
{
	if (animData != nullptr)
	{
		return animData;
	}
	else
	if (anim == AnimData::Anim::Player)
	{
		//�v���C���[�A�j���[�V�����f�[�^�̃R���X�g���N�^��������new
	}
	else
	if (anim == AnimData::Anim::Companion)
	{
	}
	else
	if (anim == AnimData::Anim::Enemy)
	{
	}

	
	return animData;
}
