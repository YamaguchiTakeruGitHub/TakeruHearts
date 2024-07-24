#include "SceneGame.h"


SceneGame::SceneGame()
{
	DrawFormatString(0, 0, 0xffffff, "Gameデストラクタ");
	m_player = new Character::Player;
}

SceneGame::~SceneGame()
{
	m_player = nullptr;
	delete m_player;

	DrawFormatString(0, 20, 0xffffff, "Gameコンストラクタ");
}

void SceneGame::Init()
{
	DrawFormatString(0, 40, 0xffffff, "Game初期化");
	idm->Init();
	m_player->Init();
}

void SceneGame::Update()
{
	DrawFormatString(0, 60, 0xffffff, "Game更新");
	idm->Update();
	m_player->Update();
}

void SceneGame::Draw()
{
	DrawFormatString(0, 80, 0xffffff, "Game描画");
	idm->Draw();
	m_player->Draw();
}

void SceneGame::End()
{
	DrawFormatString(0, 100, 0xffffff, "Game解放");
	idm->End();
	m_player->End();
}
