#pragma once
#include <DxLib.h>
#include <memory>
namespace InputDevice
{

	/// <summary>
	/// �p�b�h�̊e�{�^����X���C�_�[
	/// </summary>
	enum PadButton
	{
		//�{�^��
		A = 0,
		B = 1,
		X = 2,
		Y = 3,
		LB = 4,
		RB = 5,
		BACK = 6,
		START = 7,
		STICKL = 8,
		STICKR = 9,

		/*�\���L�[*/
		CROSSKEY = 0,
		DUP = false,			//��
		DRIGHT = false,			//�E
		DDOWN = false,			//��
		DLEFT = false,			//��
		DNONE = true			//�������ĂȂ�
	};

	class JoyPad
	{
	public:
		JoyPad();
		~JoyPad();

		void Init();
		void Update();
		void Draw();

	private:
		DINPUT_JOYSTATE pad;

		int Pad1;
	};
}

