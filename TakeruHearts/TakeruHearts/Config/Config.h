#pragma once
#include <map>
#include <string>
#include <vector>

namespace CONFIG
{
	enum class InputType
	{
		keyboard,
		gamepad,
		mouse
	};

	struct InputMapInfo
	{
		InputType type;
		int buttonID;
	};

	using InputActionMap_t = std::map<std::string, std::vector<InputMapInfo>>;

	class Config
	{
	public:
		std::map<std::string, int> InputAllocationMap;

		void Update();
		void Draw();
		void End();

	

	};
}

