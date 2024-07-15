#pragma once
#include "../Button/Button.h"

//overrideは継承したメソッドを新しい実装で再定義する処理

class ButtonTitleNewGame : public UI::Button
{
public:
	ButtonTitleNewGame();
	~ButtonTitleNewGame() override;

	void Push();
private:


		
};

