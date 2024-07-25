#pragma once
#include "../ObjctBase.h"
#include "../TakeruHearts/TKRLib/Physics.h"
#include "../TakeruHearts/TKRLib/Collidable.h"
#include "../TakeruHearts/InputDevice/InputDeviceManager.h"

class Collidable;
class Player : public ObjctBase
{
public:
	Player();

	void Init(TKRLib::Physics* physics);
	void Final(TKRLib::Physics* physics);
	void Update();
	void Draw();
	
	void OnCollide() override;

private:
	InputDevice::InputDeviceManager* idm;

};

