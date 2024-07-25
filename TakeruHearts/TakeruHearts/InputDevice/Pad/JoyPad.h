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
		DUP = 0,			//上
		DRIGHT = 9000,			//右
		DDOWN = 18000,			//下
		DLEFT = 27000,			//左
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
		int count;

	
	public:

		//別クラスで判定する用のフラグ
		bool isA;
		bool isB;
		bool isX;
		bool isY;
		bool isLB;
		bool isRB;
		bool isBACK;
		bool isSTART;
		bool isSTICKL;
		bool isSTICKR;

		bool isDUP;
		bool isDRIGHT;
		bool isDDOWN;
		bool isDLEFT;
	

	private:
		
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

