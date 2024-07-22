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
	/*�{�^���istart�j*/

	//A�{�^��
	if (pad.Buttons[PadButton::A])
	{
		//�f�[�^�̓���ϐ������
		//�R���t�B�O����ύX�����f�[�^�̓��e���Ăяo��
	}
	//B�{�^��
	if (pad.Buttons[PadButton::B])
	{
	}
	//Y�{�^��
	if (pad.Buttons[PadButton::Y])
	{
	}
	//X�{�^��
	if (pad.Buttons[PadButton::X])
	{
	}
	//LB�{�^��
	if (pad.Buttons[PadButton::LB])
	{
	}
	//RB�{�^��
	if (pad.Buttons[PadButton::RB])
	{
	}
	//BACK�{�^��
	if (pad.Buttons[PadButton::BACK])
	{
	}
	//START�{�^��
	if (pad.Buttons[PadButton::START])
	{
	}
	//STICKL�{�^��
	if (pad.Buttons[PadButton::STICKL])
	{
	}
	//STICKR�{�^��
	if (pad.Buttons[PadButton::STICKR])
	{
	}

	


	/*�{�^���iend�j*/

	/*�\���L�[�istart�j*/
	switch (pad.POV[PadButton::CROSSKEY])
	{
	case PadButton::DUP://��
		count++;
		break;

	case PadButton::DRIGHT://�E
		count = 0;
		break;

	case PadButton::DDOWN://��
		count--;
		break;

	case PadButton::DLEFT://��
		count = 1000;
		break;

	default:
		break;
	}
	/*�\���L�[�iend�j*/


}



void InputDevice::JoyPad::Draw()
{
	// ���͏�Ԃ��擾
#if _DEBUG
	DrawFormatString(100, 100, 0xffffff, "%d", count);


	int i;
	int Color;

	GetJoypadDirectInputState(DX_INPUT_PAD1, &pad);

	// ��ʂɍ\���̂̒��g��`��
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
