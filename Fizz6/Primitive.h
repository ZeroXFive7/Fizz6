#pragma once

#include "../lib/DirectXTK/Inc/SimpleMath.h"

class Primitive
{
public:
	Primitive();
	~Primitive();
	bool IsColliding(const Primitive &p);
protected:
	enum PrimitiveType 
	{
		DEFAULT,
		POLYGON,
		SPHERE,
		BOX,
		CYLINDER,
		CAPSULE,
		TORUS
	} mType;
	DirectX::SimpleMath::Vector3 mPosition;
};