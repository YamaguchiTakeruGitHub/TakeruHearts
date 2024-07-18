#include "Config.h"

CONFIG::Config::Config()
	:InputAllocationMap()
{
}

CONFIG::Config::~Config()
{
}

void CONFIG::Config::Init()
{
	InputAllocationMap["OK"];
	InputAllocationMap["CANCEL"];
	InputAllocationMap["MENU"];
	InputAllocationMap["UP"];
	InputAllocationMap["DOWN"];
	InputAllocationMap["LEFT"];
	InputAllocationMap["RIGHT"];

}

void CONFIG::Config::Update()
{
}

void CONFIG::Config::Draw()
{
}

void CONFIG::Config::End()
{
}
