#include "JoyPad.h"

InputDevice::JoyPad::JoyPad()
	: pad()
	, Pad1(GetJoypadInputState(DX_INPUT_PAD1))
	, count(0)
	, isA(false)
	, isB(false)
	, isX(false)
	, isY(false)
	, isLB(false)
	, isRB(false)
	, isBACK(false)
	, isSTART(false)
	, isSTICKL(false)
	, isSTICKR(false)
	, isDUP(false)
	, isDRIGHT(false)
	, isDDOWN(false)
	, isDLEFT(false)
{
}

InputDevice::JoyPad::~JoyPad()
{
}

void InputDevice::JoyPad::Init()
{
	Pad1 = GetJoypadInputState(DX_INPUT_PAD1);
	count = 0;

	isA = false;
	isB = false;
	isX = false;
	isY = false;
	isLB = false;
	isRB = false;
	isBACK = false;
	isSTART = false;
	isSTICKL = false;
	isSTICKR = false;

	isDUP = false;
	isDRIGHT = false;
	isDDOWN = false;
	isDLEFT = false;
}

void InputDevice::JoyPad::Update()
{

	
	isA = false;
	isB = false;
	isX = false;
	isY = false;
	isLB = false;
	isRB = false;
	isBACK = false;
	isSTART = false;
	isSTICKL = false;
	isSTICKR = false;

	isDUP = false;
	isDRIGHT = false;
	isDDOWN = false;
	isDLEFT = false;



	/*ボタン（start）*/

	//Aボタン
	if (pad.Buttons[PadButton::A])
	{
		//データの入る変数を作る
		//コンフィグから変更したデータの内容を呼び出す
		isA = true;
	}
	//Bボタン
	if (pad.Buttons[PadButton::B])
	{
		isB = true;
	}
	//Yボタン
	if (pad.Buttons[PadButton::Y])
	{
		isY = true;
	}
	//Xボタン
	if (pad.Buttons[PadButton::X])
	{
		isX = true;
	}
	//LBボタン
	if (pad.Buttons[PadButton::LB])
	{
		isLB = true;
	}
	//RBボタン
	if (pad.Buttons[PadButton::RB])
	{
		isRB = true;
	}
	//BACKボタン
	if (pad.Buttons[PadButton::BACK])
	{
		isBACK = true;
	}
	//STARTボタン
	if (pad.Buttons[PadButton::START])
	{
		isSTART = true;
	}
	//STICKLボタン
	if (pad.Buttons[PadButton::STICKL])
	{
		isSTICKL = true;
	}
	//STICKRボタン
	if (pad.Buttons[PadButton::STICKR])
	{
		isSTICKR = true;
	}



	/*ボタン（end）*/

	/*十字キー（start）*/
	switch (pad.POV[PadButton::CROSSKEY])
	{
	case PadButton::DUP://上
		count++;
		isDUP = true;
		break;

	case PadButton::DRIGHT://右
		count = 0;
		isDRIGHT = true;
		break;

	case PadButton::DDOWN://下
		count--;
		isDDOWN = true;
		break;

	case PadButton::DLEFT://左
		count = 1000;
		isDLEFT = true;
		break;

	default:
		break;
	}
	/*十字キー（end）*/

}



void InputDevice::JoyPad::Draw()
{
	//入力を取得
	GetJoypadDirectInputState(DX_INPUT_PAD1, &pad);


#if _DEBUG
	DrawFormatString(100, 100, 0xffffff, "%d", count);


	int i;
	int Color;


	// 画面に構造体の中身を描画
	Color = GetColor(255, 255, 255);
	DrawFormatString(0, 500, Color, "X:%d Y:%d Z:%d",
		pad.X, pad.Y, pad.Z);
	DrawFormatString(0, 516, Color, "Rx:%d Ry:%d Rz:%d",
		pad.Rx, pad.Ry, pad.Rz);
	DrawFormatString(0, 532, Color, "Slider 0:%d 1:%d",
		pad.Slider[0], pad.Slider[1]);
	DrawFormatString(0, 548, Color, "POV 0:%d 1:%d 2:%d 3:%d",
		pad.POV[0], pad.POV[1],
		pad.POV[2], pad.POV[3]);
	DrawString(0, 564, "Button", Color);
	for (i = 0; i < 32; i++)
	{
		DrawFormatString(64 + i % 8 * 64, 564 + i / 8 * 16, Color,
			"%2d:%d", i, pad.Buttons[i]);
	}

#endif

}

