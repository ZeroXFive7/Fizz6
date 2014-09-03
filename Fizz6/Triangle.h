#pragma once

#include "Polygon.h"

#include "../lib/DirectXTK/Inc/SimpleMath.h";

class Triangle : public Polygon
{
public:
	Triangle(const DirectX::SimpleMath::Vector3 v0, const DirectX::SimpleMath::Vector3 v1, const DirectX::SimpleMath::Vector3 v2);
	~Triangle();
};

