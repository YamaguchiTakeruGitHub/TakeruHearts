#pragma once

//�A�j���[�V�����𔻕ʂ��邽�߂̑��u
namespace Animation
{
	class AnimData abstract//���ۃN���X��
	{
	public:

		enum class Anim//�A�j���[�V�����̎��
		{
			Player,
			Companion,
			Enemy
		};

		AnimData(Anim anim) { this->anim = anim; }//�Z�b�^�[
		virtual ~AnimData() {}

		Anim GetAnim() const { return anim; }//�Q�b�^�[

	private:
		Anim anim;//�C���X�^���X��

		//�ʂɎ����Ă���
		/*float animTotalTime;
		float animNowTime;
		int animAttachIndex;
		int animMoveFrameIndex;*/


	};
}