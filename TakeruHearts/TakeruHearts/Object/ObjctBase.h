#pragma once
#include "../TKRLib/Physics.h"
#include "../TKRLib/Collidable.h"


class Physics;
class ObjctBase : public TKRLib::Collidable
{
public:
	ObjctBase();
	virtual ~ObjctBase();
	virtual void Init(TKRLib::Physics* physics) = 0;
	virtual void Final(TKRLib::Physics* physics) = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	virtual void OnCollide() = 0;

protected:
	int modelHandle;
	float speed;
	

};

