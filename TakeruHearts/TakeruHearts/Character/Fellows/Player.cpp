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
	std::ifstream inputfile("../Data/AllVariables/PlayerData.json", std::ios::binary);

	if (!inputfile.is_open()) { assert(inputfile); }

	nlohmann::json jsonData;

	inputfile >> jsonData;

	speed = jsonData["speed"];

	inputfile.close();

	//各々初期化
	modelHandle = MV1LoadModel("../Data/Asset/model/Knight.mv1");

	rigidbody.Init();
	rigidbody.SetPos(VGet(0.0f, 0.0f, 0.0f));
}

void Character::Player::Update()
{
}

void Character::Player::Draw()
{
}

void Character::Player::End()
{
}
