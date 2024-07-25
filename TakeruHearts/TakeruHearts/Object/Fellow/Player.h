#pragma once
#include "../TakeruHearts/TKRLib/Collidable.h"
#include "../TakeruHearts/TKRLib/TKRLib.h"
class Physics;
class Collidable;

class Player : public TKRLib::Collidable
{
public:
	void Init(TKRLib::Physics* physics);
	void Final(TKRLib::Physics* physics);
	void Update();
	void Draw();
	
	void OnCollide() override;

};

