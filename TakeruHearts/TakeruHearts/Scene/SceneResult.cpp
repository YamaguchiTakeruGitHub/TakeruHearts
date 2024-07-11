#include "SceneResult.h"

SceneResult::SceneResult()
{
	DrawFormatString(0, 0, 0xffffff, "Resultデストラクタ");
}

SceneResult::~SceneResult()
{
	DrawFormatString(0, 20, 0xffffff, "Resultコンストラクタ");
}

void SceneResult::Init()
{
	DrawFormatString(0, 40, 0xffffff, "Result初期化");
}

void SceneResult::Update()
{
	DrawFormatString(0, 60, 0xffffff, "Result更新");
}

void SceneResult::Draw()
{
	DrawFormatString(0, 80, 0xffffff, "Result描画");
}

void SceneResult::End()
{
	DrawFormatString(0, 100, 0xffffff, "Result解放");
}


