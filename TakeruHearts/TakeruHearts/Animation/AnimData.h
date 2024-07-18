#pragma once

//アニメーションを判別するための装置
namespace Animation
{
	class AnimData abstract//抽象クラス化
	{
	public:

		enum class Anim//アニメーションの種類
		{
			Player,
			Companion,
			Enemy
		};

		AnimData(Anim anim) { this->anim = anim; }//セッター
		virtual ~AnimData() {}

		Anim GetAnim() const { return anim; }//ゲッター

	private:
		Anim anim;//インスタンス化

		//個別に持っていく
		/*float animTotalTime;
		float animNowTime;
		int animAttachIndex;
		int animMoveFrameIndex;*/


	};
}