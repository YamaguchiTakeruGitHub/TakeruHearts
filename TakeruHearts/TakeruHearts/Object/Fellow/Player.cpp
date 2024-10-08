#include "Player.h"
#include "../TakeruHearts/TKRLib/TKRLib.h"

Player::Player()
{
	idm = new InputDevice::InputDeviceManager();
}

void Player::Init(TKRLib::Physics* physics)
{
	idm->Init();
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
	idm->End();

	idm = nullptr;
	delete idm;

}

void Player::Update()
{
	idm->Update();

	VECTOR dir = VGet(0.0f, 0.0f, 0.0f);
	dir.x = 0.0f;
	dir.y = 0.0f;
	dir.z = 0.0f;
}

void Player::Draw()
{
	idm->Draw();
	MV1DrawModel(modelHandle);
	DrawSphere3D(rigidbody.GetPos(), 80.0f, 32, 0xffffff, 0xffffff, true);
}

void Player::OnCollide()
{
	printfDx("プレイヤー衝突！");
}