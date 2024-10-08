#include "DebugDraw.h"

std::list<TKRLib::DebugDraw::LineInfo> TKRLib::DebugDraw::lineInfo;

void TKRLib::DebugDraw::Clear()
{
	lineInfo.clear();
}

void TKRLib::DebugDraw::Draw()
{
	for (const auto& item : lineInfo)
	{
		DxLib::DrawLine(static_cast<int>(item.start.x),
			static_cast<int>(item.start.y),
			static_cast<int>(item.end.x),
			static_cast<int>(item.end.y),
			item.color);
	}
}

void TKRLib::DebugDraw::DrawLine(const VECTOR& start, const VECTOR& end, int color)
{
	LineInfo newInfo{};
	newInfo.start = start;
	newInfo.end = end;
	newInfo.color = color;
	lineInfo.push_back(newInfo);
}

