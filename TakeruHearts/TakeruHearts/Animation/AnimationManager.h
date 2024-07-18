#pragma once
#include "AnimData.h"

namespace Animation
{
	class AnimData;
	class AnimationManager
	{
	public:
		//アニメーションコンストラクタ追加する
		AnimationManager(AnimData::Anim animTarget);

	protected:
		
		AnimData* animData;//アニメーション判定データ
	private:
		AnimData* CreateAnimationData(AnimData::Anim anim);

	};

}
