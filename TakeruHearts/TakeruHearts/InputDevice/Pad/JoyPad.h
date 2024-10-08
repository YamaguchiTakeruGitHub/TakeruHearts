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
		STICKBL = 8,
		STICKBR = 9,

		/*�\���L�[*/
		CROSSKEY = 0,
		DUP = 0,			//��
		DRIGHT = 9000,			//�E
		DDOWN = 18000,			//��
		DLEFT = 27000,			//��
		DNONE = true,			//�������ĂȂ�
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
		int count;

	
	public:

		//�ʃN���X�Ŕ��肷��p�̃t���O
		bool isA;
		bool isB;
		bool isX;
		bool isY;
		bool isLB;
		bool isRB;
		bool isBACK;
		bool isSTART;
		bool isSTICKBL;
		bool isSTICKBR;

		bool isDUP;
		bool isDRIGHT;
		bool isDDOWN;
		bool isDLEFT;
	


	private:
		/*�������ݏu�Ԃ̍ۂ̃t���O*/
		bool pisA;
		bool pisB;
		bool pisX;
		bool pisY;
		bool pisLB;
		bool pisRB;
		bool pisBACK;
		bool pisSTART;
		bool pisSTICKL;
		bool pisSTICKR;

		bool pisDUP;
		bool pisDRIGHT;
		bool pisDDOWN;
		bool pisDLEFT;

	};
}

