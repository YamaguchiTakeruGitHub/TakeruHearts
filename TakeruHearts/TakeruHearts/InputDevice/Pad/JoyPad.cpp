#include "JoyPad.h"

InputDevice::JoyPad::JoyPad()
	: pad()
	, Pad1(GetJoypadInputState(DX_INPUT_PAD1))
	, count(0)
{
}

InputDevice::JoyPad::~JoyPad()
{
}

void InputDevice::JoyPad::Init()
{
	Pad1 = GetJoypadInputState(DX_INPUT_PAD1);
	count = 0;
}

void InputDevice::JoyPad::Update()
{
	/*ボタン（start）*/

	//Aボタン
	if (pad.Buttons[PadButton::A])
	{
		//データの入る変数を作る
		//コンフィグから変更したデータの内容を呼び出す
	}
	//Bボタン
	if (pad.Buttons[PadButton::B])
	{
	}
	//Yボタン
	if (pad.Buttons[PadButton::Y])
	{
	}
	//Xボタン
	if (pad.Buttons[PadButton::X])
	{
	}
	//LBボタン
	if (pad.Buttons[PadButton::LB])
	{
	}
	//RBボタン
	if (pad.Buttons[PadButton::RB])
	{
	}
	//BACKボタン
	if (pad.Buttons[PadButton::BACK])
	{
	}
	//STARTボタン
	if (pad.Buttons[PadButton::START])
	{
	}
	//STICKLボタン
	if (pad.Buttons[PadButton::STICKL])
	{
	}
	//STICKRボタン
	if (pad.Buttons[PadButton::STICKR])
	{
	}

	


	/*ボタン（end）*/

	/*十字キー（start）*/
	switch (pad.POV[PadButton::CROSSKEY])
	{
	case PadButton::DUP://上
		count++;
		break;

	case PadButton::DRIGHT://右
		count = 0;
		break;

	case PadButton::DDOWN://下
		count--;
		break;

	case PadButton::DLEFT://左
		count = 1000;
		break;

	default:
		break;
	}
	/*十字キー（end）*/


}



void InputDevice::JoyPad::Draw()
{
	// 入力状態を取得
#if _DEBUG
	DrawFormatString(100, 100, 0xffffff, "%d", count);


	int i;
	int Color;

	GetJoypadDirectInputState(DX_INPUT_PAD1, &pad);

	// 画面に構造体の中身を描画
	Color = GetColor(255, 255, 255);
	DrawFormatString(0, 300, Color, "X:%d Y:%d Z:%d",
		pad.X, pad.Y, pad.Z);
	DrawFormatString(0, 316, Color, "Rx:%d Ry:%d Rz:%d",
		pad.Rx, pad.Ry, pad.Rz);
	DrawFormatString(0, 332, Color, "Slider 0:%d 1:%d",
		pad.Slider[0], pad.Slider[1]);
	DrawFormatString(0, 348, Color, "POV 0:%d 1:%d 2:%d 3:%d",
		pad.POV[0], pad.POV[1],
		pad.POV[2], pad.POV[3]);
	DrawString(0, 364, "Button", Color);
	for (i = 0; i < 32; i++)
	{
		DrawFormatString(64 + i % 8 * 64, 364 + i / 8 * 16, Color,
			"%2d:%d", i, pad.Buttons[i]);
	}

#endif

}
