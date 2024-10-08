#pragma once
#include "SceneBase.h"
#include "../TKRLib\TKRLib.h"
#include "../Object/Fellow/Player.h"
#include "../Camera/Camera.h"



class SceneGame final
	: public SceneBase
{
public:
	SceneGame();
	~SceneGame()override;

	void Init();
	void Update();
	void Draw();
	void End();

private:
	TKRLib::Physics* physics;
	Player* player;
	Camera* m_camera;

};


