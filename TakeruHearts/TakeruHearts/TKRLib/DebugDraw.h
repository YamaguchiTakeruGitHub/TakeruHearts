#pragma once
#include "DxLib.h"
#include <list>
namespace TKRLib
{
	class DebugDraw
	{
	public:
		static void Clear();
		static void Draw();

		static void DrawLine(const VECTOR& start, const VECTOR& end, int color);

	private:
		struct LineInfo
		{
			VECTOR start;
			VECTOR end;
			int color;
		};

	

		static std::list<LineInfo>lineInfo;
	};
}

