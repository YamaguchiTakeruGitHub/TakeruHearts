#include "DxLib.h"
#include <cassert>
#include "Physics.h"
#include "Rigidbody.h"
#include "Collidable.h"

/// <summary>
/// �o�^
/// </summary>
/// <param name="collidable"></param>
void TKRLib::Physics::Entry(Collidable* collidable)
{
	//�o�^
	bool found = (std::find(collidables.begin(), collidables.end(), collidable) != collidables.end());
	if (!found)
	{
		collidables.emplace_back(collidable);
	}
	else//�o�^����Ă�����G���[��f��
	{
		assert(0 && "�w���collidable�͓o�^�ς݂���");
	}

	printfDx("�o�^�I\n");
}

/// <summary>
/// �o�^����
/// </summary>
/// <param name="collidable"></param>
void TKRLib::Physics::Exit(Collidable* collidable)
{

	//�o�^�̉���
	bool found = (std::find(collidables.begin(), collidables.end(), collidable) != collidables.end());
	if (found)
	{
		collidables.emplace_back(collidable);
	}
	else//�o�^����ĂȂ�������G���[��f��
	{
		assert(0 && "�w���collidable�͓o�^�ς݂���Ȃ���");
	}
	printfDx("�o�^�����I\n");
}

/// <summary>
/// �X�V�i�o�^���Ă���obj�̕���������A�Փ˒ʒm�j
/// </summary>
void TKRLib::Physics::Update()
{
	for (auto& item : collidables)
	{
		item->OnCollide();
	}

	printfDx("�o�^�I\n");
}
