#include "Player.h"
#include "../TakeruHearts/TKRLib/TKRLib.h"

Player::Player()
{
}

void Player::Init(TKRLib::Physics* physics)
{
	physics->Entry(this);

	rigidbody.Init();
	rigidbody.SetPos(VGet(0.0f, 0.0f, 0.0f));

	modelHandle = -1;
	speed = 5;
}

void Player::Final(TKRLib::Physics* physics)
{
	physics->Exit(this);
	MV1DeleteModel(modelHandle);
}

void Player::Update()
{
	VECTOR dir = VGet(0, 0, 0);
	dir.x = 0;
	dir.y = 0;
	


	MV1SetPosition(modelHandle, rigidbody.GetPos());
}

void Player::Draw()
{
	MV1DrawModel(modelHandle);
}

void Player::OnCollide()
{
	printfDx("プレイヤー衝突！");
}