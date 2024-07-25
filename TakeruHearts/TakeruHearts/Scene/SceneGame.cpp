#include "SceneGame.h"


SceneGame::SceneGame()
{
	DrawFormatString(0, 0, 0xffffff, "Gameデストラクタ");

	physics = new TKRLib::Physics;

	player = new Player;
}

SceneGame::~SceneGame()
{
	DrawFormatString(0, 20, 0xffffff, "Gameコンストラクタ");
	physics = nullptr;
	delete(physics);
	player = nullptr;
	delete(physics);
}

void SceneGame::Init()
{
	DrawFormatString(0, 40, 0xffffff, "Game初期化");
	idm->Init();
	player->Init(physics);
}

void SceneGame::Update()
{
	DrawFormatString(0, 60, 0xffffff, "Game更新");
	idm->Update();
	player->Update();
}

void SceneGame::Draw()
{
	DrawFormatString(0, 80, 0xffffff, "Game描画");
	idm->Draw();
	player->Draw();
}

void SceneGame::End()
{
	DrawFormatString(0, 100, 0xffffff, "Game解放");
	idm->End();
	player->Final(physics);
}
