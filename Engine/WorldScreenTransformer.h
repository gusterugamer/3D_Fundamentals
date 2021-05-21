#pragma once
#include "Vec3.h"
#include "Graphics.h"

class WorldScreenTransformer
{
public:
	WorldScreenTransformer()
		:
		xFactor(float(Graphics::ScreenWidth * 0.5f)),
		yFactor(float(Graphics::ScreenHeight * 0.5f))
	{}

	Vec3& Transform(Vec3& v) const
	{
		v.x = (v.x + 1.0f) * xFactor;
		v.y = (-v.y + 1.0f) * yFactor;
		return v;
	}

	Vec3 GetTransformed(const Vec3& v)const
	{
		return Transform(Vec3(v));
	}
private:
	float xFactor;
	float yFactor;
};