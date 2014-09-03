#pragma once

#include "Polygon.h"

#include "../lib/DirectXTK/Inc/SimpleMath.h"

class Quadrilateral : public Polygon
{
public:
	Quadrilateral(const DirectX::SimpleMath::Vector3 v0, const DirectX::SimpleMath::Vector3 v1, const DirectX::SimpleMath::Vector3 v2, const DirectX::SimpleMath::Vector3 v3);
	~Quadrilateral();
};