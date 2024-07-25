#pragma once
#include "SceneBase.h"

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
	int imgBG;
	
	int nowSelect;
	bool isDUPButtonPressed;
	bool isDDOWNButtonPressed;


	int buttonPoint;

	VECTOR buttonPointPos;

	VECTOR NewGamePos;
	VECTOR LoadGamePos;
	VECTOR BackPos;

	int pushNow;
	int pushBefore;



	typedef enum 
	{
		eMenu_NewGame,
		eMenu_LoadGame,
		eMenu_Back,

		eMenu_Num,

	}eMenu;



};

