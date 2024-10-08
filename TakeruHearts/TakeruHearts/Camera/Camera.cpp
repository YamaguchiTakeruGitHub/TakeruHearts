#include "Camera.h"
#include <math.h>

Camera::Camera()
	: fov(60.0f)
	, fovRad(0.0f)
	, pos(VGet(0,0,0))
	, posRad(0.0f)
{
	SetCameraNearFar(0.1f, 1000.0f);
}

void Camera::Update()
{
	fovRad += FovChangeSpeed;
	fov = DefaultFov + (sinf(fovRad) * FovRange);
	SetupCamera_Perspective(fov * (static_cast<float>(DX_PI_F) / 180.0f));

	posRad += PosChangeSpeed;
	pos = VGet(0, sinf(posRad) * Posrange, -20);
	SetCameraPositionAndTarget_UpVecY(pos, VGet(0, 0, 0));

}
