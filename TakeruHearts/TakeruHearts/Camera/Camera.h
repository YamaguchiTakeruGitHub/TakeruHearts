#pragma once
#include "DxLib.h"
class Camera
{
public:
	Camera();
	void Update();

private:
	float fov;
	float fovRad;
	VECTOR pos;
	float posRad;

	constexpr static float DefaultFov		= 60.0f;
	constexpr static float FovRange			= 30.0f;
	constexpr static float FovChangeSpeed	= 0.01f;
	constexpr static float Posrange			= 3.0f;
	constexpr static float PosChangeSpeed	= 0.03f;
};

