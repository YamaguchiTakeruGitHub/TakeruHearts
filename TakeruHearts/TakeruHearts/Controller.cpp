#include "Controller.h"
#include "DxLib.h"
#include <../nlohmann/json.hpp>
#include <fstream>
#include <iostream>
#include <cassert>
#include <memory>

Controller::Controller()
	: CheckType()
	, CType()
	, CTypePlase()
	
{
}

Controller::~Controller()
{
}

void Controller::Init()
{
	
}

void Controller::Update()
{
	XINPUT_STATE input;

	//キーボードかマウスの入力を得るとキーボードがスタンバイする
	if (CheckHitKeyAll(CheckType = DX_CHECKINPUT_KEY) && CheckHitKeyAll(CheckType = DX_CHECKINPUT_MOUSE))
	{
		CType = ControlType::keyboard;
		CTypePlase = ControlType::mouse;
	}

	//パッドの入力を得るとパッドがスタンバイする
	if (CheckHitKeyAll(CheckType = DX_CHECKINPUT_PAD))
	{
		CType = ControlType::pad;
		CTypePlase = ControlType::none;
	}

	if (CType == ControlType::keyboard && CTypePlase == ControlType::mouse)
	{
		if (CheckHitKey(KEY_INPUT_W) != 0)
		{
		}
		if (CheckHitKey(KEY_INPUT_S) != 0)
		{
		}
		if (CheckHitKey(KEY_INPUT_A) != 0)
		{
		}
		if (CheckHitKey(KEY_INPUT_D) != 0)
		{
		}
	}

	if (CType == ControlType::pad && CTypePlase == ControlType::none)
	{
		GetJoypadXInputState(DX_INPUT_PAD1, &input);

		if (CheckHitKey(XINPUT_BUTTON_A) != 0)
		{
			
		}
		if (CheckHitKey(XINPUT_BUTTON_B) != 0)
		{
			
		}
		if (CheckHitKey(XINPUT_BUTTON_X) != 0)
		{
			
		}
		if (CheckHitKey(XINPUT_BUTTON_Y) != 0)
		{
			
		}
	}
}

void Controller::End()
{
}
