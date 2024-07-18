#pragma once
#include "SceneBase.h"


class UI;
class SceneTitle final
	: public SceneBase
{
public:
	SceneTitle();
	~SceneTitle() override;

	void Init();
	void Update();
	void Draw();
	void End();

private:
	UI* ui;
};

