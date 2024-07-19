#pragma once
#include <DxLib.h>
#include <memory>
namespace InputDevice
{

	/// <summary>
	/// パッドの各ボタンやスライダー
	/// </summary>
	enum PadButton
	{
		//ボタン
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

		/*十字キー*/
		CROSSKEY = 0,
		DUP = false,			//上
		DRIGHT = false,			//右
		DDOWN = false,			//下
		DLEFT = false,			//左
		DNONE = true			//何もしてない
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

