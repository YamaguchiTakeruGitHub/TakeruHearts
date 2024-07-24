#include "SceneGame.h"


SceneGame::SceneGame()
{
	DrawFormatString(0, 0, 0xffffff, "Game�f�X�g���N�^");
	m_player = new Character::Player;
}

SceneGame::~SceneGame()
{
	m_player = nullptr;
	delete m_player;

	DrawFormatString(0, 20, 0xffffff, "Game�R���X�g���N�^");
}

void SceneGame::Init()
{
	DrawFormatString(0, 40, 0xffffff, "Game������");
	idm->Init();
	m_player->Init();
}

void SceneGame::Update()
{
	DrawFormatString(0, 60, 0xffffff, "Game�X�V");
	idm->Update();
	m_player->Update();
}

void SceneGame::Draw()
{
	DrawFormatString(0, 80, 0xffffff, "Game�`��");
	idm->Draw();
	m_player->Draw();
}

void SceneGame::End()
{
	DrawFormatString(0, 100, 0xffffff, "Game���");
	idm->End();
	m_player->End();
}
