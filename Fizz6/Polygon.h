#pragma once

#include "Primitive.h"

#include <vector>
#include "../lib/DirectXTK/Inc/SimpleMath.h"

class Polygon : public Primitive
{
public:
	Polygon(const std::vector<DirectX::SimpleMath::Vector3> &vertices);
	~Polygon();
protected:
	std::vector<DirectX::SimpleMath::Vector3> mVertices;
};
