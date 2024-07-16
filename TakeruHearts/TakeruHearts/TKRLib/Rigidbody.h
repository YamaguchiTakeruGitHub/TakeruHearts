#pragma once
#include "DxLib.h"

namespace TKRLib
{
	class Rigidbody
	{
	public:
		Rigidbody();

		void Init();

 
		const VECTOR& GetPos() const { return position; }
		const VECTOR& GetDir() const { return direction; }
		const VECTOR& GetVel() const { return velocity; }

		void SetPos(const VECTOR& set) { position = set; }
		void SetDir(const VECTOR& set) { direction = set; }
		void SetVel(const VECTOR& set);

	private:
		VECTOR position;
		VECTOR direction;
		VECTOR velocity;

	};

}
