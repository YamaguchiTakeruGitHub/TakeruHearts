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



	/*�{�^���istart�j*/

	//A�{�^��
	if (pad.Buttons[PadButton::A])
	{
		//�f�[�^�̓���ϐ������
		//�R���t�B�O����ύX�����f�[�^�̓��e���Ăяo��
		isA = true;
	}
	//B�{�^��
	if (pad.Buttons[PadButton::B])
	{
		isB = true;
	}
	//Y�{�^��
	if (pad.Buttons[PadButton::Y])
	{
		isY = true;
	}
	//X�{�^��
	if (pad.Buttons[PadButton::X])
	{
		isX = true;
	}
	//LB�{�^��
	if (pad.Buttons[PadButton::LB])
	{
		isLB = true;
	}
	//RB�{�^��
	if (pad.Buttons[PadButton::RB])
	{
		isRB = true;
	}
	//BACK�{�^��
	if (pad.Buttons[PadButton::BACK])
	{
		isBACK = true;
	}
	//START�{�^��
	if (pad.Buttons[PadButton::START])
	{
		isSTART = true;
	}
	//STICKL�{�^��
	if (pad.Buttons[PadButton::STICKL])
	{
		isSTICKL = true;
	}
	//STICKR�{�^��
	if (pad.Buttons[PadButton::STICKR])
	{
		isSTICKR = true;
	}



	/*�{�^���iend�j*/

	/*�\���L�[�istart�j*/
	switch (pad.POV[PadButton::CROSSKEY])
	{
	case PadButton::DUP://��
		count++;
		isDUP = true;
		break;

	case PadButton::DRIGHT://�E
		count = 0;
		isDRIGHT = true;
		break;

	case PadButton::DDOWN://��
		count--;
		isDDOWN = true;
		break;

	case PadButton::DLEFT://��
		count = 1000;
		isDLEFT = true;
		break;

	default:
		break;
	}
	/*�\���L�[�iend�j*/

}



void InputDevice::JoyPad::Draw()
{
	//���͂��擾
	GetJoypadDirectInputState(DX_INPUT_PAD1, &pad);


#if _DEBUG
	DrawFormatString(100, 100, 0xffffff, "%d", count);


	int i;
	int Color;


	// ��ʂɍ\���̂̒��g��`��
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

