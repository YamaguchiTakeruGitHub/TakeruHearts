#include "SceneTitle.h"


SceneTitle::SceneTitle()
	: imgBG				(-1)
	, buttonPoint		(-1)
	, nowSelect			()
	, buttonPointPos	()
	, NewGamePos		()
	, LoadGamePos		()
	, BackPos			()
	, pushBefore		()
	, pushNow			()
	
{
	DrawFormatString(0, 0, 0xffffff, "titleデストラクタ");
}

SceneTitle::~SceneTitle()
{
	DrawFormatString(0, 20, 0xffffff,"titleコンストラクタ");
	DeleteGraph(imgBG);
	DeleteGraph(buttonPoint);
}

void SceneTitle::Init()
{
	DrawFormatString(0, 40, 0xffffff, "title初期化");
	idm->Init();
	imgBG			= LoadGraph("../Data/Asset/img/TitleButtonRogo.png");
	buttonPoint		= LoadGraph("../Data/Asset/img/buttonPoint.png");
	buttonPointPos	= VGet(124.0f, 486.0f, 0.0f);
	NewGamePos		= VGet(124.0f, 486.0f, 0.0f);
	LoadGamePos		= VGet(124.0f, 553.0f, 0.0f);
	BackPos			= VGet(124.0f, 621.0f, 0.0f);

	nowSelect = eMenu_NewGame;

	pushBefore = 0;
	pushNow = 0;
}

void SceneTitle::Update()
{
	DrawFormatString(0, 60, 0xffffff, "title更新");
	idm->Update();



	//上が押されている時
	if (idm->joypad->isDUP == true)
	{
		nowSelect = (nowSelect + (eMenu_Num - 1)) % eMenu_Num;
		pushNow = 1;
	}
	if (idm->joypad->isDDOWN == true)
	{
		nowSelect = (nowSelect + 1) % eMenu_Num;
		pushNow = 1;
	}

	//選択した項目をAボタンで実行
	if (idm->joypad->isA == true)
	{
		switch (nowSelect)
		{
		case eMenu_NewGame:
			break;

		case eMenu_LoadGame:
			break;
		
		case eMenu_Back:
			break;
		}
	}
	
	//選択された項目の座標を格納
	switch (nowSelect)
	{
	case eMenu_NewGame:
		buttonPointPos.y = NewGamePos.y;
		break;
	case eMenu_LoadGame:
		buttonPointPos.y = LoadGamePos.y;
		break;
	case eMenu_Back:
		buttonPointPos.y = BackPos.y;
		break;
	}

}

void SceneTitle::Draw()
{
	DrawFormatString(0, 80, 0xffffff, "title描画");

	idm->Draw();
	DrawGraph(0,0,imgBG, true);

	DrawGraph(buttonPointPos.x, buttonPointPos.y, buttonPoint, true);

	DrawFormatString(100, 100, 0x000000, "x %f, y %f", buttonPointPos.x, buttonPointPos.y);

	switch (nowSelect)
	{
	case eMenu_NewGame:
		DrawFormatString(100, 120, 0x000000, "NewGame");
		break;
	case eMenu_LoadGame:
		DrawFormatString(100, 120, 0x000000, "LoadGame");
		break;
	case eMenu_Back:
		DrawFormatString(100, 120, 0x000000, "Back");
		break;
	}

	if (idm->joypad->isA == true)
	{
		switch (nowSelect)
		{
		case eMenu_NewGame:
			DrawFormatString(100, 120, 0x000000, "NewGameがおされたお");
			break;
		case eMenu_LoadGame:
			DrawFormatString(100, 120, 0x000000, "LoadGameがおされたお");
			break;
		case eMenu_Back:
			DrawFormatString(100, 120, 0x000000, "Backがおされたお");
			break;
		}
	}

	
}

void SceneTitle::End()
{
	DrawFormatString(0, 100, 0xffffff, "title解放");
	idm->End();
	DeleteGraph(imgBG);
	DeleteGraph(buttonPoint);
}


