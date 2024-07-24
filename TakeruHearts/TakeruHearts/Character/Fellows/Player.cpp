#include "Player.h"
#include <../nlohmann/json.hpp>
#include <fstream>
#include <iostream>
#include <cassert>
#include <memory>

Character::Player::Player()
	:speed()
{
}

Character::Player::~Player()
{
}

void Character::Player::Init()
{
	//外部ファイル
	std::ifstream padfile("../Data/AllVariables/PlayerData.json", std::ios::binary);

	if (!padfile.is_open()) { assert(padfile); }

	nlohmann::json jsonData;

	padfile >> jsonData;

	speed = jsonData["speed"];

	padfile.close();

	//各々初期化
	modelHandle = MV1LoadModel("../Data/Asset/model/Knight.mv1");

	rigidbody.Init();
	rigidbody.SetPos(VGet(0.0f, 0.0f, 0.0f));
}

void Character::Player::Update()
{
	MV1SetPosition(modelHandle, rigidbody.GetPos());

}

void Character::Player::Draw()
{
	MV1DrawModel(modelHandle);
}

void Character::Player::End()
{
	MV1DeleteModel(modelHandle);
}
