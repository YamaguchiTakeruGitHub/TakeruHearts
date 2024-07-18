#pragma once
class Controller
{
public:

	

	enum class ControlType
	{
		pad,
		keyboard,
		mouse,
		none
	};
	enum ControlType CType;
	enum ControlType CTypePlase;

	Controller();
	~Controller();

	void Init();
	void Update();
	void End();

private:
	int CheckType;


};

