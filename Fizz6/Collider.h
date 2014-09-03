#pragma once

#include "Polygon.h"
#include "../lib/DirectXTK/Inc/SimpleMath.h";

using namespace std;
using namespace DirectX::SimpleMath;

class Collider
{
public:
	typedef bool(Collider::*fn) (const Primitive &, const Primitive &);
	Collider();
	~Collider();
private:
	std::vector<std::vector<fn>> mCollisionResolutionTable;
	bool PolyPolyCollision(const Primitive &p0, const Primitive &p1);
};