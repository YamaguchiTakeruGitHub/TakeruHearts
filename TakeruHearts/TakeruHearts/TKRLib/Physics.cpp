#include "DxLib.h"
#include <cassert>
#include "Physics.h"
#include "Rigidbody.h"
#include "Collidable.h"


void TKRLib::Physics::Entry(const Collidable* collidable)
{
	bool found = (std::find(collidables.begin(), collidables.end(), collidable) != collidables.end());
	if (!found)
	{
		collidables.emplace_back(collidable);
	}
	else//�o�^����Ă�����G���[��f��
	{
		assert(0 && "�w���collidable�͓o�^�ς݂���");
	}

	printfDx("�o�^�I");
}

void TKRLib::Physics::Exit(const Collidable* collidable)
{
	bool found = (std::find(collidables.begin(), collidables.end(), collidable) != collidables.end());
	if (found)
	{
		collidables.emplace_back(collidable);
	}
	else//�o�^����Ă�����G���[��f��
	{
		assert(0 && "�w���collidable�͓o�^�ς݂���Ȃ���");
	}
	printfDx("�o�^�����I");
}

void TKRLib::Physics::Update()
{
	for (auto& item : collidables)
	{
		item->OnCollide();
	}
	
	printfDx("�o�^�I");
}
