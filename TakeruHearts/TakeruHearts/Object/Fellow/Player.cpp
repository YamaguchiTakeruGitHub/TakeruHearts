#include "Player.h"

void Player::Init(TKRLib::Physics* physics)
{
	physics->Entry(this);
}

void Player::Final(TKRLib::Physics* physics)
{
	physics->Exit(this);
}

void Player::Update()
{
}

void Player::Draw()
{
}

void Player::OnCollide()
{
	printfDx("プレイヤー衝突！");
}